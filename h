#!/bin/bash
MYIP=$(curl -sS ipv4.icanhazip.com)
Name=$(curl -sS https://raw.githubusercontent.com/salamsatuu/psby/main/daftar | grep $MYIP | awk '{print $2}')
echo "Checking VPS"
#########################
IZIN=$(curl -sS https://raw.githubusercontent.com/salamsatuu/psby/main/daftar | awk '{print $4}' | grep $MYIP)
if [ $MYIP = $MYIP ]; then
echo -e "\e[32mWelcome To SC XLORD × DIMZ\e[0m"
else
echo -e "\e[31mPermission Denied!\e[0m";
exit 0
fi
#EXPIRED
expired=$(curl -sS https://raw.githubusercontent.com/salamsatuu/psby/main/daftar | grep $MYIP | awk '{print $3}')
echo $expired > /root/expired.txt
today=$(date -d +1day +%Y-%m-%d)
while read expired
do
        exp=$(echo $expired | curl -sS https://raw.githubusercontent.com/salamsatuu/psby/main/daftar | grep $MYIP | awk '{print $3}')
        if [[ $exp < $today ]]; then
                Exp2="\033[1;31mExpired\033[0m"
        else
        Exp2=$(curl -sS https://raw.githubusercontent.com/salamsatuu/psby/main/daftar | grep $MYIP | awk '{print $3}')
        fi
done < /root/expired.txt
rm /root/expired.txt
# Color Validation
purple() { echo -e "\\033[35;1m${*}\\033[0m"; }
green() { echo -e "\\033[32;1m${*}\\033[0m"; }
red() { echo -e "\\033[31;1m${*}\\033[0m"; }
function line_atas(){
echo -e "   ${g}┌───────────────────────────────────────────────┐${p}"
}
function line_up(){
echo -e "      ${g}┌─────────────────────────────────────────┐${p}"
}
function line_ip() {
echo -e "      ${g}└─────────────────────────────────────────┘${p}"
}
function line_bawah() {
echo -e "   ${g}└───────────────────────────────────────────────┘${p}"
}
function line_tengah() {
echo -e "   ${g}────────────────────────────────────────${p}"
}
DF='\e[39m'
Bold='\e[1m'
Blink='\e[5m'
yell='\e[33m'
red='\e[31m'
green='\e[32m'
blue='\e[34m'
PURPLE='\e[35m'
White='\033[0;37m'
cyan='\e[36m'
g='\e[36m'
Lred='\e[91m'
Lgreen='\e[92m'
Lyellow='\e[93m'
NC='\e[0m'
GREEN='\033[0;32m'
ORANGE='\033[0;33m'
LIGHT='\033[0;37m'
# Color
RED='\033[0;31m'
NC='\033[0m'
GREEN='\033[0;32m'
ORANGE='\033[0;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
LIGHT='\033[0;37m'
######################################

# // ───>>> BACKGROUND

BG_GRN="\033[42;1m" # BG HIJAU
BG_RED="\033[45;1m" # BG MERAH
BG_CYN="\033[46;1m" # BG CYANN
BG_BLU="\033[44;1m" # BG BIRU
BG_PUR="\033[43;1m" # BG KUNING
BG_YEL="\033[93;1m" # BG konengWaduk
BG_WHT="\033[47;1m" # BG PUTIH
BG_RED="\033[41;97;1m" # BG MERAH
# VPS Information
#Domain
domain=$(cat /etc/xray/domain)
#Status certificate
modifyTime=$(stat $HOME/.acme.sh/${domain}_ecc/${domain}.key | sed -n '7,6p' | awk '{print $2" "$3" "$4" "$5}')
modifyTime1=$(date +%s -d "${modifyTime}")
currentTime=$(date +%s)
cpu_usage1="$(ps aux | awk 'BEGIN {sum=0} {sum+=$3}; END {print sum}')"
cpu_usage="$((${cpu_usage1/\.*} / ${coREDiilik:-1}))"
cpu_usage+=" %"
stampDiff=$(expr ${currentTime} - ${modifyTime1})
days=$(expr ${stampDiff} / 86400)
remainingDays=$(expr 90 - ${days})
tlsStatus=${remainingDays}
if [[ ${remainingDays} -le 0 ]]; then
        tlsStatus="expired"
fi
DATE=$(date +'%Y-%m-%d')
datediff() {
    d1=$(date -d "$1" +%s)
    d2=$(date -d "$2" +%s)
    echo -e "$COLOR1 $NC Expiry In   : $(( (d1 - d2) / 86400 )) Days"
}
mai="datediff "$Exp" "$DATE""

today=`date -d "0 days" +"%Y-%m-%d"`

# CERTIFICATE STATUS
d1=$(date -d "$exp" +%s)
d2=$(date -d "$today" +%s)
certificate=$(( (d1 - d2) / 86400 ))
# OS Uptime
uptime="$(uptime -p | cut -d " " -f 2-10)"
# Download
vnstat_profile=$(vnstat | sed -n '3p' | awk '{print $1}' | grep -o '[^:]*')
vnstat -i ${vnstat_profile} >/root/t1
bulan=$(date +%b)
today=$(vnstat -i ${vnstat_profile} | grep today | awk '{print $8}')
todayd=$(vnstat -i ${vnstat_profile} | grep today | awk '{print $8}')
today_v=$(vnstat -i ${vnstat_profile} | grep today | awk '{print $9}')
today_rx=$(vnstat -i ${vnstat_profile} | grep today | awk '{print $2}')
today_rxv=$(vnstat -i ${vnstat_profile} | grep today | awk '{print $3}')
today_tx=$(vnstat -i ${vnstat_profile} | grep today | awk '{print $5}')
today_txv=$(vnstat -i ${vnstat_profile} | grep today | awk '{print $6}')
if [ "$(grep -wc ${bulan} /root/t1)" != '0' ]; then
    bulan=$(date +%b)
    month=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $9}')
    month_v=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $10}')
    month_rx=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $3}')
    month_rxv=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $4}')
    month_tx=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $6}')
    month_txv=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $7}')
