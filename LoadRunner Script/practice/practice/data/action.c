Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_sockets_option("TLS_SNI", "0");

	web_url("thinking-tester-contact-list.herokuapp.com", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_think_time(6);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=57oxOBvCz9pMOcr26yQsbg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x16nandinis7399@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\x8F\\xBA\\xD2\\xCE\\x99\\xC2\\xD4\\xB4\\x01@\\x00H\\x07:%z00000165-a8aa-aecb-0000-00005b8f87daR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x7F\n}\\x12{Chrome WIN 122.0.6261.57 (87957e464700ccf3468df47ce741e0dc089e0544-refs/branch-heads/6261@{#853}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	/* login */

	lr_think_time(30);

	web_custom_request("login", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"kl@gmail.com\",\"password\":\"123456789\"}", 
		LAST);

	web_url("contactList", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("contacts", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}