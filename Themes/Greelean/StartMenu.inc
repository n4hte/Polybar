[Variables]
StartMenu_X=3

[Metadata]
Name=Greenlean\\Start Menu
Author=reddit.com/u/khanhas
Description=Click to show Windows's Start Menu

[StartMenuShape]
Meter=Shape
X=(#Bar_OffsetX#+#StartMenu_X#)
Y=#Bar_OffsetY#
Shape=Rectangle 0,#Tile_Space#,([StartMenuButton:W]+#Bar_Height#/2),(#Bar_Height#-2*#Tile_Space#)|StrokeWidth 0|Extend FillColor
FillColor=Fill Color #Color_Scheme3#
LeftMouseDownAction=["#@#nircmd.exe" sendkeypress lwin]
DynamicVariables=1

[StartMenuButton]
Meter=Image
ImageName=#ROOTCONFIGPATH#Themes\#Theme#\Additional_Comps_And_Scripts\StartMenu.png
W=(#Font_Size#*25/13)
X=([StartMenuShape:W]/2-[StartMenuButton:W]/2)r
Y=(#Bar_Height#/2-[StartMenuButton:H]/2)r
AntiAlias=1
DynamicVariables=1
