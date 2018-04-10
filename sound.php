<?php
$log_file = 'sound_log.txt';    //log file name
$data = $_POST['data'];
$today = date("Y-m-d H:i:s");
$str = $today .', '.$data."\n"; //two fields in one second, the timestamy
//echo "This is from the server"
//now we open the file
if(file_exists($loh_file)){
    $fp=fopen($log_file,"a");
    fwrite($fp, $str);
    fclose($fp);
}else{
    $fp = fopen($log_file,"w");
    fwrite($fp, $str);
    fclose($fp);
}
echo "Data is stored\n";
?>
