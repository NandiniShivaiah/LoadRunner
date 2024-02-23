Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("katalon-demo-cura.herokuapp.com", 
		"URL=https://katalon-demo-cura.herokuapp.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=//img/header.jpg", "Referer=https://katalon-demo-cura.herokuapp.com//css/theme.css", ENDITEM, 
		LAST);

	lr_think_time(14);

	
		 
		
	web_set_sockets_option("TLS_SNI", "0");

	/* Make Appointment */

	lr_think_time(15);

	web_url("profile.php", 
		"URL=https://katalon-demo-cura.herokuapp.com/profile.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://katalon-demo-cura.herokuapp.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(23);

	

	/* Click on Login */

	web_submit_data("authenticate.php", 
		"Action=https://katalon-demo-cura.herokuapp.com/authenticate.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://katalon-demo-cura.herokuapp.com/profile.php", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={userName}", ENDITEM, 
		"Name=password", "Value={passWord}", ENDITEM, 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASJwm4ouDoPDlzyRIFDWCIu-ISBQ2-6S43EgUNMT2UMCELHZFHpklVVA==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	/* Logout */



	return 0;
}