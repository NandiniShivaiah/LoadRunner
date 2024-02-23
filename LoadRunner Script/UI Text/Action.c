Action()
{

	/* Dynamicid */

	web_reg_find("Text=Dynamic ID", 
		LAST);

	lr_think_time(30);

	web_url("dynamicid", 
		"URL=http://uitestingplayground.com/dynamicid", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://uitestingplayground.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	return 0;
}
