<?php
$z[0]=Array("field","",409,428);
$z[0][4]['name']="title";
$z[1]=Array("global","",429,455);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",496,518);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",558,609);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1868,1903);
$z[4][4]['filename']="head.htm";
$z[5]=Array("list","\r\n      <li class=\"blog_list_item bg_white anim_emt b_to_t\"> <a href=\"[field:arcurl/]\" target=\"_blank\" class=\"box_shadow trans\">\r\n        <div class=\"info\">\r\n          <h3 class=\"title trans\">[field:title/]</h3>\r\n          <hr class=\"trans\">\r\n          <p>[field:description function='cn_substr(@me,180)'/]</p>\r\n          <span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span> </div>\r\n        </a> </li>\r\n      ",2014,2468);
$z[5][4]['pagesize']="12";
$z[6]=Array("global","",2563,2589);
$z[6][4]['name']="cfg_webname";
$z[7]=Array("field","",2604,2663);
$z[7][4]['name']="typeid";
$z[7][4]['function']="GetTopTypename(@me)";
$z[8]=Array("tag","\r\n      <li class=\"cat-item cat-item-11\"><a href=\"/plus/search.php?q=[field:tag /]\" >[field:tag /]</a> </li>\r\n      ",2767,2937);
$z[8][4]['row']="10";
$z[8][4]['getall']="1";
$z[8][4]['sort']="month";
$z[9]=Array("include","",3111,3148);
$z[9][4]['filename']="footer.htm";

?>