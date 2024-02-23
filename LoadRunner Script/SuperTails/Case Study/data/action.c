Action()
{

	/* login */

	web_submit_data("authenticate.php", 
		"Action=https://katalon-demo-cura.herokuapp.com/authenticate.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://katalon-demo-cura.herokuapp.com/profile.php", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=John Doe", ENDITEM, 
		"Name=password", "Value=ThisIsNotAPassword", ENDITEM, 
		LAST);

	return 0;
}