else
    bulan=$(date +%Y-%m)
    month=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $8}')
    month_v=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $9}')
    month_rx=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $2}')
    month_rxv=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $3}')
    month_tx=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $5}')
    month_txv=$(vnstat -i ${vnstat_profile} | grep "$bulan " | awk '{print $6}')
fi
# Getting CPU Information
cpu_usage1="$(ps aux | awk 'BEGIN {sum=0} {sum+=$3}; END {print sum}')"
cpu_usage="$((${cpu_usage1/\.*} / ${corediilik:-1}))"
cpu_usage+=" %"
ISP=$(cat /usr/local/etc/xray/org)
WKT=$(cat /usr/local/etc/xray/timezone)
DAY=$(date +%A)
DATE=$(date +%m/%d/%Y)
DATE2=$(date -R | cut -d " " -f -5)
IPVPS=$(curl -s ipinfo.io/ip )
cname=$( awk -F: '/model name/ {name=$2} END {print name}' /proc/cpuinfo )
cores=$( awk -F: '/model name/ {core++} END {print core}' /proc/cpuinfo )
freq=$( awk -F: ' /cpu MHz/ {freq=$2} END {print freq}' /proc/cpuinfo )
tram=$( free -m | awk 'NR==2 {print $2}' )
uram=$( free -m | awk 'NR==2 {print $3}' )
fram=$( free -m | awk 'NR==2 {print $4}' )

#STATUS RUNNING
cek=$(service ssh status | grep active | cut -d ' ' -f5)

if [ "$cek" = "active" ]; then

stat=-f5

else

stat=-f7

