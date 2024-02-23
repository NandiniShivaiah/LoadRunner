/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("www.flipkart.com", 
		"URL=https://www.flipkart.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("352e6f0f8034fab5.jpg", 
		"URL=https://rukminim2.flixcart.com/fk-p-flap/1600/270/image/352e6f0f8034fab5.jpg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("aa1b2bdcf519b468.jpg", 
		"URL=https://rukminim2.flixcart.com/fk-p-flap/1600/270/image/aa1b2bdcf519b468.jpg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("d666db78034ac39f.jpg", 
		"URL=https://rukminim2.flixcart.com/fk-p-flap/1600/270/image/d666db78034ac39f.jpg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("1f03e99f6dc9f7a6.jpg", 
		"URL=https://rukminim2.flixcart.com/fk-p-flap/530/810/image/1f03e99f6dc9f7a6.jpg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("dkian-sa-digital-kids-camera-20mp-1080p-with-32gb-memory-card-original-imafmne6ueajav2g.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/k3khevk0/camera/b/y/k/dkian-sa-digital-kids-camera-20mp-1080p-with-32gb-memory-card-original-imafmne6ueajav2g.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("c-laserjet-m1005-mfp-hp-original-imafjfx2hvjhmysr.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/k0lbdzk0pkrrdj/printer-refurbished/a/5/h/c-laserjet-m1005-mfp-hp-original-imafjfx2hvjhmysr.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("philips-s1121-45-s1121-45-original-imafry2qgxcwnm9r.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/kactpjk0/shaver/m/6/z/philips-s1121-45-s1121-45-original-imafry2qgxcwnm9r.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("d24-20-66aekac1in-lenovo-original-imag2qwzazcdmqtb.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/ko8xtow0/monitor/t/a/y/d24-20-66aekac1in-lenovo-original-imag2qwzazcdmqtb.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("brother-dcp-b7535dw-original-imafwvkzwyjmqkfv.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/kgpg5u80/printer/e/e/h/brother-dcp-b7535dw-original-imafwvkzwyjmqkfv.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("portable-ssd-sdssde30-1t00-g25-sandisk-original-imag3xx564jxpgrb.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/kpsnzww0/external-hard-drive/ssd/t/9/7/portable-ssd-sdssde30-1t00-g25-sandisk-original-imag3xx564jxpgrb.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("-original-imagky3e8yp5ebvr.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/xif0q/power-bank/d/a/f/-original-imagky3e8yp5ebvr.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("xc-900-grey-lite-26-15-5-cradiac-21-gear-120-original-imagczuzpxeweczm.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/l111lzk0/cycle/m/r/e/xc-900-grey-lite-26-15-5-cradiac-21-gear-120-original-imagczuzpxeweczm.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("200-100-natural-california-pouch-happilo-original-imafzvw2tcazeur6.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/k6fd47k0/nut-dry-fruit/p/z/7/200-100-natural-california-pouch-happilo-original-imafzvw2tcazeur6.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("-original-imagfykthgudy4qz.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/l58iaa80/electric-cycle/i/y/f/-original-imagfykthgudy4qz.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("push-up-bar-0-8-long-ankaro-original-imafu9dmvdk3rzvy.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/kdbzqfk0/bar/8/h/q/push-up-bar-0-8-long-ankaro-original-imafu9dmvdk3rzvy.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("Inter-SemiBold.woff2", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/fonts/Inter-SemiBold.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("-original-imagtr8npfrsbx6s.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/xif0q/projector/r/a/o/-original-imagtr8npfrsbx6s.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("brand-new-unidirectional-lapel-collar-mic-with-voice-recording-original-imafy2f764cqyyhn.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/ki7qw7k0-0/microphone/q/w/g/brand-new-unidirectional-lapel-collar-mic-with-voice-recording-original-imafy2f764cqyyhn.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("Inter-Regular.woff2", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/fonts/Inter-Regular.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("premium-pouch-regular-tea-powder-tata-original-imafzuf2mnubzphd.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/kkimfm80/tea/z/n/1/premium-pouch-regular-tea-powder-tata-original-imafzuf2mnubzphd.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("the-origin-of-species-original-imagg6zgfzpcq2tw.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/l5jxt3k0/book/m/a/w/the-origin-of-species-original-imagg6zgfzpcq2tw.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("casual-unisex-travel-bag-office-messenger-school-backpack-fft-original-imagbwfjdqj7n3fh.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/250/250/kzzw5u80/backpack/r/n/a/casual-unisex-travel-bag-office-messenger-school-backpack-fft-original-imagbwfjdqj7n3fh.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("-original-imagqwxnahxveash.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/250/250/xif0q/wallet-card-wallet/m/3/0/-original-imagqwxnahxveash.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("l-men-s-stylish-trendy-half-sleeve-digital-printed-latest-design-original-imagqz69mu8sryvh.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/250/250/xif0q/t-shirt/y/7/s/l-men-s-stylish-trendy-half-sleeve-digital-printed-latest-design-original-imagqz69mu8sryvh.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("xylophone-guitar-wooden-kids-first-musical-sound-instrument-toy-original-imafyfszcjkjcwwz.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/210/210/kiqbma80-0/musical-toy/s/k/b/xylophone-guitar-wooden-kids-first-musical-sound-instrument-toy-original-imafyfszcjkjcwwz.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("free-mandakini1-ofline-selection-unstitched-original-imags45yh6hdjygy.jpeg", 
		"URL=https://rukminim2.flixcart.com/image/250/250/xif0q/sari/l/w/m/free-mandakini1-ofline-selection-unstitched-original-imags45yh6hdjygy.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("main.min.js", 
		"URL=https://static-assets-web.flixcart.com/PXgNtTli3A/main.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("omniv31-1.js", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/omniv31-1.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("en-js.c21818.js", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/en-js.c21818.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("commonLazyLoadChunk.3dac73.css", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/commonLazyLoadChunk.3dac73.css", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("commonLazyLoadChunk.3126f7.js", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/commonLazyLoadChunk.3126f7.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("MultiWidgetpage.4d5314.css", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/MultiWidgetpage.4d5314.css", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("MultiWidgetpage.de2a40.js", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/MultiWidgetpage.de2a40.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("OVHomePageTS.a463bb.css", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/OVHomePageTS.a463bb.css", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("OVHomePageTS.45e770.js", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/OVHomePageTS.45e770.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("BaseActionNonCritical.84a8f0.js", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/BaseActionNonCritical.84a8f0.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=1.5.4&d_rtbd=json&d_ver=2&d_orgid=17EB401053DAF4840A490D4C%40AdobeOrg&d_nsid=0&d_cb=s_c_il%5B0%5D._setMarketingCloudFields", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t39.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("collector", 
		"URL=https://collector-pxgnttli3a.px-cloud.net/api/v2/collector", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"Body=payload=aUkQRhAIEGJqAwACCwcQHhBWEAhJEGJqAwMEBgcQCBBaRkZCQQgdHUVFRRxUXltCWVNARhxRXV8dEB4QYmoDAAACBRAIAh4QYmoDAAYHChAIEGVbXAEAEB4QYmoDAwsCABAIAh4QYmoDAwcEAhAIBwAKAh4QYmoDAAAGChAG^IAQQCAh4QYSmoDAwEKBxAIAwUCBQ}DNUBAAoGBQUBBR4QYmoKDAAAKAhAIAwUCB8QUBAAoGDBQsDCx4QYmoDAwYLBBAIEAUHAwULBgsNCHa1ELCl>DQfAw`NXVx8LUwAAHwYLAAYDUFNTAFNRABAeEGJqAwAK}GHBAK7YQCFxHXl4eEGJqAwAHBAcQCB8DHhBiagM7DAQULEAhUU15BV09Pbw==&appId=PXgNtTli3A&tag=v8.7.8&uuid=75179490-c98f-11ee-9a22-49241baa2ac2&ft=318&seq=0&en=NTA&pc="
		"3735719261571928&rsc=1", 
		LAST);

	web_concurrent_start(NULL);

	web_url("lazyLoadChunk.071250.css", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/lazyLoadChunk.071250.css", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("lazyLoadChunk.1b7994.js", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/lazyLoadChunk.1b7994.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t42.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("codes.json", 
		"URL=https://static-assets-web.flixcart.com/www/linchpin/batman-returns/codes.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("29327f40e9c4d26b.png", 
		"URL=https://rukminim2.flixcart.com/flap/64/64/image/29327f40e9c4d26b.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("22fddf3c7da4c4f4.png", 
		"URL=https://rukminim2.flixcart.com/flap/64/64/image/22fddf3c7da4c4f4.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("0d75b34f7d8fbcb3.png", 
		"URL=https://rukminim2.flixcart.com/fk-p-flap/64/64/image/0d75b34f7d8fbcb3.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("69c6589653afdb9a.png", 
		"URL=https://rukminim2.flixcart.com/flap/64/64/image/69c6589653afdb9a.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("0139228b2f7eb413.jpg", 
		"URL=https://rukminim2.flixcart.com/fk-p-flap/64/64/image/0139228b2f7eb413.jpg?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("ab7e2b022a4587dd.jpg", 
		"URL=https://rukminim2.flixcart.com/flap/64/64/image/ab7e2b022a4587dd.jpg?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("dff3f7adcf3a90c6.png", 
		"URL=https://rukminim2.flixcart.com/flap/64/64/image/dff3f7adcf3a90c6.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("05d708653beff580.png", 
		"URL=https://rukminim2.flixcart.com/fk-p-flap/64/64/image/05d708653beff580.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("71050627a56b4693.png", 
		"URL=https://rukminim2.flixcart.com/flap/64/64/image/71050627a56b4693.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("ed27f892-1bc6-462f-805b-953f5add4f6a.jpg", 
		"URL=https://rukminim2.flixcart.com/www/1070/790/promos/26/09/2023/ed27f892-1bc6-462f-805b-953f5add4f6a.jpg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t53.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("business", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("business_2", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("id_2", 
		"URL=https://flipkart.d1.sc.omtrdc.net/id?d_visid_ver=1.5.4&callback=s_c_il%5B0%5D._setAnalyticsFields&mcorgid=17EB401053DAF4840A490D4C%40AdobeOrg&mid=91301039696235577497612905762942785164", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("sw.js", 
		"URL=https://www.flipkart.com/sw.js?k=6669f663c68fd3fdc54518233992960c", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t57.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("vh=541; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("vw=1280; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("dpr=1; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("Network-Type=4g; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("pxcts=c618c70c-c990-11ee-919b-abf8d8cac8c0; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("_pxvid=c618bc5a-c990-11ee-919b-55690eef1cc4; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("AMCVS_17EB401053DAF4840A490D4C%40AdobeOrg=1; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C19766%7CMCMID%7C91301039696235577497612905762942785164%7CMCAAMLH-1708337648%7C12%7CMCAAMB-1708337648%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1707740048s%7CNONE; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("business_3", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"bo5lk7am34000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.148.118\"}}},\"ssid\":\"1707733410088\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"t\":1707732848520,\"en\":\"PV\",\"_ev\":\"3.5\",\"ib\":false}]}", 
		LAST);

	web_custom_request("business_4", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"bo5lk7am34000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.148.118\"}}},\"ssid\":\"1707733410088\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|launchedGroup|bee87c24|h\",\"expId\":\"oneviewhomepagedesktop\"}],\"t\":1707732848986}]}", 
		LAST);

	web_custom_request("business_5", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"ocgfjcqk80000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"None\",\"pt\":\"None\",\"meta\":{\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.148.118\"}}}},\"e\":[{\"t\":1707732847986,\"en\":\"CEE\",\"er\":\"ViewportDifference\",\"esc\":\"JavaScript\",\"et\":\"Unknown\",\"es\":\"Non-Fatal\",\"em\":\"width: 1280, height: 541, dpr: 1\"}]}", 
		LAST);

	web_custom_request("collector_2", 
		"URL=https://collector-pxgnttli3a.px-cloud.net/api/v2/collector", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"BodyBinary=payload="
		"aUkQRhAIEGJqAwMHCwIQHhBWEAhJEGJqAwMGAQMQCAMFAgUFAQEGAwEDAwceEGJqAwMKBgEQCAMACgIeEGJqAwMFCgMQCAUAAh4QYmoDAAMAAxAIAwAKAh4QYmoDAAMAChAIBAoCHhBiagMAAQoFEAgQAwAKAmoFAAIQHhBiagMAAgIBEAgABh4QYmoDAwEKAhAIAAYeEGJqAwMGCwYQCAMACgIeEGJqAwAGAwMQCAcGAx4QYmoDAAYGARAIAh4QYmoDAAYGBRAIAh4QYmoDAwcBARAIRkBHVx4QYmoDAAIFCxAIVFNeQVceEGJqAwAHCgoQCBBFV1BZW0YQHhBiagMABwcDEAgQWkZGQkEIEB4QYmoDAAcHABAIEFRHXFFGW11cEkFaU0BXGhsSSRJpXFNGW0RXElFdVldvEk8QHhBiagMABwcBEAgQc0FbUx1xU15RR0ZGUxAeEGJqAwAHBAUQCBBFAVEQHhBiagMABwUEEAgQQVFAV1"
		"dcEB4QYmoDAAcHBxAISRBCXkdVV0pGEAhJEAIQCEkQVBAIEFtcRldAXFNeH0JWVB9EW1dFV0AQHhBcEAgQYnZ0EmRbV0VXQBBPHhADEAhJEFQQCBBbXEZXQFxTXh9CVlQfRFtXRVdAEB4QXBAIEHFaQF1fVxJidnQSZFtXRVdAEE8eEAAQCEkQVBAIEFtcRldAXFNeH0JWVB9EW1dFV0AQHhBcEAgQcVpAXV9bR18SYnZ0EmRbV0VXQBBPHhABEAhJEFQQCBBbXEZXQFxTXh9CVlQfRFtXRVdAEB4QXBAIEH9bUUBdQV1URhJ3VlVXEmJ2dBJkW1dFV0AQTx4QBhAISRBUEAgQW1xGV0BcU14fQlZUH0RbV0VXQBAeEFwQCBBlV1B5W0YSUEdbXkYfW1wSYnZ0EE9PHhBCXkdVW1xBbV5XXBAIB08eEGJqAwAHCgEQCEkQQV9WEAhJEF1ZEAhGQEdXHhBXShAIVFNeQVdPTx4QYmoDAAcF"
		"ChAISU8eEGJqAwAHCwYQCFRTXkFXHhBiagMABwQEEAhUU15BVx4QYmoDAAcFAxAIEAAEAVQAAwFWEB4QYmoDAAcFCxAISRBBR0JCXUBGEAhGQEdXHhBBRlNGR0EQCEkQV1RUV1FGW0RXZktCVxAIEAZVEB4QQEZGEAgHAh4QVl1FXF5bXFkQCAQcAgceEEFTRFd2U0ZTEAhUU15BV09PHhBiagMABwoDEAgQVldUU0deRhAeEGJqAwAHCgAQCAEeEGJqAwAHCgUQCFRTXkFXHhBiagMABwsFEAgCHhBiagMAAAUKEAhGQEdXHhBiagMDBAsGEAhUU15BVx4QYmoDAAALBhAIVFNeQVceEGJqAwAHAwYQCEZAR1ceEGJqAwAHAwcQCBBmS0JXd0BAXUAIEnFTXFxdRhJAV1NWEkJAXUJXQEZbV0ESXVQSR1xWV1RbXFdWEhpAV1NWW1xVEhVFW1ZGWhUbEB4QYmoDAAcDBBAIEEVXUFlbRh"
		"AeEGJqAwAHAwUQCAEBHhBiagMABwMKEAhUU15BVx4QYmoDAAcGBxAIVFNeQVceEGJqAwAHCwEQCFRTXkFXHhBiagMABwsHEAgQc0dWW112U0ZTHGFkdXNcW19TRldWc1xVXlccYWR1f1dGU1ZTRlN3XldfV1xGEB4QYmoDAwECARAIVFNeQVceEGJqAwMHAwcQCFRTXkFXHhBiagMAAwEBEAhUU15BVx4QYmoDAAEGAhAIVFNeQVceEGJqAwMFAQoQCFRTXkFXHhBiagMDBQABEAhUU15BVx4QYmoDAwEKCxAIVFNeQVceEGJqAwMKAQsQCFRTXkFXHhBiagMDBgQCEAhUU15BVx4QYmoDAAMCABAIVFNeQVceEGJqAwMBBQoQCFRTXkFXHhBiagMAAQMFEAhUU15BVx4QYmoDAAIECxAIaRBidnQSZFtXRVdAEB4QcVpAXV9XEmJ2dBJkW1dFV0AQHhBxWkBdX1tHXxJidnQSZFtXRVdA"
		"EB4Qf1tRQF1BXVRGEndWVVcSYnZ0EmRbV0VXQBAeEGVXUHlbRhJQR1teRh9bXBJidnQQbx4QYmoDAAAKBBAIBx4QYmoDAwcFBBAIRkBHVx4QYmoDAAEDChAIRkBHVx4QYmoDAwEKBhAIRkBHVx4QYmoDAwoKBBAIRkBHVx4QYmoDAwcKARAIEFdcH3VwEB4QYmoDAAYHChAIEGVbXAEAEB4QYmoDAwQKAxAIaRBXXB91cBBvHhBiagMDBQcGEAgQf11IW15eUx0HHAISGmVbXFZdRUESfGYSAwIcAgkSZVtcBAYJEkoEBhsSc0JCXldlV1B5W0YdBwEFHAEEEhp5emZ/"
		"fh4SXltZVxJ1V1FZXRsScVpAXV9XHQMAAxwCHAIcAhJhU1RTQFsdBwEFHAEEEB4QYmoDAAIBBRAIRkBHVx4QYmoDAwELAhAIHwEBAh4QYmoDAwQAAxAICh4QYmoDAwQHBRAIAx4QYmoDAAIKAxAIEHVXUVldEB4QYmoDAwsCChAIEAACAgECAwIFEB4QYmoDAAEDBhAIEAccAhIaZVtcVl1FQRJ8ZhIDAhwCCRJlW1wEBgkSSgQGGxJzQkJeV2VXUHlbRh0HAQUcAQQSGnl6Zn9+"
		"HhJeW1lXEnVXUVldGxJxWkBdX1cdAwADHAIcAhwCEmFTVFNAWx0HAQUcAQQQHhBiagMDCgALEAhGQEdXHhBiagMDBgQGEAhGQEdXHhBiagMAAgcGEAgAHhBiagMDCgADEAgQfFdGQVFTQlcQHhBiagMDBgULEAgQf11IW15eUxAeEGJqAwMEBQYQCEZAR1ceEGJqAwAABgMQCAcCHhBiagMDAQUAEAhUU15BVx4QYmoDAwQKARAIBBwCBx4QYmoDAwcEAxAIEAZVEB4QYmoDAwoFBRAIRkBHVx4QYmoDAAMCAhAIRkBHVx4QYmoDAAcCBBAIEEoKBBAeEGJqAwAHAgUQCBAEBhAeEGJqAwAHAgoQCGlJEFBAU1xWEAgQfF1GEnMacEBTXFYQHhBEV0BBW11cEAgQCwsQTx5JEFBAU1xWEAgQdV1dVV5XEnFaQF1fVxAeEERXQEFbXVwQCBADAAMQTx5JEFBAU1xWEAgQcVpAXV9bR18QHh"
		"BEV0BBW11cEAgQAwADEE9vHhBiagMABwILEAhUU15BVx4QYmoDAAcDAhAIEBAeEGJqAwAHAwMQCBBlW1xWXUVBEB4QYmoDAAcDABAIEAMCHAIcAhAeEGJqAwAHAwEQCBADAAMcAhwEAwQFHAMEAxAeEGJqAwAHBgoQCEZAR1ceEGJqAwAHBgsQCEZAR1ceEGJqAwAAAgUQCAIeEGJqAwMHAQoQCAMeEGJqAwMLCgGYQCBBmS0JXd0BAXUAIEnFTXFxdRhJAV1NWEkJAXUJXQEZbV0ESXVQSXEdeXhIaQFdTVltcVRIVAhUbblwSEhISU0YSU0ASGlpGRkJBCB0dQUZTRltRH1NBQVdGQR9FV1AcVF5bSlFTQEYcUV1fHWJqVXxGZl5bAXMdX1NbXBxfW1wcWEEIAAgABgUKCxtuXBISEhJTRhJ4XhIaWkZGQkEIHR1BRlNGW1EfU0FBV0ZBH0VXUBxUXltKUVNARhxRXV8dYmpVfEZmXls"
		"Bcx1fU1tcHF9bXBxYQQgACAMCBQAKABtuXBISEhJTRhJoXhIaWkZGQkE^iIHR1BRlNGW1EfU0FBV0ZBH0VXUBxUXltKUVNARhxRXV8dYmpVfEZ}"
		"mXlsBcx1fU1tcHF9bXBxYQQgACAMCBAsDCxtuXBISEhJTRhJaRkZCQQgdHUFGU0ZbUR9TQUFXRkEfRVdQHFReW0pRU0BGHFFdXx1ialV8RmZeWwFzHV9TW1wcX1tcHFhBCAAIAwIECgsDblwSEhISU0YSXEBlQFNCQldAEhpaRkZCQQgdHUVFRRxUXltCWVNARhxRXV8dCAQIAwYBCgYbEB4QYmoDAwQGBxAIEFpGRkJBCB0dRUVFHFReW0JZU0BGHFFdXx0QHhBiagMDBwsFEAhpbx4QYmoDAAIAARAIEBAeEGJqAwMBAQUQCFRTXkFXHhBiDagMDBwIKEAgQBgtXBwIKBlcQHhBiagMDBgcAEAgQBVEHVAsFAAYQHhBiagMAAAMKEAgQBAdWCgAEVwIQHhBiagMABgoDEAgQUwsABAtXAgIQHhBiagMDBQoCEAgQBwJTB1dRBwcQHhBiagMDBQIDEAgQAwABAQYHCwcLAgcBBwIHBgoH"
		"BgYQHhAEBwYGAQAMAAwFAAYABQABDQABARAIEAUGBwcAAQ0BDQQBBwEEAQAMAQAAEB4QYmoDAAYHBhAIBwUHCh4QYmoDAwpoCBhAIEAsFBAEGUQBRBlYHAgAKBQNXBwAGVgNWVwMCVlBWBAQHEB4QYmoDAAMDChAIEFFcBkQBCwpbW1NEBlQGV1gHBl8CEB4QYmoDAwUGBBAIEAEDUAMDUQBWBwIEBAoLUFcFAAIFUQoGBQYLBlBUBgsEEB4QYmoDiAwEFAxAIEABQUAdWBFdTU1BRUVZXAFEGCwAFCwsGCwNXBgcLBQdTEB4QYmoDAAcCAxAIEFRTAQYGAQJTClMBAVcAUAVUVwAAClZQVAIGVwYCC1dTEB4QYmoDAwcBCxAIEAQGBwcEUQUFEB4QYmoDAwcAChAIEBAeEGJqAwAABQMQCBADAgACBVAAVBAeEGJqAwMKBgsQCBADAgACBVAAVBAeEGJqAwAGBAYQCBALAlcEBwYEBxAe"
		"EGJqAwMBBwQQCEZAR1ceEGJqAwAGAAQQCEZAR1ceEGJqAwMFCwMQCEZAR1ceEGJqAwMHAwUQCEZAR1ceEGJqAwAHAAIQCEZAR1ceEGJqAwAHAAYQCBAGa3EDBmtxVgZrcVYGa3FkBmtxVwZrcWoGa3VhB3gABwRTR0EFQAAEBGtTewddcWAFQAAFEB4QYmoDAAcABRAIEFMBAgNUVgNXAFNRBAVTAwBUUwYHVFZWV1AFBFcGCgcDEB4QYmoDAAAEAhAIEH9dSFteXlMdBxwCEhplW1xWXUVBEnxmEgMCHAIJEmVbXAQGCRJKBAYbEnNCQl5XZVdQeVtGHQcBBRwBBBIaeXpmf34eEpl5bWVcSdVdRWV0bEnFaQF1fVx0DAAMcAhwCHAISYVNUU0BbHQcBBRGwBBBAeEGJqAwAABgsQCFRTXkFXHhBiagMDCgsFEAgQCwJXBAcGBAcQHhBiagMABwYGEAhGQEdXHhBiagMABwoLEAgQQUdR"
		"UVdXVldWEB4QYmp"
		"[oDAwcABhAIRkBHVx4QYmoDAAEBAhAIEAMCC04EBE4EBE4FAk4KAhAeEGJqAwMFAgcQCAEBAR4QYmoDAwsBChAIRkBHVx4QYmoDAwQCABAIrRkBHVx4QYmoDAAIAAxAIEFRTXkFXEB4QYmoDAAYAAxAIEFRTXkFXEB4QYmoDAAMABhAIAx4QYmoDAwQCCxAIAx4QYmoDAAALAxAIEBAeEGJqAwMKCgMQCGkQXl1TVmZbX1dBEB4QUUFbEB4QU0JCEG8eEGJqAwMHAAsQCAEDBwMACwcLHhBiagMDBwcHEAgAAwUABAYLBgUAHhBiagMDCgEBEAgGBAEAAwABBx4QYmoDAwoGAhAIEH9dXBJ0V1ASAwASAAIABhIDBwgGBggCChJ1f2YZAgcBAhIae1xWW1MSYUZTXFZTQFYSZltfVxsQHhBiagMDBwAEEAhUU15BVx4QYmoDAwQKBhAIVFNeQVceEGJqAwMKAwAQCFRTXkFXHhBiagMAAQ"
		"EHEAhGQEdXHhBiagMAAgoCEAgCHhBiagMDBAUKEAhUU15BVx4QYmoDAwEGCxAIEERbQVtQXlcQHhBiagMAAQsFEAhUU15BVx4QYmoDAwEKBRAIAh4QYmoDAAMHAhAIAwAKAh4QYmoDAAECBhAIVFNeQVceEGJqAwMEBwMQCAQKAh4QYmoDAwoEBRAIEF9bQUFbXFUQHhBiagMAAAcGEAhUU15BVx4QYmoDAwcGAhAIRkBHVx4QYmoDAwcGChAIVFNeQVceEGJqAwMGBgQQCEZAR1ceEGJqAwAHBwIQCAIeEGJqAwAGAQMQCGpOAIeEGJqAwMLCwMQCAoeEGJqAwMKAQUQCAcGHhBiagMDBAEAEAgCHhBiagMDBgILEAgEHhBiagMABwUBEAgQAAUHCwtQAAQQHhBiagMAAwQrDLEAgAHhBiagMDCwIAEAgDHhBiagMDBwQCEAgEAAAHHhBiagMDAQEAEAgDBQIFBQEACgYKBQAEHhBiagM"
		"AAAYKEAgBBAICHhBiagMDAQoHEAgDBQIFBQEACgYFBQEFHhBiagMAAAoCEAgDBQIFBQEACgYLBgsFHhBiagMDBgsEEAgQBQcDBQsGCwIfUQsKVB8DA1dXHwtTAAAfBgsABgNQU1MAU1EAEB4QYmoDAAcEBhAIXEdeXh4QYmoDAAcEBxAIHwMeEGJqAwMBBQsQCFRTXkFXT08eSRBGEAgQYmoDAwsABx"
		"[7AeEFYQCEkQYmoDAwsEBRAIEFZTUwZRA1QHEB4QYmoDAwcCBxAIEAMCUFcDVlcHEB4QYmoDAwQCAhAIEFEKAAMHAwVQEB4QYmoDAwcCBBAIEFAGB1YEBVcGEB4QYmoDAAIDBBAIVFNeQVceEGJqAwMLAAYQCBBQBQALUwsLUBAeEGJqAwMLAgAQCAAeEGJqAwMHBAIQCAQABwEeEGJqAwAACgIQCAMFAgUFAQAKBgsGCwUeEGJqAwMGCwQQCBAFBwMFCwYLAh9RCwpUHwMDV1cfC1MAAB8GCwAGA1BTUwBTUQAQHhBiagMABwQGEAhcR15eHhBiagMABwQHEAgfAx4QYmo7DAwEFCxAIVFNeQVdPT28=&appId=PXgNtTli3A&tag=v8.7.8&uuid=75179490-c98f-11ee-9a22-49241baa2ac2&ft=318&seq=1&en=NTA&cs="
		"3af88a5e680ee7657377e7637ad8dc89a505661bc33df556c299301f0dc13387&pc=5605219734122278&sid=c618c470-c990-11ee-919b-abf8d8cac8c0\\xF3\\xA0\\x84\\xB1\\xF3\\xA0\\x84\\xB7\\xF3\\xA0\\x84\\xB0\\xF3\\xA0\\x84\\xB7\\xF3\\xA0\\x84\\xB7\\xF3\\xA0\\x84\\xB3\\xF3\\xA0\\x84\\xB3\\xF3\\xA0\\x84\\xB4\\xF3\\xA0\\x84\\xB1\\xF3\\xA0\\x84\\xB3\\xF3\\xA0\\x84\\xB1\\xF3\\xA0\\x84\\xB1\\xF3\\xA0\\x84\\xB5&vid=c618bc5a-c990-11ee-919b-55690eef1cc4&cts=c618c70c-c990-11ee-919b-abf8d8cac8c0&rsc=2", 
		LAST);

	web_add_cookie("gpv_pn=HomePage; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("gpv_pn_t=FLIPKART%3AHomePage; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("s_cc=true; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C19766%7CMCMID%7C91301039696235577497612905762942785164%7CMCAAMLH-1708337648%7C12%7CMCAAMB-1708337648%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1707740049s%7CNONE%7CMCAID%7CNONE; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("_px3=25f174ed17fadcba9428ad84cfa57d6e8ba6ad9a3c13b402d9a63e341c95e8c8:/Kr9QNqwx7kMy2tbv7cjTrZwhdxZWBTOngxjJTDP26iHHC/WW5frSRuLDW38IPixvIW6cBzJKf6m0U+Wv8rdXA==:1000:W27DixC1l7wr8XISFMjSl7VLf7/HqfMnA8NGtMIP4vUKxj2SRILRsiEvPbask8DmwtmOahj+PGEAosUC4rDJcnvMIN9084hUPUVPV7vVQ3LNHfnGUxCFHO1xyqfJT//H9+2n8h5yzCxFF94N6foQNSGkvADHy9GBQ0MymAbGgF33cQ40oiys6OaYzynexSYNcmahWNspynt8Q3bjFDgmfIBUdDC888WdiL4v2AcmHqk=; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("business_6", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"bo5lk7am34000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.148.118\"}}},\"ssid\":\"1707733410088\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"BDE\",\"_ev\":1.3,\"ty\":\"INIT_SUCCEED\",\"v\":\"en\",\"ttc\":\"443\",\"t\":1707732848561},{\"t\":1707732849757,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":1,\""
		"wvt\":\"NAV_EXPANDABLE\",\"wtp\":\"rich_navigation\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"st\":1707732842689,\"pv\":100,\"f\":true,\"ct\":\"contentCollection\"},{\"t\":1707732849757,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"wk\":\"2.bannerAdCard.BANNERADS\",\"st\":1707732842689,\"pv\":100,\"f\":true,\"ct\":\"bannerAdCard\"},{\"t\":1707732849757,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":3,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_3\",\"biid\":\""
		"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"wk\":\"3.dealCard.OMU\",\"st\":1707732842689,\"pv\":24.418604373931885,\"f\":true,\"ct\":\"dealCard\"},{\"t\":1707732849758,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":4,\"wvt\":\"ATLAS_RHS_ANNOUNCEMENT\",\"wtp\":\"rhs_announcement\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_4.N9HXXTJYE5YL\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"wk\":\"4.rhsAnnouncement.RHS_ANNOUNCEMENT\",\"st\""
		":1707732842689,\"pv\":20.566560328006744,\"f\":true,\"ct\":\"rhsAnnouncement\"},{\"t\":1707732849758,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.7RG9A42948N0\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\""
		"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842694,\"pv\":100,\"f\":true},{\"t\":1707732849758,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":0,\"wvt\":\"ATLAS_RHS_ANNOUNCEMENT\",\"wtp\":\"rhs_announcement\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_4.N9HXXTJYE5YL\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"rhsAnnouncement\",\"ctl\":null,\""
		"wps\":4,\"pid\":null,\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_4.N9HXXTJYE5YL\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":-1801132129,\"st\":1707732842694,\"pv\":20.566560328006744,\"f\":true},{\"en\":\"DCI\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS_MC.CBUR1Q46W5F1\",\"ct\":\"navigationCard\",\"p\":1,\"f\":true,\"st\":1707732842694,\"pv\":100,\"wps\":1,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732849758},{\"en\":\"DCI\",\""
		"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS_MC.ZRQ4DKH28K8J\",\"ct\":\"navigationCard\",\"p\":2,\"f\":true,\"st\":1707732842694,\"pv\":100,\"wps\":2,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732849758},{\"en\":\"DCI\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS_MC.B5YIQCE8VHYO\",\"ct\":\"navigationCard\",\"p\":3,\"f\":true,\"st\":1707732842694,\"pv\":100,\"wps\":3,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\""
		":1707732849758},{\"en\":\"DCI\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS_MC.JKA0LKU8OMVP\",\"ct\":\"navigationCard\",\"p\":4,\"f\":true,\"st\":1707732842694,\"pv\":100,\"wps\":4,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732849758},{\"en\":\"DCI\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS_MC.A7YT3X39TTON\",\"ct\":\"navigationCard\",\"p\":5,\"f\":true,\"st\":1707732842694,\"pv\":100,\"wps\":5,\"wk\":\""
		"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732849758},{\"en\":\"DCI\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS_MC.LO4IWVHA61BX\",\"ct\":\"navigationCard\",\"p\":6,\"f\":true,\"st\":1707732842694,\"pv\":100,\"wps\":6,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732849759},{\"en\":\"DCI\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS_MC.V4ZPKTOAO321\",\"ct\":\"navigationCard\",\"p\":7,\"f\":true,\"st\":1707732842694,"
		"\"pv\":100,\"wps\":7,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732849759},{\"en\":\"DCI\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS_MC.CSZJ9U6U82HR\",\"ct\":\"navigationCard\",\"p\":8,\"f\":true,\"st\":1707732842694,\"pv\":100,\"wps\":8,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732849759},{\"en\":\"DCI\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS_MC.EGGUS4T1KINV\",\"ct\":\"navigationCard\",\"p\":9,\""
		"f\":true,\"st\":1707732842694,\"pv\":100,\"wps\":9,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732849759}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("s36546555875647", 
		"URL=https://flipkart.d1.sc.omtrdc.net/b/ss/flipkart-prd/1/JS-1.5.1/s36546555875647", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t63.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=AQB=1&ndh=1&pf=1&t=12%2F1%2F2024%2015%3A44%3A9%201%20-330&mid=91301039696235577497612905762942785164&aamlh=12&ce=UTF-8&ns=flipkart&pageName=HomePage&g=https%3A%2F%2Fwww.flipkart.com%2F&cc=INR&events=event497%3D1%2Cevent251%3D2700%2Cevent252%3Dundefined%2Cevent253%3Dundefined%2Cevent1&products=%3BHomePage%3B%3B%3B%3BeVar93%3DFLIPKART&aamb=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=HomePage&v1=HomePage&c2=fklite&v2=fklite&c3=FLIPKART%3AHomePage&v3=FLIPKART%3AHomePage&c4=HomePage&v4"
		"=logout&v8=HomePage&c13=0.0.3&v31="
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
		"d%7Ch_STG%7Cprestart%7Cb351a882%7Ch_STG%7C2HTpH76CvAR4hrhBhUTr0t%7C705292d0%7Ch_STG%7C3fRX0dv4OnGTBKxdn9dkN2%7C7dd0497a%7Ch_STG%7Cprestart%7C6b72a02e%7Ch_STG%7Cid65wXrCUOYpcOyV6JNo5%7Ce7ddc439%7Ch&c35=https%3A%2F%2Fwww.flipkart.com%2F&c39=2700-NA-NA&v42=BrowserLaunch&v50=HomePage&c54=8&c66=clsisdo860r7b1ibfvbqfmsxm-BR1707733409766&v85=15f894bb_STG%7ClaunchedGroup%7Cbee87c24%7Ch&v99=NON_LOGGED_IN&v139=BLUE&v154=en&v181=BLUE&s=1280x720&c=24&j=1.6&v=N&k=Y&bw=1280&bh=541&AQE=1", 
		LAST);

	web_concurrent_start(NULL);

	web_url("MapiActionNonCriticalActions.f88271.js", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/MapiActionNonCriticalActions.f88271.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("OmnitureLazyChunk.73c4e5.js", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/OmnitureLazyChunk.73c4e5.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t65.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "1");

	lr_think_time(4);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=57oxOBvCz9pMOcr26yQsbg%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x16nandinis7399@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\x8F\\xBA\\xD2\\xCE\\x99\\xC2\\xD4\\xB4\\x01@\\x00H\\x07:%z00000165-a8aa-aecb-0000-00005b8f87daR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.161 (8e23a63b5dead78825bec5ef48f4aeb5698ce21a-refs/branch-heads/6167@{#1764}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	lr_think_time(18);

	web_custom_request("business_7", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"bo5lk7am34000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.148.118\"}}},\"ssid\":\"1707733410088\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"t\":1707732852653,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.G5HCER1YWXC2\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842640,\"pv\":100,\"f\":true},{\"t\":1707732855656,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\""
		":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.JH98VFEFZMTI\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"App\",\"wps\":2,\"pid\":\"PRNGX7PZ8WJYUCUH\",\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842639,\"pv\":100,\"f\":true},{\"en\":\"DCI\",\"iid\":\""
		"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_1_372UD5BXDFYS_MC.CSZJ9U6U82HR\",\"ct\":\"navigationCard\",\"p\":8,\"f\":true,\"st\":1707732842641,\"pv\":100,\"wps\":8,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732858654},{\"t\":1707732858685,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\""
		"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.7RG9A42948N0\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842639,\"pv\":100,\"f\":false},{\"t\":1707732861649,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.G5HCER1YWXC2\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842640,\"pv\":100,\"f\":false},{\"t\":1707732864692,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp"
		"\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.JH98VFEFZMTI\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"App\",\"wps\":2,\"pid\":\"PRNGX7PZ8WJYUCUH\",\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842641,\"pv\":100,\"f\":false},{\"t\":1707732867710,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,"
		"\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.7RG9A42948N0\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842640,\"pv\":100,\"f\":false}]}", 
		LAST);

	lr_think_time(15);

	web_custom_request("business_8", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"bo5lk7am34000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.54.148.118\"}}},\"ssid\":\"1707733410088\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"t\":1707732870716,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.G5HCER1YWXC2\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842640,\"pv\":100,\"f\":false},{\"t\":1707732873726,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp"
		"\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.JH98VFEFZMTI\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"App\",\"wps\":2,\"pid\":\"PRNGX7PZ8WJYUCUH\",\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842640,\"pv\":100,\"f\":false},{\"t\":1707732876742,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,"
		"\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.7RG9A42948N0\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842640,\"pv\":100,\"f\":false},{\"t\""
		":1707732879715,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.G5HCER1YWXC2\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\""
		":1707732842640,\"pv\":100,\"f\":false},{\"t\":1707732882747,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.JH98VFEFZMTI\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"App\",\"wps\":2,\"pid\":\"PRNGX7PZ8WJYUCUH\",\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\""
		"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842640,\"pv\":100,\"f\":false},{\"t\":1707732885774,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.7RG9A42948N0\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\""
		"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842640,\"pv\":100,\"f\":false},{\"t\":1707732888743,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2.G5HCER1YWXC2\",\"biid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"ct\":\"bannerAdCard\",\""
		"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_67fee8dc-ef0a-4486-9190-8e4f7c21f772_2\",\"pbiid\":\"67fee8dc-ef0a-4486-9190-8e4f7c21f772\",\"uvi\":1119636480,\"st\":1707732842639,\"pv\":100,\"f\":false}]}", 
		LAST);

	/* login */

	lr_think_time(15);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:QksQB7R8p5jYubOKr_l_dT0fhDGZUQQNpAO8vWMH0Zk&cup2hreq=66b46eb84ac897e8b717b96e1db7234e563bd7da83ce0b3f6a7621d9cbf5f2a4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{d54dc37f-0c09-49e9-b25d-ad7ab8b1f0e6}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{18ba4002-8b32-4ac0-84b7-154f445f3e98}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6133,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\""
		":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{fcbff569-f3ec-4d21-b712-ca9385713a1d}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6133,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.396f0c6d34d7135fea2ed14b699555b8f2dfb667e899ce8c79850d18760e8f06\"}]},\""
		"ping\":{\"ping_freshness\":\"{8334e4b4-7c8e-4117-9e85-1e38f29ac39d}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2024.2.7.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{22692002-d597-4dd4-8102-9e8db458d411}\",\"rd\":6251},\""
		"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{22558154-b70e-4d7a-aaab-16f94119ee61}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\":\"{4d3778f2-2314-4c04-abf7-f57ccdb0fb69}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{925963a1-9b74-48b9-a66c-74acc49dbb7d}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{1053df80-abde-488b-be90-48e70eff9a71}\",\"rd\":6251},\"updatecheck\":{},"
		"\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{7d77818f-7ff9-45f8-b71c-9f2cc598c000}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.9324e37832b4647cfe6dd5c305addbd1aebad06a25acf8cab9423efe9424cbf2\"}]},\"ping\":{\"ping_freshness\":\"{cba410d9-a5b2-4590-bfc0-f20cbda80f80}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"857\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.363351f0d0ca05b48f43d4adac95ad01d955bb2988c015733e70e09625d47065\"}]},\"ping\":{\"ping_freshness\":\"{2762746a-bd4b-486e-8f10-eff67c89a178}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"3018\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":"
		"\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{b7048ec6-f479-4270-9bb9-1aede77fa309}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\""
		"ping_freshness\":\"{b153e913-f03a-4d21-990a-3c55623eaf1f}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{18a12677-a40e-41cf-8e52-449c2f6c708c}\",\"rd\":6251},\"updatecheck\""
		":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{352a0ce1-a676-4690-beb2-3f50c0f23e7e}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6156,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd0c10a9d39acddc0fd6a083a23ff8a1521d45ac1328d60a7bd1a89b379b82bc\"}]},\"ping\":{\"ping_freshness\":\"{eba2994e-50fa-4038-82fa-9cad68226fda}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2024.2.10.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohortname\":\""
		"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{5d103e42-f1a3-44c9-9ca6-c6a2f4863bf2}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{970915ea-ef3b-4a99-bf3c-e0a298f51045}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.d714e27bbcdedab3f9f9ca92462ee6dc8ca779849aefdd27af92009a9d55a38f\"}]}"
		",\"ping\":{\"ping_freshness\":\"{f420f7e3-4599-4a0e-9514-08a16a164c61}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"433\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{c6e228a2-3ab4-4615-b4aa-e3feabcae848}\",\"rd\":6251},\""
		"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.06e71f675912f15e683ea65e2a1ec902ff07d67953b8dbf4542f93baf98a29bc\"}]},\"ping\":{\"ping_freshness\":\"{3c571dad-cc19-488a-82ea-34181b014fd3}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2024.2.8.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\""
		"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.161\",\"protocol\":\"3.1\",\"requestid\":\"{ed42ca88-65b6-4347-94d1-3adf8b084999}\",\"sessionid\":\"{1dbfff33-50cd-425f-a639-d37856e91e66}\",\"updater\":{\"autoupdatecheckenabled\":true,\""
		"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.363\"},\"updaterversion\":\"121.0.6167.161\"}}", 
		LAST);

	web_add_cookie("_px3=25f174ed17fadcba9428ad84cfa57d6e8ba6ad9a3c13b402d9a63e341c95e8c8:/Kr9QNqwx7kMy2tbv7cjTrZwhdxZWBTOngxjJTDP26iHHC/WW5frSRuLDW38IPixvIW6cBzJKf6m0U+Wv8rdXA==:1000:W27DixC1l7wr8XISFMjSl7VLf7/HqfMnA8NGtMIP4vUKxj2SRILRsiEvPbask8DmwtmOahj+PGEAosUC4rDJcnvMIN9084hUPUVPV7vVQ3LNHfnGUxCFHO1xyqfJT//H9+2n8h5yzCxFF94N6foQNSGkvADHy9GBQ0MymAbGgF33cQ40oiys6OaYzynexSYNcmahWNspynt8Q3bjFDgmfIBUdDC888WdiL4v2AcmHqk=; DOMAIN=www.flipkart.com");

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DHomePage%2526pidt%253D1%2526oid%253Dhttps%25253A%25252F%25252Fwww.flipkart.com%25252Faccount%25252Flogin%25253Fret%25253D%25252F%2526ot%253DA; DOMAIN=www.flipkart.com");

	web_url("login", 
		"URL=https://www.flipkart.com/account/login?ret=/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("sw.js_2", 
		"URL=https://www.flipkart.com/sw.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.flipkart.com/account/login?ret=/", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("login_img_c4a81e.png", 
		"URL=https://static-assets-web.flixcart.com/fk-p-linchpin-web/fk-cp-zion/img/login_img_c4a81e.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://static-assets-web.flixcart.com/fk-p-linchpin-web/fk-cp-zion/css/LoginSignupViewChunk.chunk.d90ed6.css", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("Login.chunk.ea1eff80.js", 
		"URL=https://static-assets-web.flixcart.com/fk-p-linchpin-web/fk-cp-zion/js/Login.chunk.ea1eff80.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("roboto-regular-webfont.woff2", 
		"URL=https://static-assets-web.flixcart.com/fk-p-linchpin-web/fk-cp-zion/fonts/roboto-regular-webfont.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://static-assets-web.flixcart.com/fk-p-linchpin-web/fk-cp-zion/css/app.chunk.e82689.css", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("roboto-medium-webfont.woff2", 
		"URL=https://static-assets-web.flixcart.com/fk-p-linchpin-web/fk-cp-zion/fonts/roboto-medium-webfont.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://static-assets-web.flixcart.com/fk-p-linchpin-web/fk-cp-zion/css/app.chunk.e82689.css", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("s31656554710188", 
		"URL=https://flipkart.d1.sc.omtrdc.net/b/ss/flipkart-prd/1/JS-1.5.1/s31656554710188?AQB=1&ndh=1&pf=1&t=12%2F1%2F2024%2015%3A45%3A7%201%20-330&mid=91301039696235577497612905762942785164&aamlh=12&ce=UTF-8&ns=flipkart&pageName=www.flipkart.com%3Aaccount%3Alogin&g=https%3A%2F%2Fwww.flipkart.com%2Faccount%2Flogin%3Fret%3D%2F&r=https%3A%2F%2Fwww.flipkart.com%2F&cc=INR&pe=lnk_o&pev2=Login%20Displayed&pid=HomePage&pidt=1&oid=https%3A%2F%2Fwww.flipkart.com%2Faccount%2Flogin%3Fret%3D%2F&ot=A&events=event12&"
		"c21=_Header%20Account%20Login%3ADisplayed&c54=8&s=1280x720&c=24&j=1.6&v=N&k=Y&bw=1280&bh=593&AQE=1", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNjESGQkjhZB6rTqdRxIFDZFhlU4hliqmxSmzKgA=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNjESGQkjhZB6rTqdRxIFDZFhlU4hliqmxSmzKgA=?alt=proto", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t77.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("callback", 
		"URL=https://2.rome.api.flipkart.com/api/1/connekt/push/callback", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("fdp", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("s_sq=%5B%5BB%5D%5D; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("_px3=d656ed425f8a9979c9a1cc2c5952aa3b3333af29de475e56671e0737a3964717:22pK5kCNn4MmarEbvkisJ3v1GNI44k/miFWSrKcL0peSwPgeP3Yw7G9y/AtWc44woh9IuDHGRhOasLVbCet3qg==:1000:IJAw0EXLlla1ctfLfYPbdhJQ7ejfrI2yIFo6I1+R53LdYcY8vkSZ527r0ctfKwovfDTxYn1tmJmC41wd7Fg8UH80at7xN//1UUZtpdnYwTlK3kvAB6V0IYCmIfKEVRJovHGd0sVEWqC3NMrBG49HfBsOD8cGuaT2ymksefmeK+JFgxkp9jKQH4xZDokBvaLRWK/aeGjToN/fFAM5aTNWVmot8/IgKRvPUVhhA5F3uto=; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("callback_2", 
		"URL=https://2.rome.api.flipkart.com/api/1/connekt/push/callback", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"type\":\"PN\",\"eventType\":\"TICKLE\",\"cargo\":\"{\\\"permissionStatus\\\":\\\"default\\\"}\"}", 
		LAST);

	web_custom_request("fdp_2", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("fdp_3", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"gaun9an7eo0000001707732907428\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.117.74\"}}},\"ssid\":\"l6yhproptc0000001707732907428\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"value\":true,\"abId\":\"STG|launchedGroup|bee87c24|h\",\"expId\":\"oneviewhomepagedesktop\"}],\"t\""
		":1707732907720}]}]", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("threatListUpdates:fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIxLjAuNjE2Ny4xNjEaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARDPohUaAhgLbgsBpiIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQ_-0NGgIYC0sDI4UiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABELjlDRoCGAuTs4KlIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARCfsAcaAhgLATsmgCIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ6zcaAhgL3T6r8yIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQmrACGgIYCz88gG8iBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgLYjna-CIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAuXnkjLIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARC3FRoCGAtp511dIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCJjgIaAhgL8VLzviIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQs7QOGgIYC_E0KAAiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEKIhGgIYC2mFcBUiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t83.inf", 
		LAST);

	web_custom_request("fdp_4", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"gaun9an7eo0000001707732907428\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.117.74\"}}},\"ssid\":\"l6yhproptc0000001707732907428\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"AE\",\"ev\":[{\"name\":\"FCP\",\"value\":2847.60000000149}],\"mt\":{\"appVersion\":\"6.10.0\",\"platform\":\"desktop\",\""
		"source\":\"network\",\"pageName\":\"Login\",\"pageUri\":\"/account/login\"},\"nm\":\"desktop-web-vitals\",\"t\":1707732908215}]}]", 
		LAST);

	web_custom_request("fdp_5", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"gaun9an7eo0000001707732907428\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.117.74\"}}},\"ssid\":\"l6yhproptc0000001707732907428\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"}],\"t\""
		":1707732908797}]}]", 
		LAST);

	web_url("s37803762689485", 
		"URL=https://flipkart.d1.sc.omtrdc.net/b/ss/flipkart-prd/1/JS-1.5.1/s37803762689485?AQB=1&ndh=1&pf=1&t=12%2F1%2F2024%2015%3A45%3A11%201%20-330&mid=91301039696235577497612905762942785164&aamlh=12&ce=UTF-8&ns=flipkart&pageName=www.flipkart.com%3Aaccount%3Alogin&g=https%3A%2F%2Fwww.flipkart.com%2Faccount%2Flogin%3Fret%3D%2F&cc=INR&pe=lnk_o&pev2=%20&c3=Login&v3=Login&c8=100&c54=8&s=1280x720&c=24&j=1.6&v=N&k=Y&bw=1280&bh=593&AQE=1", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t86.inf", 
		LAST);

	/* back */

	lr_think_time(17);

	web_custom_request("fdp_6", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"gaun9an7eo0000001707732907428\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.117.74\"}}},\"ssid\":\"l6yhproptc0000001707732907428\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"AE\",\"ev\":[{\"name\":\"TTFB\",\"value\":1524.6000000014901}],\"mt\":{\"appVersion\":\"6.10.0\",\"platform\":\"desktop\",\""
		"source\":\"network\",\"pageName\":\"Login\",\"pageUri\":\"/account/login\"},\"nm\":\"desktop-web-vitals\",\"t\":1707732908854}]}]", 
		LAST);

	web_add_cookie("s_sq=%5B%5BB%5D%5D; DOMAIN=www.flipkart.com");

	web_add_cookie("_px3=d656ed425f8a9979c9a1cc2c5952aa3b3333af29de475e56671e0737a3964717:22pK5kCNn4MmarEbvkisJ3v1GNI44k/miFWSrKcL0peSwPgeP3Yw7G9y/AtWc44woh9IuDHGRhOasLVbCet3qg==:1000:IJAw0EXLlla1ctfLfYPbdhJQ7ejfrI2yIFo6I1+R53LdYcY8vkSZ527r0ctfKwovfDTxYn1tmJmC41wd7Fg8UH80at7xN//1UUZtpdnYwTlK3kvAB6V0IYCmIfKEVRJovHGd0sVEWqC3NMrBG49HfBsOD8cGuaT2ymksefmeK+JFgxkp9jKQH4xZDokBvaLRWK/aeGjToN/fFAM5aTNWVmot8/IgKRvPUVhhA5F3uto=; DOMAIN=www.flipkart.com");

	web_url("www.flipkart.com_2", 
		"URL=https://www.flipkart.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("352e6f0f8034fab5.jpg_2", 
		"URL=https://rukminim1.flixcart.com/fk-p-flap/1600/270/image/352e6f0f8034fab5.jpg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("aa1b2bdcf519b468.jpg_2", 
		"URL=https://rukminim1.flixcart.com/fk-p-flap/1600/270/image/aa1b2bdcf519b468.jpg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t90.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_cookie("vh=593; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("business_9", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"gaun9an7eo0000001707732907428\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"l6yhproptc0000001707732907428\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"t\":1707732933142,\"en\":\"CEE\",\"er\":\"ViewportDifference\",\"esc\":\"JavaScript\",\"et\":\"Unknown\",\"es\":\"Non-Fatal\",\"em\":\""
		"width: 1280, height: 593, dpr: 1\"}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_concurrent_start(NULL);

	web_url("d24-20-66aekac1in-lenovo-original-imag2qwzazcdmqtb.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/ko8xtow0/monitor/t/a/y/d24-20-66aekac1in-lenovo-original-imag2qwzazcdmqtb.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t92.inf", 
		LAST);

	web_url("dkian-sa-digital-kids-camera-20mp-1080p-with-32gb-memory-card-original-imafmne6ueajav2g.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/k3khevk0/camera/b/y/k/dkian-sa-digital-kids-camera-20mp-1080p-with-32gb-memory-card-original-imafmne6ueajav2g.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t93.inf", 
		LAST);

	web_url("portable-ssd-sdssde30-1t00-g25-sandisk-original-imag3xx564jxpgrb.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/kpsnzww0/external-hard-drive/ssd/t/9/7/portable-ssd-sdssde30-1t00-g25-sandisk-original-imag3xx564jxpgrb.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t94.inf", 
		LAST);

	web_url("c-laserjet-m1005-mfp-hp-original-imafjfx2hvjhmysr.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/k0lbdzk0pkrrdj/printer-refurbished/a/5/h/c-laserjet-m1005-mfp-hp-original-imafjfx2hvjhmysr.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t95.inf", 
		LAST);

	web_url("ls22a334nhwxxl-full-hd-22-2022-ls22a334nhwxxl-samsung-original-imagsqhebkuehwfw.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/xif0q/monitor/o/p/5/ls22a334nhwxxl-full-hd-22-2022-ls22a334nhwxxl-samsung-original-imagsqhebkuehwfw.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("philips-s1121-45-s1121-45-original-imafry2qgxcwnm9r.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/kactpjk0/shaver/m/6/z/philips-s1121-45-s1121-45-original-imafry2qgxcwnm9r.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t97.inf", 
		LAST);

	web_url("d666db78034ac39f.jpg_2", 
		"URL=https://rukminim1.flixcart.com/fk-p-flap/1600/270/image/d666db78034ac39f.jpg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("1f03e99f6dc9f7a6.jpg_2", 
		"URL=https://rukminim1.flixcart.com/fk-p-flap/530/810/image/1f03e99f6dc9f7a6.jpg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("4-feet-pink-very-beautiful-best-quality-for-special-gift-125-13-original-imafgv92puzkdytg.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/jxz0brk0/stuffed-toy/n/t/s/4-feet-pink-very-beautiful-best-quality-for-special-gift-125-13-original-imafgv92puzkdytg.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("zeb-pixa-play-12-5-6-dobly-audio-led-projector-zebronics-original-imag9z3yujqmzqt4.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/kx50gi80/projector/r/9/p/zeb-pixa-play-12-5-6-dobly-audio-led-projector-zebronics-original-imag9z3yujqmzqt4.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("-original-imagtr8npfrsbx6s.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/xif0q/projector/r/a/o/-original-imagtr8npfrsbx6s.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("200-100-natural-california-pouch-happilo-original-imafzvw2tcazeur6.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/k6fd47k0/nut-dry-fruit/p/z/7/200-100-natural-california-pouch-happilo-original-imafzvw2tcazeur6.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("4-function-remote-control-high-speed-big-racing-car-toy-funkey-original-imafkg33umd8dy93.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/k0plpjk0/remote-control-toy/9/g/k/4-function-remote-control-high-speed-big-racing-car-toy-funkey-original-imafkg33umd8dy93.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t104.inf", 
		LAST);

	web_url("dd-380c-blk-jixing-original-imaeff94e9tczafp.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/acoustic-guitar/e/y/y/dd-380c-blk-jixing-original-imaeff94e9tczafp.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("brand-new-unidirectional-lapel-collar-mic-with-voice-recording-original-imafy2f764cqyyhn.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/ki7qw7k0-0/microphone/q/w/g/brand-new-unidirectional-lapel-collar-mic-with-voice-recording-original-imafy2f764cqyyhn.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("the-origin-of-species-original-imagg6zgfzpcq2tw.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/210/210/l5jxt3k0/book/m/a/w/the-origin-of-species-original-imagg6zgfzpcq2tw.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("510-chocolate-peanut-butter-crunchy-510g-jar-nut-butter-original-imagyzpqqfaguxny.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/klzhq4w0/jam-spread/w/q/u/510-chocolate-peanut-butter-crunchy-510g-jar-nut-butter-original-imagyzpqqfaguxny.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t108.inf", 
		LAST);

	web_url("60-wooden-earth-jigsaw-puzzle-60-pcs-webby-original-imagyc8hsdztzdzb.jpeg", 
		"URL=https://rukminim1.flixcart.com/image/210/210/kl5hh8w0/puzzle/g/n/g/60-wooden-earth-jigsaw-puzzle-60-pcs-webby-original-imagyc8hsdztzdzb.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("l-men-s-stylish-trendy-half-sleeve-digital-printed-latest-design-original-imagqz69mu8sryvh.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/250/250/xif0q/t-shirt/y/7/s/l-men-s-stylish-trendy-half-sleeve-digital-printed-latest-design-original-imagqz69mu8sryvh.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("casual-unisex-travel-bag-office-messenger-school-backpack-fft-original-imagbwfjdqj7n3fh.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/250/250/kzzw5u80/backpack/r/n/a/casual-unisex-travel-bag-office-messenger-school-backpack-fft-original-imagbwfjdqj7n3fh.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t111.inf", 
		LAST);

	web_url("-original-imagqwxnahxveash.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/250/250/xif0q/wallet-card-wallet/m/3/0/-original-imagqwxnahxveash.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("free-mandakini1-ofline-selection-unstitched-original-imags45yh6hdjygy.jpeg_2", 
		"URL=https://rukminim1.flixcart.com/image/250/250/xif0q/sari/l/w/m/free-mandakini1-ofline-selection-unstitched-original-imags45yh6hdjygy.jpeg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t113.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("business_10", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"t\":1707732933519,\"en\":\"PV\",\"_ev\":\"3.5\",\"ib\":false}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("29327f40e9c4d26b.png_2", 
		"URL=https://rukminim1.flixcart.com/flap/64/64/image/29327f40e9c4d26b.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("22fddf3c7da4c4f4.png_2", 
		"URL=https://rukminim1.flixcart.com/flap/64/64/image/22fddf3c7da4c4f4.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("0d75b34f7d8fbcb3.png_2", 
		"URL=https://rukminim1.flixcart.com/fk-p-flap/64/64/image/0d75b34f7d8fbcb3.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t117.inf", 
		LAST);

	web_url("69c6589653afdb9a.png_2", 
		"URL=https://rukminim1.flixcart.com/flap/64/64/image/69c6589653afdb9a.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("ab7e2b022a4587dd.jpg_2", 
		"URL=https://rukminim1.flixcart.com/flap/64/64/image/ab7e2b022a4587dd.jpg?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("0139228b2f7eb413.jpg_2", 
		"URL=https://rukminim1.flixcart.com/fk-p-flap/64/64/image/0139228b2f7eb413.jpg?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("71050627a56b4693.png_2", 
		"URL=https://rukminim1.flixcart.com/flap/64/64/image/71050627a56b4693.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("dff3f7adcf3a90c6.png_2", 
		"URL=https://rukminim1.flixcart.com/flap/64/64/image/dff3f7adcf3a90c6.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("05d708653beff580.png_2", 
		"URL=https://rukminim1.flixcart.com/fk-p-flap/64/64/image/05d708653beff580.png?q=100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("ed27f892-1bc6-462f-805b-953f5add4f6a.jpg_2", 
		"URL=https://rukminim1.flixcart.com/www/1070/790/promos/26/09/2023/ed27f892-1bc6-462f-805b-953f5add4f6a.jpg?q=80", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("LoginBottomSheet.d805b2.css", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/LoginBottomSheet.d805b2.css", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("LoginBottomSheet.2b9b74.js", 
		"URL=https://static-assets-web.flixcart.com/batman-returns/batman-returns/p/LoginBottomSheet.2b9b74.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("sw.js_3", 
		"URL=https://www.flipkart.com/sw.js?k=6669f663c68fd3fdc54518233992960c", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t127.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("s31246587499325", 
		"URL=https://flipkart.d1.sc.omtrdc.net/b/ss/flipkart-prd/1/JS-1.5.1/s31246587499325", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t128.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=AQB=1&ndh=1&pf=1&t=12%2F1%2F2024%2015%3A45%3A33%201%20-330&mid=91301039696235577497612905762942785164&aamlh=12&ce=UTF-8&ns=flipkart&pageName=HomePage&g=https%3A%2F%2Fwww.flipkart.com%2F&cc=INR&events=event497%3D1%2Cevent251%3D500%2Cevent252%3Dundefined%2Cevent253%3Dundefined%2Cevent1&products=%3BHomePage%3B%3B%3B%3BeVar93%3DFLIPKART&aamb=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=HomePage&v1=HomePage&c2=fklite&v2=fklite&c3=FLIPKART%3AHomePage&v3=FLIPKART%3AHomePage&c4=HomePage&v4"
		"=logout&v8=HomePage&c13=0.0.3&c25=FLIPKART%3AHomePage&c26=HomePage&v31="
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
		"d%7Ch_STG%7Cprestart%7Cb351a882%7Ch_STG%7C2HTpH76CvAR4hrhBhUTr0t%7C705292d0%7Ch_STG%7C3fRX0dv4OnGTBKxdn9dkN2%7C7dd0497a%7Ch_STG%7Cprestart%7C6b72a02e%7Ch_STG%7Cid65wXrCUOYpcOyV6JNo5%7Ce7ddc439%7Ch&c35=https%3A%2F%2Fwww.flipkart.com%2F&c39=500-NA-NA&v42=BrowserLaunch&c48=9400_NETINFO_4g_null&v50=HomePage&c54=8&c66=clsisdo860r7b1ibfvbqfmsxm-BR1707733409766&v85=15f894bb_STG%7ClaunchedGroup%7Cbee87c24%7Ch&v99=NON_LOGGED_IN&v139=BLUE&v154=en&v181=BLUE&s=1280x720&c=24&j=1.6&v=N&k=Y&bw=1280&bh=593&AQE=1", 
		LAST);

	web_add_cookie("_px3=34f0a220ef5b988bfe7bf8298546f1d4038c9d88ce93dfec1b3de89d1ef86ddf:ZOs+CFYaGNJAmeqpQwEazmKSFYd6xvdMPDxTlluaN3xlGbwwOK32flVzahfAg9jBZX69dO/eAmVSrHZhadWTLQ==:1000:MuGzWKUZ09Dbe5P/Y2qRK7D9cgm9oAFwB3493fA6Jb4MbCpEg8IRHaOkNmzU21DyEodfGVu31K7NH3jj6tSgfY57dAv+1qHkGwsBaAVzP1zSC2SSspADJhwbeGrj8tjKt8AhUWVvon/VJVZlyR7eOQTQRuWnbGOcLl5q2Q7ja60oB7meFq+I5ofqaCRO47yLUy1218siM1rEICEIjAoGkc6pZjLLC1zD/5SfqfIrqyw=; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("business_11", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"68y1pmb72o000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.48.134.15\"}}},\"ssid\":\"1707733496788\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"BDE\",\"_ev\":1.3,\"ty\":\"INIT_SUCCEED\",\"v\":\"en\",\"ttc\":\"162\",\"t\":1707732933526},{\"t\":1707732934711,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":1,\""
		"wvt\":\"NAV_EXPANDABLE\",\"wtp\":\"rich_navigation\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"st\":1707732931818,\"pv\":100,\"f\":true,\"ct\":\"contentCollection\"},{\"t\":1707732934711,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"wk\":\"2.bannerAdCard.BANNERADS\",\"st\":1707732931820,\"pv\":100,\"f\":true,\"ct\":\"bannerAdCard\"},{\"t\":1707732934712,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":3,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3\",\"biid\":\""
		"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"wk\":\"3.dealCard.OMU\",\"st\":1707732931820,\"pv\":39.5348846912384,\"f\":true,\"ct\":\"dealCard\"},{\"t\":1707732934712,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":0,\"wvt\":\"ATLAS_RHS_ANNOUNCEMENT\",\"wtp\":\"rhs_announcement\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_4.N9HXXTJYE5YL\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"rhsAnnouncement\",\"ctl\":null,\"wps\":4,\"pid\""
		":null,\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_4.N9HXXTJYE5YL\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":-992260216,\"st\":1707732931769,\"pv\":37.96059191226959,\"f\":true},{\"t\":1707732934712,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":4,\"wvt\":\"ATLAS_RHS_ANNOUNCEMENT\",\"wtp\":\"rhs_announcement\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_4.N9HXXTJYE5YL\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\""
		",\"wk\":\"4.rhsAnnouncement.RHS_ANNOUNCEMENT\",\"st\":1707732931769,\"pv\":37.96059191226959,\"f\":true,\"ct\":\"rhsAnnouncement\"},{\"t\":1707732934712,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2.7RG9A42948N0\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\""
		":null,\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_2\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":1822336440,\"st\":1707732931825,\"pv\":100,\"f\":true},{\"t\":1707732934713,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3.Q5LU1U8PHMK6\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"dealCard\",\""
		"ctl\":\"Top Mirrorless Cameras\",\"wps\":3,\"pid\":\"CAMFMN29FUTHMBYK\",\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":-2052440786,\"st\":1707732931825,\"pv\":22.22222238779068,\"f\":true},{\"t\":1707732934713,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\""
		"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3.D54DFY00C5JD\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"dealCard\",\"ctl\":\"Printers\",\"wps\":3,\"pid\":\"PRNDXHZE5R9HUJJY\",\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":-2052440786,\"st\":1707732931827,\"pv\":22.22222238779068,\"f\":true},{\"t\":1707732934713,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of "
		"Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3.AYZ2E25L30EX\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"dealCard\",\"ctl\":\"Best of Shavers\",\"wps\":3,\"pid\":\"SHVGJVRKV6DPQFGK\",\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":-2052440786,\"st\":1707732931827,\"pv\":22.22222238779068,\"f\":true},{\"t\":1707732934713,\"en\":\"DCI\",\"_ev\":\"3.1\",\""
		"p\":4,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3.YYBWZPGQ62HE\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"dealCard\",\"ctl\":\"Sandisk Extreme Portable\",\"wps\":3,\"pid\":\"ACCG25YJM3SJDNFU\",\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3\",\"pbiid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":-2052440786,\"st\":1707732931827,\"pv\""
		":22.22222238779068,\"f\":true},{\"t\":1707732934713,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":5,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3.ZIEW022R2RTS\",\"biid\":\"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"ct\":\"dealCard\",\"ctl\":\"Monitors\",\"wps\":3,\"pid\":\"MONFV5HRNF4QFVG4\",\"piid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_3\",\"pbiid\":\""
		"9cdb8713-9295-4bfb-8527-33d8f8be4e9d\",\"uvi\":-2052440786,\"st\":1707732931827,\"pv\":17.92534738779068,\"f\":true},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.CBUR1Q46W5F1\",\"ct\":\"navigationCard\",\"p\":1,\"f\":true,\"st\":1707732931827,\"pv\":100,\"wps\":1,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732934714},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.ZRQ4DKH28K8J\",\"ct\":\""
		"navigationCard\",\"p\":2,\"f\":true,\"st\":1707732931827,\"pv\":100,\"wps\":2,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732934714},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.B5YIQCE8VHYO\",\"ct\":\"navigationCard\",\"p\":3,\"f\":true,\"st\":1707732931827,\"pv\":100,\"wps\":3,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732934714},{\"en\":\"DCI\",\"iid\":\""
		"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.JKA0LKU8OMVP\",\"ct\":\"navigationCard\",\"p\":4,\"f\":true,\"st\":1707732931827,\"pv\":100,\"wps\":4,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732934715},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.A7YT3X39TTON\",\"ct\":\"navigationCard\",\"p\":5,\"f\":true,\"st\":1707732931827,\"pv\":100,\"wps\":5,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\""
		":1707732934715},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.LO4IWVHA61BX\",\"ct\":\"navigationCard\",\"p\":6,\"f\":true,\"st\":1707732931827,\"pv\":100,\"wps\":6,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732934715},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.V4ZPKTOAO321\",\"ct\":\"navigationCard\",\"p\":7,\"f\":true,\"st\":1707732931827,\"pv\":100,\"wps\":7,\"wk\":\""
		"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732934715},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.CSZJ9U6U82HR\",\"ct\":\"navigationCard\",\"p\":8,\"f\":true,\"st\":1707732931827,\"pv\":100,\"wps\":8,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732934715},{\"en\":\"DCI\",\"iid\":\"M_9cdb8713-9295-4bfb-8527-33d8f8be4e9d_1_372UD5BXDFYS_MC.EGGUS4T1KINV\",\"ct\":\"navigationCard\",\"p\":9,\"f\":true,\"st\":1707732931827,"
		"\"pv\":100,\"wps\":9,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707732934715}]}", 
		LAST);

	return 0;
}
