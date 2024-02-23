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

	
	

	/* login */

	lr_think_time(30);
	
	
	
	//web_reg_save_param("tokenParam", "LB=\"token\":\"", "RB=\"", "Search=Body", LAST);
web_reg_save_param_ex(
		"ParamName=tokenParam",
		"LB=\"token\":\"",
		"RB=\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=BODY",
		"IgnoreRedirections=Yes",
		LAST);

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
	
	web_add_header("Authorization", "Bearer {tokenParam}");

	web_custom_request("contacts", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param_ex(
		"ParamName=tokenParam",
		"LB=\"token\\\":\\/\"\"",
		"RB=\"\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	return 0;
}