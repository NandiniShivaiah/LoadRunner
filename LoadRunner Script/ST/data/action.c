Action()
{

	/* search */

	lr_think_time(16);

	web_custom_request("business_12", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.B5YIQCE8VHYO\",\"ct\":\"navigationCard\",\"p\":3,\"f\":true,\"st\":1707732931760,\""
		"pv\":100,\"wps\":3,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732936685},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.JKA0LKU8OMVP\",\"ct\":\"navigationCard\",\"p\":4,\"f\":true,\"st\":1707732931761,\"pv\":100,\"wps\":4,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732937007},{\"t\":1707732937598,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads"
		"\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2.G5HCER1YWXC2\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":1822336440,\"st\":1707732931760,\"pv\":100,\"f\":true},{\"t\":1707732940623,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\""
		"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2.JH98VFEFZMTI\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"bannerAdCard\",\"ctl\":\"App\",\"wps\":2,\"pid\":\"PRNGX7PZ8WJYUCUH\",\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":1822336440,\"st\":1707732931766,\"pv\":100,\"f\":true},{\"en\":\""
		"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.CSZJ9U6U82HR\",\"ct\":\"navigationCard\",\"p\":8,\"f\":true,\"st\":1707732931762,\"pv\":100,\"wps\":8,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732943067},{\"t\":1707732943657,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\""
		"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2.7RG9A42948N0\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":1822336440,\"st\":1707732931760,\"pv\":100,\"f\":false},{\"t\":1707732946635,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2.G5HCER1YWXC2\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":1822336440,\"st\":1707732931765,\"pv\":100,\"f\":false},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.CSZJ9U6U82HR\",\"ct\":\"navigationCard"
		"\",\"p\":8,\"f\":true,\"st\":1707732931760,\"pv\":100,\"wps\":8,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732948979},{\"t\":1707732949630,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2.JH98VFEFZMTI\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"bannerAdCard\",\"ctl\":\"App\",\""
		"wps\":2,\"pid\":\"PRNGX7PZ8WJYUCUH\",\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":1822336440,\"st\":1707732931762,\"pv\":100,\"f\":false},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.CSZJ9U6U82HR\",\"ct\":\"navigationCard\",\"p\":8,\"f\":true,\"st\":1707732931760,\"pv\":100,\"wps\":8,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732950748},{\"en\":\"TIE\",\"tp\":\""
		"search_autosuggest\",\"iid\":\"cch5uhqus0000000\",\"te\":\"\",\"ua\":1,\"t\":1707732950938}]}", 
		LAST);

	web_custom_request("autosuggest", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("autosuggest_2", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707732950960,\"searchBrowseHistory\":[]}", 
		LAST);

	web_url("ea2077a7-575d-4fb9-a4dd-6df16e53c5d8.png", 
		"URL=https://rukminim1.flixcart.com/www/100/100/promos/20/07/2022/ea2077a7-575d-4fb9-a4dd-6df16e53c5d8.png?q=90", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t133.inf", 
		LAST);

	web_custom_request("business_13", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|"
		"3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"}],\"t\":1707732952383}]}", 
		LAST);

	web_custom_request("autosuggest_3", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"l\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707732953517,\"searchBrowseHistory\":[]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("free-full-sleeve-lehenga-lehenga-for-women-lehenga-choli-net-original-imaggcwfb3pjh2hf.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/100/100/xif0q/lehenga-choli/l/x/d/free-full-sleeve-lehenga-lehenga-for-women-lehenga-choli-net-original-imaggcwfb3pjh2hf.jpeg?q=90", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("-original-imagpxgqesgrthks.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/100/100/xif0q/computer/q/e/z/-original-imagpxgqesgrthks.jpeg?q=90", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t137.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("business_14", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|"
		"3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"}],\"t\":1707732953600}]}", 
		LAST);

	web_custom_request("business_15", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"t\":1707732952693,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2.7RG9A42948N0\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":1822336440,\"st\":1707732931760,\"pv\":100,\"f\":false},{\"en\":\"SOI\",\"iid\":\"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb.mobiles\",\"ct\":\"TRENDING\",\"p\":1,\"rid\":\""
		"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb\",\"sid\":\"mobiles\",\"f\":true,\"st\":1707732931759,\"pl\":1423,\"pv\":100,\"t\":1707732953403},{\"en\":\"SOI\",\"iid\":\"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb.shoes\",\"ct\":\"TRENDING\",\"p\":2,\"rid\":\"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb\",\"sid\":\"shoes\",\"f\":true,\"st\":1707732931759,\"pl\":1423,\"pv\":100,\"t\":1707732953403},{\"en\":\"SOI\",\"iid\":\"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb.t shirts\",\"ct\":\"TRENDING\",\"p\":3,\"rid\":\""
		"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb\",\"sid\":\"t shirts\",\"f\":true,\"st\":1707732931759,\"pl\":1423,\"pv\":100,\"t\":1707732953403},{\"en\":\"SOI\",\"iid\":\"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb.laptops\",\"ct\":\"TRENDING\",\"p\":4,\"rid\":\"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb\",\"sid\":\"laptops\",\"f\":true,\"st\":1707732931759,\"pl\":1423,\"pv\":100,\"t\":1707732953403},{\"en\":\"SOI\",\"iid\":\"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb.watches\",\"ct\":\"TRENDING\",\"p\":5,\"rid\":\""
		"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb\",\"sid\":\"watches\",\"f\":true,\"st\":1707732931759,\"pl\":1423,\"pv\":100,\"t\":1707732953403},{\"en\":\"SOI\",\"iid\":\"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb.tv\",\"ct\":\"TRENDING\",\"p\":6,\"rid\":\"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb\",\"sid\":\"tv\",\"f\":true,\"st\":1707732931759,\"pl\":1423,\"pv\":100,\"t\":1707732953403},{\"en\":\"SOI\",\"iid\":\"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb.sarees\",\"ct\":\"TRENDING\",\"p\":7,\"rid\":\""
		"3c80dad6-6508-42bb-9b9c-6c986d1cf8bb\",\"sid\":\"sarees\",\"f\":true,\"st\":1707732931759,\"pl\":1423,\"pv\":100,\"t\":1707732953403},{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"cch5uhqus0000000\",\"te\":\"lap\",\"ua\":5,\"t\":1707732954199}]}", 
		LAST);

	web_custom_request("autosuggest_4", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"lap\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707732954203,\"searchBrowseHistory\":[]}", 
		LAST);

	web_custom_request("business_16", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|"
		"3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"}],\"t\":1707732954367}]}", 
		LAST);

	web_custom_request("autosuggest_5", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"lapt\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707732954611,\"searchBrowseHistory\":[]}", 
		LAST);

	web_custom_request("business_17", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|"
		"3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"}],\"t\":1707732954696}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("business_18", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"cch5uhqus0000000\",\"te\":\"lapt\",\"ua\":5,\"t\":1707732954617}]}", 
		LAST);

	web_custom_request("autosuggest_6", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"laptop\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707732956079,\"searchBrowseHistory\":[]}", 
		LAST);

	web_url("-original-imagkycgnku2zeam.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/100/100/xif0q/bag/x/s/o/-original-imagkycgnku2zeam.jpeg?q=90", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t146.inf", 
		LAST);

	web_custom_request("business_19", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|"
		"3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"}],\"t\":1707732956190}]}", 
		LAST);

	web_custom_request("business_20", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"t\":1707732955654,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2.G5HCER1YWXC2\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":1822336440,\"st\":1707732931761,\"pv\":100,\"f\":false},{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"cch5uhqus0000000\",\"te\":\"laptop\",\"ua\":5,\"t\":1707732956061}"
		",{\"ev\":[{\"name\":\"FCP\",\"value\":766},{\"name\":\"TTFB\",\"value\":456},{\"name\":\"LCP\",\"value\":1855},{\"name\":\"FID\",\"value\":5}],\"nm\":\"batman-web-vitals\",\"en\":\"AE\",\"mt\":{\"platform\":\"web\",\"pageUri\":\"https://www.flipkart.com/\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"language\":\"en\",\"reactVersion\":\"16.9.0\",\"radio\":\"4g\"},\"t\":1707732956141}]}", 
		LAST);

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DHomePage%2526pidt%253D1%2526oid%253DSearch%252520Icon%2526oidt%253D3%2526ot%253DSUBMIT; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("business_21", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"SOI\",\"iid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0.laptops|Laptops\",\"ct\":\"RECENT\",\"p\":1,\"rid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0\",\"sid\":\""
		"laptops|Laptops\",\"f\":true,\"st\":1707732931760,\"pl\":111,\"pv\":100,\"t\":1707732957220},{\"en\":\"SOI\",\"iid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0.laptop bag|Laptop Bags\",\"ct\":\"RECENT\",\"p\":2,\"rid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0\",\"sid\":\"laptop bag|Laptop Bags\",\"f\":true,\"st\":1707732931760,\"pl\":111,\"pv\":100,\"t\":1707732957220},{\"en\":\"SOI\",\"iid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0.laptop hp\",\"ct\":\"RECENT\",\"p\":3,\"rid\":\""
		"308d8112-13b7-40b0-97fe-6cfe220797a0\",\"sid\":\"laptop hp\",\"f\":true,\"st\":1707732931760,\"pl\":111,\"pv\":100,\"t\":1707732957220},{\"en\":\"SOI\",\"iid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0.laptop stand\",\"ct\":\"RECENT\",\"p\":4,\"rid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0\",\"sid\":\"laptop stand\",\"f\":true,\"st\":1707732931760,\"pl\":111,\"pv\":100,\"t\":1707732957220},{\"en\":\"SOI\",\"iid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0.laptop table\",\"ct\":\"RECENT\",\"p\":5,\"rid\":"
		"\"308d8112-13b7-40b0-97fe-6cfe220797a0\",\"sid\":\"laptop table\",\"f\":true,\"st\":1707732931760,\"pl\":111,\"pv\":100,\"t\":1707732957220},{\"en\":\"SOI\",\"iid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0.laptop cooling pad\",\"ct\":\"RECENT\",\"p\":6,\"rid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0\",\"sid\":\"laptop cooling pad\",\"f\":true,\"st\":1707732931760,\"pl\":111,\"pv\":100,\"t\":1707732957220},{\"en\":\"SOI\",\"iid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0.laptop backpack\",\"ct\":\""
		"RECENT\",\"p\":7,\"rid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0\",\"sid\":\"laptop backpack\",\"f\":true,\"st\":1707732931760,\"pl\":111,\"pv\":100,\"t\":1707732957220},{\"en\":\"SOI\",\"iid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0.laptop sleeve\",\"ct\":\"RECENT\",\"p\":8,\"rid\":\"308d8112-13b7-40b0-97fe-6cfe220797a0\",\"sid\":\"laptop sleeve\",\"f\":true,\"st\":1707732931760,\"pl\":111,\"pv\":100,\"t\":1707732957221},{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"cch5uhqus0000000\",\""
		"te\":\"laptop\",\"ua\":2,\"t\":1707732957660}]}", 
		LAST);

	web_add_cookie("_px3=34f0a220ef5b988bfe7bf8298546f1d4038c9d88ce93dfec1b3de89d1ef86ddf:ZOs+CFYaGNJAmeqpQwEazmKSFYd6xvdMPDxTlluaN3xlGbwwOK32flVzahfAg9jBZX69dO/eAmVSrHZhadWTLQ==:1000:MuGzWKUZ09Dbe5P/Y2qRK7D9cgm9oAFwB3493fA6Jb4MbCpEg8IRHaOkNmzU21DyEodfGVu31K7NH3jj6tSgfY57dAv+1qHkGwsBaAVzP1zSC2SSspADJhwbeGrj8tjKt8AhUWVvon/VJVZlyR7eOQTQRuWnbGOcLl5q2Q7ja60oB7meFq+I5ofqaCRO47yLUy1218siM1rEICEIjAoGkc6pZjLLC1zD/5SfqfIrqyw=; DOMAIN=www.flipkart.com");

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DHomePage%2526pidt%253D1%2526oid%253DSearch%252520Icon%2526oidt%253D3%2526ot%253DSUBMIT; DOMAIN=www.flipkart.com");

	web_url("search", 
		"URL=https://www.flipkart.com/search?q=laptop&otracker=search&otracker1=search&marketplace=FLIPKART&as-show=on&as=off", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("sw.js_4", 
		"URL=https://www.flipkart.com/sw.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.flipkart.com/search?q=laptop&otracker=search&otracker1=search&marketplace=FLIPKART&as-show=on&as=off", 
		"Snapshot=t151.inf", 
		LAST);

	web_url("Browse.chunk.5612e1cf.js", 
		"URL=https://static-assets-web.flixcart.com/fk-p-linchpin-web/fk-cp-zion/js/Browse.chunk.5612e1cf.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t152.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("fdp_7", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"7kk9nuebeo0000001707732958686\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.169.38\"}}},\"ssid\":\"sgwy8t0zq80000001707732958686\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"RI\",\"fid\":\"doubd9xhcw0000001707732958816\",\"rid\":\"646d9cfd-3889-4155-b7e9-4ce63b98523e\",\"tp\":\"product\",\"t\""
		":1707732958816},{\"en\":\"RI\",\"fid\":\"etupn1dnmo0000001707732958816\",\"rid\":\"07509030-424a-40dc-a0b6-e68f26da3d1e\",\"tp\":\"product\",\"t\":1707732958816},{\"en\":\"RI\",\"fid\":\"xazfd8w09c0000001707732958816\",\"rid\":\"ca22906e-43a5-46b4-89e0-a04dda459ce5\",\"tp\":\"product\",\"t\":1707732958816},{\"en\":\"RI\",\"fid\":\"1qg6zq8nc00000001707732958816\",\"rid\":\"5d56d4d0-45d7-4078-be0a-6b1ab39644fc\",\"tp\":\"product\",\"t\":1707732958816},{\"en\":\"RI\",\"fid\":\""
		"5u0dc36row0000001707732958816\",\"rid\":\"53725cbe-daf1-4f82-921b-9a91424f763a\",\"tp\":\"product\",\"t\":1707732958816},{\"en\":\"RI\",\"fid\":\"xssx7avq4g0000001707732958817\",\"rid\":\"a0cf3186-63a5-4883-b803-b69e89973183\",\"tp\":\"product\",\"t\":1707732958817},{\"en\":\"RI\",\"fid\":\"megh2rtjnk0000001707732958817\",\"rid\":\"71f8665d-8518-4596-ac00-0b3635aea172\",\"tp\":\"product\",\"t\":1707732958817},{\"en\":\"RI\",\"fid\":\"pdiuw83iq80000001707732958817\",\"rid\":\""
		"8a250647-66a3-4df3-b03a-c7016705fc01\",\"tp\":\"product\",\"t\":1707732958817},{\"en\":\"RI\",\"fid\":\"n39y0fcwcg0000001707732958817\",\"rid\":\"78841c87-82b6-4321-bf33-5c4aacc74335\",\"tp\":\"product\",\"t\":1707732958817}]}]", 
		LAST);

	web_custom_request("s38106108515394", 
		"URL=https://flipkart.d1.sc.omtrdc.net/b/ss/flipkart-prd/1/JS-1.5.1/s38106108515394", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t154.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=AQB=1&ndh=1&pf=1&t=12%2F1%2F2024%2015%3A45%3A58%201%20-330&mid=91301039696235577497612905762942785164&aamlh=12&ce=UTF-8&ns=flipkart&pageName=Search%20%3AComputers%7CLaptops&g=https%3A%2F%2Fwww.flipkart.com%2Fsearch%3Fq%3Dlaptop%26otracker%3Dsearch%26otracker1%3Dsearch%26marketplace%3DFLIPKART%26as-show%3Don%26as%3Doff&r=https%3A%2F%2Fwww.flipkart.com%2F&cc=INR&pid=HomePage&pidt=1&oid=Search%20Icon&oidt=3&ot=SUBMIT&pageType=Search%20Page&events="
		"event1%2Cevent6%2Cevent40%2Cevent18%2Cevent251%3D450%2Cevent252%3D800%2Cevent253%3D800&products=%3BSearchPage%3B%3B%3B%3BeVar93%3DFLIPKART&aamb=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=Laptops&v1=Laptops&h1=Computers%7CLaptops&c3=Search%20Page&v3=Search%20Page&c4=Search%20%3AComputers%7CLaptops&v4=logout&c6=laptop&v6=laptop&c16=LaptopAndDesktop&v16=LaptopAndDesktop&c17=Laptop&v17=Laptop&c19=Laptop&v19=Laptop&c20=search&c25=FLIPKART%3AHomePage&c26=HomePage&v30=search&v31="
		"STG%7Cprestart%7C863c95ae%7Ch_STG%7Cprestart%7C71b00109%7Ch_STG%7Cprestart%7C871bcddb%7Ch_STG%7Cprestart%7C3b345f4c%7Ch_STG%7ClaunchedGroup%7C117e2342%7Ch_STG%7Cprestart%7Cc5fd32dd%7Ch_STG%7ClaunchedGroup%7Cb1ea1a0a%7Ch_STG%7Cprestart%7C6372ea05%7Ch_STG%7Cprestart%7C3c583260%7Ch_STG%7ClaunchedGroup%7C5d5187d7%7Ch_STG%7ClaunchedGroup%7Ce74f7dee%7Ch_STG%7Cprestart%7C3213d61d%7Ch_STG%7ClaunchedGroup%7C6382dd45%7Ch_STG%7Cprestart%7C11eeedbb%7Ch_STG%7Cprestart%7C338aa216%7Ch_STG%7Cprestart%7Ced623b54%7"
		"Ch_STG%7Cprestart%7C6c72b52f%7Ch_STG%7C4J9kCHYmNwna3D5Wo4ZdNu%7C0399c270%7Ch_STG%7ClaunchedGroup%7C18952fa7%7Ch_STG%7Cprestart%7Ca2d881f5%7Ch_STG%7Cprestart%7C04713ab4%7Ch_STG%7ClaunchedGroup%7C9e6ebec3%7Ch_STG%7Cprestart%7C58cc2425%7Ch_STG%7Cprestart%7Cae7b82d3%7Ch_STG%7ClaunchedGroup%7Cbb4001fe%7Ch_STG%7Cprestart%7C654159fc%7Ch_STG%7C6Y2t4xUzwtYD9HSp2GTbj3%7C3eeb5ffb%7Ch_STG%7ClaunchedGroup%7C7a4a9280%7Ch_STG%7Cprestart%7Ca7485908%7Ch_STG%7Cprestart%7Cf706d10e%7Ch_STG%7Cprestart%7C9283421f%7Ch_S"
		"TG%7Cprestart%7Cd1ddf19e%7Ch_STG%7Cprestart%7C213ebf4a%7Ch_STG%7Cprestart%7C7c5034c2%7Ch_STG%7Cprestart%7Ca7e4a690%7Ch_STG%7ClaunchedGroup%7Cdee42581%7Ch_STG%7ClaunchedGroup%7Cac30948b%7Ch_STG%7Cprestart%7C45575090%7Ch_STG%7Cprestart%7Cc540e369%7Ch_STG%7ClaunchedGroup%7Cae2f3ee5%7Ch_STG%7Cprestart%7C88ed2c60%7Ch_STG%7ClaunchedGroup%7Cbb3ad773%7Ch_STG%7Cprestart%7C467a3057%7Ch_STG%7Cprestart%7C4121aab8%7Ch_STG%7ClaunchedGroup%7Cdd6429ce%7Ch_STG%7Cprestart%7Cb1832ef6%7Ch_STG%7Cprestart%7Ccf596850%7C"
		"h_STG%7Cprestart%7Cc45c4fe5%7Ch_STG%7Cprestart%7Ca600963a%7Ch_STG%7ClaunchedGroup%7C0d38e105%7Ch_STG%7ClaunchedGroup%7Cb0994c5d%7Ch_STG%7ClaunchedGroup%7C0ada4a85%7Ch_STG%7Cprestart%7Cbfeba911%7Ch_STG%7Cprestart%7Cbc34ea90%7Ch_STG%7ClaunchedGroup%7Ce16cf1b4%7Ch_STG%7Cprestart%7C229bea19%7Ch_STG%7ClaunchedGroup%7Cc689af6c%7Ch_STG%7Cprestart%7C3860b13b%7Ch_STG%7ClaunchedGroup%7C674ec00b%7Ch_STG%7ClaunchedGroup%7Cbee87c24%7Ch_STG%7ClaunchedGroup%7C4aad7243%7Ch_STG%7CN2dTrX9DDtNDema66QN7D%7Cde151999%7"
		"Ch_STG%7ClaunchedGroup%7C895401ca%7Ch_STG%7ClaunchedGroup%7C79d29050%7Ch_STG%7Cprestart%7C412877dd%7Ch_STG%7Cprestart%7Cb222466c%7Ch_STG%7Cprestart%7C9a7dabab%7Ch_STG%7Cprestart%7C29198734%7Ch_STG%7ClaunchedGroup%7Cfd23baaa%7Ch_STG%7C2b7ocEGLclVVEQLZgftGf4%7Ca1484d15%7Ch_STG%7Cprestart%7C2caa5b36%7Ch_STG%7Cprestart%7C481fa711%7Ch_STG%7ClaunchedGroup%7C4cac3e5a%7Ch_STG%7Cprestart%7C37e9c366%7Ch_STG%7ClaunchedGroup%7Cc297f343%7Ch_STG%7Cprestart%7C6786fd6a%7Ch_STG%7C7JMtEMoowsvHIBzPfilz5p%7C2c4f78a4%"
		"7Ch_STG%7C18lL9y6A4opjNIcenboNdz%7C45c0569c%7Ch_STG%7ClaunchedGroup%7C58c2a344%7Ch_STG%7C2Lvk3bWsVBmh3jAvVvw84o%7C250b2054%7Ch_STG%7C1OWVNcfsf23o6LTCXIc8mh%7Cc4c9e10b%7Ch_STG%7Cprestart%7C297566e2%7Ch_STG%7ClaunchedGroup%7C92d528f9%7Ch_STG%7ClaunchedGroup%7C464e29b5%7Ch_STG%7Cprestart%7Cae98a565%7Ch_STG%7Cprestart%7C0c3a05e4%7Ch_STG%7C1kAjgQtMgfp3RboLmq5hZk%7C4690f96d%7Ch_STG%7Cprestart%7C3b8bb9b6%7Ch_STG%7ClaunchedGroup%7C8860a34a%7Ch_STG%7Cprestart%7C862b3afc%7Ch_STG%7ClaunchedGroup%7Cb5c44baa%7"
		"Ch_STG%7Cprestart%7C0aeb5fb3%7Ch_STG%7Cprestart%7C683bbcb3%7Ch_STG%7Cprestart%7Cf9ff7d1a%7Ch_STG%7Cprestart%7C156a6d4a%7Ch_STG%7C1KlJOQL522Q4D2vUNGnlPs%7Cd729ca1f%7Ch_STG%7Cprestart%7Cbb9ca24b%7Ch_STG%7Cprestart%7C6fdad52f%7Ch_STG%7C44A1YwtshXv6bChxteFLzl%7Ce56700f2%7Ch_STG%7ClaunchedGroup%7C0c6a5257%7Ch_STG%7ClaunchedGroup%7C4d58fb69%7Ch_STG%7CkQhAw1j32mwrDwg8KHdAh%7Cf2515760%7Ch_STG%7Cprestart%7C3ddcc40d%7Ch_STG%7Cprestart%7C6497c32d%7Ch_STG%7C3YqxqoxtNrxXezSgUENCMs%7C92089aea%7Ch_STG%7Cprestart"
		"%7C39ce2c45%7Ch_STG%7ClaunchedGroup%7C18a922b6%7Ch_STG%7C2SV38cNDeXUFRdefa0rFzF%7Ccedce362%7Ch_STG%7ClaunchedGroup%7C1b11da08%7Ch_STG%7Cprestart%7C6e5b2754%7Ch_STG%7Cprestart%7C121d30bd%7Ch_STG%7ClaunchedGroup%7Ca498a305%7Ch_STG%7C3RbiiyU2Fi63PpHhOkN8xx%7C8d656ad9%7Ch_STG%7Cprestart%7C99f8e233%7Ch_STG%7C11sGT3nxuIB9XnkdJI4H3A%7C4f13ecfc%7Ch_STG%7Cprestart%7C5a1dd1c8%7Ch_STG%7ClaunchedGroup%7Cc1866e25%7Ch_STG%7C2Los3ByBMSdeLI0vpDxYT7%7C74d84e65%7Ch_STG%7Cprestart%7C32b1571f%7Ch_STG%7Cprestart%7Cc4d"
		"5db6b%7Ch_STG%7Cprestart%7Cc18490e3%7Ch_STG%7ClaunchedGroup%7C13f25c37%7Ch_STG%7Cprestart%7Cf4dfbe53%7Ch_STG%7Cprestart%7C0ac7221e%7Ch_STG%7CwKffLsD59GC7lQRgwS4F8%7C3811592f%7Ch_STG%7Cprestart%7Ce852d94d%7Ch_STG%7Cprestart%7C587f5d7b%7Ch_STG%7ClaunchedGroup%7Cceaf65ea%7Ch_STG%7C2z5Wk7eSda1GQe2GxYSVX%7C9c54c00b%7Ch_STG%7C0mqB4rPwpLzKmosbhngp9%7C52b6234c%7Ch_STG%7Cprestart%7Cfe499490%7Ch_STG%7Cprestart%7Cbd61f103%7Ch_STG%7Cprestart%7C060a8851%7Ch_STG%7Cprestart%7C49408a30%7Ch_STG%7Cprestart%7C894692"
		"26%7Ch_STG%7Cprestart%7Cbc89c2d4%7Ch_STG%7ClaunchedGroup%7C48363180%7Ch_STG%7Cprestart%7C729decb4%7Ch_STG%7Cprestart%7C9eb23fd5%7Ch_STG%7Cprestart%7Cf1f146ec%7Ch_STG%7Cprestart%7Ce670e17c%7Ch_STG%7Cprestart%7C9da99e53%7Ch_STG%7ClaunchedGroup%7Ca4ea59ac%7Ch_STG%7Cprestart%7C007009b4%7Ch_STG%7C4ogCvE9DShfJYkbDCHY4LY%7C44d045f4%7Ch_STG%7ClaunchedGroup%7C75b29463%7Ch_STG%7C1kxFEpmrgMWdatqUyvhim0%7C0742f916%7Ch_STG%7Cprestart%7C6405b783%7Ch_STG%7Cprestart%7C62e2a7ec%7Ch_STG%7CBlKLGVk2L2gG3YSypC0UK%7C63"
		"0e9340%7Ch_STG%7ClaunchedGroup%7Cc4e6b322%7Ch_STG%7Cprestart%7C570c310a%7Ch_STG%7C61XGrTGbhaXuXH1eDoPOCx%7Ce6c5acb3%7Ch_STG%7Cprestart%7Ca2baf03d%7Ch_STG%7Cprestart%7Ca9ff8b87%7Ch_STG%7Cprestart%7Cf83ffb95%7Ch_STG%7Cprestart%7C91904a36%7Ch_STG%7Cprestart%7C9608aa4b%7Ch_STG%7Cprestart%7Cf6bf01c6%7Ch_STG%7ClaunchedGroup%7Cc6f1cd30%7Ch_STG%7Cprestart%7Cfa407912%7Ch_STG%7Cprestart%7C85f521ff%7Ch_STG%7Cprestart%7C95d4b6bf%7Ch_STG%7C4ypCOyry8PukfNjuyyEcHJ%7C2f570eb1%7Ch_STG%7C6oxmbcqxF5ieGRsSW89IFg%7C31"
		"60bc2d%7Ch_STG%7Cprestart%7Cfd581500%7Ch_STG%7Cprestart%7Cc7ec2d51%7Ch_STG%7C4OuIXCdzKP0DJVKbXXk5GT%7C1b050d93%7Ch_STG%7C5TKQH0iKsmru3o4rZPwajA%7Cb2ecb550%7Ch_STG%7C2yjlDgiikQutoxaANNdocJ%7Cc349ab4a%7Ch_STG%7Cprestart%7Cc7cfbdf9%7Ch_STG%7Cprestart%7Ca5637ea4%7Ch_STG%7Cprestart%7C6b2ab18a%7Ch_STG%7C1BUUPY71VefGccQqtqNhvv%7C1b5efbc8%7Ch_STG%7Cprestart%7Caba3e064%7Ch_STG%7Cprestart%7Cfa6fd053%7Ch_STG%7C6CtPAfT9DuM2MtJE7MjEGt%7Cb09370c0%7Ch_STG%7ClaunchedGroup%7C96232e06%7Ch_STG%7C4LfBVokUO72yFXCFDnvY"
		"A5%7C58f359a5%7Ch_STG%7C6Iu0MN1l11bd5tN2jp266k%7C2d3b2a21%7Ch_STG%7C3JEQkmEjKUTdbt3LiKBVXD%7C1c0c0438%7Ch_STG%7Cprestart%7Cdfd06e14%7Ch_STG%7Cprestart%7Cb7eb1a1d%7Ch_STG%7C5weZZ41xkgicBluNSXnoSK%7Cb1fa1ea5%7Ch_STG%7ClaunchedGroup%7C86017918%7Ch_STG%7C4lmEar4kLI1g5idOa5qrMf%7C1c66a70f%7Ch_STG%7C4YYGb5oF0bqDWJKhazRlfY%7C7b3b6e6c%7Ch_STG%7C6JpuKc7n3CUWCZZyGvaGVM%7C6fe74743%7Ch_STG%7CntLKGswkVQVQ9bsu4S2bQ%7Cab708301%7Ch_STG%7C6c1LqfiZl07bsj4UrhgyOs%7C808d83a4%7Ch_STG%7C6d51xmyE1gNiwIcJQbWp2e%7C2c756c6"
		"d%7Ch_STG%7Cprestart%7Cb351a882%7Ch_STG%7C2HTpH76CvAR4hrhBhUTr0t%7C705292d0%7Ch_STG%7C3fRX0dv4OnGTBKxdn9dkN2%7C7dd0497a%7Ch_STG%7Cprestart%7C6b72a02e%7Ch_STG%7Cid65wXrCUOYpcOyV6JNo5%7Ce7ddc439%7Ch&c35=https%3A%2F%2Fwww.flipkart.com%2Fsearch%3Fq%3Dlaptop%26otracker%3Dsearch%26otracker1%3Dsearch%26marketplace%3DFLIPKART%26as-show%3Don%26as%3Doff&c39=450-800-800&c43=Logout%3AFlipkartFirst_Inactive&c48=9400_NETINFO_4g_null&v50=Search%20%3AComputers%7CLaptops&c54=8&v58=search&v65=s_6bo%2Fb5g_LIST_LARGE"
		"&c66=clsisdo860r7b1ibfvbqfmsxm-BR1707733409766&v85=15f894bb_STG%7ClaunchedGroup%7Cbee87c24%7Ch&v99=NON_LOGGED_IN&s=1280x720&c=24&j=1.6&v=N&k=Y&bw=1280&bh=593&AQE=1", 
		LAST);

	web_custom_request("fdp_8", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"7kk9nuebeo0000001707732958686\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.169.38\"}}},\"ssid\":\"sgwy8t0zq80000001707732958686\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"RI\",\"fid\":\"hn6kd6rebk0000001707732958814\",\"rid\":\"5f8781e8-e846-45dc-905d-cf8da8b739c3\",\"tp\":\"product\",\"t\""
		":1707732958814}]}]", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("eventBatch", 
		"URL=https://pla-tk.flipkart.net/mapi/v1/tracker/eventBatch", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("eventBatch_2", 
		"URL=https://pla-tk.flipkart.net/mapi/v1/tracker/eventBatch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"events\":[{\"adunits\":[{\"impressionId\":\"en_TXJWCwlUlgSe2wbt_qifYOrqUScLyG83KQuW-Lt0RwIC-Tj5gCfSjPzBPlWF0XkXhK5CvTcDVymHd9LmRAhsuw==\",\"bannerId\":\"-1\"},{\"impressionId\":\"en_TXJWCwlUlgSe2wbt_qifYOrqUScLyG83KQuW-Lt0RwIj1VlF14iLgpoF9N-3YzmSeuZe86kSXarRN0GJM7PPyA==\",\"bannerId\":\"-1\"},{\"impressionId\":\"en_TXJWCwlUlgSe2wbt_qifYOrqUScLyG83KQuW-Lt0RwLEU9XOz2sqcZFj_Jrvu2I4XfixwJ7dZWLnHMFfpyLoPQ==\",\"bannerId\":\"290019735\"},{\"impressionId\":\""
		"en_TXJWCwlUlgSe2wbt_qifYOrqUScLyG83KQuW-Lt0RwJpa1zUi2iIDSLkK6TPU9YkVBOrN5stCD8KYf-KakuQSw==\",\"bannerId\":\"290188583\"},{\"impressionId\":\"en_TXJWCwlUlgSe2wbt_qifYOrqUScLyG83KQuW-Lt0RwKScwkIZxV4KGpXXbaE0B6QH85rcWfeW8WK6ONN8MKrjonfEY2D5bWfIUmTlXs_oiU=\",\"bannerId\":\"-1\"},{\"impressionId\":\"en_TXJWCwlUlgSe2wbt_qifYOrqUScLyG83KQuW-Lt0RwK2Gad23MDZbICuUNCcc9pZqFkI7z_jqLmkZ8s9d-lhLGVkv0XZFiOX7bbXdlao_f8=\",\"bannerId\":\"-1\"},{\"impressionId\":\""
		"en_TXJWCwlUlgSe2wbt_qifYOrqUScLyG83KQuW-Lt0RwJDJ9vPHV7JpLwgifsRcMB_vIXEopCc2TzVXWXEgNyJsPcUmN_6PwCReg_VTM4VLxo=\",\"bannerId\":\"-1\"},{\"impressionId\":\"en_TXJWCwlUlgSe2wbt_qifYOrqUScLyG83KQuW-Lt0RwI3z9Bip_Ph9yedLUSgjQOzJnHUsx3YPHK2gyZKXNM1veI7uWi7bi3WLqk6JF-UYDE=\",\"bannerId\":\"-1\"},{\"impressionId\":\"en_TXJWCwlUlgSe2wbt_qifYOrqUScLyG83KQuW-Lt0RwJF2_oXXrKFMkGPOIpuQg0XgLKLepnGvSs3sMeMblq9zoE8waCTrWcncKeK_ydPfoM=\",\"bannerId\":\"-1\"}],\"event\":\"adBeacon\",\"dontTrack\":false,\"eventTime\""
		":1707732958828,\"responseId\":\"9857e145-1e63-441f-94f9-20ee316cf640\",\"id\":\"9857e145-1e63-441f-94f9-20ee316cf640\"}],\"eventDispatchTime\":1707732958828,\"dontTrack\":false}", 
		LAST);

	web_add_cookie("gpv_pn=Search%20%3AComputers%7CLaptops; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("gpv_pn_t=Search%20Page; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("_px3=a45a761ae189a3fe6764a96cc5a4f17ec3ed0b8e28b08425d908a490523c2954:yS56VEB4AFsJXDQd+kV2NJnv1zIaQDUXaIhk0GJGi1yN3/QH0gEBg8nlIpktkZN7r5bDs6ive36xZ1k86tDIXg==:1000:uzFPAghbQ0LVZNROQ4nOE0QMvKGP6DlE2ZIRZKpk6Pmy1bAY8vaJRQ97/3GwjJzjaptJ5zUGMNwTQutNmCxhf2fo0jtjSLW3n4us3YU5/V0kDnEkJ2ao2EQ+2DUY8IM+vORt11Lcdwk50JFpwjaHIEXpCst3clpr5gvyRwTEHU4+11vpUaYG95R5c1sBcnt1zZ4gEeD/G9WkMhpx+5gGAhFjcsJS1wH1O9m34/iJ+BM=; DOMAIN=2.rome.api.flipkart.com");

	lr_think_time(11);

	web_custom_request("fdp_9", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"7kk9nuebeo0000001707732958686\",\"fm\":\"Search\",\"mpid\":\"FLIPKART\",\"pn\":\"sp\",\"pt\":\"sp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.169.38\"}}},\"ssid\":\"sgwy8t0zq80000001707732958686\",\"ppt\":\"hp\",\"ppn\":\"homepage\",\"ss\":\"BrowsePageContext\"},\"e\":[{\"en\":\"SC\",\"st\":\"textual\",\"s\":\"Text\",\"ssid\":\"sgwy8t0zq80000001707732958686\",\"c\":\"Laptops\",\"sq"
		"\":\"laptop\",\"npf\":\"2127\",\"sqt\":\"categoryOnly\",\"vc\":\"Laptop\",\"vt\":\"en|en\",\"nsk\":1,\"ss\":true,\"_ev\":\"4.4\",\"t\":1707732958827},{\"en\":\"PV\",\"ib\":false,\"id\":false,\"cat\":\"Laptops\",\"t\":1707732958933},{\"en\":\"AE\",\"ev\":[{\"name\":\"FCP\",\"value\":744.5}],\"mt\":{\"appVersion\":\"6.10.0\",\"platform\":\"desktop\",\"source\":\"network\",\"pageName\":\"Search\",\"pageUri\":\"/search\"},\"nm\":\"desktop-web-vitals\",\"t\":1707732959503}]}]", 
		LAST);

	lr_think_time(15);

	web_custom_request("fdp_10", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"7kk9nuebeo0000001707732958686\",\"fm\":\"Search\",\"mpid\":\"FLIPKART\",\"pn\":\"sp\",\"pt\":\"sp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.169.38\"}}},\"ssid\":\"sgwy8t0zq80000001707732958686\",\"ppt\":\"hp\",\"ppn\":\"homepage\",\"ss\":\"BrowsePageContext\"},\"e\":[{\"en\":\"AE\",\"ev\":[{\"name\":\"TTFB\",\"value\":446.29999999701977}],\"mt\":{\"appVersion\":\"6.10.0\",\""
		"platform\":\"desktop\",\"source\":\"network\",\"pageName\":\"Search\",\"pageUri\":\"/search\"},\"nm\":\"desktop-web-vitals\",\"t\":1707732994805}]}]", 
		LAST);

	return 0;
}
