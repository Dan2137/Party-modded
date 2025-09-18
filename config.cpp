
class CfgPatches
{
	class SchanaModParty
	{
		requiredAddons[] = {"SchanaModPartyDefine","JM_CF_Scripts"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class SchanaModParty
	{
		name = "SchanaModParty";
		action = "https://github.com/schana/dayz-mod-party";
		author = "schana / modded by Raven";
		type = "mod";
		inputs = "SchanaModParty/Data/Inputs.xml";
		dependencies[] = {"Game","Mission"};
		class defs
		{
			class widgetStyles
			{
				files[] = {"SchanaModParty/gui/looknfeel/estilos.styles"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"SchanaModParty/Game"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"SchanaModParty/Mission"};
			};
		};
	};
};
