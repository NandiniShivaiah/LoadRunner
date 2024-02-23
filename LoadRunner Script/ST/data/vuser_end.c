vuser_end()
{

	/* back */

	lr_think_time(28);

	web_custom_request("fdp_11", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"7kk9nuebeo0000001707732958686\",\"fm\":\"Search\",\"mpid\":\"FLIPKART\",\"pn\":\"sp\",\"pt\":\"sp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.169.38\"}}},\"ssid\":\"sgwy8t0zq80000001707732958686\",\"ppt\":\"hp\",\"ppn\":\"homepage\",\"ss\":\"BrowsePageContext\"},\"e\":[{\"en\":\"DCI\",\"iid\":\"en_TXJWCwlUlgSe2wbt_qifYOrqUScLyG83KQuW-Lt0RwIC-Tj5gCfSjPzBPlWF0XkXhK5CvTcDVymHd9LmRAhsuw"
		"==\",\"p\":1,\"ct\":\"ProductCard\",\"t\":1707733023698,\"st\":1707732960005,\"f\":true,\"pv\":100,\"_ev\":\"3.1\"}]}]", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_cookie("qH=312f91285e048e09; DOMAIN=www.flipkart.com");

	web_add_cookie("gpv_pn=Search%20%3AComputers%7CLaptops; DOMAIN=www.flipkart.com");

	web_add_cookie("gpv_pn_t=Search%20Page; DOMAIN=www.flipkart.com");

	web_add_cookie("_px3=a45a761ae189a3fe6764a96cc5a4f17ec3ed0b8e28b08425d908a490523c2954:yS56VEB4AFsJXDQd+kV2NJnv1zIaQDUXaIhk0GJGi1yN3/QH0gEBg8nlIpktkZN7r5bDs6ive36xZ1k86tDIXg==:1000:uzFPAghbQ0LVZNROQ4nOE0QMvKGP6DlE2ZIRZKpk6Pmy1bAY8vaJRQ97/3GwjJzjaptJ5zUGMNwTQutNmCxhf2fo0jtjSLW3n4us3YU5/V0kDnEkJ2ao2EQ+2DUY8IM+vORt11Lcdwk50JFpwjaHIEXpCst3clpr5gvyRwTEHU4+11vpUaYG95R5c1sBcnt1zZ4gEeD/G9WkMhpx+5gGAhFjcsJS1wH1O9m34/iJ+BM=; DOMAIN=www.flipkart.com");

	web_url("www.flipkart.com_3", 
		"URL=https://www.flipkart.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("3-30155-mcfarlane-2-5-original-imagbeyyzehpyk2m.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/kzegk280/action-figure/9/v/t/3-30155-mcfarlane-2-5-original-imagbeyyzehpyk2m.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t162.inf", 
		LAST);

	web_url("skyper-26t-sskp26bk0001-16-hero-original-imaf8ru5xysfgtmx.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/jlph9jk0/cycle/h/f/k/skyper-26t-sskp26bk0001-16-hero-original-imaf8ru5xysfgtmx.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t163.inf", 
		LAST);

	web_url("push-up-bar-0-8-long-ankaro-original-imafu9dmvdk3rzvy.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/kdbzqfk0/bar/8/h/q/push-up-bar-0-8-long-ankaro-original-imafu9dmvdk3rzvy.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t164.inf", 
		LAST);

	web_url("-original-imagzrf84gyqeste.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/xif0q/monitor/s/g/u/-original-imagzrf84gyqeste.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t165.inf", 
		LAST);

	web_url("atomic-habits-original-imagx5ar9zzeue3n.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/xif0q/book/3/m/c/atomic-habits-original-imagx5ar9zzeue3n.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t166.inf", 
		LAST);

	web_url("37-0-45-37-keys-beston-original-imaghgcpx7wbs6er.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/xif0q/musical-keyboard/m/4/v/37-0-45-37-keys-beston-original-imaghgcpx7wbs6er.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t167.inf", 
		LAST);

	web_url("anadi-01-yoga-mat-4-30-anadi-enterprise-15-original-imagfsxudxcm7r48.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/l51d30w0/shopsy-sport-mat/p/w/s/anadi-01-yoga-mat-4-30-anadi-enterprise-15-original-imagfsxudxcm7r48.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t168.inf", 
		LAST);

	web_url("premium-pouch-regular-tea-powder-tata-original-imafzuf2mnubzphd.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/kkimfm80/tea/z/n/1/premium-pouch-regular-tea-powder-tata-original-imafzuf2mnubzphd.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t169.inf", 
		LAST);

	web_url("metamorphosis-original-imag4jf6mhzxzjat.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/kqjtd3k0/book/h/t/x/metamorphosis-original-imag4jf6mhzxzjat.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t170.inf", 
		LAST);

	web_url("xylophone-guitar-wooden-kids-first-musical-sound-instrument-toy-original-imafyfszcjkjcwwz.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/kiqbma80-0/musical-toy/s/k/b/xylophone-guitar-wooden-kids-first-musical-sound-instrument-toy-original-imafyfszcjkjcwwz.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t171.inf", 
		LAST);

	web_url("119766-flair-original-imag9nzubznagufg.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/kx50gi80/pen/h/z/k/119766-flair-original-imag9nzubznagufg.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t172.inf", 
		LAST);

	web_url("1-oats-veggies-masala-oats-pouch-yogabar-original-imag5suhzvwy3xh4.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/ks6ef0w0/cereal-flake/q/w/h/1-oats-veggies-masala-oats-pouch-yogabar-original-imag5suhzvwy3xh4.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t173.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("business_22", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"95xr4jrmyo000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.134.149\"}}},\"ssid\":\"1707733590741\",\"ppt\":\"sp\",\"ppn\":\"sp\"},\"e\":[{\"t\":1707733027239,\"en\":\"PV\",\"_ev\":\"3.5\",\"ib\":false}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("login_img-dec4bf.png", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/images/login_img-dec4bf.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/DesktopComponents.d15f21.css", 
		"Snapshot=t175.inf", 
		LAST);

	web_add_cookie("_px3=8fc8883310c2c00d125b70bc7d1c0bf8ce278450e25d74e4862856b03deac7ec:WEnG9YZO0aHUONZSIsRVN6MBVOKJNjwtfShQbe6hSBHtILbKtAUhfiht9NhB5x1NU7zwkMsdyGa6I4PeErg06w==:1000:45qSC1p7dbCRc/XQ/uLfWDhY29j8DXlhDgdufnjYSbqMjQx6ZsC6He6o6SBskosZSBD+ZGrst3gEb/L3oquLGW0uiw1Zbtd+jY++GbqDcGIUpBRwlsPjzcgRPLYj8DVpOYI3u14ak/Rz1N+pSNO6HhC5DGxKYY8ZzRZ9tXvzdUYExmeucqIdUwFIw3Pc//rQ5N1sJKLJ0LZzY7ZP9QgySFc5lYTBvUrduhWKS4OdQjs=; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("business_23", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"95xr4jrmyo000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.134.149\"}}},\"ssid\":\"1707733590741\",\"ppt\":\"sp\",\"ppn\":\"sp\"},\"e\":[{\"en\":\"BDE\",\"_ev\":1.3,\"ty\":\"INIT_SUCCEED\",\"v\":\"en\",\"ttc\":\"162\",\"t\":1707733027250},{\"en\":\"DCI\",\"iid\":\""
		"M_2f6365f4-d0e7-406d-a88a-05886494d944_1_372UD5BXDFYS_MC.CBUR1Q46W5F1\",\"ct\":\"navigationCard\",\"p\":1,\"f\":true,\"st\":1707733023324,\"pv\":100,\"wps\":1,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707733028405},{\"en\":\"DCI\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_1_372UD5BXDFYS_MC.ZRQ4DKH28K8J\",\"ct\":\"navigationCard\",\"p\":2,\"f\":true,\"st\":1707733023324,\"pv\":100,\"wps\":2,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\""
		":1707733028405},{\"en\":\"DCI\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_1_372UD5BXDFYS_MC.B5YIQCE8VHYO\",\"ct\":\"navigationCard\",\"p\":3,\"f\":true,\"st\":1707733023324,\"pv\":100,\"wps\":3,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707733028405},{\"en\":\"DCI\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_1_372UD5BXDFYS_MC.JKA0LKU8OMVP\",\"ct\":\"navigationCard\",\"p\":4,\"f\":true,\"st\":1707733023324,\"pv\":100,\"wps\":4,\"wk\":\""
		"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707733028405},{\"en\":\"DCI\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_1_372UD5BXDFYS_MC.A7YT3X39TTON\",\"ct\":\"navigationCard\",\"p\":5,\"f\":true,\"st\":1707733023324,\"pv\":100,\"wps\":5,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707733028405},{\"en\":\"DCI\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_1_372UD5BXDFYS_MC.LO4IWVHA61BX\",\"ct\":\"navigationCard\",\"p\":6,\"f\":true,\"st\":1707733023324,"
		"\"pv\":100,\"wps\":6,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707733028405},{\"en\":\"DCI\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_1_372UD5BXDFYS_MC.V4ZPKTOAO321\",\"ct\":\"navigationCard\",\"p\":7,\"f\":true,\"st\":1707733023325,\"pv\":100,\"wps\":7,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707733028405},{\"en\":\"DCI\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_1_372UD5BXDFYS_MC.CSZJ9U6U82HR\",\"ct\":\"navigationCard\",\"p\":8,\""
		"f\":true,\"st\":1707733023325,\"pv\":100,\"wps\":8,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707733028405},{\"en\":\"DCI\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_1_372UD5BXDFYS_MC.EGGUS4T1KINV\",\"ct\":\"navigationCard\",\"p\":9,\"f\":true,\"st\":1707733023325,\"pv\":100,\"wps\":9,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707733028405},{\"t\":1707733028405,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":1,\"wvt\":\"NAV_EXPANDABLE\",\"wtp\":\""
		"rich_navigation\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_1_372UD5BXDFYS\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"st\":1707733023325,\"pv\":100,\"f\":true,\"ct\":\"contentCollection\"},{\"t\":1707733028406,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\""
		"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_2\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"wk\":\"2.bannerAdCard.BANNERADS\",\"st\":1707733023325,\"pv\":100,\"f\":true,\"ct\":\"bannerAdCard\"},{\"t\":1707733028406,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":3,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_3\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\""
		"wk\":\"3.dealCard.OMU\",\"st\":1707733023325,\"pv\":39.5348846912384,\"f\":true,\"ct\":\"dealCard\"},{\"t\":1707733028406,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":4,\"wvt\":\"ATLAS_RHS_ANNOUNCEMENT\",\"wtp\":\"rhs_announcement\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_4.N9HXXTJYE5YL\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"wk\":\"4.rhsAnnouncement.RHS_ANNOUNCEMENT\",\"st\":1707733023325,\"pv\":37.96059191226959,\"f\""
		":true,\"ct\":\"rhsAnnouncement\"},{\"t\":1707733028406,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_2.7RG9A42948N0\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_2\",\"pbiid\":\""
		"2f6365f4-d0e7-406d-a88a-05886494d944\",\"uvi\":1667371929,\"st\":1707733023326,\"pv\":100,\"f\":true},{\"t\":1707733028406,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_3.TXZMLQJZFW8U\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"ct\":\"dealCard\",\"ctl\":\"Monitors\",\"wps\":3,\"pid\":\"MONGHQS4GZ3AWGBV\",\"piid\":\""
		"M_2f6365f4-d0e7-406d-a88a-05886494d944_3\",\"pbiid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"uvi\":1570490411,\"st\":1707733023327,\"pv\":22.22222238779068,\"f\":true},{\"t\":1707733028406,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_3.Q5LU1U8PHMK6\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"ct\":\"dealCard\",\"ctl"
		"\":\"Top Mirrorless Cameras\",\"wps\":3,\"pid\":\"CAMFMN29FUTHMBYK\",\"piid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_3\",\"pbiid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"uvi\":1570490411,\"st\":1707733023327,\"pv\":22.22222238779068,\"f\":true},{\"t\":1707733028406,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\""
		"M_2f6365f4-d0e7-406d-a88a-05886494d944_3.D54DFY00C5JD\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"ct\":\"dealCard\",\"ctl\":\"Printers\",\"wps\":3,\"pid\":\"PRNDXHZE5R9HUJJY\",\"piid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_3\",\"pbiid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"uvi\":1570490411,\"st\":1707733023327,\"pv\":22.22222238779068,\"f\":true},{\"t\":1707733028406,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":4,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of "
		"Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_3.AYZ2E25L30EX\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"ct\":\"dealCard\",\"ctl\":\"Best of Shavers\",\"wps\":3,\"pid\":\"SHVGJVRKV6DPQFGK\",\"piid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_3\",\"pbiid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"uvi\":1570490411,\"st\":1707733023327,\"pv\":22.22222238779068,\"f\":true},{\"t\":1707733028406,\"en\":\"DCI\",\"_ev\":\"3.1\",\""
		"p\":5,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_3.ZIEW022R2RTS\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"ct\":\"dealCard\",\"ctl\":\"Monitors\",\"wps\":3,\"pid\":\"MONFV5HRNF4QFVG4\",\"piid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_3\",\"pbiid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"uvi\":1570490411,\"st\":1707733023327,\"pv\":17.92534738779068,"
		"\"f\":true},{\"t\":1707733028406,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":0,\"wvt\":\"ATLAS_RHS_ANNOUNCEMENT\",\"wtp\":\"rhs_announcement\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_4.N9HXXTJYE5YL\",\"biid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"ct\":\"rhsAnnouncement\",\"ctl\":null,\"wps\":4,\"pid\":null,\"piid\":\"M_2f6365f4-d0e7-406d-a88a-05886494d944_4.N9HXXTJYE5YL\",\"pbiid\":\"2f6365f4-d0e7-406d-a88a-05886494d944\",\"uvi\""
		":446421584,\"st\":1707733023327,\"pv\":37.96059191226959,\"f\":true}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("s33097210831063", 
		"URL=https://flipkart.d1.sc.omtrdc.net/b/ss/flipkart-prd/1/JS-1.5.1/s33097210831063?AQB=1&ndh=1&pf=1&t=12%2F1%2F2024%2015%3A47%3A7%201%20-330&mid=91301039696235577497612905762942785164&aamlh=12&ce=UTF-8&ns=flipkart&pageName=www.flipkart.com%3A&g=https%3A%2F%2Fwww.flipkart.com%2F&cc=INR&pe=lnk_o&pev2=Login%20Displayed&events=event12&c13=0.0.3&c21=HomePage_Launch%20Login%3ADisplayed&c54=8&s=1280x720&c=24&j=1.6&v=N&k=Y&bw=1280&bh=593&AQE=1", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t177.inf", 
		LAST);

	web_url("sw.js_5", 
		"URL=https://www.flipkart.com/sw.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.flipkart.com/sw.js", 
		"Snapshot=t178.inf", 
		LAST);

	web_url("sw.js_6", 
		"URL=https://www.flipkart.com/sw.js?k=6669f663c68fd3fdc54518233992960c", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t179.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("s35334020395228", 
		"URL=https://flipkart.d1.sc.omtrdc.net/b/ss/flipkart-prd/1/JS-1.5.1/s35334020395228", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t180.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=AQB=1&ndh=1&pf=1&t=12%2F1%2F2024%2015%3A47%3A7%201%20-330&mid=91301039696235577497612905762942785164&aamlh=12&ce=UTF-8&ns=flipkart&pageName=HomePage&g=https%3A%2F%2Fwww.flipkart.com%2F&cc=INR&events=event497%3D1%2Cevent251%3D2900%2Cevent252%3Dundefined%2Cevent253%3Dundefined%2Cevent1&products=%3BHomePage%3B%3B%3B%3BeVar93%3DFLIPKART&aamb=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=HomePage&v1=HomePage&c2=fklite&v2=fklite&c3=FLIPKART%3AHomePage&v3=FLIPKART%3AHomePage&c4=HomePage&v4"
		"=logout&v8=HomePage&c13=0.0.3&c25=Search%20Page&c26=Search%20%3AComputers%7CLaptops&v31="
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
		"d%7Ch_STG%7Cprestart%7Cb351a882%7Ch_STG%7C2HTpH76CvAR4hrhBhUTr0t%7C705292d0%7Ch_STG%7C3fRX0dv4OnGTBKxdn9dkN2%7C7dd0497a%7Ch_STG%7Cprestart%7C6b72a02e%7Ch_STG%7Cid65wXrCUOYpcOyV6JNo5%7Ce7ddc439%7Ch&c35=https%3A%2F%2Fwww.flipkart.com%2F&c39=2900-NA-NA&v42=BrowserLaunch&c48=6850_NETINFO_4g_null&v50=HomePage&c54=8&c66=clsisdo860r7b1ibfvbqfmsxm-BR1707733409766&v85=15f894bb_STG%7ClaunchedGroup%7Cbee87c24%7Ch&v99=NON_LOGGED_IN&v139=BLUE&v154=en&v181=BLUE&s=1280x720&c=24&j=1.6&v=N&k=Y&bw=1280&bh=593&AQE=1", 
		LAST);

	return 0;
}