fi
ssh=$(service ssh status | grep active | cut -d ' ' $stat)
if [ "$ssh" = "active" ]; then
xssh="${green}ON ${NC}"
else
xssh="${red}OFF${NC}"
fi
nginx=$(service nginx status | grep active | cut -d ' ' $stat)
if [ "$nginx" = "active" ]; then
xnginx="${green}ON ${NC}"
else
xnginx="${red}OFF${NC}"
fi
xray=$(service xray status | grep active | cut -d ' ' $stat)
if [ "$xray" = "active" ]; then
xxray="${green}ON ${NC}"
else
xxray="${red}OFF${NC}"
fi
clear 
echo -e " ${CYAN} ┌─────────────────────────────────────────────────┐${NC}"
echo -e " ${CYAN} │ ${NC}${BG_BLU}              𖦹  XLORD × DIMZ  𖦹               ${NC} ${CYAN}│$NC"
echo -e " ${CYAN} └─────────────────────────────────────────────────┘${NC}"
echo -e " ${CYAN} ┌─────────────────────────────────────────────────┐${NC}"
echo -e " ${CYAN} │$NC $NC ISP ${NC}              : ${RED}$ISP${NC}"
echo -e " ${CYAN} │$NC $NC IP VPS ${NC}           : ${BLUE}$IPVPS${NC}"
echo -e " ${CYAN} │$NC $NC DOMAIN ${NC}           : $domain"
echo -e " ${CYAN} │$NC $NC RAM USAGE ${NC}        : $uram MB | $tram MB"
echo -e " ${CYAN} │$NC $NC CPU USAGE ${NC}        : $cpu_usage"
echo -e " ${CYAN} │$NC $NC BW D ${NC}             : \e[32m$todayd\e[0m \e[32m$today_v\e[0m (Daily)"
echo -e " ${CYAN} │$NC $NC BW M ${NC}             : \e[32m$month\e[0m \e[32m$month_v\e[0m (Monthly)"
echo -e " ${CYAN} └─────────────────────────────────────────────────┘${NC}"
echo ""
   echo -e "   ${CYAN} ┌────────────────────────────────────────────┐${NC} "
echo -e "   ${CYAN} │  SSH : $xssh ${NC} ${CYAN}│   NGINX : $xnginx ${CYAN}│  XRAY : $xxray  ${CYAN}│"
echo -e "   ${CYAN} └────────────────────────────────────────────┘${NC} "
line_atas
echo -e " ${CYAN}  │${NC}${BG_BLU}              𖦹  MENU SCRIPT  𖦹               ${NC} ${CYAN}│$NC"
line_bawah
line_up
echo -e "      ${g}│  ${gb}[1] => Ssh Menu ${NC}   ${g}│  ${gb}[7] => Running   ${g}│"
echo -e "      ${g}│  ${gb}[2] => Vmess Menu ${NC} ${g}│  ${gb}[8] => Restar Vpn${g}│"
echo -e "      ${g}│  ${gb}[3] => Vless Menu ${NC} ${g}│  ${gb}[9] => Speedtest ${g}│"
echo -e "      ${g}│  ${gb}[4] => Trojan Menu ${NC}${g}│  ${gb}[10] => Domain   ${g}│"
echo -e "      ${g}│  ${gb}[5] => Tcp Bbr Menu${NC}${g}│  ${gb}[11] => Backup   ${g}│"
echo -e "      ${g}│  ${gb}[6] => Ganti Banner${NC}${g}│  ${gb}[12] => DNS Menu ${g}│"
echo -e "      ${g}│     ${gb}[77] => Reboot Vps ${gb}[88] => Gotop             ${g}│"
echo -e "      ${g}│   ${gb}[99] => Usage menu ${gb}[00] => Bot Manage          ${g}│"
line_ip
read -p " Select menu (00-99) => "  opt
echo -e   ""
case $opt in
1) clear ; m-sshovpn ;;
2) clear ; m-vmess ;;
3) clear ; m-vless ;;
4) clear ; m-trojan ;;
5) clear ; menu-tcp ;;
6) clear ; nano /etc/issue.net ;;
7) clear ; running ;;
8) clear ; restart ;;
9) clear ; speedtest ;;
10) clear ; m-domain;;
11) clear ; backupmenu ;;
12) clear ; dns ;;
77) clear ; reboot ;;
88) clear ; gotop ;;
99) clear ; xraymonitor ;;
00) clear ; botmenu ;;
x) exit ;;
*) menu ;;
esac
