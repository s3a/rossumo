/*!
  \file        controller_key2string.h
  \author      Arnaud Ramey <arnaud.a.ramey@gmail.com>
                -- Robotics Lab, University Carlos III of Madrid
  \date        2016/1/17

________________________________________________________________________________

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
________________________________________________________________________________

Converts a controller dictionary key (eARCONTROLLER_DICTIONARY_KEY)
into a human-readable string
*/
#ifndef CONTROLLER_KEY2STRING_H
#define CONTROLLER_KEY2STRING_H

extern "C" {
#include <libARController/ARCONTROLLER_Dictionary.h>
}

inline const char* controller_key2string(eARCONTROLLER_DICTIONARY_KEY & i) {
  switch (i) {
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGED:
      return "ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGED:
      return "ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2:
      return "ARDRONE3_MEDIARECORDSTATE_PICTURESTATECHANGEDV2";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2:
      return "ARDRONE3_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED:
      return "ARDRONE3_MEDIARECORDEVENT_PICTUREEVENTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED:
      return "ARDRONE3_MEDIARECORDEVENT_VIDEOEVENTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSTATE_FLATTRIMCHANGED:
      return "ARDRONE3_PILOTINGSTATE_FLATTRIMCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED:
      return "ARDRONE3_PILOTINGSTATE_FLYINGSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED:
      return "ARDRONE3_PILOTINGSTATE_ALERTSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED:
      return "ARDRONE3_PILOTINGSTATE_NAVIGATEHOMESTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSTATE_POSITIONCHANGED:
      return "ARDRONE3_PILOTINGSTATE_POSITIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSTATE_SPEEDCHANGED:
      return "ARDRONE3_PILOTINGSTATE_SPEEDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSTATE_ATTITUDECHANGED:
      return "ARDRONE3_PILOTINGSTATE_ATTITUDECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSTATE_AUTOTAKEOFFMODECHANGED:
      return "ARDRONE3_PILOTINGSTATE_AUTOTAKEOFFMODECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSTATE_ALTITUDECHANGED:
      return "ARDRONE3_PILOTINGSTATE_ALTITUDECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGEVENT_MOVEBYEND:
      return "ARDRONE3_PILOTINGEVENT_MOVEBYEND";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_NETWORKSTATE_WIFISCANLISTCHANGED:
      return "ARDRONE3_NETWORKSTATE_WIFISCANLISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_NETWORKSTATE_ALLWIFISCANCHANGED:
      return "ARDRONE3_NETWORKSTATE_ALLWIFISCANCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED:
      return "ARDRONE3_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_NETWORKSTATE_ALLWIFIAUTHCHANNELCHANGED:
      return "ARDRONE3_NETWORKSTATE_ALLWIFIAUTHCHANNELCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSETTINGSSTATE_MAXALTITUDECHANGED:
      return "ARDRONE3_PILOTINGSETTINGSSTATE_MAXALTITUDECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSETTINGSSTATE_MAXTILTCHANGED:
      return "ARDRONE3_PILOTINGSETTINGSSTATE_MAXTILTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSETTINGSSTATE_ABSOLUTCONTROLCHANGED:
      return "ARDRONE3_PILOTINGSETTINGSSTATE_ABSOLUTCONTROLCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSETTINGSSTATE_MAXDISTANCECHANGED:
      return "ARDRONE3_PILOTINGSETTINGSSTATE_MAXDISTANCECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSETTINGSSTATE_NOFLYOVERMAXDISTANCECHANGED:
      return "ARDRONE3_PILOTINGSETTINGSSTATE_NOFLYOVERMAXDISTANCECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSETTINGSSTATE_AUTONOMOUSFLIGHTMAXHORIZONTALSPEED:
      return "ARDRONE3_PILOTINGSETTINGSSTATE_AUTONOMOUSFLIGHTMAXHORIZONTALSPEED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSETTINGSSTATE_AUTONOMOUSFLIGHTMAXVERTICALSPEED:
      return "ARDRONE3_PILOTINGSETTINGSSTATE_AUTONOMOUSFLIGHTMAXVERTICALSPEED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSETTINGSSTATE_AUTONOMOUSFLIGHTMAXHORIZONTALACCELERATION:
      return "ARDRONE3_PILOTINGSETTINGSSTATE_AUTONOMOUSFLIGHTMAXHORIZONTALACCELERATION";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSETTINGSSTATE_AUTONOMOUSFLIGHTMAXVERTICALACCELERATION:
      return "ARDRONE3_PILOTINGSETTINGSSTATE_AUTONOMOUSFLIGHTMAXVERTICALACCELERATION";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PILOTINGSETTINGSSTATE_AUTONOMOUSFLIGHTMAXROTATIONSPEED:
      return "ARDRONE3_PILOTINGSETTINGSSTATE_AUTONOMOUSFLIGHTMAXROTATIONSPEED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SPEEDSETTINGSSTATE_MAXVERTICALSPEEDCHANGED:
      return "ARDRONE3_SPEEDSETTINGSSTATE_MAXVERTICALSPEEDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SPEEDSETTINGSSTATE_MAXROTATIONSPEEDCHANGED:
      return "ARDRONE3_SPEEDSETTINGSSTATE_MAXROTATIONSPEEDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SPEEDSETTINGSSTATE_HULLPROTECTIONCHANGED:
      return "ARDRONE3_SPEEDSETTINGSSTATE_HULLPROTECTIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SPEEDSETTINGSSTATE_OUTDOORCHANGED:
      return "ARDRONE3_SPEEDSETTINGSSTATE_OUTDOORCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED:
      return "ARDRONE3_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_NETWORKSETTINGSSTATE_WIFISECURITYCHANGED:
      return "ARDRONE3_NETWORKSETTINGSSTATE_WIFISECURITYCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SETTINGSSTATE_PRODUCTMOTORVERSIONLISTCHANGED:
      return "ARDRONE3_SETTINGSSTATE_PRODUCTMOTORVERSIONLISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SETTINGSSTATE_PRODUCTGPSVERSIONCHANGED:
      return "ARDRONE3_SETTINGSSTATE_PRODUCTGPSVERSIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED:
      return "ARDRONE3_SETTINGSSTATE_MOTORERRORSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SETTINGSSTATE_MOTORSOFTWAREVERSIONCHANGED:
      return "ARDRONE3_SETTINGSSTATE_MOTORSOFTWAREVERSIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SETTINGSSTATE_MOTORFLIGHTSSTATUSCHANGED:
      return "ARDRONE3_SETTINGSSTATE_MOTORFLIGHTSSTATUSCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED:
      return "ARDRONE3_SETTINGSSTATE_MOTORERRORLASTERRORCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_SETTINGSSTATE_P7ID:
      return "ARDRONE3_SETTINGSSTATE_P7ID";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PICTURESETTINGSSTATE_PICTUREFORMATCHANGED:
      return "ARDRONE3_PICTURESETTINGSSTATE_PICTUREFORMATCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PICTURESETTINGSSTATE_AUTOWHITEBALANCECHANGED:
      return "ARDRONE3_PICTURESETTINGSSTATE_AUTOWHITEBALANCECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PICTURESETTINGSSTATE_EXPOSITIONCHANGED:
      return "ARDRONE3_PICTURESETTINGSSTATE_EXPOSITIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PICTURESETTINGSSTATE_SATURATIONCHANGED:
      return "ARDRONE3_PICTURESETTINGSSTATE_SATURATIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PICTURESETTINGSSTATE_TIMELAPSECHANGED:
      return "ARDRONE3_PICTURESETTINGSSTATE_TIMELAPSECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PICTURESETTINGSSTATE_VIDEOAUTORECORDCHANGED:
      return "ARDRONE3_PICTURESETTINGSSTATE_VIDEOAUTORECORDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED:
      return "ARDRONE3_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_GPSSETTINGSSTATE_HOMECHANGED:
      return "ARDRONE3_GPSSETTINGSSTATE_HOMECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_GPSSETTINGSSTATE_RESETHOMECHANGED:
      return "ARDRONE3_GPSSETTINGSSTATE_RESETHOMECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_GPSSETTINGSSTATE_GPSFIXSTATECHANGED:
      return "ARDRONE3_GPSSETTINGSSTATE_GPSFIXSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_GPSSETTINGSSTATE_GPSUPDATESTATECHANGED:
      return "ARDRONE3_GPSSETTINGSSTATE_GPSUPDATESTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_GPSSETTINGSSTATE_HOMETYPECHANGED:
      return "ARDRONE3_GPSSETTINGSSTATE_HOMETYPECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_GPSSETTINGSSTATE_RETURNHOMEDELAYCHANGED:
      return "ARDRONE3_GPSSETTINGSSTATE_RETURNHOMEDELAYCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_CAMERASTATE_ORIENTATION:
      return "ARDRONE3_CAMERASTATE_ORIENTATION";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_CAMERASTATE_DEFAULTCAMERAORIENTATION:
      return "ARDRONE3_CAMERASTATE_DEFAULTCAMERAORIENTATION";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_ANTIFLICKERINGSTATE_ELECTRICFREQUENCYCHANGED:
      return "ARDRONE3_ANTIFLICKERINGSTATE_ELECTRICFREQUENCYCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_ANTIFLICKERINGSTATE_MODECHANGED:
      return "ARDRONE3_ANTIFLICKERINGSTATE_MODECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_GPSSTATE_NUMBEROFSATELLITECHANGED:
      return "ARDRONE3_GPSSTATE_NUMBEROFSATELLITECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_GPSSTATE_HOMETYPEAVAILABILITYCHANGED:
      return "ARDRONE3_GPSSTATE_HOMETYPEAVAILABILITYCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_GPSSTATE_HOMETYPECHOSENCHANGED:
      return "ARDRONE3_GPSSTATE_HOMETYPECHOSENCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3_PROSTATE_FEATURES:
      return "ARDRONE3_PROSTATE_FEATURES";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3DEBUG:
      return "ARDRONE3DEBUG";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3DEBUG_BATTERYDEBUGSETTINGSSTATE_USEDRONE2BATTERYCHANGED:
      return "ARDRONE3DEBUG_BATTERYDEBUGSETTINGSSTATE_USEDRONE2BATTERYCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_ARDRONE3DEBUG_GPSDEBUGSTATE_NBSATELLITECHANGED:
      return "ARDRONE3DEBUG_GPSDEBUGSTATE_NBSATELLITECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO:
      return "JUMPINGSUMO";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_PILOTINGSTATE_POSTURECHANGED:
      return "JUMPINGSUMO_PILOTINGSTATE_POSTURECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_PILOTINGSTATE_ALERTSTATECHANGED:
      return "JUMPINGSUMO_PILOTINGSTATE_ALERTSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_PILOTINGSTATE_SPEEDCHANGED:
      return "JUMPINGSUMO_PILOTINGSTATE_SPEEDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_ANIMATIONSSTATE_JUMPLOADCHANGED:
      return "JUMPINGSUMO_ANIMATIONSSTATE_JUMPLOADCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_ANIMATIONSSTATE_JUMPTYPECHANGED:
      return "JUMPINGSUMO_ANIMATIONSSTATE_JUMPTYPECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_ANIMATIONSSTATE_JUMPMOTORPROBLEMCHANGED:
      return "JUMPINGSUMO_ANIMATIONSSTATE_JUMPMOTORPROBLEMCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_SETTINGSSTATE_PRODUCTGPSVERSIONCHANGED:
      return "JUMPINGSUMO_SETTINGSSTATE_PRODUCTGPSVERSIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_MEDIARECORDSTATE_PICTURESTATECHANGED:
      return "JUMPINGSUMO_MEDIARECORDSTATE_PICTURESTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGED:
      return "JUMPINGSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2:
      return "JUMPINGSUMO_MEDIARECORDSTATE_PICTURESTATECHANGEDV2";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2:
      return "JUMPINGSUMO_MEDIARECORDSTATE_VIDEOSTATECHANGEDV2";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED:
      return "JUMPINGSUMO_MEDIARECORDEVENT_PICTUREEVENTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED:
      return "JUMPINGSUMO_MEDIARECORDEVENT_VIDEOEVENTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED:
      return "JUMPINGSUMO_NETWORKSETTINGSSTATE_WIFISELECTIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_NETWORKSTATE_WIFISCANLISTCHANGED:
      return "JUMPINGSUMO_NETWORKSTATE_WIFISCANLISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_NETWORKSTATE_ALLWIFISCANCHANGED:
      return "JUMPINGSUMO_NETWORKSTATE_ALLWIFISCANCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED:
      return "JUMPINGSUMO_NETWORKSTATE_WIFIAUTHCHANNELLISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_NETWORKSTATE_ALLWIFIAUTHCHANNELCHANGED:
      return "JUMPINGSUMO_NETWORKSTATE_ALLWIFIAUTHCHANNELCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_NETWORKSTATE_LINKQUALITYCHANGED:
      return "JUMPINGSUMO_NETWORKSTATE_LINKQUALITYCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_AUDIOSETTINGSSTATE_MASTERVOLUMECHANGED:
      return "JUMPINGSUMO_AUDIOSETTINGSSTATE_MASTERVOLUMECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_AUDIOSETTINGSSTATE_THEMECHANGED:
      return "JUMPINGSUMO_AUDIOSETTINGSSTATE_THEMECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_ROADPLANSTATE_SCRIPTMETADATALISTCHANGED:
      return "JUMPINGSUMO_ROADPLANSTATE_SCRIPTMETADATALISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_ROADPLANSTATE_ALLSCRIPTSMETADATACHANGED:
      return "JUMPINGSUMO_ROADPLANSTATE_ALLSCRIPTSMETADATACHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_ROADPLANSTATE_SCRIPTUPLOADCHANGED:
      return "JUMPINGSUMO_ROADPLANSTATE_SCRIPTUPLOADCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_ROADPLANSTATE_SCRIPTDELETECHANGED:
      return "JUMPINGSUMO_ROADPLANSTATE_SCRIPTDELETECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_ROADPLANSTATE_PLAYSCRIPTCHANGED:
      return "JUMPINGSUMO_ROADPLANSTATE_PLAYSCRIPTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_SPEEDSETTINGSSTATE_OUTDOORCHANGED:
      return "JUMPINGSUMO_SPEEDSETTINGSSTATE_OUTDOORCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED:
      return "JUMPINGSUMO_MEDIASTREAMINGSTATE_VIDEOENABLECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMO_VIDEOSETTINGSSTATE_AUTORECORDCHANGED:
      return "JUMPINGSUMO_VIDEOSETTINGSSTATE_AUTORECORDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMODEBUG:
      return "JUMPINGSUMODEBUG";
    case ARCONTROLLER_DICTIONARY_KEY_JUMPINGSUMODEBUG_USERSCRIPTSTATE_USERSCRIPTPARSED:
      return "JUMPINGSUMODEBUG_USERSCRIPTSTATE_USERSCRIPTPARSED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE:
      return "MINIDRONE";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_PILOTINGSTATE_FLATTRIMCHANGED:
      return "MINIDRONE_PILOTINGSTATE_FLATTRIMCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED:
      return "MINIDRONE_PILOTINGSTATE_FLYINGSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_PILOTINGSTATE_ALERTSTATECHANGED:
      return "MINIDRONE_PILOTINGSTATE_ALERTSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_PILOTINGSTATE_AUTOTAKEOFFMODECHANGED:
      return "MINIDRONE_PILOTINGSTATE_AUTOTAKEOFFMODECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGED:
      return "MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2:
      return "MINIDRONE_MEDIARECORDSTATE_PICTURESTATECHANGEDV2";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED:
      return "MINIDRONE_MEDIARECORDEVENT_PICTUREEVENTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_PILOTINGSETTINGSSTATE_MAXALTITUDECHANGED:
      return "MINIDRONE_PILOTINGSETTINGSSTATE_MAXALTITUDECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_PILOTINGSETTINGSSTATE_MAXTILTCHANGED:
      return "MINIDRONE_PILOTINGSETTINGSSTATE_MAXTILTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_SPEEDSETTINGSSTATE_MAXVERTICALSPEEDCHANGED:
      return "MINIDRONE_SPEEDSETTINGSSTATE_MAXVERTICALSPEEDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_SPEEDSETTINGSSTATE_MAXROTATIONSPEEDCHANGED:
      return "MINIDRONE_SPEEDSETTINGSSTATE_MAXROTATIONSPEEDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_SPEEDSETTINGSSTATE_WHEELSCHANGED:
      return "MINIDRONE_SPEEDSETTINGSSTATE_WHEELSCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_SPEEDSETTINGSSTATE_MAXHORIZONTALSPEEDCHANGED:
      return "MINIDRONE_SPEEDSETTINGSSTATE_MAXHORIZONTALSPEEDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_SETTINGSSTATE_PRODUCTMOTORSVERSIONCHANGED:
      return "MINIDRONE_SETTINGSSTATE_PRODUCTMOTORSVERSIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_SETTINGSSTATE_PRODUCTINERTIALVERSIONCHANGED:
      return "MINIDRONE_SETTINGSSTATE_PRODUCTINERTIALVERSIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_SETTINGSSTATE_CUTOUTMODECHANGED:
      return "MINIDRONE_SETTINGSSTATE_CUTOUTMODECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONE_FLOODCONTROLSTATE_FLOODCONTROLCHANGED:
      return "MINIDRONE_FLOODCONTROLSTATE_FLOODCONTROLCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_MINIDRONEDEBUG:
      return "MINIDRONEDEBUG";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER:
      return "SKYCONTROLLER";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_WIFISTATE_WIFILIST:
      return "SKYCONTROLLER_WIFISTATE_WIFILIST";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_WIFISTATE_CONNEXIONCHANGED:
      return "SKYCONTROLLER_WIFISTATE_CONNEXIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_WIFISTATE_WIFIAUTHCHANNELLISTCHANGED:
      return "SKYCONTROLLER_WIFISTATE_WIFIAUTHCHANNELLISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_WIFISTATE_ALLWIFIAUTHCHANNELCHANGED:
      return "SKYCONTROLLER_WIFISTATE_ALLWIFIAUTHCHANNELCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_WIFISTATE_WIFISIGNALCHANGED:
      return "SKYCONTROLLER_WIFISTATE_WIFISIGNALCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_DEVICESTATE_DEVICELIST:
      return "SKYCONTROLLER_DEVICESTATE_DEVICELIST";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_DEVICESTATE_CONNEXIONCHANGED:
      return "SKYCONTROLLER_DEVICESTATE_CONNEXIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_SETTINGSSTATE_ALLSETTINGSCHANGED:
      return "SKYCONTROLLER_SETTINGSSTATE_ALLSETTINGSCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_SETTINGSSTATE_RESETCHANGED:
      return "SKYCONTROLLER_SETTINGSSTATE_RESETCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_SETTINGSSTATE_PRODUCTSERIALCHANGED:
      return "SKYCONTROLLER_SETTINGSSTATE_PRODUCTSERIALCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_SETTINGSSTATE_PRODUCTVARIANTCHANGED:
      return "SKYCONTROLLER_SETTINGSSTATE_PRODUCTVARIANTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_COMMONSTATE_ALLSTATESCHANGED:
      return "SKYCONTROLLER_COMMONSTATE_ALLSTATESCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_SKYCONTROLLERSTATE_BATTERYCHANGED:
      return "SKYCONTROLLER_SKYCONTROLLERSTATE_BATTERYCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_SKYCONTROLLERSTATE_GPSFIXCHANGED:
      return "SKYCONTROLLER_SKYCONTROLLERSTATE_GPSFIXCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_SKYCONTROLLERSTATE_GPSPOSITIONCHANGED:
      return "SKYCONTROLLER_SKYCONTROLLERSTATE_GPSPOSITIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_ACCESSPOINTSETTINGSSTATE_ACCESSPOINTSSIDCHANGED:
      return "SKYCONTROLLER_ACCESSPOINTSETTINGSSTATE_ACCESSPOINTSSIDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_ACCESSPOINTSETTINGSSTATE_ACCESSPOINTCHANNELCHANGED:
      return "SKYCONTROLLER_ACCESSPOINTSETTINGSSTATE_ACCESSPOINTCHANNELCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_ACCESSPOINTSETTINGSSTATE_WIFISELECTIONCHANGED:
      return "SKYCONTROLLER_ACCESSPOINTSETTINGSSTATE_WIFISELECTIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_GAMEPADINFOSSTATE_GAMEPADCONTROL:
      return "SKYCONTROLLER_GAMEPADINFOSSTATE_GAMEPADCONTROL";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_GAMEPADINFOSSTATE_ALLGAMEPADCONTROLSSENT:
      return "SKYCONTROLLER_GAMEPADINFOSSTATE_ALLGAMEPADCONTROLSSENT";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_BUTTONMAPPINGSSTATE_CURRENTBUTTONMAPPINGS:
      return "SKYCONTROLLER_BUTTONMAPPINGSSTATE_CURRENTBUTTONMAPPINGS";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_BUTTONMAPPINGSSTATE_ALLCURRENTBUTTONMAPPINGSSENT:
      return "SKYCONTROLLER_BUTTONMAPPINGSSTATE_ALLCURRENTBUTTONMAPPINGSSENT";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_BUTTONMAPPINGSSTATE_AVAILABLEBUTTONMAPPINGS:
      return "SKYCONTROLLER_BUTTONMAPPINGSSTATE_AVAILABLEBUTTONMAPPINGS";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_BUTTONMAPPINGSSTATE_ALLAVAILABLEBUTTONSMAPPINGSSENT:
      return "SKYCONTROLLER_BUTTONMAPPINGSSTATE_ALLAVAILABLEBUTTONSMAPPINGSSENT";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_AXISMAPPINGSSTATE_CURRENTAXISMAPPINGS:
      return "SKYCONTROLLER_AXISMAPPINGSSTATE_CURRENTAXISMAPPINGS";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_AXISMAPPINGSSTATE_ALLCURRENTAXISMAPPINGSSENT:
      return "SKYCONTROLLER_AXISMAPPINGSSTATE_ALLCURRENTAXISMAPPINGSSENT";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_AXISMAPPINGSSTATE_AVAILABLEAXISMAPPINGS:
      return "SKYCONTROLLER_AXISMAPPINGSSTATE_AVAILABLEAXISMAPPINGS";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_AXISMAPPINGSSTATE_ALLAVAILABLEAXISMAPPINGSSENT:
      return "SKYCONTROLLER_AXISMAPPINGSSTATE_ALLAVAILABLEAXISMAPPINGSSENT";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_AXISFILTERSSTATE_CURRENTAXISFILTERS:
      return "SKYCONTROLLER_AXISFILTERSSTATE_CURRENTAXISFILTERS";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_AXISFILTERSSTATE_ALLCURRENTFILTERSSENT:
      return "SKYCONTROLLER_AXISFILTERSSTATE_ALLCURRENTFILTERSSENT";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_AXISFILTERSSTATE_PRESETAXISFILTERS:
      return "SKYCONTROLLER_AXISFILTERSSTATE_PRESETAXISFILTERS";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_AXISFILTERSSTATE_ALLPRESETFILTERSSENT:
      return "SKYCONTROLLER_AXISFILTERSSTATE_ALLPRESETFILTERSSENT";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_COPILOTINGSTATE_PILOTINGSOURCE:
      return "SKYCONTROLLER_COPILOTINGSTATE_PILOTINGSOURCE";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATE:
      return "SKYCONTROLLER_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATE";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_CALIBRATIONSTATE_MAGNETOCALIBRATIONQUALITYUPDATESSTATE:
      return "SKYCONTROLLER_CALIBRATIONSTATE_MAGNETOCALIBRATIONQUALITYUPDATESSTATE";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLER_BUTTONEVENTS_SETTINGS:
      return "SKYCONTROLLER_BUTTONEVENTS_SETTINGS";
    case ARCONTROLLER_DICTIONARY_KEY_SKYCONTROLLERDEBUG:
      return "SKYCONTROLLERDEBUG";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON:
      return "COMMON";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_NETWORKEVENT_DISCONNECTION:
      return "COMMON_NETWORKEVENT_DISCONNECTION";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_ALLSETTINGSCHANGED:
      return "COMMON_SETTINGSSTATE_ALLSETTINGSCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_RESETCHANGED:
      return "COMMON_SETTINGSSTATE_RESETCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_PRODUCTNAMECHANGED:
      return "COMMON_SETTINGSSTATE_PRODUCTNAMECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_PRODUCTVERSIONCHANGED:
      return "COMMON_SETTINGSSTATE_PRODUCTVERSIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_PRODUCTSERIALHIGHCHANGED:
      return "COMMON_SETTINGSSTATE_PRODUCTSERIALHIGHCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_PRODUCTSERIALLOWCHANGED:
      return "COMMON_SETTINGSSTATE_PRODUCTSERIALLOWCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_COUNTRYCHANGED:
      return "COMMON_SETTINGSSTATE_COUNTRYCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_AUTOCOUNTRYCHANGED:
      return "COMMON_SETTINGSSTATE_AUTOCOUNTRYCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_ALLSTATESCHANGED:
      return "COMMON_COMMONSTATE_ALLSTATESCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_BATTERYSTATECHANGED:
      return "COMMON_COMMONSTATE_BATTERYSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGESTATELISTCHANGED:
      return "COMMON_COMMONSTATE_MASSSTORAGESTATELISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOSTATELISTCHANGED:
      return "COMMON_COMMONSTATE_MASSSTORAGEINFOSTATELISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_CURRENTDATECHANGED:
      return "COMMON_COMMONSTATE_CURRENTDATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_CURRENTTIMECHANGED:
      return "COMMON_COMMONSTATE_CURRENTTIMECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOREMAININGLISTCHANGED:
      return "COMMON_COMMONSTATE_MASSSTORAGEINFOREMAININGLISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_WIFISIGNALCHANGED:
      return "COMMON_COMMONSTATE_WIFISIGNALCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED:
      return "COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_PRODUCTMODEL:
      return "COMMON_COMMONSTATE_PRODUCTMODEL";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_COUNTRYLISTKNOWN:
      return "COMMON_COMMONSTATE_COUNTRYLISTKNOWN";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_OVERHEATSTATE_OVERHEATCHANGED:
      return "COMMON_OVERHEATSTATE_OVERHEATCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_OVERHEATSTATE_OVERHEATREGULATIONCHANGED:
      return "COMMON_OVERHEATSTATE_OVERHEATREGULATIONCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_CONTROLLERSTATE_ISPILOTINGCHANGED:
      return "COMMON_CONTROLLERSTATE_ISPILOTINGCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_WIFISETTINGSSTATE_OUTDOORSETTINGSCHANGED:
      return "COMMON_WIFISETTINGSSTATE_OUTDOORSETTINGSCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED:
      return "COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_MAVLINKSTATE_MAVLINKPLAYERRORSTATECHANGED:
      return "COMMON_MAVLINKSTATE_MAVLINKPLAYERRORSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATECHANGED:
      return "COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONREQUIREDSTATE:
      return "COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONREQUIREDSTATE";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONAXISTOCALIBRATECHANGED:
      return "COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONAXISTOCALIBRATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTARTEDCHANGED:
      return "COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTARTEDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_CAMERASETTINGSSTATE_CAMERASETTINGSCHANGED:
      return "COMMON_CAMERASETTINGSSTATE_CAMERASETTINGSCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_FLIGHTPLANSTATE_AVAILABILITYSTATECHANGED:
      return "COMMON_FLIGHTPLANSTATE_AVAILABILITYSTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED:
      return "COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_FLIGHTPLANEVENT_STARTINGERROREVENT:
      return "COMMON_FLIGHTPLANEVENT_STARTINGERROREVENT";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_FLIGHTPLANEVENT_SPEEDBRIDLEEVENT:
      return "COMMON_FLIGHTPLANEVENT_SPEEDBRIDLEEVENT";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_ARLIBSVERSIONSSTATE_CONTROLLERLIBARCOMMANDSVERSION:
      return "COMMON_ARLIBSVERSIONSSTATE_CONTROLLERLIBARCOMMANDSVERSION";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_ARLIBSVERSIONSSTATE_SKYCONTROLLERLIBARCOMMANDSVERSION:
      return "COMMON_ARLIBSVERSIONSSTATE_SKYCONTROLLERLIBARCOMMANDSVERSION";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_ARLIBSVERSIONSSTATE_DEVICELIBARCOMMANDSVERSION:
      return "COMMON_ARLIBSVERSIONSSTATE_DEVICELIBARCOMMANDSVERSION";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_AUDIOSTATE_AUDIOSTREAMINGRUNNING:
      return "COMMON_AUDIOSTATE_AUDIOSTREAMINGRUNNING";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_HEADLIGHTSSTATE_INTENSITYCHANGED:
      return "COMMON_HEADLIGHTSSTATE_INTENSITYCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_ANIMATIONSSTATE_LIST:
      return "COMMON_ANIMATIONSSTATE_LIST";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_ACCESSORYSTATE_SUPPORTEDACCESSORIESLISTCHANGED:
      return "COMMON_ACCESSORYSTATE_SUPPORTEDACCESSORIESLISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED:
      return "COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGMODIFICATIONENABLED:
      return "COMMON_ACCESSORYSTATE_ACCESSORYCONFIGMODIFICATIONENABLED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_MAXCHARGERATECHANGED:
      return "COMMON_CHARGERSTATE_MAXCHARGERATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED:
      return "COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_LASTCHARGERATECHANGED:
      return "COMMON_CHARGERSTATE_LASTCHARGERATECHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_CHARGINGINFO:
      return "COMMON_CHARGERSTATE_CHARGINGINFO";
    case ARCONTROLLER_DICTIONARY_KEY_COMMON_RUNSTATE_RUNIDCHANGED:
      return "COMMON_RUNSTATE_RUNIDCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_COMMONDEBUG:
      return "COMMONDEBUG";
    case ARCONTROLLER_DICTIONARY_KEY_COMMONDEBUG_STATSEVENT_SENDPACKET:
      return "COMMONDEBUG_STATSEVENT_SENDPACKET";
    case ARCONTROLLER_DICTIONARY_KEY_COMMONDEBUG_DEBUGSETTINGSSTATE_INFO:
      return "COMMONDEBUG_DEBUGSETTINGSSTATE_INFO";
    case ARCONTROLLER_DICTIONARY_KEY_COMMONDEBUG_DEBUGSETTINGSSTATE_LISTCHANGED:
      return "COMMONDEBUG_DEBUGSETTINGSSTATE_LISTCHANGED";
    case ARCONTROLLER_DICTIONARY_KEY_PRO:
      return "PRO";
    case ARCONTROLLER_DICTIONARY_KEY_PRO_PROSTATE_SUPPORTEDFEATURES:
      return "PRO_PROSTATE_SUPPORTEDFEATURES";
    case ARCONTROLLER_DICTIONARY_KEY_PRO_PROSTATE_FEATURESACTIVATED:
      return "PRO_PROSTATE_FEATURESACTIVATED";
    case ARCONTROLLER_DICTIONARY_KEY_PRO_PROEVENT_CHALLENGEEVENT:
      return "PRO_PROEVENT_CHALLENGEEVENT";
    default:
      return "UNKOWNN";
  }
  return "UNKOWNN";
}

#endif // CONTROLLER_KEY2STRING_H

