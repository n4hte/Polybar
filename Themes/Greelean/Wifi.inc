[Variables]
Wifi_X=727

[Metadata]
Name=Greenlean\\Wifi
Author=reddit.com/u/khanhas
Description=Display Wifi icon status. Mouse over to show SSID and quality.

[WifiSSID]
Measure=Plugin
Plugin=WiFiStatus
WiFiInfoType=SSID

[WifiQuality]
Measure=Plugin
Plugin=WiFiStatus
WiFiInfoType=Quality

[WifiIcon]
Meter=String
Text=
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#Color_Scheme3#50
AntiAlias=1
StringAlign=CenterCenter
X=(#Bar_OffsetX#+#Wifi_X#)
Y=(#Bar_OffsetY#+#Bar_Height#/2)
DynamicVariables=1
ToolTipText=SSID: [WifiSSID]#CRLF#Quality: [WifiQuality]%
InlineSetting=GradientColor | 90 | #Color_Scheme3#;0 | #Color_Scheme3#;([WifiQuality]/100) | 50505050;([WifiQuality]/100)
