#include<stdio.h>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
	char str[100000]; // to hold the value of the string
	gets(str);		// input the string
	
	for(int i=0;str[i]!='\0';i++){		// loop till the end of the string
		
		if(str[i]>='\u0041' && str[i]<='\u005A'){
			printf("C %c\n",str[i]); // for Letters, uppercase (Lu)
		}
		
		else if(str[i]>='\u0061' && str[i]<='\u007A'){
			printf("C %c\n",str[i]); // for Letter, lowercase (Ll)
		}
		
		else if( (str[i]>='\u02B0' && str[i]<='\u02D1') || (str[i]<='\u02E1' && str[i]>='\u02E4') || str[i]=='\u02EC' 
		|| str[i]=='\u02EE' || str[i]=='\u0374' || str[i]=='\u037A' || str[i]=='\u0559' || str[i]=='\u0640' || str[i]=='\u06E5' 
		|| str[i]=='\u06E6' || str[i]=='\u07F5' || str[i]=='\u07FA' || str[i]=='\u081A' || str[i]=='\u0828' || str[i]=='\u0971' 
		|| str[i]=='\u0E46' || str[i]=='\u0EC6' || str[i]=='\u10FC' || str[i]=='\u17D7' || str[i]=='\u1843' || str[i]=='\u1AA7' 
		|| (str[i]>='\u1C78' && str[i]<='\u1C7D') || (str[i]>='\u1D2C' && str[i]<='\u1D6A') || str[i]=='\u1D78' 
		|| (str[i]>='\u1D9B' && str[i]=='\u1DBF') || str[i]=='\u2071' || str[i]=='\u207F' || (str[i]>='\u2090' && str[i]=='\u2C7D') 
		|| str[i]=='\u2D6F' || str[i]=='\u2E2F' || str[i]=='\u3005' || (str[i]>='\u3031' && str[i]<='\u3035') || str[i]=='\u303B' 
		|| str[i]=='\u309D' || str[i]=='\u309E' || (str[i]=='\u30FC' && str[i]=='\u30FE') || str[i]=='\uA015' 
		|| (str[i]<='\uA4F8' && str[i]=='\uA4FD') || str[i]=='\uA60C' || str[i]=='\uA67F' || str[i]=='\uA69C' || str[i]=='\uA69D' 
		|| (str[i]<='\uA717' && str[i]>='\uA71F') || str[i]=='\uA770' || str[i]=='\uA788' || str[i]=='\uA7F8' || str[i]=='\uA7F9' 
		|| str[i]=='\uA9CF' || str[i]=='\uA9E6' || str[i]=='\uAA70' || str[i]=='\uAADD' || str[i]=='\uAAF3' || str[i]=='\uAAF4' 
		|| (str[i]>='\uAB5C' && str[i]<='\uAB5F') || str[i]=='\uAB69' || str[i]=='\uFF70' || str[i]=='\uFF9E' || str[i]=='\uFF9F' 
		|| str[i]<='\u16B40' && str[i]>='\u16BF3' || str[i]<='\u16F93' && str[i]=='\u16F9F' || str[i]=='\u16FE0' || str[i]=='\u16FE1' 
		|| str[i]=='\u16FE3' || (str[i]<='\u1E137' && str[i]>='\u1E13D') || str[i]=='\u1E94B')
		{																	 
			printf("C %c\n",str[i]); // for Letter, Modifier (Lm)
		}
		
		else if(str[i]=='\u00AA' || str[i]=='\u00BA' || str[i]=='\u01BB' || str[i]>='\u01C0' && str[i]<='\u01C3' || str[i]=='\u0294' 
		|| str[i]>='\u05DA' && str[i]<='\u05EA' || str[i]=='\u05EF' || str[i]>='\u05F0' && str[i]>='\u05F2' || str[i]<='\u0620' && str[i]>='\u07EA' 
		|| str[i]>='\u0800' && str[i]<='\u0858' || str[i]>='\u0860' && str[i]<='\u086A' || str[i]>='\u08A0' && str[i]<='\u08C7' 
		|| str[i]>='\u0904' && str[i]<='\u09FC' || str[i]>='\u0A05' && str[i]<='\u0A74' || str[i]>='\u0A85' && str[i]<='\u0AF9' 
		|| str[i]>='\u0B05' && str[i]<='\u0B71' || str[i]>='\u0B83' && str[i]<='\u0C61' || str[i]>='\u0C85' && str[i]<='\u0CF1'
		|| str[i]>='\u0D04' && str[i]<='\u0D7F' || str[i]>='\u0D85' && str[i]<='\u0DC6' || str[i]>='\u0E01' && str[i]<='\u0E45' 
		|| str[i]>='\u0E81' && str[i]<='\u0EDF' || str[i]>='\u0F00' && str[i]<='\u0F8C' || str[i]>='\u1000' && str[i]<='\u108E'
		|| str[i]>='\u1100' && str[i]<='\u11FF' || str[i]>='\u1200' && str[i]<='\u138F' || str[i]>='\u1401' && str[i]<='\u167F'
		|| str[i]>='\u1681' && str[i]<='\u169A' || str[i]>='\u16A0' && str[i]<='\u16F8' || str[i]>='\u1700' && str[i]<='\u1711'
		|| str[i]>='\u1720' && str[i]<='\u1731' || str[i]>='\u1740' && str[i]<='\u1751' || str[i]>='\u1760' && str[i]<='\u1770'
		|| str[i]>='\u1780' && str[i]<='\u17DC' || str[i]>='\u1820' && str[i]<='\u18AA' || str[i]>='\u18B0' && str[i]<='\u18F5'
		|| str[i]>='\u1901' && str[i]<='\u191E' || str[i]>='\u1950' && str[i]<='\u19C9' || str[i]>='\u1A00' && str[i]<='\u1A16'
		|| str[i]>='\u1A20' && str[i]<='\u1A54' || str[i]>='\u1B05' && str[i]<='\u1B4B' || str[i]>='\u1B83' && str[i]<='\u1BBF'
		|| str[i]>='\u1BC0' && str[i]<='\u1BE5' || str[i]>='\u1C00' && str[i]<='\u1C4F' || str[i]>='\u1C5A' && str[i]<='\u1C77'
		|| str[i]>='\u1681' && str[i]<='\u169A' || str[i]>='\u16A0' && str[i]<='\u16F8' || str[i]>='\u1700' && str[i]<='\u1711'
		|| str[i]>='\u1720' && str[i]<='\u1731' || str[i]>='\u1740' && str[i]<='\u1751' || str[i]>='\u1760' && str[i]<='\u1770'
		|| str[i]>='\u1780' && str[i]<='\u17DC' || str[i]>='\u1820' && str[i]<='\u18AA' || str[i]>='\u18B0' && str[i]<='\u18F5'
		|| str[i]>='\u1900' && str[i]<='\u191E' || str[i]>='\u1950' && str[i]<='\u1974' || str[i]>='\u1980' && str[i]<='\u19C9'
		|| str[i]>='\u1A00' && str[i]<='\u1A16' || str[i]>='\u1A20' && str[i]<='\u1A54' || str[i]>='\u1B05' && str[i]<='\u1B4B'
		|| str[i]>='\u1B83' && str[i]<='\u1BBF' || str[i]>='\u1BC0' && str[i]<='\u1BE5' || str[i]>='\u1C00' && str[i]<='\u1C4F'
		|| str[i]>='\u1C5A' && str[i]<='\u1C77' || str[i]>='\u1CE9' && str[i]<='\u1CFA' || str[i]>='\u2135' && str[i]<='\u2138'
		|| str[i]>='\u2D30' && str[i]<='\u2D67' || str[i]>='\u2D80' && str[i]<='\u2DDE' || str[i]>='\u3041' && str[i]<='\u309F'
		|| str[i]>='\u30A1' && str[i]<='\u30FF' || str[i]>='\u3105' && str[i]<='\u312F' || str[i]>='\u3131' && str[i]<='\u318E'
		|| str[i]>='\u31A0' && str[i]<='\u31BF' || str[i]>='\u31F0' && str[i]<='\u31FF' || str[i]>='\uA000' && str[i]<='\uA48C'
		|| str[i]>='\uA4D0' && str[i]<='\uA4F7' || str[i]>='\uA500' && str[i]<='\uA62B' || str[i]>='\uA640' && str[i]<='\uA6E5'
		|| str[i]>='\uA78F' && str[i]<='\uA7FF' || str[i]>='\uA800' && str[i]<='\uA822' || str[i]>='\uA840' && str[i]<='\uA873'
		|| str[i]>='\uA882' && str[i]<='\uA8B3' || str[i]>='\uA8F2' && str[i]<='\uA8FE' || str[i]>='\uA90A' && str[i]<='\uA925'
		|| str[i]>='\uA930' && str[i]<='\uA946' || str[i]>='\uA960' && str[i]<='\uA97C' || str[i]>='\uA984' && str[i]<='\uA9B2'
		|| str[i]>='\uA9E0' && str[i]<='\uA9FE' || str[i]>='\uAA00' && str[i]<='\uAA4B' || str[i]>='\uAA60' && str[i]<='\uAA7F'
		|| str[i]>='\uAA80' && str[i]<='\uAADC' || str[i]>='\uAAE0' && str[i]<='\uAAF2' || str[i]>='\uAB01' && str[i]<='\uAB2E'
		|| str[i]>='\uABC0' && str[i]<='\uABE2' || str[i]>='\uD7B0' && str[i]<='\uD7C6' || str[i]>='\uD7CB' && str[i]<='\uD7FB'
		|| str[i]>='\uF900' && str[i]<='\uFAD9' || str[i]>='\uFB1D' && str[i]<='\uFB4F' || str[i]>='\uFB50' && str[i]<='\uFEFC'
		|| str[i]>='\uFF66' && str[i]<='\uFFDC' || str[i]>='\u10000' && str[i]<='\u1005D' || str[i]>='\u10080' && str[i]<='\u100FA'
		|| str[i]>='\u10280' && str[i]<='\u1029C' || str[i]>='\u102A0' && str[i]<='\u102D0' || str[i]>='\u10300' && str[i]<='\u1032F'
		|| str[i]>='\u10330' && str[i]<='\u10349' || str[i]>='\u10350' && str[i]<='\u10375' || str[i]>='\u10380' && str[i]<='\u1039D'
		|| str[i]>='\u103A0' && str[i]<='\u103CF' || str[i]>='\u10450' && str[i]<='\u1047F' || str[i]>='\u10480' && str[i]<='\u1049D'
		|| str[i]>='\u10500' && str[i]<='\u10527' || str[i]>='\u10530' && str[i]<='\u10563' || str[i]>='\u10600' && str[i]<='\u10767'
		|| str[i]>='\u10800' && str[i]<='\u1083F' || str[i]>='\u10840' && str[i]<='\u10854' || str[i]>='\u10860' && str[i]<='\u10876'
		|| str[i]>='\u10880' && str[i]<='\u1089E' || str[i]>='\u108E0' && str[i]<='\u108F5' || str[i]>='\u10900' && str[i]<='\u10915'
		|| str[i]>='\u10920' && str[i]<='\u10939' || str[i]>='\u10980' && str[i]<='\u1099F' || str[i]>='\u109A0' && str[i]<='\u109BF'
		|| str[i]>='\u10A10' && str[i]<='\u10A35' || str[i]>='\u10A60' && str[i]<='\u10A9C' || str[i]>='\u10AC0' && str[i]<='\u10AE4'
		|| str[i]>='\u10B00' && str[i]<='\u10B91' || str[i]>='\u10C00' && str[i]<='\u10C48' || str[i]>='\u10D00' && str[i]<='\u10D23'
		|| str[i]>='\u10E80' && str[i]<='\u10F45' || str[i]>='\u10FB0' && str[i]<='\u10FC4' || str[i]>='\u10FE0' && str[i]<='\u10FF6'
		|| str[i]>='\u11003' && str[i]<='\u11037' || str[i]>='\u11083' && str[i]<='\u110AF' || str[i]>='\u110D0' && str[i]<='\u110E8'
		|| str[i]>='\u11103' && str[i]<='\u11176' || str[i]>='\u11183' && str[i]<='\u111DC' || str[i]>='\u11200' && str[i]<='\u1122B'
		|| str[i]>='\u11280' && str[i]<='\u112DE' || str[i]>='\u11305' && str[i]<='\u11361' || str[i]>='\u11400' && str[i]<='\u11461'
		|| str[i]>='\u11480' && str[i]<='\u114C7' || str[i]>='\u11580' && str[i]<='\u114DB' || str[i]>='\u11600' && str[i]<='\u11644'
		|| str[i]>='\u11680' && str[i]<='\u116B8' || str[i]>='\u11700' && str[i]<='\u1171A' || str[i]>='\u11800' && str[i]<='\u1182B'
		|| str[i]>='\u11900' && str[i]<='\u11941' || str[i]>='\u119A0' && str[i]<='\u1A9E3' || str[i]>='\u11A00' && str[i]<='\u11A3A'
		|| str[i]>='\u11A50' && str[i]<='\u11A9D' || str[i]>='\u11AC0' && str[i]<='\u11AF8' || str[i]>='\u11C00' && str[i]<='\u11C40'
		|| str[i]>='\u11C72' && str[i]<='\u11C8F' || str[i]>='\u11D00' && str[i]<='\u11D46' || str[i]>='\u11D60' && str[i]<='\u11D98'
		|| str[i]>='\u11EE0' && str[i]<='\u11EF2' || str[i]>='\u12000' && str[i]<='\u12543' || str[i]>='\u13000' && str[i]<='\u1342E'
		|| str[i]>='\u14400' && str[i]<='\u14646' || str[i]>='\u16800' && str[i]<='\u16A38' || str[i]>='\u16A40' && str[i]<='\u16A5E'
		|| str[i]>='\u16AD0' && str[i]<='\u16AED' || str[i]>='\u16B00' && str[i]<='\u16B8F' || str[i]>='\u16F00' && str[i]<='\u16F50'
		|| str[i]>='\u18800' && str[i]<='\u18AFF' || str[i]>='\u18B00' && str[i]<='\u18CD5' || str[i]>='\u1B000' && str[i]<='\u1B167'
		|| str[i]>='\u1B170' && str[i]<='\u1B2FB' || str[i]>='\u1BC00' && str[i]<='\u1BC99' || str[i]>='\u1E100' && str[i]<='\u1E14E'
		|| str[i]>='\u1E2C0' && str[i]<='\u1E2EB' || str[i]>='\u1E800' && str[i]<='\u1E8C4' || str[i]>='\u1EE00' && str[i]<='\u1EEBB'
		|| str[i]>='\u2F800' && str[i]<='\u2FA1D' )
		{
			printf("C %c\n",str[i]); // for Letter, other (Lo)
		}	
			
		else{
			printf("X %c\n",str[i]); // for non-alphabetic 
		}
		
	}
	getch(); 			// wait for exit
}
