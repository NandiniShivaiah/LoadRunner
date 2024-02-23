vuser_end()
{

	/* logout */

	lr_think_time(27);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNjESJwm4ouDoPDlzyRIFDWCIu-ISBQ2-6S43EgUNMT2UMCELHZFHpklVVA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNjESJwm4ouDoPDlzyRIFDWCIu-ISBQ2-6S43EgUNMT2UMCELHZFHpklVVA==?alt=proto", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("authenticate.php_2", 
		"URL=https://katalon-demo-cura.herokuapp.com/authenticate.php?logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://katalon-demo-cura.herokuapp.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}