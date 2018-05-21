class CfgPatches
{
	class exile_client
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"a3_characters_f",
			"a3_characters_f_beta",
			"a3_characters_f_epa",
			"a3_characters_f_epb",
			"a3_characters_f_epc",
			"a3_characters_f_gamma",
			"a3_data_f",
			"a3_weapons_f",
			"a3_weapons_f_beta",
			"a3_weapons_f_bootcamp",
			"a3_weapons_f_epa",
			"a3_weapons_f_epb",
			"a3_weapons_f_epc",
			"a3_weapons_f_gamma",
			"a3_rocks_f",
			"a3_anims_f",
			"a3_weapons_f_mark",
			"a3_weapons_f_exp",
			"a3_map_altis_scenes",
			"a3_map_vr_scenes",
			"a3_map_stratis_scenes",
			"a3_ui_f",
			"a3_3den",
			"dbo_old_bike",
			"gnt_c185",
			"exile_assets",
			"CUP_Weapons_AA12"
		};
		units[]={};
		weapons[]=
		{
			"arifle_MX_SW_F",
			"arifle_MX_SW_Black_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_snd_F",
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_camo_F",
			"MMG_02_black_F",
			"MMG_02_sand_F",
			"Throw"
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgActions
{
	class None;
	class OpenBag: None
	{
		show=0;
	};
	class FireInflame: None
	{
		show=0;
	};
	class FirePutDown: None
	{
		show=0;
	};
	class Heal: None
	{
		show=0;
	};
	class HealSoldier: None
	{
		show=0;
	};
	class FirstAid: None
	{
		show=0;
	};
	class ListRightVehicleDisplay: None
	{
		show=0;
	};
	class ListLeftVehicleDisplay: None
	{
		show=0;
	};
	class ListPrevRightVehicleDisplay: None
	{
		show=0;
	};
	class ListPrevLeftVehicleDisplay: None
	{
		show=0;
	};
	class CloseRightVehicleDisplay: None
	{
		show=0;
	};
	class CloseLeftVehicleDisplay: None
	{
		show=0;
	};
	class NextModeRightVehicleDisplay: None
	{
		show=0;
	};
	class NextModeLeftVehicleDisplay: None
	{
		show=0;
	};
	class TakeBag: None
	{
		show=0;
	};
	class TakeItem: None
	{
		show=0;
	};
	class TakeWeapon: None
	{
		show=0;
	};
	class TakeMagazine: None
	{
		show=0;
	};
	class TakeItemFromBody: None
	{
		show=0;
	};
	class TakeWeaponFromBody: None
	{
		show=0;
	};
	class TakeBackpackFromBody: None
	{
		show=0;
	};
	class TakeMine: None
	{
		show=0;
	};
};
class CfgAmmo
{
	class BulletBase;
	class Exile_Ammo_AbstractMelee: BulletBase
	{
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		cost=1;
		typicalSpeed=85;
		timeToLive=0.050000001;
		airFriction=0;
		waterFriction=0;
		caliber=0.69999999;
		model="\A3\weapons_f\empty";
		proxyShape="\A3\weapons_f\empty";
		soundHitBody1[]=
		{
			"\exile_assets\sound\hack_flesh01.ogg",
			1.584893,
			1,
			10
		};
		soundHitBody2[]=
		{
			"\exile_assets\sound\hack_flesh02.ogg",
			1.584893,
			1,
			10
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.5,
			"soundHitBody2",
			0.5
		};
		maxControlRange=1;
		simulation="shotRocket";
		explosive=0;
		visibleFireTime=0;
		whistleOnFire=0;
		whistleDist=0;
		effectsMissileInit="EmptyEffect";
		effectsMissile="EmptyEffect";
		effectsSmoke="EmptyEffect";
		explosionEffects="NoExplosion";
		craterEffects="NoCrater";
		muzzleEffect="";
		class CamShakeExplode
		{
			power="(5^0.5)";
			duration="((round (5^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power=5;
			duration="((round (5^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class Exile_Ammo_Battery: BulletBase
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_9mm";
		caliber=2.5999999;
		deflecting=45;
		visibleFire=5;
		audibleFire=9;
		cost=100;
		typicalSpeed=280;
		airFriction=-0.0018;
	};
	class DemoCharge_Remote_Ammo_Scripted;
	class SatchelCharge_Remote_Ammo_Scripted;
	class Exile_Ammo_BreachingCharge_BigMomma: SatchelCharge_Remote_Ammo_Scripted
	{
		displayName="Breaching Charge (Big Momma)";
		model="\exile_assets\model\Exile_Item_BigMomma.p3d";
		CraterEffects="ArtyShellCrater";
		directionalExplosion=1;
		ExplosionEffects="MortarExplosion";
	};
	class Exile_Ammo_BreachingCharge_Wood: DemoCharge_Remote_Ammo_Scripted
	{
		displayName="Breaching Charge (Wood)";
		directionalExplosion=1;
	};
	class Exile_Ammo_BreachingCharge_Metal: SatchelCharge_Remote_Ammo_Scripted
	{
		displayName="Breaching Charge (Metal)";
		directionalExplosion=1;
	};
	class Exile_Ammo_Swing: Exile_Ammo_AbstractMelee
	{
		hit=9;
		typicalSpeed=120;
		timeToLive=0.60000002;
		visibleFire=0.1;
		audibleFire=1;
		caliber=1;
	};
	class Exile_Ammo_Swoosh: Exile_Ammo_Swing
	{
		hit=12;
		typicalSpeed=120;
		timeToLive=0.60000002;
		visibleFire=0.1;
		audibleFire=1;
		caliber=1;
	};
	class Exile_Ammo_Boing: Exile_Ammo_Swing
	{
		hit=5;
		typicalSpeed=120;
		timeToLive=0.60000002;
		visibleFire=0.1;
		audibleFire=1;
		caliber=1;
	};
	class SmokeShellOrange;
	class Exile_Ammo_SmokeShellOrange: SmokeShellOrange
	{
		deflecting=360;
		explosionTime=1;
		timeToLive=360;
	};
};
class CfgAnimationSourceSounds
{
	class Exile_AnimationSound_ConcreteMixer
	{
		class Start
		{
			loop=0;
			sound0[]=
			{
				"exile_assets\sound\Exile_ConcreteMixer01.wss",
				1,
				1,
				50
			};
			sound[]=
			{
				"sound0",
				1
			};
			terminate=0;
			trigger="direction";
		};
	};
};
class CfgClanMakerIcons
{
	Icons[]=
	{
		
		{
			"Text only",
			"\A3\ui_f\data\map\markers\system\dummy_ca.paa"
		},
		
		{
			"Empty",
			"\A3\ui_f\data\map\markers\system\empty_ca.paa"
		},
		
		{
			"Objective",
			"\A3\ui_f\data\map\markers\military\objective_CA.paa"
		},
		
		{
			"Marker",
			"\A3\ui_f\data\map\markers\military\marker_CA.paa"
		},
		
		{
			"Flag",
			"\A3\ui_f\data\map\markers\military\flag_CA.paa"
		},
		
		{
			"Arrow",
			"\A3\ui_f\data\map\markers\military\arrow_CA.paa"
		},
		
		{
			"Arrow (filled)",
			"\A3\ui_f\data\map\markers\military\arrow2_CA.paa"
		},
		
		{
			"Ambush",
			"\A3\ui_f\data\map\markers\military\ambush_CA.paa"
		},
		
		{
			"Destroy",
			"\A3\ui_f\data\map\markers\military\destroy_CA.paa"
		},
		
		{
			"Start",
			"\A3\ui_f\data\map\markers\military\start_CA.paa"
		},
		
		{
			"End",
			"\A3\ui_f\data\map\markers\military\end_CA.paa"
		},
		
		{
			"Pick Up",
			"\A3\ui_f\data\map\markers\military\pickup_CA.paa"
		},
		
		{
			"Join",
			"\A3\ui_f\data\map\markers\military\join_CA.paa"
		},
		
		{
			"Warning",
			"\A3\ui_f\data\map\markers\military\warning_CA.paa"
		},
		
		{
			"Unknown",
			"\A3\ui_f\data\map\markers\military\unknown_CA.paa"
		},
		
		{
			"Circle",
			"\A3\ui_f\data\map\markers\military\circle_CA.paa"
		},
		
		{
			"Dot",
			"\A3\ui_f\data\map\markers\military\dot_CA.paa"
		},
		
		{
			"Square",
			"\A3\ui_f\data\map\markers\military\box_CA.paa"
		},
		
		{
			"Triangle",
			"\A3\ui_f\data\map\markers\military\triangle_CA.paa"
		},
		
		{
			"Select",
			"\A3\ui_f\data\igui\cfg\islandmap\iconplayer_ca.paa"
		},
		
		{
			"Waypoint",
			"\A3\ui_f\data\map\groupicons\waypoint.paa"
		},
		
		{
			"Selector - Selectable",
			"\A3\ui_f\data\map\groupicons\selector_selectable_ca.paa"
		},
		
		{
			"Selector - Selected Enemy",
			"\A3\ui_f\data\map\groupicons\selector_selectedEnemy_ca.paa"
		},
		
		{
			"Selector - Selected Friendly",
			"\A3\ui_f\data\map\groupicons\selector_selectedFriendly_ca.paa"
		},
		
		{
			"Selector - Selected Mission",
			"\A3\ui_f\data\map\groupicons\selector_selectedMission_ca.paa"
		},
		
		{
			"KIA",
			"\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa"
		},
		
		{
			"Minefield",
			"\a3\Ui_F_Curator\Data\CfgMarkers\minefield_ca.paa"
		},
		
		{
			"Minefield (AP)",
			"\a3\Ui_F_Curator\Data\CfgMarkers\minefieldAP_ca.paa"
		},
		
		{
			"NATO",
			"\A3\ui_f\data\map\markers\flags\nato_ca.paa"
		},
		
		{
			"CSAT",
			"\A3\ui_f\data\map\markers\flags\CSAT_ca.paa"
		},
		
		{
			"Altis Armed Forces",
			"\A3\ui_f\data\map\markers\flags\AAF_ca.paa"
		},
		
		{
			"Altis",
			"\A3\ui_f\data\map\markers\flags\Altis_ca.paa"
		},
		
		{
			"Altis (Colonial)",
			"\A3\ui_f\data\map\markers\flags\AltisColonial_ca.paa"
		},
		
		{
			"FIA",
			"\A3\ui_f\data\map\markers\flags\FIA_ca.paa"
		},
		
		{
			"European Union",
			"\A3\ui_f\data\map\markers\flags\EU_ca.paa"
		},
		
		{
			"United Nations",
			"\A3\ui_f\data\map\markers\flags\UN_ca.paa"
		},
		
		{
			"Belgium",
			"\A3\ui_f\data\map\markers\flags\Belgium_ca.paa"
		},
		
		{
			"Canada",
			"\A3\ui_f\data\map\markers\flags\Canada_ca.paa"
		},
		
		{
			"Croatia",
			"\A3\ui_f\data\map\markers\flags\Croatia_ca.paa"
		},
		
		{
			"Czech Republic",
			"\A3\ui_f\data\map\markers\flags\CzechRepublic_ca.paa"
		},
		
		{
			"Denmark",
			"\A3\ui_f\data\map\markers\flags\Denmark_ca.paa"
		},
		
		{
			"France",
			"\A3\ui_f\data\map\markers\flags\France_ca.paa"
		},
		
		{
			"Georgia",
			"\A3\ui_f\data\map\markers\flags\Georgia_ca.paa"
		},
		
		{
			"Germany",
			"\A3\ui_f\data\map\markers\flags\Germany_ca.paa"
		},
		
		{
			"Greece",
			"\A3\ui_f\data\map\markers\flags\Greece_ca.paa"
		},
		
		{
			"Hungary",
			"\A3\ui_f\data\map\markers\flags\Hungary_ca.paa"
		},
		
		{
			"Iceland",
			"\A3\ui_f\data\map\markers\flags\Iceland_ca.paa"
		},
		
		{
			"Italy",
			"\A3\ui_f\data\map\markers\flags\Italy_ca.paa"
		},
		
		{
			"Luxembourg",
			"\A3\ui_f\data\map\markers\flags\Luxembourg_ca.paa"
		},
		
		{
			"Netherlands",
			"\A3\ui_f\data\map\markers\flags\Netherlands_ca.paa"
		},
		
		{
			"Norway",
			"\A3\ui_f\data\map\markers\flags\Norway_ca.paa"
		},
		
		{
			"Poland",
			"\A3\ui_f\data\map\markers\flags\Poland_ca.paa"
		},
		
		{
			"Portugal",
			"\A3\ui_f\data\map\markers\flags\Portugal_ca.paa"
		},
		
		{
			"Slovakia",
			"\A3\ui_f\data\map\markers\flags\Slovakia_ca.paa"
		},
		
		{
			"Slovenia",
			"\A3\ui_f\data\map\markers\flags\Slovenia_ca.paa"
		},
		
		{
			"Spain",
			"\A3\ui_f\data\map\markers\flags\Spain_ca.paa"
		},
		
		{
			"UK",
			"\A3\ui_f\data\map\markers\flags\UK_ca.paa"
		},
		
		{
			"USA",
			"\A3\ui_f\data\map\markers\flags\USA_ca.paa"
		}
	};
};
class CfgCloudlets
{
	class Default;
	class Exile_Snow_Close: Default
	{
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=0;
		onSurface=0;
		keepOnSurface=0;
		surfaceOffset=0;
		bounceOnSurface=-1;
		bounceOnSurfaceVar=0;
		postEffects="";
		particleEffects="";
		blockAIVisibility=0;
		emissiveColor[]=
		{
			{2,2,2,0}
		};
		particleType="Billboard";
		particleShape="\exile_assets\model\Exile_Snow";
		particleFSFrameCount=1;
		particleFSIndex=0;
		particleFSLoop=0;
		particleFSNtieth=3;
		circleRadius=5;
		circleVelocity[]={0,0,0};
		angle=0;
		angleVar=360;
		animationSpeedCoef=1;
		animationSpeed[]={1};
		animationName="";
		color[]=
		{
			{2,2,2,0},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,0}
		};
		colorCoef[]={1,1,1,1};
		colorVar[]={0,0,0,0};
		interval=0.0099999998;
		lifeTime=6;
		lifeTimeVar=1;
		timerPeriod=30;
		onTimerScript="";
		beforeDestroyScript="";
		moveVelocity[]={0,0,-0.30000001};
		moveVelocityVar[]={0,0,0.1};
		moveVelocityVarConst[]={0,0,0};
		position[]={0,0,0};
		positionVar[]={5,5,0};
		positionVarConst[]={0,0,0};
		rotationVelocity=2;
		rotationVelocityVar=2;
		size[]={1};
		sizeCoef=1;
		sizeVar=0.5;
		weight=1;
		volume=0.75;
		rubbing=0.050000001;
		randomDirectionIntensity=0;
		randomDirectionIntensityVar=0;
		randomDirectionPeriod=0;
		randomDirectionPeriodVar=0;
	};
	class Exile_Snow_Near: Exile_Snow_Close
	{
		particleFSIndex=0;
		positionVar[]={6,6,0};
		lifeTime=7;
	};
	class Exile_Snow_Far: Exile_Snow_Close
	{
		particleFSIndex=2;
		positionVar[]={7,7,0};
		lifeTime=8;
	};
};
class CfgCommands
{
	allowedHTMLLoadURIs[]=
	{
		"http://lobby.exilemod.com/index.html*"
	};
};
class AbstractConstruction
{
	staticObject="";
	previewObject="";
	kitMagazine="";
	upgradeObject="";
	refundObjects[]={};
	requiresTerritory=1;
	canBePlacedOnRoad=1;
	allowDuplicateSnap=0;
	class SnapPositions
	{
	};
	class SnapObjects
	{
	};
};
class CfgConstruction
{
	class AbstractFloor: AbstractConstruction
	{
		class SnapPositions
		{
			Wall01[]={0,-2.875,0.25};
			Wall02[]={-2.875,0,0.25};
			Wall03[]={0,2.875,0.25};
			Wall04[]={2.875,0,0.25};
			Floor01[]={0,6,0};
			Floor02[]={6,0,0};
			Floor03[]={0,-6,0};
			Floor04[]={-6,0,0};
			Floor05[]={0,0,3.25};
			Floor06[]={0,0,-3.25};
			Stairs01[]={0,0,0.25};
			Stairs02[]={0,0,-2.75};
			ConcreteStairs01[]={0,0,0};
			ConcreteStairs02[]={0,0,-3.25};
		};
		class SnapObjects
		{
			class Exile_Construction_WoodFloor_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Exile_Construction_WoodFloor_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Exile_Construction_WoodSupport_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04"
				};
			};
			class Exile_Construction_WoodWall_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_WoodWall_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_WoodDoor_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_WoodDoor_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_WoodWindow_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_WoodWindow_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_WoodGate_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_WoodGate_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_ConcreteFloor_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05"
				};
			};
			class Exile_Construction_ConcreteFloorPort_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05"
				};
			};
			class Exile_Construction_ConcreteFloorHatch_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05"
				};
			};
			class Exile_Construction_ConcreteSupport_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04"
				};
			};
			class Exile_Construction_ConcreteWall_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_ConcreteDoor_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_ConcreteWindow_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_ConcreteGate_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_WoodFloorPortSmall_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Exile_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Exile_Construction_WoodDrawBridge_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Exile_Construction_WoodDrawBridge_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
		};
	};
	class AbstractSupport: AbstractConstruction
	{
		class SnapPositions
		{
			Floor01[]={3,3,3};
			Floor02[]={-3,3,3};
			Floor03[]={3,-3,3};
			Floor04[]={-3,-3,3};
			Support01[]={-6,0,0};
			Support02[]={0,-6,0};
			Support03[]={6,0,0};
			Support04[]={0,6,0};
			Support05[]={0,0,3};
		};
		class SnapObjects
		{
			class Exile_Construction_WoodSupport_Static
			{
				positions[]=
				{
					"Support01",
					"Support02",
					"Support03",
					"Support04",
					"Support05"
				};
			};
			class Exile_Construction_ConcreteSupport_Static
			{
				positions[]=
				{
					"Support01",
					"Support02",
					"Support03",
					"Support04",
					"Support05"
				};
			};
		};
	};
	class AbstractWall: AbstractConstruction
	{
		class SnapPositions
		{
			Wall01[]={-6,0,0};
			Wall02[]={-2.875,-2.875,0};
			Wall03[]={2.875,-2.875,0};
			Wall04[]={6,0,0};
			Wall05[]={2.875,2.875,0};
			Wall06[]={-2.875,2.875,0};
			Wall07[]={0,0,3};
			Wall08[]={0,0,-3};
			Floor01[]={0,2.875,3};
			Floor02[]={0,-2.875,3};
		};
		class SnapObjects
		{
			class Exile_Construction_WoodWallHalf_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06"
				};
			};
			class Exile_Construction_WoodWallHalf_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06"
				};
			};
			class Exile_Construction_WoodWall_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_ConcreteWall_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodWall_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodFloor_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Exile_Construction_WoodFloor_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Exile_Construction_ConcreteFloor_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Exile_Construction_ConcreteFloorPort_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Exile_Construction_WoodWindow_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodWindow_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_ConcreteWindow_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_ConcreteWindowHatch_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodDoor_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodDoor_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_ConcreteDoor_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodDoorway_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodDoorway_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_ConcreteDoorway_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodGate_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodGate_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_ConcreteGate_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodFloorPortSmall_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Exile_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Exile_Construction_WoodDrawBridge_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Exile_Construction_WoodDrawBridge_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
		};
	};
	class Camera: AbstractWall
	{
		staticObject="Exile_Construction_BaseCamera_Static";
		previewObject="Exile_Construction_BaseCamera_Preview";
		kitMagazine="Exile_Item_BaseCameraKit";
		refundObjects[]=
		{
			"Exile_Item_BaseCameraKit"
		};
	};
	class CamoTent: AbstractConstruction
	{
		staticObject="Exile_Container_CamoTent";
		previewObject="Exile_Construction_CamoTent_Preview";
		kitMagazine="Exile_Item_CamoTentKit";
		requiresTerritory=0;
		refundObjects[]=
		{
			"Exile_Item_CamoTentKit"
		};
	};
	class CampFire: AbstractConstruction
	{
		staticObject="Exile_Construction_CampFire_Static";
		previewObject="Exile_Construction_CampFire_Preview";
		kitMagazine="Exile_Item_CampFireKit";
		requiresTerritory=0;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Exile_Item_CampFireKit"
		};
	};
	class ConcreteDoor: AbstractWall
	{
		staticObject="Exile_Construction_ConcreteDoor_Static";
		previewObject="Exile_Construction_ConcreteDoor_Preview";
		kitMagazine="Exile_Item_ConcreteDoorKit";
		refundObjects[]=
		{
			"Exile_Item_ConcreteDoorKit"
		};
		materialType=12;
	};
	class ConcreteDoorway: AbstractWall
	{
		staticObject="Exile_Construction_ConcreteDoorway_Static";
		previewObject="Exile_Construction_ConcreteDoorway_Preview";
		kitMagazine="Exile_Item_ConcreteDoorwayKit";
		refundObjects[]=
		{
			"Exile_Item_ConcreteDoorwayKit"
		};
		materialType=12;
	};
	class ConcreteFloor: AbstractFloor
	{
		staticObject="Exile_Construction_ConcreteFloor_Static";
		previewObject="Exile_Construction_ConcreteFloor_Preview";
		kitMagazine="Exile_Item_ConcreteFloorKit";
		refundObjects[]=
		{
			"Exile_Item_ConcreteFloorKit"
		};
		materialType=12;
	};
	class ConcreteFloorHatch: AbstractFloor
	{
		staticObject="Exile_Construction_ConcreteFloorHatch_Static";
		previewObject="Exile_Construction_ConcreteFloorHatch_Preview";
		refundObjects[]=
		{
			"Exile_Item_ConcreteFloorPortKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=12;
	};
	class ConcreteFloorPort: AbstractFloor
	{
		staticObject="Exile_Construction_ConcreteFloorPort_Static";
		previewObject="Exile_Construction_ConcreteFloorPort_Preview";
		kitMagazine="Exile_Item_ConcreteFloorPortKit";
		refundObjects[]=
		{
			"Exile_Item_ConcreteFloorPortKit"
		};
		upgradeObject="Exile_Construction_ConcreteFloorHatch_Static";
		materialType=12;
	};
	class ConcreteGate: AbstractWall
	{
		staticObject="Exile_Construction_ConcreteGate_Static";
		previewObject="Exile_Construction_ConcreteGate_Preview";
		kitMagazine="Exile_Item_ConcreteGateKit";
		refundObjects[]=
		{
			"Exile_Item_ConcreteGateKit"
		};
		materialType=12;
	};
	class ConcreteStairs: AbstractConstruction
	{
		staticObject="Exile_Construction_ConcreteStairs_Static";
		previewObject="Exile_Construction_ConcreteStairs_Preview";
		kitMagazine="Exile_Item_ConcreteStairsKit";
		refundObjects[]=
		{
			"Exile_Item_ConcreteStairsKit"
		};
		materialType=12;
		allowDuplicateSnap=1;
		class SnapObjects
		{
			class Exile_Construction_WoodFloor_Static
			{
				positions[]=
				{
					"ConcreteStairs01"
				};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				positions[]=
				{
					"ConcreteStairs01",
					"ConcreteStairs02"
				};
			};
			class Exile_Construction_ConcreteFloor_Static
			{
				positions[]=
				{
					"ConcreteStairs01"
				};
			};
			class Exile_Construction_ConcreteFloorPort_Static
			{
				positions[]=
				{
					"ConcreteStairs01",
					"ConcreteStairs02"
				};
			};
		};
	};
	class ConcreteSupport: AbstractSupport
	{
		staticObject="Exile_Construction_ConcreteSupport_Static";
		previewObject="Exile_Construction_ConcreteSupport_Preview";
		kitMagazine="Exile_Item_ConcreteSupportKit";
		refundObjects[]=
		{
			"Exile_Item_ConcreteSupportKit"
		};
		materialType=12;
	};
	class ConcreteWall: AbstractWall
	{
		staticObject="Exile_Construction_ConcreteWall_Static";
		previewObject="Exile_Construction_ConcreteWall_Preview";
		kitMagazine="Exile_Item_ConcreteWallKit";
		refundObjects[]=
		{
			"Exile_Item_ConcreteWallKit"
		};
		materialType=12;
	};
	class ConcreteWindow: AbstractWall
	{
		staticObject="Exile_Construction_ConcreteWindow_Static";
		previewObject="Exile_Construction_ConcreteWindow_Preview";
		kitMagazine="Exile_Item_ConcreteWindowKit";
		refundObjects[]=
		{
			"Exile_Item_ConcreteWindowKit"
		};
		upgradeObject="Exile_Construction_ConcreteWindowHatch_Static";
		materialType=12;
	};
	class ConcreteWindowHatch: AbstractWall
	{
		staticObject="Exile_Construction_ConcreteWindowHatch_Static";
		previewObject="Exile_Construction_ConcreteWindowHatch_Preview";
		refundObjects[]=
		{
			"Exile_Item_ConcreteWindowKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=12;
	};
	class Flag: AbstractConstruction
	{
		staticObject="Exile_Construction_Flag_Static";
		previewObject="Exile_Construction_Flag_Preview";
		kitMagazine="Exile_Item_Flag";
		requiresTerritory=0;
		refundObjects[]=
		{
			"Exile_Item_Flag"
		};
	};
	class FloodLight: AbstractConstruction
	{
		staticObject="Exile_Construction_FloodLight_Static";
		previewObject="Exile_Construction_FloodLight_Preview";
		kitMagazine="Exile_Item_FloodLightKit";
		refundObjects[]=
		{
			"Exile_Item_FloodLightKit"
		};
	};
	class HBarrier5: AbstractConstruction
	{
		staticObject="Exile_Construction_HBarrier5_Static";
		previewObject="Exile_Construction_HBarrier5_Preview";
		kitMagazine="Exile_Item_HBarrier5Kit";
		requiresTerritory=1;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Exile_Item_HBarrier5Kit"
		};
		class SnapPositions
		{
			HBarrier5_01[]={-5.69873,-0.00390625,-0.74051398};
			HBarrier5_02[]={5.69873,-0.00390625,-0.74051398};
		};
		class SnapObjects
		{
			class Exile_Construction_HBarrier5_Static
			{
				positions[]=
				{
					"HBarrier5_01",
					"HBarrier5_02"
				};
			};
		};
	};
	class Laptop: AbstractWall
	{
		staticObject="Exile_Construction_Laptop_Static";
		previewObject="Exile_Construction_Laptop_Preview";
		kitMagazine="Exile_Item_Laptop";
		refundObjects[]=
		{
			"Exile_Item_Laptop"
		};
	};
	class MetalHedgehog: AbstractConstruction
	{
		staticObject="Exile_Construction_MetalHedgehog_Static";
		previewObject="Exile_Construction_MetalHedgehog_Preview";
		kitMagazine="Exile_Item_MetalHedgehogKit";
		refundObjects[]=
		{
			"Exile_Item_MetalHedgehogKit"
		};
		requiresTerritory=0;
		canBePlacedOnRoad=1;
	};
	class PortableGenerator: AbstractConstruction
	{
		staticObject="Exile_Construction_PortableGenerator_Static";
		previewObject="Exile_Construction_PortableGenerator_Preview";
		kitMagazine="Exile_Item_PortableGeneratorKit";
		refundObjects[]=
		{
			"Exile_Item_PortableGeneratorKit"
		};
	};
	class RazorWire: AbstractConstruction
	{
		staticObject="Exile_Construction_RazorWire_Static";
		previewObject="Exile_Construction_RazorWire_Preview";
		kitMagazine="Exile_Item_RazorWireKit";
		requiresTerritory=0;
		canBePlacedOnRoad=1;
		refundObjects[]=
		{
			"Exile_Item_RazorWireKit"
		};
	};
	class Safe: AbstractConstruction
	{
		staticObject="Exile_Container_Safe";
		previewObject="Exile_Construction_Safe_Preview";
		kitMagazine="Exile_Item_SafeKit";
		requiresTerritory=0;
		refundObjects[]=
		{
			"Exile_Item_SafeKit"
		};
	};
	class SandBags: AbstractConstruction
	{
		staticObject="Exile_Construction_SandBags_Long_Static";
		previewObject="Exile_Construction_SandBags_Long_Preview";
		kitMagazine="Exile_Item_SandBagsKit_Long";
		requiresTerritory=0;
		canBePlacedOnRoad=1;
		refundObjects[]=
		{
			"Exile_Item_SandBagsKit_Long"
		};
		class SnapPositions
		{
			SandBags01[]={-3,0,-0.417873};
			SandBags02[]={3,0,-0.417873};
			SandbagCorner03[]={2,-0.27978501,-0.419312};
			SandbagCorner04[]={-1.94995,-0.37011701,-0.419312};
		};
		class SnapObjects
		{
			class Exile_Construction_SandBags_Long_Static
			{
				positions[]=
				{
					"SandBags01",
					"SandBags02"
				};
			};
			class Exile_Construction_SandBags_Corner_Static
			{
				positions[]=
				{
					"SandBags03",
					"SandBags04"
				};
			};
		};
	};
	class SandbagsCorner: AbstractConstruction
	{
		staticObject="Exile_Construction_SandBags_Corner_Static";
		previewObject="Exile_Construction_SandBags_Corner_Preview";
		kitMagazine="Exile_Item_SandBagsKit_Corner";
		requiresTerritory=0;
		canBePlacedOnRoad=1;
		refundObjects[]=
		{
			"Exile_Item_SandBagsKit_Corner"
		};
		class SnapPositions
		{
			SandbagCorner01[]={0.139893,-1.02979,-0.42109501};
			SandbagCorner02[]={-1.01001,-0.12988301,-0.42109501};
			SandBags03[]={0.389893,-1.93994,-0.42109501};
			SandBags04[]={-2.11011,0.27002001,-0.42109501};
		};
		class SnapObjects
		{
			class Exile_Construction_SandBags_Corner_Static
			{
				positions[]=
				{
					"SandbagCorner01",
					"SandbagCorner02"
				};
			};
			class Exile_Construction_SandBags_Long_Static
			{
				positions[]=
				{
					"SandbagCorner03",
					"SandbagCorner04"
				};
			};
		};
	};
	class StorageCrate: AbstractConstruction
	{
		staticObject="Exile_Container_StorageCrate";
		previewObject="Exile_Construction_StorageCrate_Preview";
		kitMagazine="Exile_Item_StorageCrateKit";
		requiresTerritory=0;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Exile_Item_StorageCrateKit"
		};
	};
	class SupplyBox: AbstractConstruction
	{
		staticObject="Exile_Container_SupplyBox";
		previewObject="Exile_Construction_SupplyBox_Preview";
		kitMagazine="Exile_Item_SupplyBoxKit";
		requiresTerritory=0;
		refundObjects[]=
		{
			"Exile_Item_SupplyBoxKit"
		};
	};
	class WaterBarrel: AbstractConstruction
	{
		staticObject="Exile_Construction_WaterBarrel_Static";
		previewObject="Exile_Construction_WaterBarrel_Preview";
		kitMagazine="Exile_Item_WaterBarrelKit";
		requiresTerritory=1;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Exile_Item_WaterBarrelKit"
		};
	};
	class WireFence: AbstractConstruction
	{
		staticObject="Exile_Construction_WiredFence_Static";
		previewObject="Exile_Construction_WiredFence_Preview";
		kitMagazine="Exile_Item_WireFenceKit";
		requiresTerritory=1;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Exile_Item_WireFenceKit"
		};
		class SnapPositions
		{
			Fence01[]={-7.875,0,-1.789415};
			Fence02[]={7.875,0,-1.789415};
		};
		class SnapObjects
		{
			class Exile_Construction_WiredFence_Static
			{
				positions[]=
				{
					"Fence01",
					"Fence02"
				};
			};
		};
	};
	class WoodDoor: AbstractWall
	{
		staticObject="Exile_Construction_WoodDoor_Static";
		previewObject="Exile_Construction_WoodDoor_Preview";
		kitMagazine="Exile_Item_WoodDoorKit";
		upgradeObject="Exile_Construction_WoodDoor_Reinforced_Static";
		refundObjects[]=
		{
			"Exile_Item_WoodDoorKit"
		};
		materialType=10;
	};
	class WoodDoorReinforced: AbstractWall
	{
		staticObject="Exile_Construction_WoodDoor_Reinforced_Static";
		previewObject="Exile_Construction_WoodDoor_Reinforced_Preview";
		refundObjects[]=
		{
			"Exile_Item_WoodDoorKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodDoorway: AbstractWall
	{
		staticObject="Exile_Construction_WoodDoorway_Static";
		previewObject="Exile_Construction_WoodDoorway_Preview";
		kitMagazine="Exile_Item_WoodDoorwayKit";
		upgradeObject="Exile_Construction_WoodDoorway_Reinforced_Static";
		refundObjects[]=
		{
			"Exile_Item_WoodDoorwayKit"
		};
		materialType=10;
	};
	class WoodDoorwayReinforced: AbstractWall
	{
		staticObject="Exile_Construction_WoodDoorway_Reinforced_Static";
		previewObject="Exile_Construction_WoodDoorway_Reinforced_Preview";
		refundObjects[]=
		{
			"Exile_Item_WoodDoorwayKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodDrawBridge: AbstractWall
	{
		staticObject="Exile_Construction_WoodDrawBridge_Static";
		previewObject="Exile_Construction_WoodDrawBridge_Preview";
		kitMagazine="Exile_Item_WoodDrawBridgeKit";
		upgradeObject="Exile_Construction_WoodDrawBridge_Reinforced_Static";
		refundObjects[]=
		{
			"Exile_Item_WoodDrawBridgeKit"
		};
		materialType=10;
		class SnapPositions
		{
			Floor01[]={0,2.875,3};
			Floor02[]={0,-2.875,3};
			Wall01[]={-6,0,0};
			Wall02[]={-2.875,-2.875,0};
			Wall03[]={2.875,-2.875,0};
			Wall04[]={6,0,0};
			Wall05[]={2.875,3.1300001,0};
			Wall06[]={-2.875,3.1300001,0};
			Wall07[]={0,0,3};
			Wall08[]={0,0,-3};
		};
	};
	class WoodDrawBridgeReinforced: AbstractWall
	{
		staticObject="Exile_Construction_WoodDrawBridge_Reinforced_Static";
		previewObject="Exile_Construction_WoodDrawBridge_Reinforced_Preview";
		refundObjects[]=
		{
			"Exile_Item_WoodDrawBridgeKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=11;
		class SnapPositions
		{
			Floor01[]={0,2.875,3};
			Floor02[]={0,-2.875,3};
			Wall01[]={-6,0,0};
			Wall02[]={-2.875,-2.875,0};
			Wall03[]={2.875,-2.875,0};
			Wall04[]={6,0,0};
			Wall05[]={2.875,3.1300001,0};
			Wall06[]={-2.875,3.1300001,0};
			Wall07[]={0,0,3};
			Wall08[]={0,0,-3};
		};
	};
	class WoodFloor: AbstractFloor
	{
		staticObject="Exile_Construction_WoodFloor_Static";
		previewObject="Exile_Construction_WoodFloor_Preview";
		kitMagazine="Exile_Item_WoodFloorKit";
		upgradeObject="Exile_Construction_WoodFloor_Reinforced_Static";
		refundObjects[]=
		{
			"Exile_Item_WoodFloorKit"
		};
		materialType=10;
	};
	class WoodFloorPort: AbstractFloor
	{
		staticObject="Exile_Construction_WoodFloorPort_Static";
		previewObject="Exile_Construction_WoodFloorPort_Preview";
		kitMagazine="Exile_Item_WoodFloorPortKit";
		refundObjects[]=
		{
			"Exile_Item_WoodFloorPortKit"
		};
		materialType=10;
	};
	class WoodFloorPortSmall: AbstractFloor
	{
		staticObject="Exile_Construction_WoodFloorPortSmall_Static";
		previewObject="Exile_Construction_WoodFloorPortSmall_Preview";
		kitMagazine="Exile_Item_WoodFloorPortSmallKit";
		upgradeObject="Exile_Construction_WoodFloorPortSmall_Reinforced_Static";
		refundObjects[]=
		{
			"Exile_Item_WoodFloorPortSmallKit"
		};
		materialType=10;
		class SnapPositions
		{
			PortHole01[]={-0.85000002,0,-3.1500001};
			PortHole02[]={0,0.85000002,-3.1500001};
			PortHole03[]={0,-0.85000002,-3.1500001};
			PortHole04[]={0.85000002,0,-3.1500001};
			Wall01[]={0,-2.875,0.25};
			Wall02[]={-2.875,0,0.25};
			Wall03[]={0,2.875,0.25};
			Wall04[]={2.875,0,0.25};
			Floor01[]={0,6,0};
			Floor02[]={6,0,0};
			Floor03[]={0,-6,0};
			Floor04[]={-6,0,0};
			Floor05[]={0,0,3.25};
			Floor06[]={0,0,-3.25};
		};
	};
	class WoodFloorPortSmallReinforced: AbstractFloor
	{
		staticObject="Exile_Construction_WoodFloorPortSmall_Reinforced_Static";
		previewObject="Exile_Construction_WoodFloorPortSmall_Reinforced_Preview";
		refundObjects[]=
		{
			"Exile_Item_WoodFloorPortSmallKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=11;
		class SnapPositions
		{
			PortHole01[]={-0.85000002,0,-3.1500001};
			PortHole02[]={0,0.85000002,-3.1500001};
			PortHole03[]={0,-0.85000002,-3.1500001};
			PortHole04[]={0.85000002,0,-3.1500001};
			Wall01[]={0,-2.875,0.25};
			Wall02[]={-2.875,0,0.25};
			Wall03[]={0,2.875,0.25};
			Wall04[]={2.875,0,0.25};
			Floor01[]={0,6,0};
			Floor02[]={6,0,0};
			Floor03[]={0,-6,0};
			Floor04[]={-6,0,0};
			Floor05[]={0,0,3.25};
			Floor06[]={0,0,-3.25};
		};
	};
	class WoodFloorReinforced: AbstractFloor
	{
		staticObject="Exile_Construction_WoodFloor_Reinforced_Static";
		previewObject="Exile_Construction_WoodFloor_Reinforced_Preview";
		refundObjects[]=
		{
			"Exile_Item_WoodFloorKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodGate: AbstractWall
	{
		staticObject="Exile_Construction_WoodGate_Static";
		previewObject="Exile_Construction_WoodGate_Preview";
		kitMagazine="Exile_Item_WoodGateKit";
		upgradeObject="Exile_Construction_WoodGate_Reinforced_Static";
		refundObjects[]=
		{
			"Exile_Item_WoodGateKit"
		};
		materialType=10;
	};
	class WoodGateReinforced: AbstractWall
	{
		staticObject="Exile_Construction_WoodGate_Reinforced_Static";
		previewObject="Exile_Construction_WoodGate_Reinforced_Preview";
		refundObjects[]=
		{
			"Exile_Item_WoodGateKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodLadder: AbstractConstruction
	{
		staticObject="Exile_Construction_WoodLadder_Static";
		previewObject="Exile_Construction_WoodLadder_Preview";
		kitMagazine="Exile_Item_WoodLadderKit";
		refundObjects[]=
		{
			"Exile_Item_WoodLadderKit"
		};
		materialType=10;
		allowDuplicateSnap=1;
		class SnapPositions
		{
			Ladder01[]={0,0,3.5};
		};
		class SnapObjects
		{
			class Exile_Construction_WoodFloorPortSmall_Static
			{
				positions[]=
				{
					"PortHole01",
					"PortHole02",
					"PortHole03",
					"PortHole04"
				};
			};
			class Exile_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[]=
				{
					"PortHole01",
					"PortHole02",
					"PortHole03",
					"PortHole04"
				};
			};
			class Exile_Construction_WoodLadder_Static
			{
				positions[]=
				{
					"Ladder01"
				};
			};
		};
	};
	class WoodStairs: AbstractConstruction
	{
		staticObject="Exile_Construction_WoodStairs_Static";
		previewObject="Exile_Construction_WoodStairs_Preview";
		kitMagazine="Exile_Item_WoodStairsKit";
		refundObjects[]=
		{
			"Exile_Item_WoodStairsKit"
		};
		materialType=10;
		allowDuplicateSnap=1;
		class SnapObjects
		{
			class Exile_Construction_WoodFloor_Static
			{
				positions[]=
				{
					"Stairs01"
				};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				positions[]=
				{
					"Stairs01",
					"Stairs02"
				};
			};
			class Exile_Construction_ConcreteFloor_Static
			{
				positions[]=
				{
					"Stairs01"
				};
			};
			class Exile_Construction_ConcreteFloorPort_Static
			{
				positions[]=
				{
					"Stairs01",
					"Stairs02"
				};
			};
		};
	};
	class WoodSupport: AbstractSupport
	{
		staticObject="Exile_Construction_WoodSupport_Static";
		previewObject="Exile_Construction_WoodSupport_Preview";
		kitMagazine="Exile_Item_WoodSupportKit";
		refundObjects[]=
		{
			"Exile_Item_WoodSupportKit"
		};
		materialType=10;
	};
	class WoodWall: AbstractWall
	{
		staticObject="Exile_Construction_WoodWall_Static";
		previewObject="Exile_Construction_WoodWall_Preview";
		kitMagazine="Exile_Item_WoodWallKit";
		upgradeObject="Exile_Construction_WoodWall_Reinforced_Static";
		refundObjects[]=
		{
			"Exile_Item_WoodWallKit"
		};
		materialType=10;
	};
	class WoodWallHalf: AbstractWall
	{
		staticObject="Exile_Construction_WoodWallHalf_Static";
		previewObject="Exile_Construction_WoodWallHalf_Preview";
		kitMagazine="Exile_Item_WoodWallHalfKit";
		upgradeObject="Exile_Construction_WoodWallHalf_Reinforced_Static";
		refundObjects[]=
		{
			"Exile_Item_WoodWallHalfKit"
		};
		materialType=10;
	};
	class WoodWallHalfReinforced: AbstractWall
	{
		staticObject="Exile_Construction_WoodWallHalf_Reinforced_Static";
		previewObject="Exile_Construction_WoodWallHalf_Reinforced_Preview";
		refundObjects[]=
		{
			"Exile_Item_WoodWallHalfKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodWallReinforced: AbstractWall
	{
		staticObject="Exile_Construction_WoodWall_Reinforced_Static";
		previewObject="Exile_Construction_WoodWall_Reinforced_Preview";
		refundObjects[]=
		{
			"Exile_Item_WoodWallKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodWindow: AbstractWall
	{
		staticObject="Exile_Construction_WoodWindow_Static";
		previewObject="Exile_Construction_WoodWindow_Preview";
		kitMagazine="Exile_Item_WoodWindowKit";
		upgradeObject="Exile_Construction_WoodWindow_Reinforced_Static";
		refundObjects[]=
		{
			"Exile_Item_WoodWindowKit"
		};
		materialType=10;
	};
	class WoodWindowReinforced: AbstractWall
	{
		staticObject="Exile_Construction_WoodWindow_Reinforced_Static";
		previewObject="Exile_Construction_WoodWindow_Reinforced_Preview";
		refundObjects[]=
		{
			"Exile_Item_WoodWindowKit",
			"Exile_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WorkBench: AbstractConstruction
	{
		staticObject="Exile_Construction_WorkBench_Static";
		previewObject="Exile_Construction_WorkBench_Preview";
		kitMagazine="Exile_Item_WorkBenchKit";
		refundObjects[]=
		{
			"Exile_Item_WorkBenchKit"
		};
		requiresTerritory=0;
		canBePlacedOnRoad=0;
	};
};
class CfgDifficultyPresets
{
	class Veteran;
	defaultPreset="ExileRegular";
	class ExileRegular: Veteran
	{
		BleedingRate=0.00050000002;
		displayName="Regular Exile";
		class Options
		{
			reducedDamage=0;
			groupIndicators=0;
			friendlyTags=0;
			enemyTags=0;
			detectedMines=0;
			commands=0;
			waypoints=0;
			weaponInfo=0;
			stanceIndicator=0;
			staminaBar=0;
			weaponCrosshair=1;
			visionAid=0;
			thirdPersonView=1;
			cameraShake=1;
			scoreTable=0;
			deathMessages=0;
			vonID=0;
			squadRadar=0;
			mapContent=0;
			autoReport=0;
			multipleSaves=0;
		};
	};
	class ExileHardcore: Veteran
	{
		BleedingRate=0.0049999999;
		displayName="Hardcore Exile";
		class Options
		{
			reducedDamage=0;
			groupIndicators=0;
			friendlyTags=0;
			enemyTags=0;
			detectedMines=0;
			commands=0;
			waypoints=0;
			weaponInfo=0;
			stanceIndicator=0;
			staminaBar=0;
			weaponCrosshair=0;
			visionAid=0;
			thirdPersonView=0;
			cameraShake=1;
			scoreTable=0;
			deathMessages=0;
			vonID=0;
			squadRadar=0;
			mapContent=0;
			autoReport=0;
			multipleSaves=0;
		};
	};
};
class CfgExileDelayedActions
{
	class Abstract
	{
		duration=10;
		abortInCombatMode=1;
		durationFunction="";
		animation="";
		animationType="switchMove";
		failChance=0;
		conditionFunction="";
		completedFunction="";
		abortedFunction="";
		failedFunction="";
	};
	class RepairVehicle: Abstract
	{
		duration=37;
		animation="Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction="ExileClient_action_repairVehicle_condition";
		completedFunction="ExileClient_action_repairVehicle_completed";
	};
	class HotwireVehicle: Abstract
	{
		duration="3 * 60";
		failChance=50;
		animation="Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction="ExileClient_action_hotwireVehicle_condition";
		completedFunction="ExileClient_action_hotwireVehicle_completed";
		failedFunction="ExileClient_action_hotwireVehicle_failed";
	};
	class StealFlag: Abstract
	{
		duration=60;
		abortInCombatMode=0;
		durationFunction="ExileClient_action_stealFlag_duration";
		animation="Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction="ExileClient_action_stealFlag_condition";
		completedFunction="ExileClient_action_stealFlag_completed";
	};
	class HideBody: Abstract
	{
		duration=10;
		animation="Exile_Shovel_Dig01";
		conditionFunction="ExileClient_action_HideBody_condition";
		completedFunction="ExileClient_action_HideBody_completed";
	};
	class PlantChargeWood: Abstract
	{
		duration="3 * 60";
		abortInCombatMode=0;
		animation="Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction="ExileClient_action_breaching_condition";
		completedFunction="ExileClient_action_breaching_completed";
		failedFunction="ExileClient_action_breaching_failed";
		abortedFunction="ExileClient_action_breaching_aborted";
	};
	class PlantChargeMetal: PlantChargeWood
	{
		duration="5 * 60";
	};
	class PlantChargeConcrete: PlantChargeWood
	{
		duration="7 * 60";
	};
	class RepairConstruction: Abstract
	{
		animation="Exile_Acts_RepairVehicle01_Animation01";
		durationFunction="ExileClient_action_repairConstruction_duration";
		conditionFunction="ExileClient_action_repairConstruction_condition";
		completedFunction="ExileClient_action_repairConstruction_completed";
	};
	class GutAnimal: Abstract
	{
		duration=10;
		animationType="playMoveNow";
		animation="AinvPknlMstpSnonWnonDr_medic5";
		conditionFunction="ExileClient_action_GutAnimal_condition";
		completedFunction="ExileClient_action_GutAnimal_completed";
	};
};
class CfgExileLoadingScreen
{
	templates[]=
	{
		
		{
			"Arma has stoped responding...",
			"Brett Nordin"
		},
		
		{
			"Installing snapbuild...",
			"Mezo"
		},
		
		{
			"Hiding your backpack...",
			"Markkos"
		},
		
		{
			"Prepare to rage quit...",
			"Spackler"
		},
		
		{
			"C0000005 ACCESS_VIOLATION",
			"DB"
		},
		
		{
			"Spawning into crying corner...",
			"Magz"
		},
		
		{
			"Publishing your mission file on MPGH...",
			"Valthos"
		},
		
		{
			"Attempting integer division by zero...",
			"eraser1"
		},
		
		{
			"Toilet door is being loaded...",
			"tom"
		},
		
		{
			"Soon(TM)",
			"WolfkillArcadia"
		},
		
		{
			"Click Click... wait",
			"TheGyro"
		},
		
		{
			"Removing your workshop subs...",
			"File_Delete"
		},
		
		{
			"WARNING: THIS GAME IS EARLY ACCESS ALPHA.",
			"BrainlessDude"
		},
		
		{
			"Hardening bushes...",
			"Gaina"
		},
		
		{
			"Learning how to Arma...",
			"ka0s"
		},
		
		{
			"Injecting Backdoor Trojan...",
			"bambam"
		},
		
		{
			"Blowing up your vehicles...",
			"SomeRandomScorpion"
		},
		
		{
			"Eating chicken...",
			"ManuDiet"
		},
		
		{
			"Resetting your poptabs...",
			"Colonelfury"
		},
		
		{
			".... . . .. ... .",
			"WimpSnark"
		},
		
		{
			"Loading next loading screen...",
			"Vodor"
		},
		
		{
			"HODOR!",
			"Hodor"
		},
		
		{
			"[Insert funny loading screen joke here]",
			"polivilas"
		},
		
		{
			"Add toaster to improve loading speed...",
			"zAfLu"
		},
		
		{
			"Error Type Number, Not a Number, Expected Number, Number",
			"Grim"
		},
		
		{
			"Do you think it's going to load?",
			"[T.G] Razor"
		},
		
		{
			"Preparing bicycle of death...",
			"BaroN"
		},
		
		{
			"Filling Jerry Cans...",
			"Abomination"
		},
		
		{
			"Mining Bitcoints to pay the server...",
			"XuluniX"
		},
		
		{
			"Constructing additional pylons...",
			"KrypTarch"
		},
		
		{
			"Looking at pictures of cats...",
			"DudeMan"
		},
		
		{
			"Releasing bugs back into their habitat...",
			"MadMoo"
		},
		
		{
			"Exile_zombies.sqf failed to load",
			"Pustekuchen"
		},
		
		{
			"Wait a bit, I'm in the middle of some calibrations...",
			"acer5200"
		},
		
		{
			"Adding soap to a rope...",
			"Tankiouse"
		},
		
		{
			"Point of No Return",
			"Commander Malc"
		},
		
		{
			"Making another memory error",
			"SynysterDemon"
		},
		
		{
			"LINUS!",
			"Beardageddon"
		},
		
		{
			"Loading Bambi Slayers...",
			"GolovaRaoul"
		},
		
		{
			"9879821876, I'm sure you haven't read this number..",
			"maxicraft68"
		},
		
		{
			"Loading loadscreen suggestions...",
			"ThatGuyYouKnow"
		},
		
		{
			"Initiating lag...",
			"Crazy Mike"
		},
		
		{
			"Auto hovering the chopper...",
			"xMarch"
		},
		
		{
			"Restarting for no reason...",
			"DarkWatcher"
		},
		
		{
			"Kurwa!",
			"Flosstradamus"
		},
		
		{
			"Self destruction in 10 seconds...",
			"Darkzy"
		},
		
		{
			"You have that read wrong",
			"Axl"
		},
		
		{
			"Initilizing 1000m-pistol-whipping AI...",
			"Major Mittens"
		},
		
		{
			"Deploying spike strips to bridges...",
			"dizzler"
		},
		
		{
			"Kicked by BattlEye: Script Restriction #1337",
			"Mr Hanky"
		},
		
		{
			"A good bush for an ambush...",
			"Reaper7Strike"
		},
		
		{
			"Kuplion is awesome!!",
			"kuplion"
		},
		
		{
			"Spawning inevitable death...",
			"KIMBOF1"
		},
		
		{
			"Rigging broken parachute...",
			"Gordon301"
		},
		
		{
			"Log in succesful, informing raiders...",
			"Feary"
		},
		
		{
			"Booby trapping push bikes...",
			"HonestDave"
		},
		
		{
			"Deploying Raiding Bandits...",
			"Zentarix"
		},
		
		{
			"I got knife let's steal.. *died at car*",
			"Reaper7Strike"
		},
		
		{
			"Feeding horse for power...",
			"primedead"
		},
		
		{
			"Your XM8 shut down unexpectedly. Please restart your PC.",
			"Przemek"
		},
		
		{
			"Hiding IEDs on the road...",
			"Aramet"
		},
		
		{
			"Refining death mechanics...",
			"Nightshredder"
		},
		
		{
			"Chopping down some shrubberies... with a... herring!",
			"Tobias Solem"
		}
	};
};
class CfgExileLoot
{
	class LootTables
	{
		CivillianLowerClass[]=
		{
			"Pistols",
			"CivilianHeadgear",
			"PistolAttachments",
			"CivilianBackpacks",
			"Pistols",
			"PistolAmmo",
			"Trash",
			"Chemlights",
			"Trash",
			"ShotgunAmmo",
			"CivilianHeadgear",
			"Trash",
			"Trash",
			"Trash",
			"Food",
			"CivilianClothing",
			"Trash",
			"Trash",
			"PistolAmmo",
			"CivilianHeadgear",
			"Food",
			"Chemlights",
			"Food",
			"PistolAttachments",
			"CivilianItems",
			"CivilianClothing",
			"SMGAttachments",
			"SMGAttachments",
			"CivilianVests",
			"CivilianHeadgear",
			"CivilianClothing",
			"CivilianClothing",
			"SMGAmmo",
			"CivilianItems",
			"CivilianClothing",
			"CivilianClothing",
			"Shotguns",
			"Trash",
			"PistolAmmo",
			"Drinks",
			"CivilianClothing",
			"Drinks",
			"CivilianClothing",
			"Chemlights",
			"Trash",
			"Pistols",
			"CivilianHeadgear",
			"Drinks",
			"CivilianHeadgear",
			"CivilianHeadgear",
			"Food",
			"Food",
			"CivilianBackpacks",
			"CivilianBackpacks",
			"RoadFlares",
			"CivilianBackpacks",
			"CivilianClothing",
			"Food",
			"Food",
			"CivilianItems",
			"CivilianClothing",
			"Chemlights",
			"RoadFlares",
			"CivilianVests",
			"CivilianItems",
			"CivilianClothing",
			"Food",
			"CivilianBackpacks",
			"CivilianHeadgear",
			"CivilianBackpacks",
			"Food",
			"CivilianClothing",
			"Chemlights",
			"Pistols",
			"CivilianClothing",
			"CivilianClothing",
			"Food",
			"CivilianItems",
			"SMGAmmo",
			"CivilianClothing",
			"CivilianHeadgear",
			"Food",
			"Food",
			"Food",
			"Trash",
			"Pistols",
			"Trash",
			"Food",
			"CivilianHeadgear",
			"RoadFlares",
			"Chemlights",
			"Trash",
			"CivilianClothing",
			"Chemlights",
			"ShotgunAmmo",
			"Food",
			"Shotguns",
			"Food",
			"CivilianHeadgear",
			"Trash",
			"Trash",
			"Pistols",
			"Trash",
			"Chemlights",
			"CivilianVests",
			"Trash",
			"Drinks",
			"Trash",
			"CivilianItems",
			"CivilianHeadgear",
			"Chemlights",
			"CivilianClothing",
			"Trash",
			"Food",
			"SMG",
			"CivilianBackpacks",
			"Food",
			"CivilianItems",
			"CivilianHeadgear",
			"Food",
			"RoadFlares",
			"CivilianHeadgear",
			"Food",
			"PistolAttachments",
			"SMGAttachments",
			"Trash",
			"Trash",
			"Trash",
			"CivilianHeadgear",
			"CivilianItems",
			"Drinks",
			"Drinks",
			"Restraints",
			"ShotgunAmmo",
			"Shotguns",
			"PistolAmmo",
			"Trash",
			"CivilianVests",
			"Trash",
			"Food",
			"Trash",
			"CivilianHeadgear",
			"Food",
			"RoadFlares",
			"CivilianClothing",
			"CivilianItems",
			"Food",
			"CivilianClothing",
			"Food",
			"Trash",
			"Trash",
			"Drinks",
			"CivilianHeadgear",
			"RoadFlares",
			"CivilianBackpacks",
			"CivilianItems",
			"Food",
			"Pistols",
			"SMG",
			"Food",
			"PistolAmmo",
			"CivilianBackpacks",
			"Food",
			"CivilianBackpacks",
			"Shotguns",
			"Chemlights",
			"RoadFlares",
			"Drinks",
			"RoadFlares",
			"Food",
			"RoadFlares",
			"SMG",
			"Trash",
			"RoadFlares",
			"CivilianVests",
			"CivilianHeadgear",
			"SMGAmmo",
			"CivilianClothing",
			"Trash",
			"Pistols",
			"Drinks",
			"CivilianBackpacks",
			"CivilianHeadgear",
			"Drinks",
			"SMG",
			"Trash",
			"Trash",
			"CivilianHeadgear"
		};
		CivillianUpperClass[]=
		{
			"Trash",
			"CivilianHeadgear",
			"CivilianItems",
			"CivilianHeadgear",
			"Shotguns",
			"CivilianItems",
			"CivilianClothing",
			"CivilianHeadgear",
			"CivilianBackpacks",
			"CivilianVests",
			"Food",
			"Trash",
			"CivilianHeadgear",
			"CivilianHeadgear",
			"CivilianItems",
			"CivilianBackpacks",
			"Drinks",
			"Chemlights",
			"RoadFlares",
			"CivilianBackpacks",
			"Rifles",
			"Chemlights",
			"CivilianClothing",
			"CivilianItems",
			"Rifles",
			"Trash",
			"CivilianClothing",
			"Shotguns",
			"Food",
			"Chemlights",
			"Trash",
			"Rifles",
			"CivilianClothing",
			"Trash",
			"Trash",
			"Food",
			"Chemlights",
			"RifleAmmo",
			"Trash",
			"Chemlights",
			"Food",
			"CivilianItems",
			"Pistols",
			"Drinks",
			"Food",
			"Trash",
			"RoadFlares",
			"RifleAttachments",
			"Pistols",
			"Trash",
			"Trash",
			"PistolAttachments",
			"RoadFlares",
			"Trash",
			"CivilianClothing",
			"RoadFlares",
			"CivilianBackpacks",
			"CivilianClothing",
			"CivilianBackpacks",
			"Trash",
			"Food",
			"Drinks",
			"Food",
			"Food",
			"Food",
			"RifleAttachments",
			"Food",
			"Drinks",
			"Pistols",
			"ShotgunAmmo",
			"CivilianItems",
			"SMGAttachments",
			"Drinks",
			"CivilianHeadgear",
			"RoadFlares",
			"Trash",
			"CivilianHeadgear",
			"RoadFlares",
			"CivilianClothing",
			"Drinks",
			"SMGAmmo",
			"Trash",
			"CivilianHeadgear",
			"RoadFlares",
			"CivilianVests",
			"CivilianClothing",
			"Food",
			"Food",
			"CivilianHeadgear",
			"Trash",
			"Food",
			"Food",
			"Trash",
			"CivilianItems",
			"Food",
			"Chemlights",
			"CivilianBackpacks",
			"CivilianItems",
			"CivilianBackpacks",
			"Trash",
			"Trash",
			"CivilianHeadgear",
			"Trash",
			"Trash",
			"Shotguns",
			"RifleAttachments",
			"CivilianClothing",
			"CivilianHeadgear",
			"CivilianHeadgear",
			"CivilianClothing",
			"Pistols",
			"Food",
			"RifleAmmo",
			"CivilianVests",
			"CivilianHeadgear",
			"CivilianClothing",
			"CivilianHeadgear",
			"SMG",
			"PistolAmmo",
			"Food",
			"CivilianClothing",
			"Chemlights",
			"CivilianBackpacks",
			"SMG",
			"SMGAttachments",
			"CivilianHeadgear",
			"SMGAmmo",
			"PistolAmmo",
			"Food",
			"CivilianClothing",
			"ShotgunAmmo",
			"SMGAttachments",
			"Trash",
			"Trash",
			"Trash",
			"PistolAttachments",
			"Pistols",
			"Food",
			"Trash",
			"CivilianClothing",
			"CivilianClothing",
			"Trash",
			"Chemlights",
			"CivilianHeadgear",
			"CivilianItems",
			"Food",
			"PistolAttachments",
			"Restraints",
			"ShotgunAmmo",
			"SMG",
			"Drinks",
			"CivilianVests",
			"Shotguns",
			"RoadFlares",
			"Food",
			"Pistols",
			"CivilianHeadgear",
			"RifleAmmo",
			"Pistols",
			"Trash",
			"Trash",
			"RoadFlares",
			"CivilianBackpacks",
			"Food",
			"CivilianBackpacks",
			"Pistols",
			"CivilianClothing",
			"PistolAmmo",
			"Chemlights",
			"CivilianClothing",
			"CivilianHeadgear",
			"CivilianVests",
			"CivilianClothing",
			"Food",
			"Food",
			"CivilianHeadgear",
			"Drinks",
			"CivilianClothing",
			"PistolAmmo",
			"Food",
			"Chemlights",
			"CivilianHeadgear",
			"Food",
			"Trash",
			"Drinks",
			"SMG",
			"RoadFlares",
			"CivilianBackpacks",
			"SMGAmmo",
			"CivilianClothing",
			"Drinks",
			"PistolAmmo",
			"Food",
			"CivilianItems",
			"Trash",
			"Food",
			"Trash"
		};
		Shop[]=
		{
			"SmokeGrenades",
			"Pistols",
			"Trash",
			"Trash",
			"Pistols",
			"Trash",
			"Drinks",
			"Drinks",
			"Trash",
			"Chemlights",
			"Trash",
			"Drinks",
			"CivilianItems",
			"Shotguns",
			"Pistols",
			"Trash",
			"Food",
			"Drinks",
			"RoadFlares",
			"Chemlights",
			"CivilianItems",
			"IndustrialItems",
			"Trash",
			"PistolAmmo",
			"ShotgunAmmo",
			"Food",
			"SMGAmmo",
			"Pistols",
			"Trash",
			"Pistols",
			"Food",
			"Chemlights",
			"Drinks",
			"Pistols",
			"CivilianHeadgear",
			"Food",
			"PistolAttachments",
			"IndustrialItems",
			"Trash",
			"Food",
			"CivilianItems",
			"SMG",
			"Food",
			"SMG",
			"Trash",
			"Food",
			"Trash",
			"RoadFlares",
			"CivilianBackpacks",
			"Trash",
			"Trash",
			"Food",
			"Trash",
			"CivilianItems",
			"Drinks",
			"CivilianHeadgear",
			"RoadFlares",
			"Shotguns",
			"Drinks",
			"Trash",
			"Pistols",
			"RoadFlares",
			"Drinks",
			"CivilianBackpacks",
			"SMG",
			"Pistols",
			"SMG",
			"Restraints",
			"CivilianItems",
			"CivilianClothing",
			"CivilianBackpacks",
			"CivilianBackpacks",
			"Drinks",
			"Food",
			"MedicalItems",
			"Trash",
			"Food",
			"Trash",
			"CivilianBackpacks",
			"Shotguns",
			"Chemlights",
			"CivilianVests",
			"Trash",
			"Trash",
			"Trash",
			"Drinks",
			"Trash",
			"SmokeGrenades",
			"Drinks",
			"Food",
			"Restraints",
			"CivilianItems",
			"CivilianItems",
			"Food",
			"SmokeGrenades",
			"IndustrialItems",
			"Trash",
			"MedicalItems",
			"Trash",
			"Chemlights",
			"Pistols",
			"Shotguns",
			"Trash",
			"SMG",
			"Food",
			"SmokeGrenades",
			"RoadFlares",
			"Drinks",
			"Drinks",
			"Drinks",
			"Trash",
			"Trash",
			"Food",
			"Restraints",
			"SMGAttachments",
			"Trash",
			"PistolAmmo",
			"Trash",
			"Pistols",
			"CivilianHeadgear",
			"Drinks",
			"MedicalItems",
			"Food",
			"Trash",
			"Trash"
		};
		Industrial[]=
		{
			"IndustrialItems",
			"RoadFlares",
			"Trash",
			"IndustrialItems",
			"Vehicle",
			"Vehicle",
			"Vehicle",
			"Vehicle",
			"RoadFlares",
			"Vehicle",
			"Trash",
			"Trash",
			"IndustrialItems",
			"Vehicle",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"RoadFlares",
			"RoadFlares",
			"IndustrialItems",
			"Vehicle",
			"Trash",
			"Vehicle",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"RoadFlares",
			"IndustrialItems",
			"IndustrialItems",
			"RoadFlares",
			"IndustrialItems",
			"IndustrialItems",
			"Vehicle",
			"RoadFlares",
			"IndustrialItems",
			"Trash",
			"Vehicle",
			"Trash",
			"RoadFlares",
			"Vehicle",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Vehicle",
			"Trash",
			"Trash",
			"Vehicle",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"Vehicle",
			"IndustrialItems",
			"Trash",
			"Trash",
			"Trash",
			"Vehicle",
			"Vehicle",
			"RoadFlares",
			"Vehicle",
			"Trash",
			"Trash",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"Restraints",
			"RoadFlares",
			"Restraints",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"Restraints",
			"Trash",
			"Trash",
			"Trash",
			"Vehicle",
			"Trash",
			"Trash",
			"Vehicle",
			"Vehicle",
			"RoadFlares",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"Trash",
			"Restraints",
			"IndustrialItems",
			"IndustrialItems",
			"Restraints",
			"IndustrialItems",
			"RoadFlares",
			"Vehicle",
			"Vehicle",
			"Trash",
			"Vehicle",
			"Trash",
			"Vehicle",
			"Trash",
			"RoadFlares",
			"RoadFlares",
			"RoadFlares",
			"Trash",
			"Vehicle"
		};
		Factories[]=
		{
			"Trash",
			"Trash",
			"Electronics",
			"IndustrialItems",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"IndustrialItems",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"IndustrialItems",
			"Trash",
			"Trash",
			"IndustrialItems",
			"Trash",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Electronics",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"Trash",
			"Trash",
			"Electronics",
			"Electronics",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"Electronics",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"Trash",
			"IndustrialItems",
			"Electronics",
			"Electronics",
			"IndustrialItems",
			"IndustrialItems",
			"Electronics",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"Trash",
			"Trash",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"Trash",
			"Electronics",
			"Electronics",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"Trash"
		};
		VehicleService[]=
		{
			"Trash",
			"Vehicle",
			"Vehicle",
			"Vehicle",
			"Vehicle",
			"Vehicle",
			"Trash",
			"Trash",
			"IndustrialItems",
			"Restraints",
			"Vehicle",
			"Vehicle",
			"Trash",
			"Trash",
			"Vehicle",
			"Vehicle",
			"Vehicle",
			"Vehicle",
			"Trash",
			"IndustrialItems",
			"IndustrialItems",
			"Vehicle",
			"Vehicle",
			"Trash",
			"IndustrialItems",
			"Trash",
			"Vehicle",
			"RoadFlares",
			"Restraints",
			"IndustrialItems",
			"RoadFlares",
			"RoadFlares",
			"RoadFlares",
			"Vehicle",
			"IndustrialItems",
			"Trash",
			"Vehicle",
			"Vehicle",
			"Trash",
			"IndustrialItems",
			"Trash",
			"Vehicle",
			"IndustrialItems",
			"Trash",
			"RoadFlares",
			"Vehicle",
			"Vehicle",
			"Restraints",
			"Vehicle",
			"Vehicle",
			"Restraints",
			"IndustrialItems",
			"IndustrialItems",
			"Trash",
			"Trash",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"Trash",
			"RoadFlares",
			"RoadFlares",
			"RoadFlares",
			"Vehicle",
			"Vehicle",
			"Vehicle",
			"Vehicle",
			"Vehicle",
			"IndustrialItems",
			"Vehicle",
			"RoadFlares",
			"Restraints",
			"IndustrialItems",
			"Trash",
			"Trash",
			"Vehicle",
			"Trash",
			"IndustrialItems",
			"Vehicle",
			"RoadFlares",
			"IndustrialItems",
			"Trash",
			"RoadFlares",
			"Vehicle",
			"Vehicle",
			"Trash",
			"RoadFlares",
			"Vehicle",
			"Vehicle",
			"Trash",
			"Trash",
			"Vehicle",
			"IndustrialItems",
			"IndustrialItems",
			"RoadFlares",
			"RoadFlares",
			"Vehicle",
			"IndustrialItems",
			"RoadFlares",
			"IndustrialItems",
			"Trash",
			"IndustrialItems",
			"Vehicle",
			"Trash",
			"Trash",
			"Vehicle",
			"Trash",
			"Vehicle",
			"IndustrialItems",
			"Vehicle",
			"IndustrialItems",
			"Trash",
			"Trash",
			"IndustrialItems"
		};
		Military[]=
		{
			"MilitaryBackpacks",
			"Trash",
			"Trash",
			"Snipers",
			"Trash",
			"MilitaryClothing",
			"CivilianItems",
			"GuerillaClothing",
			"Trash",
			"UGLFlares",
			"GuerillaBackpacks",
			"LMGAmmo",
			"HandGrenades",
			"MilitaryClothing",
			"Trash",
			"Trash",
			"SniperAttachments",
			"Trash",
			"Trash",
			"Explosives",
			"Trash",
			"GuerillaClothing",
			"Trash",
			"Trash",
			"Trash",
			"MilitaryHeadgear",
			"GuerillaBackpacks",
			"Trash",
			"Trash",
			"MedicalItems",
			"Trash",
			"GuerillaClothing",
			"GuerillaItems",
			"Trash",
			"DLCOptics",
			"MedicalItems",
			"RifleAttachments",
			"Bipods",
			"Trash",
			"GuerillaBackpacks",
			"SmokeGrenades",
			"DLCVests",
			"Trash",
			"Trash",
			"UGLSmokes",
			"DLCVests",
			"Trash",
			"Trash",
			"HandGrenades",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"GuerillaHeadgear",
			"RifleAmmo",
			"Trash",
			"GuerillaClothing",
			"CivilianItems",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"GuerillaHeadgear",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"DLCSupressor",
			"Trash",
			"Trash",
			"Bipods",
			"RifleAttachments",
			"MilitaryVests",
			"Snipers",
			"UGLFlares",
			"Rifles",
			"Trash",
			"SmokeGrenades",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"HEGrenades",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"DLCRifles",
			"MilitaryClothing",
			"GuerillaItems",
			"Explosives",
			"Trash",
			"SniperAttachments",
			"Trash",
			"UGLSmokes",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"Trash",
			"Explosives",
			"Trash",
			"Trash",
			"Trash",
			"LMG",
			"Trash",
			"GuerillaBackpacks",
			"Trash",
			"MilitaryBackpacks",
			"Trash",
			"MilitaryClothing",
			"Trash",
			"DLCAmmo",
			"DLCAmmo",
			"DLCRifles",
			"Trash",
			"MilitaryVests",
			"Trash",
			"RifleAttachments",
			"HEGrenades",
			"LMGAmmo",
			"SmokeGrenades",
			"Rifles",
			"MilitaryBackpacks",
			"MilitaryClothing",
			"Trash",
			"GuerillaItems",
			"GuerillaHeadgear",
			"MilitaryHeadgear",
			"DLCRifles",
			"GuerillaVests",
			"Restraints",
			"Trash",
			"Trash",
			"Trash",
			"DLCGhillies",
			"Trash",
			"Ghillies",
			"Trash",
			"Trash",
			"UGLSmokes",
			"SniperAmmo",
			"Trash",
			"Rifles",
			"Trash",
			"Snipers",
			"Trash",
			"Trash",
			"Trash",
			"GuerillaClothing",
			"Trash",
			"CivilianItems",
			"Restraints",
			"Rifles",
			"Trash",
			"Trash",
			"HandGrenades",
			"Trash",
			"MilitaryHeadgear",
			"Trash",
			"DLCOptics",
			"Trash",
			"Trash",
			"Explosives",
			"GuerillaVests",
			"Trash",
			"Trash",
			"SniperAmmo",
			"Trash",
			"CivilianItems",
			"Trash",
			"Trash",
			"Trash",
			"GuerillaItems",
			"Trash",
			"UGLFlares",
			"Trash",
			"Trash",
			"Trash",
			"RifleAmmo",
			"LMG",
			"Trash",
			"GuerillaVests",
			"LMG",
			"Rebreathers",
			"Trash",
			"LMG",
			"Trash",
			"DLCSupressor",
			"DLCVests",
			"Trash",
			"Trash",
			"HEGrenades",
			"MilitaryVests",
			"Rifles",
			"RifleAmmo",
			"Explosives"
		};
		Medical[]=
		{
			"Trash",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"Trash",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"Trash",
			"Trash",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"Trash",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"Trash",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"MedicalItems",
			"Trash",
			"Trash",
			"MedicalItems",
			"Trash"
		};
		Tourist[]=
		{
			"DLCRifles",
			"DLCRifles",
			"MilitaryHeadgear",
			"DLCRifles",
			"MedicalItems",
			"DLCRifles",
			"MilitaryHeadgear",
			"Snipers",
			"DLCRifles",
			"MilitaryBackpacks",
			"SniperAttachments",
			"MilitaryHeadgear",
			"Explosives",
			"DLCGhillies",
			"MedicalItems",
			"MilitaryHeadgear",
			"DLCRifles",
			"DLCRifles",
			"DLCRifles",
			"MilitaryHeadgear",
			"Explosives",
			"Ghillies",
			"Ghillies",
			"HandGrenades",
			"CivilianItems",
			"Snipers",
			"Snipers",
			"MilitaryBackpacks",
			"Snipers",
			"SniperAmmo",
			"DLCRifles",
			"CivilianItems",
			"Snipers",
			"Snipers",
			"MedicalItems",
			"DLCRifles",
			"MilitaryHeadgear",
			"Snipers",
			"MilitaryBackpacks",
			"HandGrenades",
			"DLCGhillies",
			"CivilianItems",
			"Snipers",
			"DLCOptics",
			"DLCRifles",
			"MilitaryHeadgear",
			"DLCGhillies",
			"Snipers",
			"Snipers",
			"DLCRifles",
			"MilitaryBackpacks",
			"Ghillies",
			"DLCRifles",
			"DLCRifles",
			"DLCGhillies",
			"Snipers",
			"Snipers",
			"Snipers",
			"Restraints",
			"Snipers",
			"DLCSupressor",
			"MilitaryBackpacks",
			"Explosives",
			"HandGrenades",
			"MedicalItems",
			"MilitaryBackpacks",
			"SniperAttachments",
			"DLCRifles",
			"Snipers",
			"Restraints",
			"Restraints",
			"Snipers",
			"Restraints",
			"DLCRifles",
			"DLCRifles",
			"DLCSupressor",
			"DLCRifles",
			"SniperAmmo",
			"Explosives",
			"HandGrenades",
			"MilitaryBackpacks",
			"MilitaryHeadgear",
			"Snipers",
			"DLCRifles",
			"DLCAmmo",
			"MilitaryBackpacks",
			"DLCGhillies",
			"DLCRifles",
			"CivilianItems",
			"Ghillies",
			"MilitaryBackpacks",
			"MilitaryBackpacks",
			"Snipers",
			"MilitaryHeadgear",
			"MilitaryHeadgear",
			"Snipers",
			"Ghillies",
			"Snipers",
			"DLCOptics",
			"DLCAmmo"
		};
		Radiation[]=
		{
			"Ghillies",
			"MilitaryHeadgear",
			"DLCRifles",
			"DLCRifles",
			"MedicalItems",
			"DLCAmmo",
			"DLCAmmo",
			"DLCRifles",
			"MilitaryHeadgear",
			"DLCRifles",
			"Restraints",
			"EpicWeapons",
			"MilitaryBackpacks",
			"DLCRifles",
			"Snipers",
			"MilitaryHeadgear",
			"Explosives",
			"HandGrenades",
			"Explosives",
			"Explosives",
			"DLCRifles",
			"Snipers",
			"SniperAmmo",
			"DLCRifles",
			"Snipers",
			"Ghillies",
			"DLCRifles",
			"DLCSupressor",
			"MilitaryBackpacks",
			"DLCRifles",
			"Snipers",
			"DLCRifles",
			"DLCOptics",
			"MilitaryHeadgear",
			"DLCGhillies",
			"Snipers",
			"Snipers",
			"Snipers",
			"HandGrenades",
			"MilitaryHeadgear",
			"Snipers",
			"DLCRifles",
			"MilitaryHeadgear",
			"Explosives",
			"DLCRifles",
			"Snipers",
			"MilitaryBackpacks",
			"DLCRifles",
			"DLCRifles",
			"MilitaryBackpacks",
			"Snipers",
			"DLCRifles",
			"SniperAmmo",
			"DLCGhillies",
			"MilitaryBackpacks",
			"MilitaryHeadgear",
			"Snipers",
			"EpicWeapons",
			"DLCGhillies",
			"DLCRifles",
			"Snipers",
			"Ghillies",
			"Snipers",
			"DLCSupressor",
			"MedicalItems",
			"Restraints",
			"Snipers",
			"DLCRifles",
			"Snipers",
			"DLCOptics",
			"DLCRifles",
			"DLCRifles",
			"Snipers",
			"Snipers",
			"MilitaryBackpacks",
			"MilitaryHeadgear",
			"Snipers",
			"DLCGhillies",
			"Snipers",
			"DLCRifles",
			"Explosives",
			"Snipers",
			"Restraints",
			"EpicWeapons",
			"MilitaryBackpacks",
			"SniperAttachments",
			"MilitaryBackpacks",
			"DLCRifles",
			"DLCRifles",
			"Snipers",
			"MedicalItems",
			"DLCRifles",
			"DLCRifles",
			"Snipers",
			"MilitaryBackpacks",
			"HandGrenades",
			"Snipers",
			"DLCRifles",
			"Ghillies",
			"Explosives",
			"DLCRifles",
			"MilitaryBackpacks",
			"Snipers",
			"SniperAttachments",
			"MedicalItems",
			"MilitaryHeadgear",
			"Snipers",
			"Snipers",
			"Explosives",
			"Restraints",
			"HandGrenades",
			"DLCRifles",
			"DLCRifles",
			"Explosives",
			"Snipers",
			"Explosives",
			"Ghillies",
			"Explosives",
			"Snipers",
			"DLCGhillies",
			"Snipers",
			"DLCRifles",
			"Snipers",
			"MilitaryHeadgear",
			"DLCRifles",
			"EpicWeapons"
		};
	};
	class ItemGroups
	{
		Food[]=
		{
			"Exile_Item_MacasCheese",
			"Exile_Item_Surstromming",
			"Exile_Item_Dogfood",
			"Exile_Item_Noodles",
			"Exile_Item_Moobar",
			"Exile_Item_Dogfood",
			"Exile_Item_Moobar",
			"Exile_Item_BeefParts",
			"Exile_Item_SausageGravy",
			"Exile_Item_SeedAstics",
			"Exile_Item_Moobar",
			"Exile_Item_Surstromming",
			"Exile_Item_Moobar",
			"Exile_Item_Noodles",
			"Exile_Item_Cheathas",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_SausageGravy",
			"Exile_Item_Raisins",
			"Exile_Item_CatFood",
			"Exile_Item_InstantCoffee",
			"Exile_Item_Raisins",
			"Exile_Item_DsNuts",
			"Exile_Item_BBQSandwich",
			"Exile_Item_InstantCoffee",
			"Exile_Item_CanOpener",
			"Exile_Item_CatFood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_SeedAstics",
			"Exile_Item_DsNuts",
			"Exile_Item_Raisins",
			"Exile_Item_BBQSandwich",
			"Exile_Item_InstantCoffee",
			"Exile_Item_Cheathas",
			"Exile_Item_SeedAstics",
			"Exile_Item_Dogfood",
			"Exile_Item_Raisins",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_CookingPot",
			"Exile_Item_MacasCheese",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_SausageGravy",
			"Exile_Item_Moobar",
			"Exile_Item_BBQSandwich",
			"Exile_Item_EMRE",
			"Exile_Item_InstantCoffee",
			"Exile_Item_Surstromming",
			"Exile_Item_InstantCoffee",
			"Exile_Item_Raisins",
			"Exile_Item_InstantCoffee",
			"Exile_Item_CockONut",
			"Exile_Item_CockONut",
			"Exile_Item_DsNuts",
			"Exile_Item_Noodles",
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Matches",
			"Exile_Item_CockONut",
			"Exile_Item_InstantCoffee",
			"Exile_Item_CatFood",
			"Exile_Item_CanOpener",
			"Exile_Item_MacasCheese",
			"Exile_Item_CockONut",
			"Exile_Item_Cheathas",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee",
			"Exile_Item_DsNuts",
			"Exile_Item_SeedAstics",
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_CatFood",
			"Exile_Item_BBQSandwich",
			"Exile_Item_CanOpener",
			"Exile_Item_Moobar",
			"Exile_Item_BBQSandwich",
			"Exile_Item_CookingPot",
			"Exile_Item_CockONut",
			"Exile_Item_BeefParts",
			"Exile_Item_InstantCoffee",
			"Exile_Item_BBQSandwich",
			"Exile_Item_Cheathas",
			"Exile_Item_Cheathas",
			"Exile_Item_SausageGravy",
			"Exile_Item_BeefParts",
			"Exile_Item_Moobar",
			"Exile_Item_CatFood",
			"Exile_Item_SeedAstics",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_CookingPot",
			"Exile_Item_Noodles",
			"Exile_Item_Surstromming",
			"Exile_Item_CatFood",
			"Exile_Item_Raisins",
			"Exile_Item_Dogfood",
			"Exile_Item_CockONut",
			"Exile_Item_Dogfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_EMRE",
			"Exile_Item_MacasCheese",
			"Exile_Item_Raisins",
			"Exile_Item_BeefParts",
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_CockONut",
			"Exile_Item_SeedAstics",
			"Exile_Item_Cheathas",
			"Exile_Item_CanOpener",
			"Exile_Item_Surstromming",
			"Exile_Item_CatFood",
			"Exile_Item_CanOpener",
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Raisins",
			"Exile_Item_DsNuts",
			"Exile_Item_BeefParts",
			"Exile_Item_DsNuts",
			"Exile_Item_DsNuts",
			"Exile_Item_Noodles",
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_Matches",
			"Exile_Item_SeedAstics",
			"Exile_Item_BeefParts",
			"Exile_Item_Surstromming",
			"Exile_Item_BBQSandwich",
			"Exile_Item_SausageGravy",
			"Exile_Item_CockONut",
			"Exile_Item_Dogfood",
			"Exile_Item_Matches",
			"Exile_Item_Raisins",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_InstantCoffee",
			"Exile_Item_MacasCheese",
			"Exile_Item_Matches",
			"Exile_Item_Moobar",
			"Exile_Item_MacasCheese",
			"Exile_Item_SausageGravy",
			"Exile_Item_Cheathas",
			"Exile_Item_InstantCoffee",
			"Exile_Item_EMRE",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Noodles",
			"Exile_Item_Matches",
			"Exile_Item_SausageGravy",
			"Exile_Item_MacasCheese",
			"Exile_Item_BeefParts",
			"Exile_Item_Dogfood"
		};
		Drinks[]=
		{
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_Beer",
			"Exile_Item_MountainDupe",
			"Exile_Item_MountainDupe",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_EnergyDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_EnergyDrink",
			"Exile_Item_Beer",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_Beer",
			"Exile_Item_Beer",
			"Exile_Item_PowerDrink",
			"Exile_Item_EnergyDrink",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_Beer",
			"Exile_Item_MountainDupe",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_Beer",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_Beer",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_Beer",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_MountainDupe",
			"Exile_Item_EnergyDrink",
			"Exile_Item_MountainDupe",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_Beer",
			"Exile_Item_MountainDupe",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_MountainDupe",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_EnergyDrink",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_MountainDupe",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_PowerDrink",
			"Exile_Item_MountainDupe",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_EnergyDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PowerDrink",
			"Exile_Item_EnergyDrink",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_Beer",
			"Exile_Item_MountainDupe",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_EnergyDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_EnergyDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_MountainDupe",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_MountainDupe",
			"Exile_Item_PowerDrink",
			"Exile_Item_EnergyDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_Beer",
			"Exile_Item_MountainDupe",
			"Exile_Item_PowerDrink",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_EnergyDrink",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_EnergyDrink",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_EnergyDrink",
			"Exile_Item_EnergyDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_Beer",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_EnergyDrink",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_MountainDupe",
			"Exile_Item_Beer",
			"Exile_Item_MountainDupe",
			"Exile_Item_MountainDupe",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_EnergyDrink",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleDirtyWater"
		};
		Pistols[]=
		{
			"Exile_Weapon_TaurusGold",
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"Exile_Weapon_Makarov",
			"hgun_Pistol_Signal_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Rook40_F",
			"hgun_Pistol_01_F",
			"Exile_Weapon_Colt1911",
			"hgun_ACPC2_F",
			"hgun_ACPC2_F",
			"Exile_Weapon_Colt1911",
			"hgun_P07_khk_F",
			"Exile_Weapon_Colt1911",
			"hgun_Pistol_heavy_02_F",
			"hgun_Rook40_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_heavy_02_F",
			"Exile_Weapon_Colt1911",
			"hgun_Pistol_Signal_F",
			"hgun_P07_khk_F",
			"hgun_P07_F",
			"hgun_P07_F",
			"hgun_Pistol_Signal_F",
			"hgun_Pistol_heavy_01_F",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_Makarov",
			"hgun_Pistol_heavy_01_F",
			"hgun_ACPC2_F",
			"hgun_Pistol_Signal_F",
			"hgun_Pistol_heavy_01_F",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_Taurus",
			"hgun_Rook40_F",
			"hgun_Pistol_01_F",
			"Exile_Weapon_TaurusGold",
			"Exile_Weapon_TaurusGold",
			"hgun_Pistol_01_F",
			"hgun_ACPC2_F",
			"Exile_Weapon_Makarov",
			"hgun_ACPC2_F",
			"hgun_P07_khk_F",
			"Exile_Weapon_Taurus",
			"hgun_Rook40_F",
			"hgun_P07_khk_F",
			"hgun_Pistol_Signal_F",
			"Exile_Weapon_Makarov",
			"hgun_Pistol_01_F",
			"Exile_Weapon_Colt1911",
			"hgun_Pistol_heavy_02_F",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_TaurusGold",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_P07_khk_F",
			"hgun_Rook40_F",
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"Exile_Weapon_Makarov",
			"hgun_ACPC2_F",
			"hgun_Pistol_01_F",
			"Exile_Weapon_Colt1911",
			"hgun_P07_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_P07_F",
			"Exile_Weapon_Makarov",
			"hgun_Pistol_01_F",
			"hgun_Pistol_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_01_F",
			"hgun_Rook40_F",
			"hgun_P07_F",
			"hgun_Rook40_F",
			"hgun_P07_F",
			"Exile_Weapon_TaurusGold",
			"hgun_ACPC2_F",
			"hgun_P07_khk_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_P07_F",
			"hgun_Rook40_F",
			"hgun_P07_F",
			"hgun_Pistol_01_F",
			"hgun_Rook40_F",
			"Exile_Weapon_TaurusGold",
			"Exile_Weapon_Colt1911",
			"hgun_P07_khk_F",
			"hgun_P07_F",
			"Exile_Weapon_Makarov",
			"hgun_Rook40_F",
			"hgun_Pistol_Signal_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_P07_khk_F",
			"hgun_Pistol_Signal_F",
			"Exile_Weapon_TaurusGold",
			"hgun_Rook40_F",
			"Exile_Weapon_Taurus",
			"hgun_Rook40_F",
			"hgun_ACPC2_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_P07_F",
			"hgun_ACPC2_F",
			"hgun_Pistol_01_F",
			"Exile_Weapon_Makarov",
			"hgun_ACPC2_F",
			"Exile_Weapon_TaurusGold",
			"hgun_Rook40_F",
			"hgun_P07_khk_F",
			"hgun_P07_khk_F",
			"Exile_Weapon_Makarov",
			"hgun_ACPC2_F",
			"hgun_P07_khk_F",
			"hgun_Pistol_01_F",
			"hgun_Pistol_Signal_F",
			"hgun_ACPC2_F",
			"hgun_ACPC2_F",
			"hgun_Pistol_01_F",
			"hgun_P07_F",
			"hgun_Pistol_Signal_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_02_F",
			"Exile_Weapon_TaurusGold",
			"hgun_P07_khk_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_Colt1911",
			"hgun_P07_F",
			"hgun_Pistol_Signal_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Rook40_F",
			"hgun_ACPC2_F",
			"hgun_Pistol_Signal_F",
			"Exile_Weapon_Colt1911",
			"hgun_P07_F",
			"Exile_Weapon_Makarov",
			"hgun_Rook40_F",
			"Exile_Weapon_TaurusGold",
			"hgun_Rook40_F",
			"hgun_ACPC2_F",
			"hgun_Pistol_heavy_01_F",
			"Exile_Weapon_Colt1911",
			"hgun_Rook40_F",
			"Exile_Weapon_Taurus",
			"hgun_P07_khk_F",
			"Exile_Weapon_Colt1911",
			"hgun_ACPC2_F",
			"hgun_Rook40_F",
			"Exile_Weapon_Taurus",
			"hgun_ACPC2_F",
			"Exile_Weapon_Colt1911",
			"hgun_P07_F",
			"hgun_Pistol_heavy_02_F",
			"Exile_Weapon_Colt1911",
			"Exile_Weapon_TaurusGold",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_01_F",
			"Exile_Weapon_Makarov",
			"hgun_Rook40_F",
			"Exile_Weapon_Taurus",
			"hgun_Pistol_Signal_F",
			"Exile_Weapon_Taurus",
			"hgun_Pistol_heavy_01_F",
			"Exile_Weapon_Taurus"
		};
		PistolAmmo[]=
		{
			"6Rnd_45ACP_Cylinder",
			"Exile_Magazine_7Rnd_45ACP",
			"6Rnd_GreenSignal_F",
			"Exile_Magazine_6Rnd_45ACP",
			"16Rnd_9x21_Mag",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_7Rnd_45ACP",
			"6Rnd_45ACP_Cylinder",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"6Rnd_RedSignal_F",
			"Exile_Magazine_8Rnd_9x18",
			"9Rnd_45ACP_Mag",
			"Exile_Magazine_8Rnd_9x18",
			"9Rnd_45ACP_Mag",
			"Exile_Magazine_7Rnd_45ACP",
			"30Rnd_9x21_Mag",
			"11Rnd_45ACP_Mag",
			"Exile_Magazine_6Rnd_45ACP",
			"11Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"11Rnd_45ACP_Mag",
			"10Rnd_9x21_Mag",
			"Exile_Magazine_8Rnd_9x18"
		};
		PistolAttachments[]=
		{
			"muzzle_snds_acp",
			"muzzle_snds_acp",
			"muzzle_snds_L",
			"muzzle_snds_L",
			"optic_Yorris",
			"optic_MRD"
		};
		Shotguns[]=
		{
			"Exile_Weapon_M1014"
		};
		ShotgunAmmo[]=
		{
			"Exile_Magazine_8Rnd_74Slug"
		};
		SMG[]=
		{
			"SMG_05_F",
			"SMG_01_F",
			"hgun_PDW2000_F",
			"SMG_02_F"
		};
		SMGAmmo[]=
		{
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"
		};
		SMGAttachments[]=
		{
			"optic_Holosight_smg_blk_F",
			"optic_Aco_smg",
			"optic_Aco",
			"optic_Holosight_smg",
			"optic_ACO_grn",
			"optic_ACO_grn_smg"
		};
		Rifles[]=
		{
			"arifle_ARX_blk_F",
			"arifle_TRG21_GL_F",
			"arifle_Mk20C_F",
			"arifle_AKS_F",
			"arifle_SPAR_02_blk_F",
			"Exile_Weapon_LeeEnfield",
			"arifle_ARX_ghex_F",
			"arifle_AKM_F",
			"arifle_SPAR_01_snd_F",
			"arifle_ARX_ghex_F",
			"arifle_SPAR_02_khk_F",
			"arifle_MXM_F",
			"arifle_SPAR_02_snd_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_MXC_khk_F",
			"Exile_Weapon_AK47",
			"Exile_Weapon_CZ550",
			"arifle_CTARS_hex_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_SPAR_01_blk_F",
			"arifle_Katiba_F",
			"arifle_MX_khk_F",
			"arifle_AK12_GL_F",
			"Exile_Weapon_CZ550",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_CTARS_ghex_F",
			"arifle_CTAR_hex_F",
			"arifle_MXC_khk_F",
			"arifle_MX_F",
			"arifle_SPAR_02_khk_F",
			"Exile_Weapon_AK47",
			"arifle_CTARS_ghex_F",
			"arifle_MXM_Black_F",
			"arifle_CTAR_blk_F",
			"arifle_MX_khk_F",
			"arifle_AKM_FL_F",
			"Exile_Weapon_DMR",
			"arifle_MX_GL_khk_F",
			"arifle_SPAR_03_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_ARX_hex_F",
			"arifle_ARX_blk_F",
			"arifle_AKM_FL_F",
			"arifle_CTAR_ghex_F",
			"arifle_MX_F",
			"arifle_AK12_F",
			"Exile_Weapon_AK107_GL",
			"Exile_Weapon_LeeEnfield",
			"arifle_Mk20C_F",
			"Exile_Weapon_AK107",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_MX_GL_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"Exile_Weapon_AKS_Gold",
			"arifle_Mk20_F",
			"Exile_Weapon_CZ550",
			"arifle_TRG21_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_MXC_F",
			"arifle_AKS_F",
			"arifle_TRG21_F",
			"arifle_SDAR_F",
			"arifle_TRG21_GL_F",
			"arifle_ARX_ghex_F",
			"arifle_ARX_hex_F",
			"arifle_AKS_F",
			"arifle_CTARS_ghex_F",
			"arifle_Mk20_GL_F",
			"arifle_MX_Black_F",
			"arifle_MXC_F",
			"arifle_MX_khk_F",
			"arifle_TRG20_F",
			"arifle_Katiba_GL_F",
			"Exile_Weapon_CZ550",
			"arifle_AKM_FL_F",
			"arifle_CTARS_blk_F",
			"arifle_TRG20_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_03_khk_F",
			"arifle_MX_khk_F",
			"arifle_SPAR_01_GL_blk_F",
			"Exile_Weapon_AK107",
			"Exile_Weapon_AK74_GL",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_CTARS_blk_F",
			"arifle_SPAR_01_blk_F",
			"arifle_MX_GL_F",
			"arifle_SDAR_F",
			"Exile_Weapon_SVD",
			"Exile_Weapon_LeeEnfield",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_ARX_blk_F",
			"arifle_MXC_khk_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_03_snd_F",
			"Exile_Weapon_AK74",
			"arifle_CTAR_blk_F",
			"arifle_TRG21_F",
			"Exile_Weapon_AK47",
			"arifle_Katiba_GL_F",
			"arifle_AK12_GL_F",
			"arifle_SPAR_03_snd_F",
			"Exile_Weapon_AKS_Gold",
			"arifle_CTAR_GL_blk_F",
			"arifle_Katiba_GL_F",
			"arifle_MXC_F",
			"arifle_AKM_F",
			"arifle_MXM_khk_F",
			"arifle_MX_F",
			"arifle_MXC_F",
			"arifle_CTAR_blk_F",
			"arifle_TRG20_F",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",
			"arifle_SPAR_03_snd_F",
			"arifle_ARX_hex_F",
			"arifle_Mk20_F",
			"arifle_MX_GL_khk_F",
			"arifle_AK12_F",
			"arifle_CTARS_hex_F",
			"Exile_Weapon_AK74_GL",
			"arifle_CTAR_ghex_F",
			"Exile_Weapon_AK107",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_03_khk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_Mk20C_F",
			"arifle_AK12_F",
			"arifle_CTARS_hex_F",
			"arifle_SPAR_01_snd_F",
			"arifle_Katiba_F",
			"arifle_CTAR_hex_F",
			"arifle_SPAR_02_snd_F",
			"Exile_Weapon_AK74",
			"arifle_SPAR_03_khk_F",
			"arifle_Katiba_F",
			"arifle_SPAR_01_snd_F",
			"arifle_Mk20_GL_F",
			"arifle_Katiba_GL_F",
			"arifle_MXM_F",
			"arifle_SPAR_03_blk_F",
			"arifle_Mk20_F",
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_02_blk_F",
			"arifle_CTARS_blk_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SDAR_F",
			"arifle_AK12_GL_F",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_LeeEnfield",
			"arifle_SPAR_03_blk_F",
			"arifle_CTAR_ghex_F",
			"arifle_SDAR_F",
			"Exile_Weapon_AK74",
			"arifle_MXC_Black_F",
			"arifle_MX_GL_Black_F",
			"arifle_Mk20C_F",
			"arifle_MX_F",
			"arifle_SPAR_02_snd_F",
			"arifle_Mk20_F",
			"arifle_MXC_khk_F",
			"Exile_Weapon_AK107",
			"arifle_MXM_F",
			"arifle_CTAR_hex_F",
			"Exile_Weapon_AK107_GL",
			"arifle_MXM_F",
			"arifle_Katiba_F",
			"arifle_AKM_F"
		};
		RifleAmmo[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"30Rnd_580x42_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Green_F",
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"20Rnd_556x45_UW_mag",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"10Rnd_50BW_Mag_F",
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_10Rnd_9x39",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"30Rnd_580x42_Mag_F",
			"Exile_Magazine_5Rnd_22LR",
			"20Rnd_762x51_Mag",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_65x39_caseless_green",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_White",
			"100Rnd_580x42_Mag_F",
			"20Rnd_556x45_UW_mag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_red",
			"20Rnd_556x45_UW_mag",
			"30Rnd_556x45_Stanag",
			"30Rnd_762x39_AK47_M",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"Exile_Magazine_20Rnd_9x39",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_65x39_caseless_green",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"30Rnd_762x39_Mag_F",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_556x45_Stanag_red",
			"Exile_Magazine_30Rnd_545x39_AK",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_545x39_Mag_F",
			"Exile_Magazine_10Rnd_762x54",
			"150Rnd_556x45_Drum_Mag_F",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"100Rnd_580x42_Mag_Tracer_F",
			"Exile_Magazine_30Rnd_545x39_AK_White"
		};
		RifleAttachments[]=
		{
			"muzzle_snds_H_snd_F",
			"muzzle_snds_H_MG_khk_F",
			"optic_ERCO_blk_F",
			"muzzle_snds_m_khk_F",
			"muzzle_snds_m_snd_F",
			"muzzle_snds_H_MG_blk_F",
			"optic_Arco_ghex_F",
			"muzzle_snds_65_TI_ghex_F",
			"optic_MRCO",
			"muzzle_snds_M",
			"optic_Holosight_khk_F",
			"acc_flashlight",
			"muzzle_snds_58_blk_F",
			"optic_DMS_ghex_F",
			"muzzle_snds_58_wdm_F",
			"muzzle_snds_H",
			"acc_pointer_IR",
			"muzzle_snds_65_TI_hex_F",
			"optic_Hamr_khk_F",
			"optic_Holosight",
			"optic_Holosight_blk_F",
			"optic_Hamr",
			"acc_flashlight",
			"optic_ERCO_snd_F",
			"optic_ERCO_khk_F",
			"optic_Arco_blk_F",
			"acc_flashlight",
			"muzzle_snds_65_TI_blk_F",
			"optic_Arco",
			"optic_DMS",
			"optic_NVS",
			"muzzle_snds_H_khk_F"
		};
		LMG[]=
		{
			"arifle_MX_SW_F",
			"Exile_Weapon_PKP",
			"Exile_Weapon_PK",
			"arifle_MX_SW_Black_F",
			"Exile_Weapon_RPK",
			"LMG_Mk200_F",
			"LMG_03_F",
			"LMG_Zafir_F"
		};
		LMGAmmo[]=
		{
			"200Rnd_556x45_Box_Tracer_Red_F",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"150Rnd_762x54_Box",
			"100Rnd_65x39_caseless_mag_Tracer",
			"150Rnd_762x54_Box_Tracer",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"130Rnd_338_Mag",
			"200Rnd_556x45_Box_Red_F",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"150Rnd_93x64_Mag",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Red_F",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"200Rnd_556x45_Box_F",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"100Rnd_65x39_caseless_mag",
			"150Rnd_93x64_Mag",
			"200Rnd_556x45_Box_Tracer_F",
			"150Rnd_762x54_Box",
			"150Rnd_93x64_Mag",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"150Rnd_762x54_Box_Tracer",
			"100Rnd_65x39_caseless_mag",
			"200Rnd_556x45_Box_F",
			"150Rnd_762x54_Box"
		};
		Snipers[]=
		{
			"srifle_DMR_07_blk_F",
			"srifle_GM6_ghex_F",
			"srifle_DMR_07_hex_F",
			"srifle_GM6_F",
			"srifle_DMR_07_hex_F",
			"srifle_LRR_F",
			"srifle_DMR_01_F",
			"srifle_DMR_07_ghex_F",
			"srifle_EBR_F",
			"srifle_DMR_07_blk_F",
			"srifle_DMR_07_ghex_F",
			"srifle_EBR_F",
			"srifle_DMR_01_F",
			"srifle_LRR_tna_F"
		};
		SniperAmmo[]=
		{
			"10Rnd_762x54_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"5Rnd_127x108_APDS_Mag",
			"10Rnd_762x54_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"20Rnd_762x51_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"20Rnd_762x51_Mag",
			"5Rnd_127x108_APDS_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"5Rnd_127x108_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"7Rnd_408_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_762x51_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"5Rnd_127x108_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_762x51_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"5Rnd_127x108_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_762x54_Mag",
			"5Rnd_127x108_APDS_Mag",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"7Rnd_408_Mag",
			"5Rnd_127x108_Mag",
			"5Rnd_127x108_APDS_Mag",
			"20Rnd_762x51_Mag",
			"7Rnd_408_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_762x51_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"5Rnd_127x108_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"7Rnd_408_Mag",
			"20Rnd_762x51_Mag",
			"5Rnd_127x108_Mag",
			"10Rnd_762x54_Mag",
			"7Rnd_408_Mag",
			"5Rnd_127x108_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"5Rnd_127x108_Mag",
			"10Rnd_762x54_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"7Rnd_408_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_762x51_Mag",
			"7Rnd_408_Mag",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"7Rnd_408_Mag",
			"5Rnd_127x108_APDS_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"5Rnd_127x108_APDS_Mag",
			"20Rnd_762x51_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"20Rnd_762x51_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"
		};
		SniperAttachments[]=
		{
			"optic_DMS",
			"optic_SOS",
			"muzzle_snds_B_snd_F",
			"optic_SOS",
			"optic_LRPS",
			"optic_LRPS_ghex_F",
			"optic_SOS_khk_F",
			"optic_DMS",
			"optic_SOS_khk_F",
			"optic_LRPS_tna_F",
			"optic_LRPS_tna_F",
			"muzzle_snds_B",
			"optic_LRPS",
			"optic_LRPS_ghex_F",
			"muzzle_snds_B_khk_F"
		};
		DLCRifles[]=
		{
			"srifle_DMR_05_tan_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_04_F",
			"srifle_DMR_03_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_04_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_02_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_tan_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_02_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_05_tan_F",
			"srifle_DMR_06_olive_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_04_Tan_F"
		};
		DLCAmmo[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"20Rnd_762x51_Mag",
			"10Rnd_338_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_338_Mag",
			"10Rnd_127x54_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"20Rnd_762x51_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_338_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_338_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_338_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_338_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag"
		};
		DLCOptics[]=
		{
			"optic_KHS_old",
			"optic_AMS_khk",
			"optic_AMS",
			"optic_AMS_snd",
			"optic_KHS_tan",
			"optic_KHS_blk",
			"optic_KHS_hex"
		};
		DLCSupressor[]=
		{
			"muzzle_snds_B",
			"muzzle_snds_338_green",
			"muzzle_snds_93mmg",
			"muzzle_snds_338_sand",
			"muzzle_snds_338_black",
			"muzzle_snds_93mmg_tan"
		};
		EpicWeapons[]=
		{
			"MMG_02_black_F",
			"MMG_02_sand_F",
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_sand_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F",
			"MMG_02_camo_F"
		};
		Bipods[]=
		{
			"bipod_02_F_blk",
			"bipod_01_F_khk",
			"bipod_02_F_hex",
			"bipod_01_F_blk",
			"bipod_02_F_tan",
			"bipod_01_F_mtp",
			"bipod_03_F_oli",
			"bipod_03_F_blk",
			"bipod_01_F_snd"
		};
		HEGrenades[]=
		{
			"3Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		UGLFlares[]=
		{
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"3Rnd_UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"UGL_FlareGreen_F"
		};
		UGLSmokes[]=
		{
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell"
		};
		HandGrenades[]=
		{
			"HandGrenade",
			"MiniGrenade"
		};
		Explosives[]=
		{
			"APERSTripMine_Wire_Mag",
			"APERSBoundingMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"IEDLandSmall_Remote_Mag",
			"APERSMine_Range_Mag",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"SatchelCharge_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"APERSMine_Range_Mag",
			"DemoCharge_Remote_Mag",
			"APERSBoundingMine_Range_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"APERSTripMine_Wire_Mag",
			"IEDUrbanSmall_Remote_Mag"
		};
		CivilianItems[]=
		{
			"ItemRadio",
			"ItemMap",
			"ItemMap",
			"Exile_Item_Heatpack",
			"Exile_Item_Heatpack",
			"Exile_Item_Heatpack",
			"ItemWatch",
			"ItemRadio",
			"ItemMap",
			"ItemWatch",
			"Exile_Item_MobilePhone",
			"Binocular",
			"ItemGPS",
			"Binocular",
			"ItemRadio",
			"ItemGPS",
			"Exile_Item_Heatpack",
			"ItemWatch"
		};
		CivilianClothing[]=
		{
			"U_C_Poloshirt_salmon",
			"U_C_Poor_shorts_1",
			"U_C_Poloshirt_blue",
			"U_I_C_Soldier_Bandit_2_F",
			"U_C_man_sport_3_F",
			"U_C_Poor_shorts_1",
			"U_C_Poor_shorts_1",
			"U_I_C_Soldier_Bandit_3_F",
			"U_C_Man_casual_5_F",
			"U_C_Journalist",
			"U_C_Scientist",
			"U_C_Man_casual_1_F",
			"U_C_Scientist",
			"U_C_Poor_1",
			"U_C_Poloshirt_burgundy",
			"U_C_Man_casual_3_F",
			"U_C_Man_casual_4_F",
			"U_I_C_Soldier_Bandit_3_F",
			"U_I_C_Soldier_Bandit_3_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_C_Man_casual_5_F",
			"U_C_man_sport_3_F",
			"U_C_Poloshirt_salmon",
			"U_C_Journalist",
			"U_C_man_sport_2_F",
			"U_C_Journalist",
			"U_C_Poor_2",
			"U_C_Journalist",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_shorts_1",
			"U_Rangemaster",
			"U_Rangemaster",
			"U_C_Man_casual_5_F",
			"U_C_Scientist",
			"U_C_Journalist",
			"U_C_Journalist",
			"U_C_Man_casual_3_F",
			"U_C_Poor_1",
			"U_C_Poor_1",
			"U_C_Scientist",
			"U_C_man_sport_1_F",
			"U_C_Man_casual_5_F",
			"U_C_HunterBody_grn",
			"U_C_Man_casual_4_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_blue",
			"U_I_C_Soldier_Bandit_3_F",
			"U_C_HunterBody_grn",
			"U_C_Poor_2",
			"U_C_Man_casual_6_F",
			"U_C_HunterBody_grn",
			"U_C_Man_casual_5_F",
			"U_I_C_Soldier_Bandit_2_F",
			"U_C_Poloshirt_burgundy",
			"U_C_Poor_1",
			"U_Rangemaster",
			"U_C_Poloshirt_stripped",
			"U_C_Scientist",
			"U_C_man_sport_2_F",
			"U_C_Man_casual_4_F",
			"U_C_Poor_1",
			"U_C_Poloshirt_burgundy",
			"U_I_C_Soldier_Bandit_1_F",
			"U_NikosBody",
			"U_OrestesBody",
			"U_C_Poor_2",
			"U_C_Poloshirt_salmon",
			"U_I_C_Soldier_Bandit_1_F",
			"U_C_Poor_1",
			"U_Rangemaster",
			"U_C_HunterBody_grn",
			"U_I_C_Soldier_Bandit_4_F",
			"U_Rangemaster",
			"U_C_Poor_1",
			"U_C_Journalist",
			"U_C_Poor_2",
			"U_C_man_sport_1_F",
			"U_C_Poloshirt_blue",
			"U_C_man_sport_2_F",
			"U_C_Man_casual_1_F",
			"U_Rangemaster",
			"U_C_Man_casual_4_F",
			"U_I_C_Soldier_Bandit_5_F",
			"U_I_C_Soldier_Bandit_5_F",
			"U_C_man_sport_2_F",
			"U_C_Poloshirt_burgundy",
			"U_I_C_Soldier_Bandit_1_F",
			"U_C_Man_casual_2_F",
			"U_C_Poloshirt_burgundy",
			"U_C_Poor_shorts_1",
			"U_C_Poloshirt_blue",
			"U_C_Man_casual_1_F",
			"U_C_Poloshirt_burgundy",
			"U_C_HunterBody_grn",
			"U_C_Poor_shorts_1",
			"U_C_man_sport_1_F",
			"U_Rangemaster",
			"U_C_Poor_shorts_1",
			"U_I_C_Soldier_Bandit_3_F",
			"U_C_Poloshirt_stripped",
			"U_C_Poor_shorts_1",
			"U_C_Poor_2",
			"U_C_Scientist",
			"U_C_man_sport_3_F",
			"U_C_Poloshirt_stripped",
			"U_C_Poor_2",
			"U_C_Poloshirt_stripped",
			"U_I_C_Soldier_Bandit_2_F",
			"U_C_Man_casual_2_F",
			"U_C_Scientist",
			"U_C_Man_casual_2_F",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_salmon",
			"U_C_Poor_2",
			"U_C_Poloshirt_salmon",
			"U_C_Man_casual_6_F",
			"U_C_Man_casual_2_F",
			"U_C_HunterBody_grn",
			"U_C_Poor_2",
			"U_C_Scientist",
			"U_NikosAgedBody",
			"U_C_Poloshirt_tricolour",
			"U_C_Man_casual_1_F",
			"U_C_HunterBody_grn",
			"U_I_C_Soldier_Bandit_5_F",
			"U_C_Journalist",
			"U_C_Poloshirt_stripped",
			"U_C_Poor_1",
			"U_C_man_sport_3_F",
			"U_I_C_Soldier_Bandit_5_F",
			"U_C_Man_casual_2_F",
			"U_C_Poloshirt_blue",
			"U_C_Poor_shorts_1",
			"U_C_Man_casual_3_F",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_burgundy",
			"U_C_HunterBody_grn",
			"U_C_Man_casual_3_F",
			"U_I_C_Soldier_Bandit_2_F",
			"U_C_Man_casual_6_F",
			"U_C_Poloshirt_tricolour",
			"U_C_Journalist",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_man_sport_3_F",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_salmon",
			"U_I_C_Soldier_Bandit_1_F",
			"U_C_Poloshirt_tricolour",
			"U_C_Man_casual_1_F",
			"U_C_Man_casual_6_F",
			"U_Rangemaster",
			"U_C_HunterBody_grn",
			"U_I_C_Soldier_Bandit_1_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_C_Scientist",
			"U_C_Poloshirt_tricolour",
			"U_C_man_sport_1_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_C_Man_casual_6_F",
			"U_C_Poloshirt_tricolour",
			"U_C_Poloshirt_tricolour",
			"U_C_Man_casual_4_F",
			"U_C_man_sport_1_F",
			"U_I_C_Soldier_Bandit_5_F",
			"U_Rangemaster",
			"U_C_Man_casual_3_F",
			"U_I_C_Soldier_Bandit_2_F",
			"U_C_man_sport_2_F"
		};
		CivilianBackpacks[]=
		{
			"B_AssaultPack_dgtl",
			"B_HuntingBackpack",
			"B_AssaultPack_khk",
			"B_AssaultPack_rgr",
			"B_Kitbag_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_OutdoorPack_blk",
			"B_AssaultPack_sgg",
			"B_Kitbag_mcamo",
			"B_OutdoorPack_tan",
			"B_OutdoorPack_blu",
			"B_AssaultPack_khk",
			"B_HuntingBackpack",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_tna_F",
			"B_AssaultPack_cbr",
			"B_OutdoorPack_tan",
			"B_OutdoorPack_blu",
			"B_HuntingBackpack",
			"B_OutdoorPack_blk",
			"B_AssaultPack_tna_F",
			"B_OutdoorPack_blk",
			"B_AssaultPack_blk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_mcamo",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_blu",
			"B_Kitbag_sgg",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_Kitbag_cbr",
			"B_AssaultPack_cbr",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_Kitbag_sgg",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_blk",
			"B_AssaultPack_blk",
			"B_AssaultPack_rgr",
			"B_OutdoorPack_blu",
			"B_AssaultPack_tna_F",
			"B_OutdoorPack_blu",
			"B_AssaultPack_rgr",
			"B_Kitbag_cbr",
			"B_AssaultPack_blk",
			"B_AssaultPack_mcamo",
			"B_Kitbag_mcamo",
			"B_AssaultPack_dgtl",
			"B_HuntingBackpack",
			"B_AssaultPack_cbr",
			"B_HuntingBackpack",
			"B_AssaultPack_rgr",
			"B_Kitbag_cbr",
			"B_AssaultPack_khk",
			"B_AssaultPack_cbr",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_blu",
			"B_AssaultPack_tna_F",
			"B_AssaultPack_tna_F",
			"B_Kitbag_cbr",
			"B_OutdoorPack_tan",
			"B_OutdoorPack_blk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_cbr",
			"B_AssaultPack_blk",
			"B_AssaultPack_khk",
			"B_Kitbag_cbr",
			"B_AssaultPack_blk",
			"B_Kitbag_mcamo",
			"B_AssaultPack_khk",
			"B_OutdoorPack_tan",
			"B_OutdoorPack_tan",
			"B_AssaultPack_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_tan",
			"B_AssaultPack_tna_F",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blk",
			"B_AssaultPack_rgr",
			"B_OutdoorPack_tan",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_sgg",
			"B_OutdoorPack_tan",
			"B_AssaultPack_khk",
			"B_HuntingBackpack",
			"B_AssaultPack_khk",
			"B_HuntingBackpack",
			"B_AssaultPack_sgg",
			"B_AssaultPack_tna_F",
			"B_AssaultPack_mcamo",
			"B_OutdoorPack_blk",
			"B_AssaultPack_dgtl",
			"B_HuntingBackpack",
			"B_AssaultPack_sgg",
			"B_OutdoorPack_blu",
			"B_Kitbag_sgg",
			"B_OutdoorPack_tan",
			"B_AssaultPack_sgg",
			"B_Kitbag_mcamo",
			"B_AssaultPack_cbr",
			"B_AssaultPack_blk"
		};
		CivilianVests[]=
		{
			"V_TacVest_blk_POLICE",
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_Rangemaster_belt"
		};
		CivilianHeadgear[]=
		{
			"H_Cap_blk",
			"H_Cap_grn",
			"H_StrawHat",
			"H_Hat_blue",
			"H_Cap_blu",
			"H_Cap_oli",
			"H_Beret_blk_POLICE",
			"H_Hat_brown",
			"H_StrawHat_dark",
			"H_Cap_headphones",
			"H_Hat_checker",
			"H_Cap_press",
			"H_Cap_blk_Raven",
			"H_Bandanna_surfer",
			"H_Cap_tan",
			"H_Hat_grey",
			"H_Cap_red",
			"H_Hat_tan"
		};
		GuerillaItems[]=
		{
			"NVGoggles_tna_F",
			"ItemCompass",
			"Rangefinder",
			"ItemCompass",
			"NVGoggles",
			"ItemCompass",
			"ItemCompass",
			"ItemCompass",
			"ItemCompass",
			"ItemCompass",
			"O_NVGoggles_ghex_F",
			"ItemCompass",
			"Rangefinder",
			"Rangefinder",
			"Rangefinder",
			"O_NVGoggles_hex_F",
			"O_NVGoggles_urb_F"
		};
		GuerillaClothing[]=
		{
			"U_IG_Guerilla2_3",
			"U_I_G_resistanceLeader_F",
			"U_IG_Guerilla2_3",
			"U_I_C_Soldier_Para_2_F",
			"U_IG_Guerilla3_2",
			"U_IG_Guerilla3_2",
			"U_IG_Guerilla3_2",
			"U_IG_Guerilla3_2",
			"U_I_C_Soldier_Camo_F",
			"U_IG_Guerilla2_1",
			"U_I_C_Soldier_Para_5_F",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla3_2",
			"U_IG_Guerilla3_2",
			"U_IG_Guerilla3_2",
			"U_I_C_Soldier_Para_2_F",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla1_1",
			"U_I_C_Soldier_Para_1_F",
			"U_IG_Guerilla1_1",
			"U_I_C_Soldier_Para_3_F",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_2",
			"U_I_C_Soldier_Camo_F",
			"U_I_C_Soldier_Para_2_F",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_1",
			"U_I_C_Soldier_Para_3_F",
			"U_I_C_Soldier_Para_1_F",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla2_2",
			"U_I_C_Soldier_Para_4_F",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla1_1",
			"U_I_C_Soldier_Para_4_F",
			"U_IG_Guerilla1_1",
			"U_IG_leader",
			"U_IG_Guerilla3_2",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla2_1",
			"U_I_C_Soldier_Para_3_F",
			"U_I_C_Soldier_Camo_F",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla2_3",
			"U_I_C_Soldier_Para_1_F",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla2_2",
			"U_I_C_Soldier_Para_5_F",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_2",
			"U_I_C_Soldier_Para_5_F",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_I_C_Soldier_Para_1_F",
			"U_I_G_resistanceLeader_F",
			"U_IG_Guerilla3_2",
			"U_I_C_Soldier_Para_4_F",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla3_1",
			"U_I_C_Soldier_Para_2_F",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_1",
			"U_I_C_Soldier_Para_4_F",
			"U_I_C_Soldier_Para_4_F",
			"U_IG_Guerilla2_2",
			"U_IG_leader",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla1_1",
			"U_IG_leader",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla3_1",
			"U_I_C_Soldier_Para_3_F",
			"U_I_C_Soldier_Para_2_F",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla3_2",
			"U_IG_Guerilla2_2",
			"U_I_C_Soldier_Camo_F",
			"U_I_C_Soldier_Para_1_F",
			"U_I_C_Soldier_Para_3_F",
			"U_I_C_Soldier_Para_5_F",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla3_2",
			"U_IG_Guerilla2_1",
			"U_I_C_Soldier_Camo_F",
			"U_IG_Guerilla3_2",
			"U_I_C_Soldier_Para_5_F",
			"U_IG_leader",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla3_1",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2"
		};
		GuerillaBackpacks[]=
		{
			"B_FieldPack_cbr",
			"B_ViperHarness_khk_F",
			"B_Bergen_sgg",
			"B_ViperHarness_blk_F",
			"B_FieldPack_oucamo",
			"B_Bergen_rgr",
			"B_Bergen_mcamo",
			"B_ViperLightHarness_khk_F",
			"B_ViperHarness_base_F",
			"B_FieldPack_blk",
			"B_ViperHarness_khk_F",
			"B_ViperLightHarness_ghex_F",
			"B_ViperHarness_ghex_F",
			"B_FieldPack_cbr",
			"B_Bergen_blk",
			"B_ViperLightHarness_blk_F",
			"B_FieldPack_ghex_F",
			"B_ViperHarness_base_F",
			"B_FieldPack_blk",
			"B_FieldPack_ocamo",
			"B_ViperLightHarness_base_F",
			"B_FieldPack_blk",
			"B_Bergen_blk",
			"B_ViperLightHarness_oli_F",
			"B_FieldPack_ocamo",
			"B_ViperLightHarness_oli_F",
			"B_ViperHarness_oli_F",
			"B_ViperLightHarness_khk_F",
			"B_ViperHarness_blk_F",
			"B_ViperHarness_oli_F",
			"B_ViperLightHarness_hex_F",
			"B_Bergen_rgr",
			"B_ViperHarness_hex_F",
			"B_FieldPack_oucamo",
			"B_ViperLightHarness_hex_F",
			"B_FieldPack_cbr",
			"B_FieldPack_oucamo",
			"B_Bergen_mcamo",
			"B_ViperHarness_hex_F",
			"B_ViperLightHarness_base_F",
			"B_ViperLightHarness_blk_F",
			"B_FieldPack_ghex_F",
			"B_ViperLightHarness_ghex_F",
			"B_ViperHarness_ghex_F",
			"B_FieldPack_ocamo",
			"B_Bergen_sgg"
		};
		GuerillaVests[]=
		{
			"V_BandollierB_rgr",
			"V_BandollierB_rgr",
			"V_BandollierB_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_HarnessOGL_gry",
			"V_BandollierB_cbr",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_HarnessOSpec_brn",
			"V_BandollierB_oli",
			"V_Chestrig_rgr",
			"V_HarnessOSpec_brn",
			"V_BandollierB_khk",
			"V_Chestrig_khk",
			"V_HarnessOGL_gry",
			"V_HarnessO_brn",
			"V_Chestrig_oli",
			"V_BandollierB_oli",
			"V_Chestrig_khk",
			"V_BandollierB_cbr",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_I_G_resistanceLeader_F",
			"V_HarnessO_gry",
			"V_BandollierB_khk",
			"V_BandollierB_khk",
			"V_Chestrig_blk",
			"V_HarnessO_gry",
			"V_Chestrig_rgr",
			"V_BandollierB_blk",
			"V_BandollierB_rgr",
			"V_I_G_resistanceLeader_F",
			"V_HarnessOGL_gry",
			"V_BandollierB_blk",
			"V_Chestrig_rgr",
			"V_HarnessOGL_brn",
			"V_HarnessO_gry",
			"V_BandollierB_oli",
			"V_HarnessOGL_brn",
			"V_HarnessO_gry",
			"V_BandollierB_blk",
			"V_HarnessOSpec_gry",
			"V_HarnessOGL_gry",
			"V_BandollierB_blk",
			"V_HarnessO_brn",
			"V_HarnessOSpec_gry",
			"V_HarnessOGL_brn",
			"V_BandollierB_cbr",
			"V_HarnessOSpec_brn",
			"V_BandollierB_rgr",
			"V_Chestrig_oli",
			"V_HarnessO_brn",
			"V_BandollierB_oli",
			"V_HarnessO_brn",
			"V_BandollierB_khk",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_Chestrig_rgr",
			"V_HarnessOSpec_gry",
			"V_BandollierB_blk",
			"V_HarnessOSpec_brn",
			"V_Chestrig_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_rgr",
			"V_Chestrig_rgr",
			"V_HarnessOSpec_gry",
			"V_Chestrig_khk",
			"V_BandollierB_khk",
			"V_BandollierB_khk",
			"V_HarnessOSpec_gry",
			"V_BandollierB_rgr",
			"V_Chestrig_oli",
			"V_BandollierB_oli",
			"V_HarnessOGL_gry",
			"V_BandollierB_khk",
			"V_HarnessOSpec_brn",
			"V_BandollierB_cbr",
			"V_HarnessO_brn",
			"V_HarnessOGL_brn",
			"V_BandollierB_oli",
			"V_HarnessO_brn",
			"V_Chestrig_oli",
			"V_HarnessOSpec_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_Chestrig_blk",
			"V_HarnessOSpec_gry",
			"V_BandollierB_cbr",
			"V_Chestrig_blk",
			"V_HarnessO_brn",
			"V_BandollierB_oli",
			"V_HarnessOSpec_brn",
			"V_BandollierB_cbr",
			"V_HarnessO_gry",
			"V_HarnessO_gry",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_gry"
		};
		GuerillaHeadgear[]=
		{
			"H_BandMask_blk",
			"H_Booniehat_dirty",
			"H_Booniehat_khk",
			"H_Watchcap_camo",
			"H_Bandanna_cbr",
			"H_Beret_red",
			"H_Bandanna_khk_hs",
			"H_Cap_oli_Syndikat_F",
			"H_Shemag_olive",
			"H_Bandanna_khk",
			"H_Booniehat_tan",
			"H_MilCap_tna_F",
			"H_Booniehat_tna_F",
			"H_Watchcap_blk",
			"H_Bandanna_camo",
			"H_ShemagOpen_khk",
			"H_Booniehat_dgtl",
			"H_Bandanna_sgg",
			"H_Watchcap_sgg",
			"H_Bandanna_sgg",
			"H_Watchcap_khk",
			"H_Booniehat_khk_hs",
			"H_Shemag_khk",
			"H_Booniehat_grn",
			"H_Cap_brn_SPECOPS",
			"H_Bandanna_camo",
			"H_Booniehat_indp",
			"H_MilCap_ghex_F",
			"H_Booniehat_khk",
			"H_Booniehat_dgtl",
			"H_Bandanna_khk_hs",
			"H_Booniehat_dirty",
			"H_Booniehat_mcamo",
			"H_Bandanna_cbr",
			"H_Booniehat_dgtl",
			"H_Bandanna_khk",
			"H_Beret_brn_SF",
			"H_MilCap_gen_F",
			"H_Beret_blk",
			"H_Booniehat_dirty",
			"H_Shemag_tan",
			"Exile_Headgear_GasMask",
			"H_Bandanna_gry",
			"H_Cap_grn_Syndikat_F",
			"H_Cap_tan_specops_US",
			"H_Cap_blk_Syndikat_F",
			"H_Watchcap_blk",
			"H_Shemag_olive_hs",
			"H_Cap_khaki_specops_UK",
			"H_Bandanna_sgg",
			"H_MilCap_tna_F",
			"H_Cap_grn_Syndikat_F",
			"H_Booniehat_tan",
			"H_Booniehat_indp",
			"H_Bandanna_camo",
			"H_Bandanna_khk",
			"H_Booniehat_grn",
			"H_Hat_camo",
			"H_BandMask_blk",
			"H_Beret_02",
			"H_Hat_camo",
			"H_Shemag_olive",
			"H_Bandanna_gry",
			"H_Bandanna_gry",
			"Exile_Headgear_GasMask",
			"H_Booniehat_grn",
			"H_ShemagOpen_khk",
			"H_MilCap_ghex_F",
			"H_Booniehat_khk",
			"H_TurbanO_blk",
			"H_Booniehat_dirty",
			"H_Booniehat_indp",
			"H_Cap_tan_specops_US",
			"H_MilCap_gen_F",
			"H_Bandanna_mcamo",
			"H_Cap_tan_specops_US",
			"H_Shemag_tan",
			"H_Cap_blk_Syndikat_F",
			"H_Cap_brn_SPECOPS",
			"H_Beret_grn_SF",
			"H_Booniehat_tan",
			"Exile_Headgear_GasMask",
			"H_Booniehat_khk_hs",
			"H_Cap_khaki_specops_UK",
			"H_Booniehat_khk_hs",
			"H_ShemagOpen_tan",
			"H_Booniehat_tna_F",
			"H_FakeHeadgear_Syndikat_F",
			"H_Cap_oli_Syndikat_F",
			"H_Watchcap_blk",
			"H_Bandanna_mcamo",
			"H_Shemag_khk",
			"H_Booniehat_mcamo",
			"H_Bandanna_khk_hs",
			"H_Booniehat_grn",
			"H_Booniehat_tan",
			"H_Booniehat_dgtl",
			"H_Cap_khaki_specops_UK",
			"H_Hat_camo",
			"H_ShemagOpen_tan",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_BandMask_blk",
			"H_Bandanna_cbr",
			"H_TurbanO_blk",
			"H_Watchcap_khk",
			"H_Cap_tan_Syndikat_F",
			"H_Bandanna_mcamo",
			"H_Booniehat_indp",
			"H_FakeHeadgear_Syndikat_F",
			"H_Beret_Colonel",
			"H_Cap_tan_Syndikat_F",
			"H_Beret_grn",
			"H_Booniehat_mcamo",
			"Exile_Headgear_GasMask",
			"H_Shemag_olive_hs",
			"H_Watchcap_camo",
			"H_Booniehat_mcamo",
			"H_Beret_ocamo",
			"H_Watchcap_sgg",
			"H_Watchcap_khk",
			"H_Cap_brn_SPECOPS"
		};
		MilitaryClothing[]=
		{
			"U_I_pilotCoveralls",
			"U_O_T_Officer_F",
			"U_B_CTRG_Soldier_urb_2_F",
			"U_I_HeliPilotCoveralls",
			"U_B_CTRG_2",
			"U_B_CombatUniform_mcam_worn",
			"U_B_T_Soldier_SL_F",
			"U_B_CTRG_Soldier_2_F",
			"U_B_CTRG_Soldier_urb_3_F",
			"U_O_T_Officer_F",
			"U_B_CTRG_Soldier_F",
			"U_B_CombatUniform_mcam_worn",
			"U_B_PilotCoveralls",
			"U_B_CTRG_1",
			"U_B_CTRG_Soldier_2_F",
			"U_I_HeliPilotCoveralls",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CTRG_Soldier_2_F",
			"U_B_HeliPilotCoveralls",
			"U_O_V_Soldier_Viper_F",
			"U_O_T_Soldier_F",
			"U_O_PilotCoveralls",
			"U_B_CTRG_3",
			"U_B_T_Soldier_AR_F",
			"U_B_CTRG_Soldier_urb_2_F",
			"U_B_T_Soldier_SL_F",
			"U_O_SpecopsUniform_blk",
			"U_B_HeliPilotCoveralls",
			"U_B_CTRG_Soldier_2_F",
			"U_I_pilotCoveralls",
			"U_B_CTRG_3",
			"U_O_OfficerUniform_ocamo",
			"U_B_CTRG_Soldier_F",
			"U_B_CTRG_1",
			"U_B_GEN_Commander_F",
			"U_B_CTRG_Soldier_F",
			"U_B_CTRG_Soldier_urb_2_F",
			"U_I_CombatUniform_tshirt",
			"U_I_CombatUniform_shortsleeve",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_I_HeliPilotCoveralls",
			"U_B_CTRG_1",
			"U_B_CombatUniform_mcam_worn",
			"U_O_V_Soldier_Viper_hex_F",
			"U_B_PilotCoveralls",
			"U_I_Wetsuit",
			"U_B_CTRG_Soldier_urb_2_F",
			"U_B_T_Soldier_AR_F",
			"U_I_CombatUniform_tshirt",
			"U_B_CTRG_3",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CTRG_Soldier_3_F",
			"U_B_GEN_Soldier_F",
			"U_O_CombatUniform_oucamo",
			"U_B_GEN_Commander_F",
			"U_B_CombatUniform_mcam_vest",
			"U_B_GEN_Commander_F",
			"U_O_PilotCoveralls",
			"U_B_CTRG_Soldier_urb_1_F",
			"U_B_CTRG_Soldier_urb_1_F",
			"U_B_CTRG_2",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_2",
			"U_B_CTRG_1",
			"U_B_CTRG_Soldier_3_F",
			"U_I_CombatUniform_shortsleeve",
			"U_B_CTRG_Soldier_urb_1_F",
			"U_I_CombatUniform",
			"U_B_PilotCoveralls",
			"U_B_T_Soldier_SL_F",
			"U_B_Wetsuit",
			"U_I_pilotCoveralls",
			"U_B_GEN_Soldier_F",
			"U_B_CTRG_2",
			"U_O_T_Officer_F",
			"U_B_SpecopsUniform_sgg",
			"U_O_CombatUniform_ocamo",
			"U_B_T_Soldier_SL_F",
			"U_B_CTRG_Soldier_urb_3_F",
			"U_I_CombatUniform",
			"U_B_GEN_Commander_F",
			"U_I_CombatUniform",
			"U_O_T_Officer_F",
			"U_I_CombatUniform_tshirt",
			"U_O_T_Soldier_F",
			"U_B_CombatUniform_mcam",
			"U_B_T_Soldier_AR_F",
			"U_B_CTRG_Soldier_urb_3_F",
			"U_B_CTRG_Soldier_urb_3_F",
			"U_O_SpecopsUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_HeliPilotCoveralls",
			"U_B_GEN_Soldier_F",
			"U_B_T_Soldier_AR_F",
			"U_B_CTRG_Soldier_urb_1_F",
			"U_B_CombatUniform_mcam_tshirt",
			"U_O_T_Soldier_F",
			"U_O_PilotCoveralls",
			"U_I_CombatUniform_shortsleeve",
			"U_B_CombatUniform_mcam",
			"U_B_CTRG_3",
			"U_O_T_Soldier_F",
			"U_B_CTRG_Soldier_3_F",
			"U_B_CTRG_Soldier_F",
			"U_O_Wetsuit",
			"U_B_CTRG_Soldier_3_F",
			"U_I_OfficerUniform",
			"U_B_GEN_Soldier_F"
		};
		MilitaryBackpacks[]=
		{
			"B_Carryall_khk",
			"B_Carryall_cbr",
			"B_Carryall_ocamo",
			"B_Bergen_Base_F",
			"B_Carryall_oucamo",
			"B_Carryall_ghex_F",
			"B_Carryall_cbr",
			"B_Carryall_ghex_F",
			"B_Carryall_mcamo",
			"B_Bergen_tna_F",
			"B_Bergen_hex_F",
			"B_Carryall_khk",
			"B_Carryall_oucamo",
			"B_Carryall_ghex_F",
			"B_Carryall_mcamo",
			"B_Carryall_ghex_F",
			"B_Carryall_ocamo",
			"B_Carryall_cbr",
			"B_Carryall_oucamo",
			"B_Carryall_ghex_F",
			"B_Carryall_oli",
			"B_Carryall_oli",
			"B_Carryall_cbr",
			"B_Carryall_cbr",
			"B_Carryall_oli",
			"B_Carryall_khk",
			"B_Carryall_cbr",
			"B_Carryall_ocamo",
			"B_Carryall_oucamo",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_khk",
			"B_Carryall_ghex_F",
			"B_Bergen_dgtl_F",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Bergen_mcamo_F",
			"B_Carryall_oli",
			"B_Carryall_mcamo"
		};
		MilitaryVests[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierSpec_rgr",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrier1_rgr"
		};
		MilitaryHeadgear[]=
		{
			"H_HelmetB_light_desert",
			"H_MilCap_dgtl",
			"H_HelmetSpecB_paint1",
			"H_HelmetB_TI_tna_F",
			"H_HelmetB_paint",
			"H_HelmetLeaderO_ghex_F",
			"H_BandMask_khk",
			"H_HelmetCrew_O_ghex_F",
			"H_HelmetB_black",
			"H_CrewHelmetHeli_B",
			"H_MilCap_oucamo",
			"H_BandMask_khk",
			"H_HelmetCrew_O_ghex_F",
			"H_HelmetIA",
			"H_PilotHelmetHeli_O",
			"H_HelmetB_light_snakeskin",
			"H_BandMask_reaper",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_HelmetSpecB",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_light_grass",
			"H_MilCap_dgtl",
			"H_HelmetB_light_sand",
			"H_MilCap_rucamo",
			"H_MilCap_ocamo",
			"H_HelmetCrew_B",
			"H_HelmetB_light",
			"H_HelmetO_ocamo",
			"H_HelmetSpecB",
			"H_HelmetB",
			"H_HelmetSpecO_blk",
			"H_MilCap_blue",
			"H_HelmetCrew_I",
			"Exile_Headgear_GasMask",
			"H_HelmetB_plain_blk",
			"H_MilCap_mcamo",
			"H_HelmetB_black",
			"H_HelmetB_Light_tna_F",
			"H_HelmetSpecB_paint2",
			"H_MilCap_rucamo",
			"H_HelmetIA_net",
			"H_MilCap_blue",
			"H_Beret_gen_F",
			"H_HelmetB_desert",
			"H_MilCap_blue",
			"H_HelmetB_camo",
			"H_HelmetIA_net",
			"H_HelmetB_sand",
			"H_MilCap_mcamo",
			"H_PilotHelmetHeli_I",
			"H_HelmetB_light",
			"H_MilCap_rucamo",
			"H_PilotHelmetHeli_B",
			"Exile_Headgear_GasMask",
			"H_HelmetO_oucamo",
			"H_MilCap_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetSpecB_paint2",
			"H_HelmetB",
			"Exile_Headgear_GasMask",
			"H_HelmetB_paint",
			"H_MilCap_ocamo",
			"H_HelmetSpecB_paint1",
			"H_Helmet_Skate",
			"H_HelmetB_light_grass",
			"H_HelmetB_desert",
			"H_HelmetSpecB_paint1",
			"H_HelmetB_grass",
			"H_HelmetSpecO_ocamo",
			"H_Helmet_Skate",
			"H_MilCap_oucamo",
			"H_CrewHelmetHeli_I",
			"H_HelmetB_grass",
			"H_HelmetB_snakeskin",
			"H_HelmetSpecB_paint2",
			"H_HelmetIA_camo",
			"H_CrewHelmetHeli_O",
			"H_MilCap_oucamo",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecO_ghex_F",
			"H_HelmetB_paint",
			"H_HelmetB",
			"H_HelmetCrew_O",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_black",
			"H_MilCap_dgtl",
			"H_HelmetSpecB_blk",
			"H_HelmetIA",
			"H_PilotHelmetFighter_I",
			"H_PilotHelmetFighter_B",
			"H_MilCap_mcamo",
			"H_HelmetB_snakeskin",
			"H_MilCap_rucamo",
			"H_HelmetB_plain_blk",
			"H_HelmetB_plain_blk",
			"H_HelmetB_Enh_tna_F",
			"H_MilCap_blue",
			"H_HelmetSpecB",
			"H_HelmetSpecO_ghex_F",
			"H_HelmetLeaderO_ghex_F",
			"H_HelmetB_Light_tna_F",
			"H_MilCap_dgtl",
			"H_BandMask_demon",
			"H_MilCap_oucamo",
			"H_BandMask_demon",
			"H_HelmetIA_camo",
			"H_HelmetB_light_black",
			"H_HelmetB_tna_F",
			"H_HelmetB_sand",
			"H_HelmetB_light_desert",
			"H_Beret_gen_F",
			"Exile_Headgear_GasMask",
			"H_HelmetSpecB_blk",
			"H_PilotHelmetFighter_O",
			"H_HelmetIA",
			"H_HelmetB_Enh_tna_F",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetO_ghex_F",
			"H_HelmetB_TI_tna_F",
			"H_BandMask_reaper",
			"H_HelmetB_tna_F",
			"H_HelmetB_light"
		};
		Ghillies[]=
		{
			"U_I_GhillieSuit",
			"U_B_GhillieSuit",
			"U_O_GhillieSuit"
		};
		DLCGhillies[]=
		{
			"U_O_T_FullGhillie_tna_F",
			"U_O_T_Sniper_F",
			"U_B_T_FullGhillie_tna_F",
			"U_I_FullGhillie_lsh",
			"U_O_T_FullGhillie_tna_F",
			"U_B_T_FullGhillie_tna_F",
			"U_O_FullGhillie_sard",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_sard",
			"U_O_T_Sniper_F",
			"U_B_T_Soldier_F",
			"U_B_FullGhillie_lsh",
			"U_B_T_Sniper_F",
			"U_B_T_Soldier_F",
			"U_B_FullGhillie_ard",
			"U_B_T_Soldier_F",
			"U_B_T_FullGhillie_tna_F",
			"U_O_FullGhillie_lsh",
			"U_B_T_FullGhillie_tna_F",
			"U_O_FullGhillie_ard",
			"U_O_T_Sniper_F",
			"U_O_T_FullGhillie_tna_F",
			"U_O_T_FullGhillie_tna_F",
			"U_B_T_Soldier_F",
			"U_B_FullGhillie_sard",
			"U_B_T_Sniper_F",
			"U_O_T_Sniper_F",
			"U_B_T_Soldier_F",
			"U_O_T_FullGhillie_tna_F",
			"U_B_T_Sniper_F",
			"U_O_T_Sniper_F",
			"U_B_T_FullGhillie_tna_F",
			"U_B_T_Sniper_F",
			"U_B_T_Sniper_F"
		};
		DLCVests[]=
		{
			"V_PlateCarrierSpec_blk",
			"V_HarnessO_ghex_F",
			"V_PlateCarrierSpec_mtp",
			"V_TacChestrig_oli_F",
			"V_PlateCarrier1_rgr_noflag_F",
			"V_PlateCarrier1_tna_F",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierIAGL_dgtl",
			"V_BandollierB_ghex_F",
			"V_PlateCarrierGL_blk",
			"V_TacChestrig_grn_F",
			"V_TacVest_gen_F",
			"V_TacChestrig_cbr_F",
			"V_HarnessOGL_ghex_F",
			"V_PlateCarrierSpec_tna_F",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierSpec_rgr",
			"V_PlateCarrierGL_tna_F",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrier2_rgr_noflag_F",
			"V_PlateCarrier2_tna_F"
		};
		Rebreathers[]=
		{
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR"
		};
		MedicalItems[]=
		{
			"Exile_Item_Heatpack",
			"Exile_Item_Bandage",
			"Exile_Item_Bandage",
			"Exile_Item_Heatpack",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack",
			"Exile_Item_Vishpirin",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin",
			"Exile_Item_Bandage",
			"Exile_Item_Heatpack",
			"Exile_Item_Vishpirin",
			"Exile_Item_InstaDoc",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack",
			"Exile_Item_Heatpack",
			"Exile_Item_Vishpirin",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack",
			"Exile_Item_InstaDoc",
			"Exile_Item_Heatpack",
			"Exile_Item_Heatpack",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack",
			"Exile_Item_Vishpirin",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin"
		};
		IndustrialItems[]=
		{
			"Exile_Melee_Shovel",
			"Exile_Melee_Shovel",
			"Exile_Item_ScrewDriver",
			"Exile_Item_Pliers",
			"Exile_Melee_Axe",
			"Exile_Item_LightBulb",
			"Exile_Melee_Shovel",
			"Exile_Melee_SledgeHammer",
			"Exile_Melee_Axe",
			"Exile_Item_MetalScrews",
			"Exile_Item_JunkMetal",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Item_Cement",
			"Exile_Item_JunkMetal",
			"Exile_Item_Handsaw",
			"Exile_Item_ExtensionCord",
			"Exile_Item_ScrewDriver",
			"Exile_Item_Foolbox",
			"Exile_Item_FloodLightKit",
			"Exile_Melee_Axe",
			"Exile_Item_LightBulb",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_Foolbox",
			"Exile_Item_Cement",
			"Exile_Melee_Axe",
			"Exile_Item_Grinder",
			"Exile_Item_MetalScrews",
			"Exile_Item_ScrewDriver",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Item_ScrewDriver",
			"Exile_Melee_Axe",
			"Exile_Melee_Axe",
			"Exile_Item_Pliers",
			"Exile_Melee_Shovel",
			"Exile_Item_ScrewDriver",
			"Exile_Melee_Axe",
			"Exile_Item_Knife",
			"Exile_Item_CamoTentKit",
			"Exile_Item_MetalScrews",
			"Exile_Item_ExtensionCord",
			"Exile_Item_ScrewDriver",
			"Exile_Item_Handsaw",
			"Exile_Melee_Axe",
			"Exile_Item_MetalBoard",
			"Exile_Item_PortableGeneratorKit",
			"Exile_Melee_Axe",
			"Exile_Item_ScrewDriver",
			"Exile_Item_ExtensionCord",
			"Exile_Item_ExtensionCord",
			"Exile_Item_Foolbox",
			"Exile_Item_Handsaw",
			"Exile_Melee_Axe",
			"Exile_Melee_Axe",
			"Exile_Item_JunkMetal",
			"Exile_Item_PortableGeneratorKit",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalScrews",
			"Exile_Item_Grinder",
			"Exile_Item_Handsaw",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Item_ExtensionCord",
			"Exile_Item_Cement",
			"Exile_Item_LightBulb",
			"Exile_Melee_Axe",
			"Exile_Item_MetalScrews",
			"Exile_Item_JunkMetal",
			"Exile_Item_Handsaw",
			"Exile_Item_Handsaw",
			"Exile_Item_Sand",
			"Exile_Item_MetalBoard",
			"Exile_Melee_Axe",
			"Exile_Melee_Axe",
			"Exile_Item_Handsaw",
			"Exile_Melee_Shovel",
			"Exile_Item_ExtensionCord",
			"Exile_Melee_Axe",
			"Exile_Item_Pliers",
			"Exile_Melee_SledgeHammer",
			"Exile_Item_LightBulb",
			"Exile_Item_ScrewDriver",
			"Exile_Item_JunkMetal",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_Knife",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Item_Handsaw",
			"Exile_Melee_Axe",
			"Exile_Item_ScrewDriver",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Item_Handsaw",
			"Exile_Item_MetalBoard",
			"Exile_Melee_Axe",
			"Exile_Item_CamoTentKit",
			"Exile_Item_Grinder",
			"Exile_Item_Sand",
			"Exile_Item_Handsaw",
			"Exile_Item_Foolbox",
			"Exile_Item_Handsaw",
			"Exile_Item_Handsaw",
			"Exile_Item_JunkMetal",
			"Exile_Melee_Shovel",
			"Exile_Melee_Shovel",
			"Exile_Melee_Axe",
			"Exile_Item_ExtensionCord",
			"Exile_Item_ScrewDriver",
			"Exile_Item_Pliers",
			"Exile_Item_Pliers",
			"Exile_Melee_Shovel",
			"Exile_Item_Pliers",
			"Exile_Item_Sand",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Melee_Shovel",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Item_Pliers",
			"Exile_Item_CamoTentKit",
			"Exile_Melee_SledgeHammer",
			"Exile_Item_Pliers",
			"Exile_Item_Handsaw",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Melee_Axe",
			"Exile_Melee_Axe",
			"Exile_Item_MetalBoard",
			"Exile_Item_FloodLightKit",
			"Exile_Item_ExtensionCord",
			"Exile_Melee_Shovel",
			"Exile_Item_Sand",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Exile_Melee_SledgeHammer",
			"Exile_Melee_Axe",
			"Exile_Item_Pliers",
			"Exile_Item_CamoTentKit",
			"Exile_Item_LightBulb",
			"Exile_Item_PortableGeneratorKit",
			"Exile_Item_Pliers",
			"Exile_Item_ScrewDriver",
			"Exile_Item_ThermalScannerPro",
			"Exile_Item_ScrewDriver",
			"Exile_Item_JunkMetal",
			"Exile_Item_Grinder",
			"Exile_Item_ScrewDriver",
			"Exile_Melee_SledgeHammer",
			"Exile_Melee_Axe",
			"Exile_Item_Pliers",
			"Exile_Item_LightBulb",
			"Exile_Item_Pliers",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Item_FloodLightKit",
			"Exile_Item_JunkMetal",
			"Exile_Item_JunkMetal"
		};
		Vehicle[]=
		{
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_DuctTape",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_DuctTape",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_DuctTape",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_DuctTape",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_DuctTape",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_DuctTape",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_DuctTape",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_DuctTape",
			"Exile_Item_DuctTape",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_DuctTape",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterEmpty"
		};
		Chemlights[]=
		{
			"Chemlight_red",
			"Chemlight_yellow",
			"Chemlight_blue",
			"Chemlight_green"
		};
		RoadFlares[]=
		{
			"FlareWhite_F",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareYellow_F"
		};
		SmokeGrenades[]=
		{
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellGreen",
			"SmokeShellYellow"
		};
		Restraints[]=
		{
			"Exile_Item_ZipTie"
		};
		Electronics[]=
		{
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit"
		};
		Trash[]=
		{
			"Exile_Item_PlasticBottleEmpty",
			"Exile_Item_PlasticBottleEmpty",
			"Exile_Item_ToiletPaper",
			"Exile_Item_PlasticBottleEmpty",
			"Exile_Item_Can_Empty",
			"Exile_Item_PlasticBottleEmpty",
			"Exile_Item_Magazine04",
			"Exile_Item_Magazine02",
			"Exile_Item_ToiletPaper",
			"Exile_Item_Can_Empty",
			"Exile_Item_Magazine01",
			"Exile_Item_Can_Empty",
			"Exile_Item_ToiletPaper",
			"Exile_Item_Magazine03",
			"Exile_Item_ToiletPaper",
			"Exile_Item_Can_Empty"
		};
		Unused[]=
		{
			"Exile_Item_Wrench",
			"Exile_Item_OilCanister",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Carwheel",
			"Exile_Item_Wrench",
			"Exile_Item_Wrench",
			"Exile_Item_Carwheel",
			"Exile_Item_Hammer",
			"Exile_Item_Hammer",
			"Exile_Item_Hammer",
			"Exile_Item_Wrench",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Hammer",
			"Exile_Item_SleepingMat",
			"Exile_Item_Wrench",
			"Exile_Item_OilCanister",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Rope",
			"Exile_Item_Rope",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_SleepingMat",
			"Exile_Item_Defibrillator",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Hammer",
			"Exile_Item_Hammer",
			"Exile_Item_Carwheel",
			"Exile_Item_SleepingMat",
			"Exile_Item_Defibrillator",
			"Exile_Item_Defibrillator",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Hammer",
			"Exile_Item_SleepingMat",
			"Exile_Item_OilCanister",
			"Exile_Item_Rope",
			"Exile_Item_Hammer",
			"Exile_Item_Rope",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_Carwheel",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_OilCanister",
			"Exile_Item_OilCanister",
			"Exile_Item_OilCanister",
			"Exile_Item_SleepingMat",
			"Exile_Item_OilCanister",
			"Exile_Item_Hammer",
			"Exile_Item_Hammer",
			"Exile_Item_Defibrillator",
			"Exile_Item_OilCanister",
			"Exile_Item_Defibrillator",
			"Exile_Item_Hammer",
			"Exile_Item_Carwheel"
		};
	};
};
class CfgExileSelections
{
	class GNT_C185
	{
		class driver
		{
			selections[]=
			{
				{-0.25620699,0.26630399,-0.50190699}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.192368,0.26578501,-0.50212502},
				{0.176559,-0.64402002,-0.50930703},
				{-0.237976,-0.64440203,-0.50931001}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class GNT_C185F
	{
		class driver
		{
			selections[]=
			{
				{-0.256073,0.165916,-0.196804}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.19255801,0.165443,-0.19649},
				{0.17681099,-0.74459797,-0.203876},
				{-0.237831,-0.74475902,-0.203886}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class GNT_C185T
	{
		class driver
		{
			selections[]=
			{
				{-0.25617999,0.26631901,-0.50191498}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.192368,0.265755,-0.50211501},
				{0.176559,-0.64403498,-0.50933999},
				{-0.237984,-0.64431798,-0.50923997}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class B_Heli_Light_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.374823,1.18665,-0.043807499}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.28849801,0.27226299,-0.088810399},
				{0.300203,0.23658,-0.089783199},
				{0.82501602,0.96324903,-0.33308601},
				{-0.798944,0.0632248,-0.33567601},
				{-0.83272398,0.97071099,-0.34092},
				{0.82720399,0.065307602,-0.33856201}
			};
			path[]=
			{
				{-10},
				{-10},
				{1},
				{2},
				{3},
				{4}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.366716,1.18437,-0.043147098}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class B_Heli_Light_01_armed_F
	{
		class driver
		{
			selections[]=
			{
				{-0.374823,1.18665,-0.043807499}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{0.366714,1.1843801,-0.043147098}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class C_Heli_Light_01_civil_F
	{
		class driver
		{
			selections[]=
			{
				{-0.37315801,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.0332,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class O_Heli_Light_02_F
	{
		class driver
		{
			selections[]=
			{
				{0.43571901,3.4661801,-1.0693099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.55681002,2.52369,-0.99071902},
				{0.045997601,2.7175801,-0.96582901},
				{-0.607925,2.6159699,-0.96908897},
				{0.56743997,0.477211,-0.942882},
				{0.0117722,0.46977201,-0.97047198},
				{-0.59541303,0.47616601,-0.96629798},
				{0.234703,1.55914,-0.86735201},
				{-0.27056101,1.58994,-0.94165099}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.46064901,3.4662399,-1.0684201}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class O_Heli_Light_02_unarmed_F
	{
		class driver
		{
			selections[]=
			{
				{0.43568999,3.4661901,-1.0693099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.55660802,2.52351,-0.99057901},
				{0.046014801,2.71769,-0.96581697},
				{-0.60790801,2.6159699,-0.96908897},
				{0.56736898,0.47725701,-0.942922},
				{0.0117245,0.46980301,-0.97059202},
				{-0.59587902,0.47620401,-0.96612298},
				{0.23465499,1.5587699,-0.86754501},
				{-0.270542,1.58982,-0.94166899}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.46064901,3.4662499,-1.0684201}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class O_Heli_Light_02_v2_F
	{
		class driver
		{
			selections[]=
			{
				{0.43569201,3.4661901,-1.0693099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.55628002,2.5232401,-0.99033898},
				{0.0460205,2.71786,-0.96574098},
				{-0.60789102,2.6159799,-0.96908599},
				{0.56731999,0.47727999,-0.94296098},
				{0.0116653,0.46975699,-0.97065997},
				{-0.59614801,0.47623399,-0.96602201},
				{0.234606,1.55871,-0.86782402},
				{-0.27052301,1.5897,-0.94169003}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.460646,3.46626,-1.0684201}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class B_Heli_Attack_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0530148,3.9056201,-0.56879598}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.067686103,2.48053,-0.222655}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class O_Heli_Attack_02_F
	{
		class driver
		{
			selections[]=
			{
				{0.039037701,3.0806999,-0.35813001}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.042049401,1.6802,-1.66509},
				{-0.141718,0.99739099,-1.69001},
				{-0.077497497,0.40789801,-1.72499},
				{-0.136099,-0.204041,-1.80181},
				{0.19784001,0.99150097,-1.69108},
				{0.30165699,1.4997801,-1.64477},
				{0.268785,0.384949,-1.74883},
				{0.31862399,-0.26995099,-1.78196}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.079242699,4.3263402,-0.75932401}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class O_Heli_Attack_02_black_F
	{
		class driver
		{
			selections[]=
			{
				{0.039037701,3.0806899,-0.35812801}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.042045601,1.68019,-1.66509},
				{-0.14171401,0.99739802,-1.69001},
				{-0.077508897,0.407875,-1.72498},
				{-0.135893,-0.204041,-1.8016599},
				{0.197935,0.99175298,-1.69096},
				{0.301687,1.49968,-1.6450599},
				{0.268711,0.38506299,-1.74885},
				{0.31831399,-0.26991299,-1.78205}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.079261802,4.3263502,-0.75932401}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class B_Heli_Transport_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.44116199,5.54001,-0.90255499}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.78002203,1.19497,-1.12686},
				{0.75433302,2.7397201,-1.08366},
				{-0.66614002,1.22334,-1.12008},
				{-0.71043199,2.7272999,-1.10588},
				{0.258192,1.2872699,-1.12261},
				{-0.2101,1.31505,-1.11707},
				{0.302452,2.6932001,-1.1071301},
				{-0.19695701,2.64622,-1.12029}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.39416301,4.0733299,-0.79841202},
				{0.65865499,5.54001,-0.90255499},
				{0.52080703,4.0577502,-0.79652101}
			};
			path[]=
			{
				{1},
				{0},
				{2}
			};
		};
	};
	class B_Heli_Transport_01_camo_F
	{
		class driver
		{
			selections[]=
			{
				{-0.44115999,5.54,-0.90255499}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.77998501,1.19495,-1.12685},
				{0.75423002,2.7397001,-1.08401},
				{-0.66621602,1.22314,-1.12038},
				{-0.71013099,2.7279799,-1.10566},
				{0.25819001,1.28721,-1.12264},
				{-0.210106,1.31504,-1.1170501},
				{0.30243099,2.69331,-1.10707},
				{-0.197046,2.64621,-1.1203901}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.39416301,4.0733299,-0.79841202},
				{0.65865701,5.54,-0.90255499},
				{0.520805,4.0577502,-0.79652101}
			};
			path[]=
			{
				{1},
				{0},
				{2}
			};
		};
	};
	class I_Heli_Transport_02_F
	{
		class driver
		{
			selections[]=
			{
				{0.74520898,6.3601799,-1.79773}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.94724703,-0.60832202,-1.74854},
				{-0.96755803,-1.62138,-1.72834},
				{-1.10735,1.62867,-1.6869},
				{1.08293,4.25459,-1.71578},
				{-1.06961,-1.0816801,-1.65363},
				{1.05392,1.03391,-1.67135},
				{1.05393,0.50671399,-1.67383},
				{-1.0723,0.045852698,-1.65116},
				{1.0475301,3.70451,-1.71331},
				{-1.05156,3.84513,-1.70143},
				{1.08292,4.7817798,-1.71331},
				{1.04064,-0.054382298,-1.69049},
				{-1.07478,-0.52058399,-1.67029},
				{-1.08594,1.09486,-1.68633},
				{-1.06849,0.57122803,-1.67029},
				{-1.07609,3.1919301,-1.70371}
			};
			path[]=
			{
				{1},
				{2},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.79921901,6.3601699,-1.79773}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class I_Heli_light_03_F
	{
		class driver
		{
			selections[]=
			{
				{0.48392701,3.8134201,-0.37529901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.68264598,2.73264,-0.54327601},
				{-0.72210503,2.95506,-0.51285499},
				{-0.345604,1.24496,-0.25659201},
				{-0.37781501,3.09515,-0.55808997},
				{0.242781,3.1768,-0.601345},
				{0.25367901,1.27113,-0.26690501}
			};
			path[]=
			{
				{1},
				{2},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.46827501,3.81567,-0.36124101}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class I_Heli_light_03_unarmed_F
	{
		class driver
		{
			selections[]=
			{
				{0.492634,3.8134201,-0.56178802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.271395,3.2804899,-0.44661799},
				{-0.263695,3.29352,-0.41770399},
				{-0.29703501,1.26389,-0.45782},
				{0.25697699,1.31113,-0.468871},
				{0.265692,2.6845701,-0.41290399},
				{-0.21941,2.70644,-0.456135}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.45957401,3.81566,-0.54773498}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class B_Plane_CAS_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0029621101,4.8645101,0.31255099}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_Plane_CAS_02_F
	{
		class driver
		{
			selections[]=
			{
				{0.020927399,2.88761,-0.89339501}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class I_Plane_Fighter_03_CAS_F
	{
		class driver
		{
			selections[]=
			{
				{0.0628815,2.6684699,-0.83391798}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class I_Plane_Fighter_03_AA_F
	{
		class driver
		{
			selections[]=
			{
				{0.062873803,2.66856,-0.83391798}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class B_Heli_Transport_03_F
	{
		class driver
		{
			selections[]=
			{
				{0.47134599,7.6304202,-0.68849099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.98066503,-0.80114001,-1.2116899},
				{-1.00673,2.7515299,-1.28189},
				{-0.87884498,1.52163,-1.26324},
				{-0.98007202,0.93351001,-1.21131},
				{-0.92895103,0.34255999,-1.22214},
				{-0.87327802,-0.34951001,-1.26791},
				{0.89081001,2.76933,-1.14055},
				{0.78992301,2.13885,-1.22903},
				{0.78027701,1.56014,-1.2117701},
				{-1.04177,2.1519001,-1.17479},
				{0.83246601,0.41680101,-1.19941},
				{0.86339402,-0.227585,-1.17889},
				{0.83707601,0.97724903,-1.14817},
				{0.90074003,-0.77381098,-1.21394},
				{0.85444498,-1.31753,-1.30444},
				{-0.98433298,-1.35039,-1.27188}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{3},
				{4}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.771263,4.0352402,-1.0089999},
				{-0.53277397,7.6301699,-0.68883401},
				{0.69272798,4.0009699,-1.01173}
			};
			path[]=
			{
				{1},
				{0},
				{2}
			};
		};
	};
	class B_Heli_Transport_03_unarmed_F
	{
		class driver
		{
			selections[]=
			{
				{0.47134799,7.6304202,-0.688492}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.980667,-0.80113202,-1.2116899},
				{-1.00674,2.75156,-1.28189},
				{-0.87869602,1.52177,-1.26323},
				{-0.98003799,0.933487,-1.2113},
				{-0.92895699,0.34255201,-1.22214},
				{-0.873276,-0.34972399,-1.26798},
				{0.89084798,2.76931,-1.14055},
				{0.78982902,2.1388199,-1.22899},
				{0.78027302,1.56013,-1.2118},
				{-1.04182,2.1519401,-1.17479},
				{0.83231902,0.41676301,-1.19944},
				{0.86340898,-0.227585,-1.17888},
				{0.83707798,0.97725701,-1.14817},
				{0.90034503,-0.77389503,-1.21402},
				{0.85444498,-1.31752,-1.30443},
				{-0.98433298,-1.3503799,-1.27188},
				{-0.94141197,4.0008898,-1.01087},
				{0.86428601,4.0194302,-1.01359}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{3},
				{4},
				{1},
				{2}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.53277397,7.6301699,-0.68883401}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class O_Heli_Transport_04_F
	{
		class driver
		{
			selections[]=
			{
				{-0.743334,3.9835501,-0.91362703}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.81068999,3.18697,-1.28905},
				{0.56546599,3.9830401,-0.91398299}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class O_Heli_Transport_04_ammo_F
	{
		class driver
		{
			selections[]=
			{
				{-0.74333602,3.9835501,-0.67762399}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.81079501,3.18698,-1.05301},
				{0.56546199,3.9830401,-0.67798102}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class O_Heli_Transport_04_bench_F
	{
		class driver
		{
			selections[]=
			{
				{-0.743334,3.9835501,-0.91363001}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.365473,1.3930399,-1.874},
				{0.36002001,0.56245399,-1.87673},
				{0.34896299,-0.28014401,-1.8822},
				{0.37917301,-1.1013499,-1.86579},
				{-0.55682403,-1.10304,-1.874},
				{-0.55133998,-0.267654,-1.87673},
				{-0.54038203,0.57022899,-1.8822},
				{-0.57049602,1.39571,-1.86579}
			};
			path[]=
			{
				{2},
				{3},
				{4},
				{5},
				{6},
				{7},
				{8},
				{9}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.81042099,3.18804,-1.28829},
				{0.56547201,3.9830401,-0.913984}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class O_Heli_Transport_04_box_F
	{
		class driver
		{
			selections[]=
			{
				{-0.74333602,3.9835501,-0.677616}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.81094003,3.18698,-1.0529701},
				{0.56546199,3.9830401,-0.67798102}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class O_Heli_Transport_04_covered_F
	{
		class driver
		{
			selections[]=
			{
				{-0.74332798,3.9835601,-0.67762899}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.220755,1.90108,-1.23475},
				{-0.385355,1.95834,-1.18929},
				{0.192371,1.2877001,-1.15838},
				{-0.38910699,1.3544199,-1.18354},
				{0.145,0.71903998,-1.1910599},
				{-0.38474301,0.77798498,-1.17377},
				{0.19108801,0.206993,-1.1593601},
				{-0.42981699,0.188072,-1.21646},
				{0.229076,-0.26523599,-1.15402},
				{-0.359644,-0.25894901,-1.20516},
				{-0.39707601,-0.881302,-1.16845},
				{-0.33873701,-1.32311,-1.16989},
				{0.262308,-0.83161902,-1.23517},
				{0.202288,-1.30688,-1.20816},
				{0.21130399,-2.0228,-1.20444},
				{-0.42447901,-2.0179,-1.2163}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.81164402,3.1958201,-1.0515701},
				{0.56547397,3.9830401,-0.67798501}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class O_Heli_Transport_04_fuel_F
	{
		class driver
		{
			selections[]=
			{
				{-0.74333799,3.9835501,-0.53120703}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.81065398,3.18697,-0.90663999},
				{0.56546402,3.9830401,-0.53156102}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class O_Heli_Transport_04_medevac_F
	{
		class driver
		{
			selections[]=
			{
				{-0.74334002,3.9835701,-0.67762798}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-1.03646,-1.1898,-1.31832},
				{0.794689,-1.0631599,-1.3114001},
				{0.785164,1.3104,-1.29132},
				{-1.06062,0.25022101,-1.2540801}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.81160003,3.1877,-1.0517401},
				{0.56546199,3.9830501,-0.67798001}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class O_Heli_Transport_04_repair_F
	{
		class driver
		{
			selections[]=
			{
				{-0.743334,3.9835501,-0.67762202}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.81081998,3.18698,-1.053},
				{0.56546402,3.9830401,-0.67798102}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class B_APC_Tracked_01_rcws_F
	{
		class driver
		{
			selections[]=
			{
				{-0.81778002,-0.170609,-1.49384}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.048942599,-0.00174713,0.064616702},
				{0.0032806401,-0.0227127,0.066101097},
				{0.00327301,-0.0226746,0.066060103},
				{0.00119019,0.0159378,0.081983097},
				{0.0023040799,-0.023876199,0.0664239},
				{-0.0088958703,0.00211334,0.069279201},
				{-0.032051101,0.0123291,0.071344897},
				{-0.0049896198,-0.0130234,0.070684403}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.050880399,-0.118603,-0.452654},
				{-0.64279199,-1.06043,-0.85142899}
			};
			path[]=
			{
				{0},
				{1}
			};
		};
	};
	class B_APC_Tracked_01_AA_F
	{
		class driver
		{
			selections[]=
			{
				{-0.518188,-1.0937099,-1.48154}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{0.66761798,-1.72716,-0.166016},
				{0.37418401,-1.05313,-0.16489799}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class O_APC_Tracked_02_cannon_F
	{
		class driver
		{
			selections[]=
			{
				{-0.046089198,-0.12601499,-0.45262799}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.0085830698,0.00062561,0.070335403},
				{0.00260162,0.0142136,0.080573097},
				{-0.0072479201,-0.049316399,0.0461969},
				{-0.00038146999,-0.022155801,0.0578156},
				{0.0031051601,-0.0239182,0.065966599},
				{-0.031921402,0.0113373,0.071439698},
				{-0.048232999,-0.0046806298,0.064346299},
				{-0.0045471201,-0.0128441,0.070404999}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.051940899,-0.114826,-0.45263299},
				{-0.052429199,-0.116138,-0.452636}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class O_APC_Tracked_02_AA_F
	{
		class driver
		{
			selections[]=
			{
				{-0.49175999,-2.7112601,-1.6562099}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{0.67227203,-3.37712,-0.30333},
				{0.35043299,-2.6742001,-0.29963201}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class I_APC_tracked_03_cannon_F
	{
		class driver
		{
			selections[]=
			{
				{-0.48030901,1.42779,-1.78879}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.0034561199,-0.019744899,0.0660486},
				{0.0018692,-0.0199738,0.066770598},
				{0.0033569301,-0.019577,0.0660768},
				{-0.0072975201,-0.044456501,0.045946602},
				{-0.0084571801,0.00606537,0.0699258},
				{-0.031436902,0.015274,0.071446903},
				{-0.048877701,-0.00097656297,0.0655246}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.52257198,-0.78543901,-0.58392102},
				{-0.676121,-0.139732,-0.60288101}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class I_MBT_03_cannon_F
	{
		class driver
		{
			selections[]=
			{
				{0.88849598,0.72341198,-2.30037}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{0.76973701,-0.88497901,-0.89749497},
				{0.397369,-0.26468301,-0.93560803}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class B_MBT_01_cannon_F
	{
		class driver
		{
			selections[]=
			{
				{-0.046203598,-0.125229,-0.45263001}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.0058059702,-0.46826199,0.208829},
				{-0.0035705599,-0.0454254,0.054754298},
				{-0.0076522799,-0.0543175,0.045767799},
				{0.00284576,-0.034694701,0.106388},
				{-0.0103455,-0.048519101,0.047027599},
				{0.0038604699,-0.036704998,0.0629673}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.0509491,-0.115601,-0.45263901},
				{0.67593402,-0.76261097,-0.27463099}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class B_MBT_01_arty_F
	{
		class driver
		{
			selections[]=
			{
				{-0.72106898,-0.0111542,-2.2514801}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.0542068,-0.111893,-0.452622},
				{1.5293601,-2.8710899,-0.72208202}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class B_MBT_01_mlrs_F
	{
		class driver
		{
			selections[]=
			{
				{-0.72113001,0.41900599,-1.0233001}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.053634599,-0.110062,-0.452611}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class O_MBT_02_cannon_F
	{
		class driver
		{
			selections[]=
			{
				{-0.038871799,0.346302,-1.82363}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{0.72452497,-1.36408,-0.98038203},
				{0.30725899,-0.435619,-0.97629702}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class O_MBT_02_arty_F
	{
		class driver
		{
			selections[]=
			{
				{-0.038925201,-0.30950201,-2.36954}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.0514603,-0.114204,-0.452649},
				{1.74606,-2.34688,-0.82305998}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class B_MRAP_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.52006298,-1.43124,-0.43880099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.51520699,-1.40712,-0.36860999},
				{0.487928,-2.57125,-0.33517599},
				{-0.56498897,-2.48822,-0.35177499}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class B_MRAP_01_gmg_F
	{
		class driver
		{
			selections[]=
			{
				{-0.52012098,-1.39827,-0.99524999}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.515221,-1.37418,-0.92501402},
				{0.48792499,-2.5383699,-0.89160299}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.56208003,-2.47311,-0.90972698}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class B_MRAP_01_hmg_F
	{
		class driver
		{
			selections[]=
			{
				{-0.519997,-1.43221,-0.99499798}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.514961,-1.40784,-0.92506099},
				{0.487656,-2.5727799,-0.89160597}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.57002997,-2.4997499,-0.90972602}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class O_MRAP_02_F
	{
		class driver
		{
			selections[]=
			{
				{0.0153046,-0.76210803,-0.65763402}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.491898,-2.08635,-0.66709298},
				{-0.36485299,-2.15816,-0.66024101},
				{0.26168099,-3.3073399,-0.50554299},
				{-0.348564,-3.20543,-0.52742302}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_MRAP_02_hmg_F
	{
		class driver
		{
			selections[]=
			{
				{0.0057983398,-0.124115,0.13411}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.0044937101,-0.024168,0.187327},
				{-0.032280002,0.0126648,0.072360501},
				{0.0072936998,-0.113373,0.124445}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.036216699,0.012291,0.061859101}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class O_MRAP_02_gmg_F
	{
		class driver
		{
			selections[]=
			{
				{0.0057601901,-0.124855,0.13410901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.0046768198,-0.023824699,0.18739},
				{-0.032386798,0.0132046,0.072320499},
				{0.0072708102,-0.113241,0.124444}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.28424099,-2.0862701,-0.92050898}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class C_Offroad_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.00275421,-0.0491428,-0.0437002}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.0027236899,-0.0140057,0.0253754},
				{-0.00096893299,-0.0326805,0.107801},
				{-0.0083923303,-0.054407101,0.045924701},
				{-0.0122681,-0.051359199,0.049074199},
				{-0.0118484,-0.052257501,0.049074199}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class I_G_Offroad_01_F
	{
		class driver
		{
			selections[]=
			{
				{0.00041198701,-0.044631999,-0.043297801}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00076293899,-0.0107346,0.025410701},
				{0.0024337801,-0.030673999,0.107807},
				{-0.0057754498,-0.051902801,0.0459304},
				{-0.0103226,-0.047061902,0.049072701},
				{-0.0103378,-0.0469894,0.049073201}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class I_G_Offroad_01_armed_F
	{
		class driver
		{
			selections[]=
			{
				{-0.00202179,-0.044742599,-0.043677799}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.000137329,-0.0109901,0.025721099}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.039604198,0.0139465,0.97588301}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class B_G_Offroad_01_F
	{
		class driver
		{
			selections[]=
			{
				{-9.1552698e-005,-0.0468597,-0.043299198}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00025176999,-0.0135803,0.0254164},
				{0.0019760099,-0.0342751,0.107809},
				{-0.0061950702,-0.0566101,0.045931298},
				{-0.0107422,-0.052074399,0.0490737},
				{-0.0107422,-0.052120201,0.049072701}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_G_Offroad_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.00202179,-0.047924001,-0.043274902}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.0022048999,-0.0146141,0.025425},
				{-0.00083923299,-0.034547798,0.107819},
				{-0.0085067702,-0.0550537,0.045926102},
				{-0.0122681,-0.050060298,0.049067002},
				{-0.0118256,-0.050804101,0.049069401}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class B_G_Offroad_01_armed_F
	{
		class driver
		{
			selections[]=
			{
				{-0.00133514,-0.0441208,-0.043729302}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000244141,-0.0103607,0.025740599}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.040947001,0.0143127,0.97588301}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class O_G_Offroad_01_armed_F
	{
		class driver
		{
			selections[]=
			{
				{-0.419067,0.34524199,-1.00159}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41802999,0.247345,-1.02279}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.53361499,-1.9223599,-0.246942}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class C_Quadbike_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0146637,-0.34864801,-0.35720199}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.000961304,-0.73987198,-0.361821}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class B_Quadbike_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0146561,-0.34847301,-0.357256}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00096893299,-0.73986799,-0.361821}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_Quadbike_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0146713,-0.34886199,-0.357149}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00097656297,-0.73997903,-0.36182001}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class I_Quadbike_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0146561,-0.34857199,-0.357225}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00096893299,-0.73986399,-0.361821}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class I_G_Quadbike_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0146561,-0.34869799,-0.35719001}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.000961304,-0.73988003,-0.361821}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class B_G_Quadbike_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0146713,-0.34912899,-0.35707501}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00097656297,-0.740013,-0.36182001}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_G_Quadbike_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0146637,-0.34867501,-0.35719901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00096893299,-0.73983401,-0.361821}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class I_MRAP_03_F
	{
		class driver
		{
			selections[]=
			{
				{0.0117111,0.92051297,-0.53334498}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.67804003,-0.202209,-0.49706101},
				{0.017570499,-0.14622501,-0.53302503}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.73300898,-0.193501,-0.55811}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class I_MRAP_03_hmg_F
	{
		class driver
		{
			selections[]=
			{
				{0.0118484,0.919056,-1.2295901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.0173569,-0.155396,-1.22963}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.69226098,-0.189384,-1.27114},
				{-0.72801203,-0.186584,-1.25583}
			};
			path[]=
			{
				{0},
				{1}
			};
		};
	};
	class I_MRAP_03_gmg_F
	{
		class driver
		{
			selections[]=
			{
				{0.0112457,-0.0572281,0.133829}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.032005299,0.0123138,0.0720587}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.0102768,-0.052913699,0.15007},
				{0.00242615,-0.052177399,0.14895}
			};
			path[]=
			{
				{0},
				{1}
			};
		};
	};
	class B_Truck_01_transport_F
	{
		class driver
		{
			selections[]=
			{
				{-0.74749798,4.08039,-0.485872}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.81182098,4.0288401,-0.41151899},
				{-0.90050501,0.317745,-0.00257969},
				{-0.77816802,-1.04706,-0.023706401},
				{-0.87620503,-1.75279,0.0305638},
				{-0.81277502,-2.4463201,0.051452599},
				{-0.80169702,-3.1503999,-0.0073485398},
				{-0.804039,-3.74315,-0.0344887},
				{-0.78292102,-4.5387802,0.15254299},
				{0.88188899,0.213816,0.0560093},
				{0.855766,-0.51757401,-0.056239098},
				{0.90735602,-1.06364,0.166045},
				{0.92497998,-1.76526,0.125966},
				{0.90330499,-2.5323501,0.0338955},
				{0.97395301,-3.22316,0.123972},
				{0.91297901,-3.8679099,0.170173},
				{0.86080199,-4.5073299,0.178381},
				{-0.729164,-0.37556899,0.0311165}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class B_Truck_01_covered_F
	{
		class driver
		{
			selections[]=
			{
				{-0.73275,4.0774002,-0.48534399}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.82710999,4.0236902,-0.41151601},
				{-0.893143,0.316811,-0.00265837},
				{-0.79051203,-1.04774,-0.0042619701},
				{-0.877747,-1.75331,0.025705799},
				{-0.80369598,-2.4466701,0.0513101},
				{-0.80250502,-3.1510501,-0.0074048},
				{-0.74542999,-3.7425399,-0.034550201},
				{-0.77493298,-4.5379901,0.15195},
				{0.90154999,0.21265601,0.046984199},
				{0.87458801,-0.51666999,0.058567502},
				{0.89802599,-1.1499701,0.0552192},
				{0.824745,-1.87106,0.106086},
				{0.82183802,-2.53249,0.109571},
				{0.99191302,-3.2236099,0.16719501},
				{0.93135101,-3.86814,0.091225103},
				{0.877213,-4.5063701,0.178302},
				{-0.66673303,-0.37549999,0.031312499}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_Truck_02_covered_F
	{
		class driver
		{
			selections[]=
			{
				{-0.58166498,2.7556801,-0.40412599}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.194489,2.7089901,-0.379365},
				{0.735672,2.67202,-0.37817201},
				{-0.83412898,0.87917298,-0.170911},
				{0.91400099,0.82960099,-0.11504},
				{-0.91767901,0.19719701,-0.207017},
				{0.91937298,0.116295,-0.023840901},
				{-0.96143299,-0.55426401,-0.158774},
				{0.92773402,-0.61240399,-0.115764},
				{-0.87049901,-1.1709599,-0.258324},
				{0.83397698,-1.17538,-0.142351},
				{-0.86019897,-1.90205,-0.211107},
				{0.94471699,-1.86303,-0.109841},
				{-0.99829102,-2.5095899,-0.16568901},
				{0.83850902,-2.5624399,-0.082230099},
				{-0.87764001,-3.23612,-0.101442},
				{0.89726299,-3.24594,-0.090150401}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_Truck_02_transport_F
	{
		class driver
		{
			selections[]=
			{
				{-0.57929999,2.7544301,-0.40412501}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.196945,2.7072001,-0.37941},
				{0.73803699,2.6700799,-0.37823001},
				{-0.83625001,0.87713599,-0.170518},
				{0.91495502,0.83131403,-0.114655},
				{-0.9188,0.196381,-0.207132},
				{0.91983002,0.116646,-0.023719801},
				{-0.96077698,-0.55420297,-0.15881699},
				{0.92556798,-0.612701,-0.116294},
				{-0.86823303,-1.17013,-0.25821701},
				{0.83288598,-1.17548,-0.14238501},
				{-0.86034399,-1.90162,-0.21104001},
				{0.94461101,-1.86367,-0.109532},
				{-0.998016,-2.5095699,-0.16564},
				{0.83744001,-2.56265,-0.0825691},
				{-0.87584698,-3.2366199,-0.101331},
				{0.89527899,-3.24682,-0.090042599}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class I_Truck_02_covered_F
	{
		class driver
		{
			selections[]=
			{
				{-0.57926899,2.75424,-0.40414101}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.19697601,2.7072101,-0.37942499},
				{0.73806798,2.6701801,-0.37825501},
				{-0.83628798,0.87694502,-0.170491},
				{0.91487098,0.83115399,-0.114554},
				{-0.91860998,0.19634999,-0.207118},
				{0.919617,0.116661,-0.0237737},
				{-0.960724,-0.55430198,-0.158832},
				{0.92546099,-0.612629,-0.116333},
				{-0.86818701,-1.17002,-0.25821501},
				{0.83298498,-1.1754,-0.14237601},
				{-0.86050397,-1.9014,-0.210991},
				{0.94449598,-1.86383,-0.109403},
				{-0.99779499,-2.5096099,-0.16562},
				{0.83718902,-2.56267,-0.0826068},
				{-0.875633,-3.23668,-0.101307},
				{0.89511901,-3.2468801,-0.090023503}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class I_Truck_02_transport_F
	{
		class driver
		{
			selections[]=
			{
				{-0.57923901,2.7543499,-0.40411201}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.196991,2.7068601,-0.37941799},
				{0.73810601,2.6695199,-0.378225},
				{-0.83677697,0.87751001,-0.17043699},
				{0.915672,0.83169901,-0.114583},
				{-0.91976202,0.19641501,-0.20722701},
				{0.92082202,0.11681,-0.023469901},
				{-0.96138,-0.55397397,-0.158786},
				{0.92604798,-0.61275101,-0.116181},
				{-0.868195,-1.17049,-0.258369},
				{0.83184803,-1.1756001,-0.142515},
				{-0.85907,-1.90204,-0.21119},
				{0.94474,-1.86318,-0.109793},
				{-0.99935198,-2.5093501,-0.165676},
				{0.83971399,-2.5622799,-0.081774697},
				{-0.87781501,-3.2360201,-0.101446},
				{0.89646101,-3.24633,-0.090109803}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_Truck_03_transport_F
	{
		class driver
		{
			selections[]=
			{
				{-0.67262298,2.6298399,-0.215975}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.75986499,2.53268,-0.197335},
				{-0.922997,-0.55447,0.145935},
				{-0.89866602,-2.1533699,0.161669},
				{-0.89605701,-2.9043701,0.22239999},
				{-0.84618402,-3.63902,0.230224},
				{-0.85859698,-4.5095601,0.31158799},
				{0.95533001,-0.553316,0.134771},
				{0.920784,-1.3935601,0.309127},
				{0.86134303,-2.09378,0.224024},
				{-0.87674701,-1.36725,0.145483},
				{0.96594203,-3.55287,0.35355899},
				{0.94564098,-4.5386901,0.319166},
				{0.89765197,-2.87291,0.23311}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_Truck_03_covered_F
	{
		class driver
		{
			selections[]=
			{
				{-0.64755201,2.6310301,-0.216058}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.78520203,2.53423,-0.197419},
				{-0.89789599,-0.55441999,0.146005},
				{-0.77568102,-2.1523199,0.161688},
				{-0.87305498,-2.90342,0.242571},
				{-0.822182,-3.63744,0.23048601},
				{-0.83383203,-4.5079002,0.31159699},
				{0.98095697,-0.55455798,0.284973},
				{0.823273,-1.39451,0.22291701},
				{0.88546002,-2.09483,0.22374301},
				{-0.90048999,-1.36719,0.245353},
				{0.884682,-3.55287,0.277143},
				{0.96965802,-4.5388598,0.31917101},
				{0.92071497,-2.8728399,0.233648}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_Truck_03_device_F
	{
		class driver
		{
			selections[]=
			{
				{-0.66767102,2.35461,0.0519609}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.76445001,2.2564199,0.070990101}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class C_Hatchback_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.00059509301,-0.048172001,-0.0432925}
			};
		};
		class cargo
		{
			selections[]=
			{
				{9.1552698e-005,-0.014801,0.0254154},
				{-0.041412398,0.000179291,0.064361602},
				{-0.0318604,0.0091133099,0.072346702}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class C_Hatchback_01_sport_F
	{
		class driver
		{
			selections[]=
			{
				{-0.00081634498,-0.051731098,-0.043412201}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000137329,-0.020339999,0.025332499},
				{-0.042228699,-0.00533295,0.064364903},
				{-0.031997699,0.00153351,0.072251797}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class C_SUV_01_F
	{
		class driver
		{
			selections[]=
			{
				{0.0271683,0.00702667,0.042101901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00054168701,-0.0114937,0.0254054},
				{-0.00106049,-0.0102768,0.070280097},
				{-0.040809602,-0.000442505,0.064281501}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class B_Truck_01_mover_F
	{
		class driver
		{
			selections[]=
			{
				{-0.75717199,3.68771,-0.175419}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.77503198,3.63485,-0.100302}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class B_Truck_01_box_F
	{
		class driver
		{
			selections[]=
			{
				{-0.78005201,4.21526,-0.574368}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.75234199,4.1631098,-0.49913001}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class C_Van_01_transport_F
	{
		class driver
		{
			selections[]=
			{
				{0.0016784701,-0.0090522803,-0.044406399}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.066581704,-0.025875101,0.060978901},
				{-0.024208101,0.054184001,0.063383102},
				{0.00519562,0.025333401,0.118214},
				{0.0051422101,0.0250053,0.118212},
				{0.0051269499,0.024681101,0.118209},
				{0.0051040598,0.024139401,0.118207},
				{0.0051269499,0.023590101,0.118206},
				{0.00511932,0.023113299,0.118204},
				{0.0050430298,0.0233192,0.118205},
				{0.24128699,-2.3443301,-0.215616},
				{-0.23385599,-2.84007,-0.222046},
				{0.263062,-2.918,-0.21561299}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class I_G_Van_01_transport_F
	{
		class driver
		{
			selections[]=
			{
				{-0.45854199,0.25167799,-0.29794201}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57121301,0.27552801,-0.19875},
				{0.121284,0.20159499,-0.175565},
				{-0.31355301,-0.64252102,-0.222057},
				{0.26634201,-0.48646501,-0.215626},
				{-0.34125501,-1.26065,-0.222056},
				{0.31665799,-1.11939,-0.21562},
				{-0.253517,-1.85191,-0.22204299},
				{0.163689,-1.7045,-0.215602},
				{-0.365318,-2.45753,-0.222029},
				{0.245903,-2.34392,-0.215591},
				{-0.23552699,-2.8442199,-0.222021},
				{0.26673901,-2.9205301,-0.21558701}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class C_Van_01_box_F
	{
		class driver
		{
			selections[]=
			{
				{-3.8147002e-005,-0.0109138,-0.0435443}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.066741899,-0.028038001,0.060849201},
				{-0.028457601,0.049674999,0.063234799}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class B_G_Van_01_transport_F
	{
		class driver
		{
			selections[]=
			{
				{-0.458496,0.250893,-0.29788899}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57132697,0.2771,-0.198716},
				{0.121559,0.203995,-0.17547099},
				{-0.315254,-0.64262402,-0.222054},
				{0.266945,-0.48621401,-0.21562199},
				{-0.340729,-1.26069,-0.222056},
				{0.31468999,-1.11961,-0.215627},
				{-0.249687,-1.8515199,-0.222059},
				{0.158684,-1.70452,-0.215626},
				{-0.360275,-2.45749,-0.22205301},
				{0.24169201,-2.34412,-0.21561299},
				{-0.234451,-2.8418601,-0.22203401},
				{0.26551101,-2.9195299,-0.21559601}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class O_G_Van_01_transport_F
	{
		class driver
		{
			selections[]=
			{
				{-0.45848799,0.25143799,-0.29798099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57124299,0.275475,-0.198716},
				{0.121536,0.201534,-0.175511},
				{-0.31359899,-0.64265102,-0.222058},
				{0.26618999,-0.486256,-0.215627},
				{-0.34143099,-1.26064,-0.222056},
				{0.31703901,-1.1194299,-0.215619},
				{-0.25351,-1.85188,-0.22204401},
				{0.163918,-1.70444,-0.215601},
				{-0.365585,-2.4576399,-0.222027},
				{0.246132,-2.34377,-0.215591},
				{-0.235413,-2.8442099,-0.222021},
				{0.26687601,-2.9205201,-0.21558701}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class C_Kart_01_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0112991,-0.211384,0.24392299}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class C_Kart_01_Fuel_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0113068,-0.21138,0.24392401}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class C_Kart_01_Blu_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0112915,-0.21138,0.24392299}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class C_Kart_01_Red_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0113068,-0.211384,0.24392299}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class C_Kart_01_Vrana_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0112991,-0.21138,0.24392401}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class dbo_CIV_new_bike
	{
		class driver
		{
			selections[]=
			{
				{-0.0181084,-0.318169,1.13739}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class dbo_CIV_ol_bike
	{
		class driver
		{
			selections[]=
			{
				{0.00187302,-0.254639,0.205034}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Beige
	{
		class driver
		{
			selections[]=
			{
				{-0.37158999,-0.037673999,-0.67342699}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37184101,-0.0576859,-0.69530398},
				{0.31468999,-1.14083,-0.67860502},
				{-0.40251201,-1.06092,-0.64840198}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Green
	{
		class driver
		{
			selections[]=
			{
				{-0.371712,-0.035652202,-0.673563}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37222299,-0.055686999,-0.695315},
				{0.313171,-1.13779,-0.67754501},
				{-0.40242001,-1.05952,-0.64852399}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Blue
	{
		class driver
		{
			selections[]=
			{
				{-0.371429,-0.035671201,-0.67348701}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37222299,-0.0551643,-0.69533801},
				{0.314163,-1.13783,-0.67772597},
				{-0.40230599,-1.05889,-0.648462}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_BlueCustom
	{
		class driver
		{
			selections[]=
			{
				{-0.371521,-0.037342101,-0.67351103}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37250501,-0.056888599,-0.69533002},
				{0.31377399,-1.13808,-0.67769402},
				{-0.40222201,-1.05811,-0.64851302}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_BeigeCustom
	{
		class driver
		{
			selections[]=
			{
				{-0.37133801,-0.035774201,-0.67347997}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.372246,-0.054614998,-0.69533998},
				{0.314064,-1.13652,-0.67737502},
				{-0.40226701,-1.0577199,-0.64845997}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Yellow
	{
		class driver
		{
			selections[]=
			{
				{-0.37158999,-0.037330601,-0.673518}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37258899,-0.056743599,-0.69533199},
				{0.31380501,-1.13794,-0.67764503},
				{-0.40218401,-1.05827,-0.64853197}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Grey
	{
		class driver
		{
			selections[]=
			{
				{-0.37160501,-0.0355759,-0.67351502}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37218499,-0.0545692,-0.69533998},
				{0.31363699,-1.13639,-0.67727202},
				{-0.40234399,-1.05724,-0.64849699}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Black
	{
		class driver
		{
			selections[]=
			{
				{-0.371254,-0.036552399,-0.67347002}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37229201,-0.054782901,-0.69534302},
				{0.31377399,-1.13589,-0.67715901},
				{-0.40226701,-1.0566601,-0.64848298}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Dark
	{
		class driver
		{
			selections[]=
			{
				{-0.37166601,-0.0354729,-0.67354101}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37218499,-0.0555153,-0.69533098},
				{0.31342301,-1.13748,-0.67752099},
				{-0.40238199,-1.05855,-0.64850199}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Rusty1
	{
		class driver
		{
			selections[]=
			{
				{-0.371712,-0.035667401,-0.673563}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37222299,-0.0557556,-0.69531602},
				{0.31321701,-1.13771,-0.67752999},
				{-0.40245801,-1.0592099,-0.64853299}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Rusty2
	{
		class driver
		{
			selections[]=
			{
				{-0.371712,-0.037078898,-0.67351198}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37255901,-0.056343101,-0.69531},
				{0.31348401,-1.13771,-0.67751497},
				{-0.40217599,-1.05862,-0.64854503}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Rusty3
	{
		class driver
		{
			selections[]=
			{
				{-0.37183401,-0.037319198,-0.67346501}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37178001,-0.057407402,-0.69532698},
				{0.31404099,-1.13925,-0.67812198},
				{-0.40262601,-1.06024,-0.64843398}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Sport_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.371941,-0.040973701,-0.67353302}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.372017,-0.061981201,-0.69538301},
				{0.31392699,-1.14426,-0.67941803},
				{-0.402695,-1.06668,-0.64857101}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Sport_Blue
	{
		class driver
		{
			selections[]=
			{
				{-0.37190199,-0.038509399,-0.67348999}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37189499,-0.059593201,-0.695373},
				{0.31445301,-1.1428,-0.67914099},
				{-0.402527,-1.06468,-0.64850801}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Sport_Orange
	{
		class driver
		{
			selections[]=
			{
				{-0.37180299,-0.041122399,-0.67350501}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37207001,-0.062004101,-0.69538802},
				{0.314583,-1.1447001,-0.67964703},
				{-0.40266401,-1.06715,-0.64853001}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Sport_White
	{
		class driver
		{
			selections[]=
			{
				{-0.372307,-0.037574802,-0.673509}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37155199,-0.0577011,-0.69537097},
				{0.31384999,-1.14021,-0.67836797},
				{-0.402336,-1.06259,-0.64852703}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Sport_Beige
	{
		class driver
		{
			selections[]=
			{
				{-0.371849,-0.040214501,-0.67349797}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37191799,-0.061367001,-0.69538802},
				{0.31423199,-1.14423,-0.67948902},
				{-0.402596,-1.0663,-0.64854097}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hatchback_Sport_Green
	{
		class driver
		{
			selections[]=
			{
				{-0.37176499,-0.041492499,-0.67349303}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.37196401,-0.0620232,-0.69538403},
				{0.313934,-1.14421,-0.67941803},
				{-0.40274,-1.06778,-0.64856601}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_HEMMT
	{
		class driver
		{
			selections[]=
			{
				{-0.74749798,4.0792699,-0.48566601}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.81153899,4.0279298,-0.41147101},
				{-0.90102398,0.31762499,-0.0023384099},
				{-0.77837402,-1.04704,-0.0239964},
				{-0.87694502,-1.75295,0.030458899},
				{-0.81287402,-2.4463201,0.051451199},
				{-0.80166602,-3.1503899,-0.0073509198},
				{-0.80381,-3.74315,-0.034358501},
				{-0.782745,-4.5387998,0.15256301},
				{0.88163799,0.213737,0.056067899},
				{0.85506397,-0.51754999,-0.0565481},
				{0.90747797,-1.06363,0.16609301},
				{0.92510998,-1.76518,0.12599599},
				{0.903023,-2.53232,0.033908401},
				{0.97262597,-3.2231801,0.123166},
				{0.91289502,-3.8678701,0.17011701},
				{0.86060297,-4.5074,0.17838401},
				{-0.72911102,-0.375523,0.031123601}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Hunter
	{
		class driver
		{
			selections[]=
			{
				{-0.520096,-1.43598,-0.43834701}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.51491499,-1.41231,-0.36865699},
				{0.48763299,-2.57618,-0.33517799},
				{-0.565117,-2.49176,-0.351688}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ifrit
	{
		class driver
		{
			selections[]=
			{
				{0.0152893,-0.76184797,-0.657664}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.49195901,-2.0868299,-0.66714001},
				{-0.36473799,-2.15819,-0.66018897},
				{0.26161999,-3.30756,-0.505548},
				{-0.34853399,-3.2056501,-0.52743}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ikarus_Blue
	{
		class driver
		{
			selections[]=
			{
				{-0.85388201,3.9347601,-0.21413399}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.96404999,0.63615799,-0.30479899},
				{-0.98272699,3.0609701,-0.29156801},
				{-1.01398,-0.161346,-0.287577},
				{0.77073699,1.8253599,-0.292629},
				{0.78481299,-3.33429,-0.27818301},
				{-1.02808,-1.64264,-0.27818599},
				{0.78324902,-1.59517,-0.278189},
				{0.229065,0.98187298,-0.30017599},
				{-1.03169,-2.4770801,-0.280608},
				{0.262299,-3.16325,-0.27945501},
				{0.26279399,-1.6765701,-0.27946001},
				{0.22683699,1.80831,-0.28735399},
				{0.231483,-2.4769399,-0.240849},
				{0.30735001,2.67923,-0.26232699},
				{-0.98619097,-3.2253399,-0.27651101},
				{-0.99158502,-0.92797899,-0.289399},
				{-0.902107,2.2632999,-0.27278599},
				{-0.94945502,1.45092,-0.27275699},
				{0.71513402,0.99521101,-0.26523101},
				{-0.27845001,-5.2996998,0.15806501},
				{-0.305511,-0.69985998,0.158066},
				{-0.389595,-3.7816601,0.158067},
				{-0.826294,-4.5094199,0.158067}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ikarus_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.85298902,3.93784,-0.214138}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.96245599,0.63851398,-0.30470401},
				{-0.98062903,3.0622301,-0.29146701},
				{-1.01157,-0.161129,-0.287568},
				{0.77331501,1.8250901,-0.29266199},
				{0.78211999,-3.33376,-0.278236},
				{-1.0254101,-1.64296,-0.27822599},
				{0.78555298,-1.59521,-0.27820301},
				{0.23083501,0.98206502,-0.30017501},
				{-1.03067,-2.4777501,-0.28062201},
				{0.26172599,-3.1626401,-0.27950501},
				{0.26322201,-1.67731,-0.27953199},
				{0.227486,1.80786,-0.28742301},
				{0.231674,-2.4772999,-0.24085499},
				{0.30750999,2.6793599,-0.26232401},
				{-0.98626697,-3.2260599,-0.27645001},
				{-0.991745,-0.92869902,-0.28933999},
				{-0.90120697,2.2613599,-0.272598},
				{-0.94958502,1.45156,-0.272576},
				{0.69993597,1.0424,-0.271404},
				{-0.275307,-5.2997799,0.15807},
				{-0.30270401,-0.69947797,0.15807},
				{-0.392212,-3.78387,0.15807401},
				{-0.82225001,-4.5108399,0.158077}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ikarus_Party
	{
		class driver
		{
			selections[]=
			{
				{-0.85250902,3.93784,-0.214141}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.96216601,0.638538,-0.30470401},
				{-0.98044598,3.062,-0.29148701},
				{-1.01144,-0.161476,-0.28759801},
				{0.77340698,1.82495,-0.29267499},
				{0.78204298,-3.3339801,-0.27822},
				{-1.02536,-1.64263,-0.27819699},
				{0.78560603,-1.59504,-0.278189},
				{0.230919,0.981884,-0.30019099},
				{-1.03082,-2.4781401,-0.28065801},
				{0.26173401,-3.16224,-0.27954099},
				{0.26326001,-1.67737,-0.27953899},
				{0.227203,1.80828,-0.287377},
				{0.231712,-2.47648,-0.24084701},
				{0.30746499,2.6800799,-0.26228899},
				{-0.986206,-3.22662,-0.27640101},
				{-0.99166101,-0.92824697,-0.28929901},
				{-0.90024602,2.2591,-0.27250701},
				{-0.94957,1.45181,-0.27255401},
				{0.71425599,1.00165,-0.26477},
				{-0.27483401,-5.2997999,0.15807199},
				{-0.30086499,-0.69921499,0.158076},
				{-0.39327201,-3.7847099,0.158077},
				{-0.82358599,-4.5104599,0.15807199}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Kart_BluKing
	{
		class driver
		{
			selections[]=
			{
				{-0.0112915,-0.211384,0.24392299}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Kart_RedStone
	{
		class driver
		{
			selections[]=
			{
				{-0.0112991,-0.211384,0.24392299}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Kart_Vrana
	{
		class driver
		{
			selections[]=
			{
				{-0.0112991,-0.21138,0.24392401}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Kart_Green
	{
		class driver
		{
			selections[]=
			{
				{-0.0112991,-0.211384,0.24392401}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Kart_Blue
	{
		class driver
		{
			selections[]=
			{
				{-0.0113068,-0.211384,0.24392299}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Kart_Orange
	{
		class driver
		{
			selections[]=
			{
				{-0.0113068,-0.211384,0.24392401}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Kart_White
	{
		class driver
		{
			selections[]=
			{
				{-0.0112991,-0.21138,0.24392401}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Kart_Yellow
	{
		class driver
		{
			selections[]=
			{
				{-0.0112991,-0.21138,0.24392299}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Kart_Black
	{
		class driver
		{
			selections[]=
			{
				{-0.0113068,-0.21138,0.24392401}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Lada_Green
	{
		class driver
		{
			selections[]=
			{
				{0.0151825,-0.051986702,0.142465}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000961304,0.034320801,-0.0336213},
				{0.000831604,0.0346184,-0.033622298},
				{0.00073242199,0.0348644,-0.033622298},
				{0.047905002,-0.0108166,-0.00649118}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Lada_Taxi
	{
		class driver
		{
			selections[]=
			{
				{0.0146484,-0.051616699,0.14245699}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00049591099,0.034212101,-0.0336251},
				{0.00038146999,0.034229301,-0.033617999},
				{0.00028991699,0.0341492,-0.033617001},
				{0.047447201,-0.0117607,-0.0064868899}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Lada_Red
	{
		class driver
		{
			selections[]=
			{
				{0.0146408,-0.051589999,0.142461}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00049591099,0.034278899,-0.0336232},
				{0.00037384001,0.034284599,-0.0336213},
				{0.000274658,0.034164399,-0.033622701},
				{0.047424302,-0.0117626,-0.00649118}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Lada_White
	{
		class driver
		{
			selections[]=
			{
				{0.015152,-0.0579491,0.142488}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00076293899,0.025165601,-0.0335875},
				{0.000144958,0.0266304,-0.033601802},
				{-0.00053405802,0.0302887,-0.033609901},
				{0.046119701,-0.0131626,-0.0064735399}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Lada_Hipster
	{
		class driver
		{
			selections[]=
			{
				{0.0150909,-0.051584199,0.142465}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00090789801,0.034545898,-0.033621799},
				{0.00079345697,0.034814801,-0.0336232},
				{0.00070190401,0.035003699,-0.033622701},
				{0.047912601,-0.0108967,-0.00649118}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Landrover_Civ_02
	{
		class driver
		{
			selections[]=
			{
				{-0.00171661,-0.0100212,0.067867301}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.032630902,0.0079917898,0.071705803},
				{0.00236511,-0.026523599,0.066069603},
				{-0.0090637198,-0.000391006,0.070647702},
				{0.0024185199,-0.027683301,0.066087201},
				{0.0019989,0.0106926,0.080284603},
				{0.0141907,0.0692387,0.108403},
				{0.0142441,0.070999101,0.108402},
				{0.00046539301,0.0142307,0.081991702}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_LandRover_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.00189209,-0.00963974,0.067865402}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.032798801,0.0081691695,0.0718465},
				{0.0022583001,-0.0269833,0.066053398},
				{-0.0089187603,0.00079727202,0.070838898},
				{0.00247955,-0.026540801,0.066085801},
				{0.00180054,0.0114803,0.079801597},
				{0.0141678,0.069614403,0.108401},
				{0.0142365,0.071145996,0.1084},
				{0.00091552699,0.0138626,0.081857704}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_LandRover_Urban
	{
		class driver
		{
			selections[]=
			{
				{-0.00032043501,-0.0101528,0.067872502}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.031570401,0.0093441,0.071850799},
				{0.00317383,-0.0243378,0.066049598},
				{-0.0081634503,0.00377274,0.070893303},
				{0.0031280499,-0.022323599,0.0660806},
				{0.00244141,0.0170631,0.079877399},
				{0.0147095,0.074293099,0.108397},
				{0.55846399,-2.14132,-0.31748399},
				{-0.61800402,-2.0564401,-0.33629099}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_LandRover_Green
	{
		class driver
		{
			selections[]=
			{
				{-0.50843799,0.096460298,-0.48514599}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.46980301,0.14807899,-0.509947},
				{-0.66143,-0.56255102,-0.252489},
				{0.63799298,-0.66247398,-0.253589},
				{-0.66599298,-1.2880501,-0.25246099},
				{0.62970698,-1.37324,-0.238335},
				{-0.56623799,-2.0698299,-0.30972001},
				{0.56140101,-2.1418099,-0.31748801},
				{-0.62255102,-2.0555601,-0.33626199}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_LandRover_Sand
	{
		class driver
		{
			selections[]=
			{
				{-0.50874299,0.096611001,-0.485145}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.46944401,0.147995,-0.50992697},
				{-0.66175097,-0.56229198,-0.25249401},
				{0.63789397,-0.66253901,-0.253452},
				{-0.66603899,-1.2879601,-0.252462},
				{0.63027197,-1.3733799,-0.238883},
				{-0.56672698,-2.0697,-0.30972001},
				{0.56212598,-2.1419101,-0.317489},
				{-0.623016,-2.0557101,-0.33625999}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_LandRover_Desert
	{
		class driver
		{
			selections[]=
			{
				{-0.50884998,0.096792199,-0.485145}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.46916199,0.148146,-0.50985003},
				{-0.66181898,-0.56208599,-0.25249401},
				{0.63733703,-0.662588,-0.253308},
				{-0.66613799,-1.28787,-0.25246099},
				{0.63117999,-1.37353,-0.239161},
				{-0.56745899,-2.0696199,-0.30972099},
				{0.562042,-2.1419799,-0.31748801},
				{-0.62242103,-2.0559199,-0.33638901}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class LR_Ambulance_Base
	{
		class driver
		{
			selections[]=
			{
				{-0.50740802,0.82137102,-0.48524499}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.470947,0.87491602,-0.50951499},
				{-0.65893602,0.16014101,-0.25264999},
				{0.636154,0.062936798,-0.25288001},
				{-0.66307801,-0.56528097,-0.252619},
				{0.628326,-0.65137899,-0.24126101},
				{-0.62164301,-1.33227,-0.24016}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_LandRover_Ambulance_Green
	{
		class driver
		{
			selections[]=
			{
				{-0.50724798,0.82420301,-0.48524401}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.47097799,0.87748301,-0.50936699},
				{-0.657143,0.15992901,-0.25270501},
				{0.63351399,0.062885299,-0.252886},
				{-0.66134602,-0.56534803,-0.252619},
				{0.629089,-0.652363,-0.241741},
				{-0.62322998,-1.33121,-0.24078}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_LandRover_Ambulance_Desert
	{
		class driver
		{
			selections[]=
			{
				{-0.507393,0.82283002,-0.485246}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.47016901,0.87496603,-0.50944197},
				{-0.66022497,0.16144,-0.25269699},
				{0.63739002,0.061326999,-0.252893},
				{-0.66503102,-0.56353599,-0.252621},
				{0.63224798,-0.65341198,-0.241634},
				{-0.62582397,-1.33022,-0.240587}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_LandRover_Ambulance_Sand
	{
		class driver
		{
			selections[]=
			{
				{-0.50667602,0.824368,-0.48524201}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.47084001,0.87591702,-0.50948101},
				{-0.65892798,0.160795,-0.25265801},
				{0.635773,0.062082302,-0.25288501},
				{-0.66337597,-0.56440401,-0.25262201},
				{0.63063002,-0.65208602,-0.241302},
				{-0.62520599,-1.33154,-0.240199}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Octavius_White
	{
		class driver
		{
			selections[]=
			{
				{-0.00088501,-0.047672302,-0.043360699}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00015258801,-0.0159111,0.0253882},
				{-0.042442299,0.00074195903,0.064463601},
				{-0.0319748,0.0094604502,0.072266601}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Octavius_Black
	{
		class driver
		{
			selections[]=
			{
				{-0.00025939901,-0.048362698,-0.043300599}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000350952,-0.0155487,0.025414901},
				{-0.041549701,0.00127029,0.064393498},
				{-0.031745899,0.0121841,0.0723195}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.00122833,-0.048214,-0.043489501}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00081634498,-0.0136032,0.0254054},
				{0.00110626,-0.033348098,0.1078},
				{-0.0067443801,-0.054367099,0.0459232},
				{-0.0108414,-0.0496368,0.049067002},
				{-0.0104218,-0.049831402,0.049067002}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Beige
	{
		class driver
		{
			selections[]=
			{
				{-0.0013809199,-0.0483093,-0.043577202}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00093841599,-0.0136452,0.025379701},
				{0.00106049,-0.0332947,0.1078},
				{-0.0067672702,-0.054119099,0.045924202},
				{-0.0108566,-0.0490303,0.049068},
				{-0.010437,-0.048889201,0.049068902}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_White
	{
		class driver
		{
			selections[]=
			{
				{0.000244141,-0.048011798,-0.043469399}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000549316,-0.0122337,0.0254068},
				{0.0022048999,-0.0326996,0.107803},
				{-0.00598145,-0.0557594,0.045926601},
				{-0.0105362,-0.051963799,0.049070399},
				{-0.0105362,-0.051944699,0.049072299}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Blue
	{
		class driver
		{
			selections[]=
			{
				{-0.00131989,-0.0483189,-0.043530501}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00086212199,-0.0135078,0.0253901},
				{0.00115204,-0.033069599,0.107801},
				{-0.0066680899,-0.053993199,0.045924202},
				{-0.0107269,-0.049098998,0.049068499},
				{-0.0103607,-0.049263,0.049069401}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_DarkRed
	{
		class driver
		{
			selections[]=
			{
				{0.000480652,-0.045471199,-0.0434351}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00074768101,-0.0103378,0.025411099},
				{0.0023956301,-0.0301056,0.107807},
				{-0.0058136,-0.051345799,0.0459309},
				{-0.0103683,-0.047073402,0.0490737},
				{-0.010376,-0.048007999,0.0490718}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_BlueCustom
	{
		class driver
		{
			selections[]=
			{
				{-0.41705301,0.20784,-0.450957}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41867101,0.111519,-0.47269401},
				{0.149223,-2.33553,-0.47440699},
				{-0.38434601,-2.25701,-0.49341401},
				{0.236992,-0.95092398,-0.55751699},
				{-0.410492,-1.00377,-0.55467302}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla01
	{
		class driver
		{
			selections[]=
			{
				{-0.417366,0.20727199,-0.451006}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418419,0.10923,-0.47271499},
				{0.148865,-2.33184,-0.474419},
				{-0.383095,-2.2525599,-0.49341801},
				{0.237183,-0.94576597,-0.55751801},
				{-0.410301,-0.99981701,-0.55467302}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla02
	{
		class driver
		{
			selections[]=
			{
				{-0.41741201,0.20582999,-0.45094201}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41842699,0.109985,-0.472718},
				{0.149002,-2.3327501,-0.474417},
				{-0.383194,-2.2529399,-0.49342},
				{0.237167,-0.94671202,-0.55751997},
				{-0.41033199,-0.99983197,-0.554672}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla03
	{
		class driver
		{
			selections[]=
			{
				{-0.41712201,0.207726,-0.45099401}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418648,0.111485,-0.47270101},
				{0.14920799,-2.3354399,-0.474406},
				{-0.38433799,-2.25701,-0.49341401},
				{0.237,-0.95125598,-0.55751801},
				{-0.41049999,-1.00454,-0.554672}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla04
	{
		class driver
		{
			selections[]=
			{
				{-0.41788501,0.205639,-0.45078799}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418129,0.109097,-0.472698},
				{0.148918,-2.3324399,-0.47442299},
				{-0.38351399,-2.25331,-0.49342501},
				{0.236938,-0.94813198,-0.55752599},
				{-0.41053799,-1.00289,-0.55467701}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla05
	{
		class driver
		{
			selections[]=
			{
				{-0.417068,0.208984,-0.45113701}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418686,0.111931,-0.472707},
				{0.14910901,-2.33498,-0.474408},
				{-0.383919,-2.2552099,-0.49342},
				{0.237022,-0.94865,-0.55752301},
				{-0.41046101,-1.00314,-0.554676}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla06
	{
		class driver
		{
			selections[]=
			{
				{-0.41867799,0.204853,-0.450762}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41729,0.10857,-0.47271201},
				{0.149773,-2.33271,-0.474417},
				{-0.383194,-2.2544301,-0.49342099},
				{0.237083,-0.94823498,-0.55752301},
				{-0.41059101,-1.00251,-0.55467701}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla07
	{
		class driver
		{
			selections[]=
			{
				{-0.417366,0.206505,-0.45095399}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41844201,0.110172,-0.472707},
				{0.148941,-2.33235,-0.474419},
				{-0.38317099,-2.25284,-0.49342099},
				{0.237183,-0.946796,-0.55751997},
				{-0.41032401,-1.00096,-0.55467403}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla08
	{
		class driver
		{
			selections[]=
			{
				{-0.41703001,0.208775,-0.45105201}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41870099,0.112385,-0.472693},
				{0.149223,-2.33569,-0.47440401},
				{-0.38416299,-2.2562101,-0.49341601},
				{0.237,-0.94959998,-0.55752099},
				{-0.41048399,-1.00376,-0.55467498}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla09
	{
		class driver
		{
			selections[]=
			{
				{-0.41726699,0.207417,-0.45112199}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418587,0.111259,-0.47273901},
				{0.14916199,-2.33518,-0.47440699},
				{-0.38429299,-2.25682,-0.493415},
				{0.236992,-0.95110703,-0.55751699},
				{-0.41048399,-1.00436,-0.55467099}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla10
	{
		class driver
		{
			selections[]=
			{
				{-0.41701499,0.20886201,-0.45113099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41874701,0.111652,-0.47270799},
				{0.14901701,-2.3346901,-0.47441101},
				{-0.38388801,-2.2549601,-0.49342099},
				{0.236984,-0.948219,-0.55752403},
				{-0.410469,-1.00257,-0.55467701}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla11
	{
		class driver
		{
			selections[]=
			{
				{-0.417,0.20843101,-0.45107299}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41875499,0.111252,-0.47270501},
				{0.148941,-2.3341,-0.47441399},
				{-0.38365901,-2.25405,-0.493422},
				{0.23701499,-0.94775403,-0.55752498},
				{-0.410469,-1.0025001,-0.55467802}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Guerilla12
	{
		class driver
		{
			selections[]=
			{
				{-0.417068,0.207478,-0.45094299}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41867799,0.111259,-0.472698},
				{0.149193,-2.33532,-0.47440699},
				{-0.38427001,-2.2567,-0.49341601},
				{0.236992,-0.95060301,-0.55751902},
				{-0.41049999,-1.0034699,-0.55467302}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Rusty1
	{
		class driver
		{
			selections[]=
			{
				{-0.417,0.20716099,-0.45088801}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41873199,0.110966,-0.47269401},
				{0.149124,-2.3350799,-0.47440901},
				{-0.38427001,-2.2565701,-0.49341699},
				{0.236984,-0.95071399,-0.55751801},
				{-0.41050699,-1.00385,-0.55467403}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Rusty2
	{
		class driver
		{
			selections[]=
			{
				{-0.417999,0.205513,-0.45071599}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41796899,0.109276,-0.47269699},
				{0.149185,-2.33302,-0.47442001},
				{-0.38360599,-2.25388,-0.49342301},
				{0.2369,-0.947891,-0.55752498},
				{-0.41057599,-1.00266,-0.55467802}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Rusty3
	{
		class driver
		{
			selections[]=
			{
				{-0.417252,0.207699,-0.451132}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41857901,0.111481,-0.472738},
				{0.149239,-2.3355401,-0.474406},
				{-0.384323,-2.2569799,-0.493415},
				{0.23700701,-0.950836,-0.55751801},
				{-0.410492,-1.00365,-0.55467302}
			};
			path[]=
			{
				{-10},
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla01
	{
		class driver
		{
			selections[]=
			{
				{-0.419312,0.345247,-1.00142}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41728199,0.246208,-1.02301}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.533485,-2.05092,-0.246944}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla02
	{
		class driver
		{
			selections[]=
			{
				{-0.418991,0.34494799,-1.00146}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41838101,0.247261,-1.02289}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.53631598,-1.9402,-0.246941}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla03
	{
		class driver
		{
			selections[]=
			{
				{-0.41884601,0.34620699,-1.00156}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41850999,0.24715801,-1.0229599}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.533714,-1.91593,-0.246939}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla04
	{
		class driver
		{
			selections[]=
			{
				{-0.41909799,0.345442,-1.00139}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41730499,0.246197,-1.02312}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.53298199,-2.05704,-0.24693801}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla05
	{
		class driver
		{
			selections[]=
			{
				{-0.42010501,0.34419399,-1.00139}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41653401,0.245014,-1.02298}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.50318098,-2.1826,-0.246939}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla06
	{
		class driver
		{
			selections[]=
			{
				{-0.41933399,0.34575999,-1.00143}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41767901,0.247169,-1.02311}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.53687298,-1.95455,-0.24693599}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla07
	{
		class driver
		{
			selections[]=
			{
				{-0.41884601,0.34399399,-1.0013601}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41818199,0.24631099,-1.02298}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.53384399,-1.92246,-0.24694}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla08
	{
		class driver
		{
			selections[]=
			{
				{-0.42000601,0.34423599,-1.0013601}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41655001,0.245029,-1.0230401}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.50993299,-2.16278,-0.24693701}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla09
	{
		class driver
		{
			selections[]=
			{
				{-0.41942599,0.34485599,-1.0013601}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41724399,0.24556001,-1.02308}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.53667402,-2.01582,-0.246941}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla10
	{
		class driver
		{
			selections[]=
			{
				{-0.41987601,0.343952,-1.00122}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.416298,0.24468,-1.0231301}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.51276398,-2.15396,-0.246934}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla11
	{
		class driver
		{
			selections[]=
			{
				{-0.418854,0.346062,-1.0015301}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418152,0.247555,-1.02301}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.53653002,-1.95052,-0.24693801}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla12
	{
		class driver
		{
			selections[]=
			{
				{-0.418816,0.34665701,-1.00157}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41814399,0.246494,-1.02303}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.53590399,-1.94355,-0.24693701}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_Offroad_Repair_Civillian
	{
		class driver
		{
			selections[]=
			{
				{-0.00052642799,-0.043777499,-0.043353599}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000366211,-0.0104256,0.0253687},
				{-0.00332642,-0.46632001,0.20671301},
				{-0.0286179,-0.487427,0.17300799}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.000442505,-0.044117,-0.043369301}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00049591099,-0.0107727,0.025373001},
				{-0.00323486,-0.46705601,0.206737},
				{-0.0285339,-0.48817801,0.173006}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Beige
	{
		class driver
		{
			selections[]=
			{
				{-0.00053405802,-0.043918598,-0.0433922}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000549316,-0.0105247,0.0253658},
				{-0.0031661999,-0.466831,0.20666701},
				{-0.0285339,-0.487598,0.173006}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_White
	{
		class driver
		{
			selections[]=
			{
				{-0.000572205,-0.043556198,-0.043354999}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00061798102,-0.0095520001,0.025385899},
				{-0.0030517599,-0.4655,0.2068},
				{-0.028266899,-0.48647699,0.173012}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Blue
	{
		class driver
		{
			selections[]=
			{
				{-0.00061798102,-0.045524601,-0.043333098}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000106812,-0.0131645,0.0253758},
				{-0.00354004,-0.46978801,0.206783},
				{-0.028633101,-0.49062699,0.17299899}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_DarkRed
	{
		class driver
		{
			selections[]=
			{
				{-0.00065612799,-0.0447083,-0.043386001}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000404358,-0.0113106,0.025362501},
				{-0.0032806401,-0.46722001,0.206691},
				{-0.028633101,-0.488655,0.173004}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_BlueCustom
	{
		class driver
		{
			selections[]=
			{
				{-0.000389099,-0.0455589,-0.043355901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000473022,-0.0125809,0.0253792},
				{-0.0033035299,-0.46784601,0.206801},
				{-0.028503399,-0.488197,0.17300799}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla01
	{
		class driver
		{
			selections[]=
			{
				{-0.00164795,-0.045370098,-0.0433788}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00072479201,-0.0131626,0.025365399},
				{-0.0044860798,-0.46999201,0.206736},
				{-0.029602099,-0.49029499,0.17299999}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla02
	{
		class driver
		{
			selections[]=
			{
				{-0.00087738002,-0.045253798,-0.043348301}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.000114441,-0.0129662,0.025379701},
				{-0.0037994401,-0.46941,0.206792},
				{-0.0287704,-0.489887,0.173006}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla03
	{
		class driver
		{
			selections[]=
			{
				{-0.00033569301,-0.045715299,-0.043334998}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00041198701,-0.0115128,0.0253825},
				{-0.0033493,-0.46777299,0.206799},
				{-0.0285568,-0.48976499,0.173007}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla04
	{
		class driver
		{
			selections[]=
			{
				{-0.00171661,-0.045936599,-0.043357801}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00112915,-0.0133877,0.025378199},
				{-0.0050201402,-0.46991301,0.20678601},
				{-0.0301743,-0.49053201,0.173003}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla05
	{
		class driver
		{
			selections[]=
			{
				{-0.00061798102,-0.044525102,-0.043363102}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00061798102,-0.0103683,0.025378199},
				{-0.0030517599,-0.46578601,0.206772},
				{-0.0283127,-0.48618701,0.173011}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla06
	{
		class driver
		{
			selections[]=
			{
				{-1.52588e-005,-0.043086998,-0.043316402}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00071716303,-0.0101776,0.025403},
				{-0.00317383,-0.46653,0.206929},
				{-0.028327901,-0.487679,0.173033}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla07
	{
		class driver
		{
			selections[]=
			{
				{-0.00085449201,-0.043701202,-0.043374099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000198364,-0.0104141,0.0253716},
				{0.39969599,-2.1679399,-0.431602},
				{-0.49480399,-2.4600201,-0.47988001}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla08
	{
		class driver
		{
			selections[]=
			{
				{-0.41793099,0.209473,-0.45098501}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418594,0.111908,-0.472734},
				{0.398689,-2.16729,-0.431629},
				{-0.49258399,-2.4606199,-0.47988001}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla09
	{
		class driver
		{
			selections[]=
			{
				{-0.41794601,0.208508,-0.45086601}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418549,0.110268,-0.472718},
				{0.399712,-2.1675601,-0.43156499},
				{-0.49338499,-2.4605899,-0.47988099}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla10
	{
		class driver
		{
			selections[]=
			{
				{-0.41902199,0.207634,-0.45079401}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.416931,0.108616,-0.47272199},
				{0.402107,-2.1700101,-0.43152201},
				{-0.49603999,-2.4585199,-0.47988501}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla11
	{
		class driver
		{
			selections[]=
			{
				{-0.41781601,0.206982,-0.450717}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418358,0.108913,-0.472707},
				{0.40045899,-2.16804,-0.431454},
				{-0.49426299,-2.46029,-0.47986799}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla12
	{
		class driver
		{
			selections[]=
			{
				{-0.41812101,0.208481,-0.450858}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418488,0.109962,-0.472711},
				{0.400475,-2.1677799,-0.43147901},
				{-0.49361399,-2.4606099,-0.479875}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class TractorOld
	{
		class driver
		{
			selections[]=
			{
				{-0.078796402,-1.68858,-0.26537499}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_OldTractor_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.0799255,-1.6905299,-0.265329}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Strider
	{
		class driver
		{
			selections[]=
			{
				{0.0118637,0.92130703,-0.53365803}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.67781103,-0.202007,-0.49721301},
				{0.017875699,-0.14552701,-0.532902}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.73316997,-0.19313399,-0.55818999}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Car_SUV_Red
	{
		class driver
		{
			selections[]=
			{
				{0.027145401,0.00691223,0.0421023}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00052642799,-0.0115967,0.0253873},
				{-0.00070190401,-0.0105705,0.070164204},
				{-0.041084301,0.00035476699,0.064369202}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_SUV_Black
	{
		class driver
		{
			selections[]=
			{
				{0.027137799,0.0067825299,0.042101901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00051116903,-0.0118179,0.0254054},
				{-0.00111389,-0.0107269,0.070298702},
				{-0.0408707,-0.00059127802,0.064316697}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_SUV_Grey
	{
		class driver
		{
			selections[]=
			{
				{0.027191199,0.0071373,0.042101402}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00054168701,-0.0113564,0.0254064},
				{-0.00104523,-0.0100403,0.070283398},
				{-0.0407562,-0.00032806399,0.064272404}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_SUV_Orange
	{
		class driver
		{
			selections[]=
			{
				{0.027153,0.00691223,0.0421023}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00052642799,-0.0116425,0.0253959},
				{-0.00119019,-0.0105057,0.070323899},
				{-0.0408401,-0.00042343099,0.064309597}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_SUV_Rusty1
	{
		class driver
		{
			selections[]=
			{
				{0.027137799,0.0066185002,0.042102799}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00051116903,-0.0122032,0.0254116},
				{-0.00128937,-0.0112038,0.070349202},
				{-0.040863,-0.00104904,0.064300098}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_SUV_Rusty2
	{
		class driver
		{
			selections[]=
			{
				{0.027153,0.00710297,0.042101402}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00054168701,-0.0113258,0.025390601},
				{-0.00079345697,-0.0101929,0.070198096},
				{-0.040954601,0.00041198701,0.064358197}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_SUV_Rusty3
	{
		class driver
		{
			selections[]=
			{
				{0.027183499,0.0068512,0.042101901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00053405802,-0.0115814,0.025373001},
				{-0.00064086902,-0.0105476,0.070147499},
				{-0.041198701,0.00075531,0.064380199}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class SUV_Base
	{
		class driver
		{
			selections[]=
			{
				{-0.426826,0.52575302,0.033171199}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.41838101,0.40516999,0.051603299},
				{0.432289,-0.44110101,0.0029239701},
				{-0.445557,-0.44762,0.016070399},
				{-0.313499,-1.54,0.047852501},
				{0.24141701,-1.51352,0.051233299}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_SUVXL_Black
	{
		class driver
		{
			selections[]=
			{
				{-0.426826,0.525711,0.0331726}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.418304,0.40511701,0.0515933},
				{0.43221301,-0.44112,0.00288534},
				{-0.445618,-0.44765899,0.016021701},
				{-0.31254601,-1.5405999,0.047660399},
				{0.240768,-1.51324,0.051638599}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Tempest
	{
		class driver
		{
			selections[]=
			{
				{-0.67248499,2.6298399,-0.21597201}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.75979602,2.53213,-0.197327},
				{-0.92356902,-0.55438799,0.146202},
				{-0.89916199,-2.1526999,0.16161101},
				{-0.89489698,-2.9048901,0.22203501},
				{-0.845375,-3.6393399,0.230001},
				{-0.85810101,-4.5095401,0.31160101},
				{0.95507801,-0.553873,0.134734},
				{0.92161602,-1.39408,0.309165},
				{0.86182398,-2.0936899,0.224352},
				{-0.87661701,-1.3666199,0.145427},
				{0.96670502,-3.5527201,0.35358},
				{0.945526,-4.5385699,0.31916401},
				{0.89782703,-2.87205,0.233448}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_TowTractor_White
	{
		class driver
		{
			selections[]=
			{
				{-0.60164601,-0.96490902,-0.81605297}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.0018158,-0.032619499,0.107808}
			};
			path[]=
			{
				{0}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Tractor_Base
	{
		class driver
		{
			selections[]=
			{
				{-0.088500999,-2.1517401,-0.134808}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Tractor_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.088493302,-2.1516299,-0.134809}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class UAZ_Base
	{
		class driver
		{
			selections[]=
			{
				{-0.34645799,0.094505303,1.01129}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.0016403201,6.2942498e-005,-0.048459101},
				{-0.00126648,-0.00046539301,-0.048459101},
				{-0.0010376,-0.00080871599,-0.048460498},
				{-0.00086212199,-0.00061416603,-0.048458599},
				{-0.00074768101,-0.00031661999,-0.048456699},
				{-0.00065612799,-0.000389099,-0.0484576}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_UAZ_Green
	{
		class driver
		{
			selections[]=
			{
				{-0.34453601,0.098688103,1.01563}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.452492,0.095954902,1.0316499},
				{-0.45517001,-0.83355701,1.14213},
				{-0.474915,-1.38246,1.13252},
				{0.55952501,-0.83354598,1.14213},
				{0.063796997,-0.83334398,1.14213},
				{0.58480102,-1.3419,1.1325099}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class UAZ_Open_Base
	{
		class driver
		{
			selections[]=
			{
				{-0.34637499,0.094785698,1.01129}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00077819801,0.0285339,0.120563},
				{-0.00039672901,0.027961699,0.120564},
				{-0.00016021699,0.0275688,0.120562},
				{0,0.027607,0.120562},
				{-0.00075531,-0.000415802,-0.048457101},
				{0.000205994,0.0279503,0.120564}
			};
			path[]=
			{
				{2},
				{3},
				{0},
				{4},
				{-10},
				{1}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_UAZ_Open_Green
	{
		class driver
		{
			selections[]=
			{
				{-0.34232301,0.101803,1.01563}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.45523101,0.0054092398,1.04347},
				{-0.45282701,-0.83586901,1.16992},
				{-0.49231699,-1.37098,1.14217},
				{0.56144702,-0.83797097,1.16997},
				{0.064720199,-0.87119699,1.00172},
				{0.59424597,-1.3395,1.14223}
			};
			path[]=
			{
				{2},
				{3},
				{0},
				{4},
				{-10},
				{1}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ural_RU
	{
		class driver
		{
			selections[]=
			{
				{-0.34503201,0.096897103,1.01129}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00250244,-0.0220509,0.065863103},
				{-0.0059127798,0.0157909,0.0496764},
				{-0.00496674,0.0173588,0.079941697},
				{-0.0059661898,-0.015913,0.071396798},
				{0.00057983398,-0.0077381101,0.069457501},
				{0.00034332299,-0.0079841604,0.0694599},
				{0.00299835,-0.023950599,0.066619404},
				{0.00136566,-0.0230141,0.065824501},
				{-0.0488129,-0.0052070599,0.063427001},
				{0.0019912701,-0.0227299,0.066986099},
				{-0.00079345697,0.030134199,0.120562},
				{-0.000213623,0.029701199,0.120562},
				{-0.0078735398,0.00166702,0.0692444},
				{-1.0325201,0.38116801,0.061601199}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ural_Covered_Blue
	{
		class driver
		{
			selections[]=
			{
				{-0.55893701,1.74282,-0.30597201}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.62796003,1.59156,-0.334299},
				{0.17153201,1.6515,-0.347471},
				{0.91802198,-0.486729,0.096552402},
				{-0.97699702,-0.309311,0.068685099},
				{0.92800897,-1.14622,0.085331},
				{-0.95709199,-0.93811798,0.090287201},
				{0.92237097,-1.7431901,0.089944802},
				{-0.94633502,-1.64135,0.088185303},
				{0.939484,-2.4854801,0.079443902},
				{-0.89672899,-2.2923901,0.0904193},
				{0.99666601,-3.0806899,0.048544399},
				{-1.00037,-2.8304,0.0538259},
				{0.89605701,0.19623201,0.095376499},
				{-1.0293,0.38012299,0.061554398}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ural_Covered_Yellow
	{
		class driver
		{
			selections[]=
			{
				{-0.55921203,1.74264,-0.30598101}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.62766999,1.59144,-0.33432099},
				{0.171005,1.65175,-0.34743899},
				{0.91704601,-0.48758101,0.096766502},
				{-0.97563899,-0.30746701,0.0687709},
				{0.927284,-1.14766,0.085310496},
				{-0.95666498,-0.93712598,0.090323403},
				{0.92239398,-1.74387,0.0898619},
				{-0.94617498,-1.64096,0.088204898},
				{0.93869001,-2.48577,0.079076298},
				{-0.89710999,-2.2923,0.090278096},
				{0.99662,-3.08095,0.048539601},
				{-1.00029,-2.8301899,0.053819701},
				{0.89649999,0.195564,0.095439002},
				{-1.02913,0.38031399,0.061753701}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ural_Covered_Worker
	{
		class driver
		{
			selections[]=
			{
				{-0.55867797,1.74298,-0.30596301}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.62823498,1.59162,-0.334288},
				{0.171555,1.6517299,-0.347458},
				{0.91733599,-0.487259,0.0966134},
				{-0.97640198,-0.30862999,0.0686955},
				{0.92789501,-1.1467201,0.085324302},
				{-0.95719898,-0.937832,0.090283401},
				{0.92277497,-1.74333,0.0898972},
				{-0.946854,-1.64127,0.0881567},
				{0.940292,-2.4855299,0.079310901},
				{-0.897636,-2.2923,0.090342999},
				{0.99726897,-3.08076,0.048646498},
				{-1.00077,-2.8302801,0.053899799},
				{0.896393,0.196095,0.095389403},
				{-1.02941,0.38021901,0.0616078}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ural_Covered_Military
	{
		class driver
		{
			selections[]=
			{
				{-0.55944097,1.74266,-0.30598}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.62741899,1.59152,-0.33431101},
				{0.170761,1.65189,-0.347426},
				{0.91693902,-0.487865,0.096754096},
				{-0.97576898,-0.307594,0.068758003},
				{0.92732197,-1.14748,0.085312799},
				{-0.95657301,-0.93723297,0.090328701},
				{0.92230201,-1.74383,0.089844197},
				{-0.94570202,-1.64103,0.088233903},
				{0.93836999,-2.4858201,0.079185002},
				{-0.89672101,-2.29229,0.090322502},
				{0.99640697,-3.08094,0.0485048},
				{-1.00014,-2.83023,0.053792499},
				{0.89624798,0.195705,0.095428899},
				{-1.02882,0.380283,0.061876301}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ural_Open_RU
	{
		class driver
		{
			selections[]=
			{
				{-0.34484899,0.097164199,1.01129}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.0026855499,-0.021709399,0.065885998},
				{-0.0057220501,0.0161877,0.049678799},
				{-0.0048217801,0.0176525,0.079943202},
				{-0.0058898898,-0.0156879,0.071412601},
				{0.00070190401,-0.0074386601,0.0694585},
				{0.00049591099,-0.0076093702,0.0694599},
				{0.00321198,-0.0235138,0.066630401},
				{0.00170898,-0.022802399,0.0658236},
				{-0.048057601,-0.00578117,0.0636544},
				{0.00294495,-0.022869101,0.0670586},
				{0.000175476,0.0301666,0.12056},
				{-0.95469701,-3.0487599,2.06424},
				{0.94688398,-0.022613499,2.10534},
				{-0.98358899,0.161255,2.0715001}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ural_Open_Blue
	{
		class driver
		{
			selections[]=
			{
				{-0.50981098,1.52463,1.70403}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.67716998,1.37335,1.6756901},
				{0.220863,1.43357,1.66259},
				{0.96425599,-0.70428997,2.1068599},
				{-0.926422,-0.528431,2.0787699},
				{0.97381598,-1.36533,2.0952899},
				{-0.90697497,-1.15662,2.1003699},
				{0.96961999,-1.96292,2.0997901},
				{-0.89744598,-1.85943,2.0982101},
				{0.98713702,-2.70558,2.0889299},
				{-0.85020399,-2.5099399,2.1001101},
				{1.04663,-3.3015299,2.05883},
				{-0.954292,-3.04707,2.0642099},
				{0.94799,-0.024839399,2.1054201},
				{-0.98420697,0.162773,2.07165}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ural_Open_Yellow
	{
		class driver
		{
			selections[]=
			{
				{-0.51002502,1.52465,1.70403}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.67688799,1.3733701,1.67564},
				{0.220589,1.43331,1.6626199},
				{0.96517199,-0.70355999,2.1073999},
				{-0.92743701,-0.52699298,2.07897},
				{0.97490698,-1.36646,2.0952499},
				{-0.907745,-1.15528,2.1003399},
				{0.97028399,-1.96452,2.09973},
				{-0.89739197,-1.85799,2.0982599},
				{0.98694599,-2.70597,2.0886199},
				{-0.851318,-2.5102701,2.09993},
				{1.04729,-3.30037,2.0589299},
				{-0.95462799,-3.0485001,2.06423},
				{0.94709802,-0.024082201,2.1053801},
				{-0.98186499,0.161736,2.0718999}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ural_Open_Worker
	{
		class driver
		{
			selections[]=
			{
				{-0.50985003,1.52484,1.7040401}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.67727703,1.3738101,1.67576},
				{0.22080199,1.43384,1.66258},
				{0.96465302,-0.70554501,2.1066201},
				{-0.92713201,-0.52822697,2.0785201},
				{0.97466302,-1.3659199,2.0952799},
				{-0.90771502,-1.15591,2.1003399},
				{0.96963501,-1.96364,2.09991},
				{-0.89779699,-1.85865,2.0982101},
				{0.98901403,-2.7056301,2.0894301},
				{-0.85085303,-2.51039,2.10023},
				{1.04781,-3.30001,2.059},
				{-0.955338,-3.0486901,2.0643499},
				{0.94747198,-0.0228996,2.10534},
				{-0.98380297,0.161823,2.0713501}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Ural_Open_Military
	{
		class driver
		{
			selections[]=
			{
				{-0.51103199,1.52372,1.70398}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.67583501,1.37255,1.6756099},
				{0.219292,1.43284,1.66256},
				{0.96530199,-0.70561802,2.10709},
				{-0.92727703,-0.525913,2.0789001},
				{0.975182,-1.36699,2.0952699},
				{-0.90843201,-1.15579,2.1002901},
				{0.97096997,-1.96314,2.09975},
				{-0.89810902,-1.8598,2.09816},
				{0.986359,-2.70454,2.08869},
				{-0.849419,-2.5112801,2.1001},
				{1.04485,-3.2999201,2.0585201},
				{-0.95217103,-3.0490999,2.0637901},
				{0.94493902,-0.023719801,2.1053901},
				{-0.980537,0.161339,2.07195}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Black
	{
		class driver
		{
			selections[]=
			{
				{-0.45823699,0.25119799,-0.29812399}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57132697,0.275749,-0.198707},
				{0.121597,0.201309,-0.17543501},
				{-0.31350699,-0.64257401,-0.222057},
				{0.26611301,-0.486256,-0.215626},
				{-0.34104899,-1.26064,-0.222057},
				{0.316551,-1.1194201,-0.21562099},
				{-0.25260901,-1.8517801,-0.222048},
				{0.162819,-1.70452,-0.215607},
				{-0.36505899,-2.45768,-0.22203},
				{0.24578901,-2.34378,-0.215592},
				{-0.23534399,-2.8441401,-0.222022},
				{0.26664001,-2.9202399,-0.215589}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_White
	{
		class driver
		{
			selections[]=
			{
				{-0.45838901,0.251286,-0.29808301}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57125098,0.277035,-0.198704},
				{0.121536,0.202888,-0.175436},
				{-0.31442299,-0.64254397,-0.22205301},
				{0.26624301,-0.48653001,-0.215625},
				{-0.34035501,-1.26041,-0.22205999},
				{0.31460601,-1.11947,-0.215628},
				{-0.25020599,-1.85173,-0.222057},
				{0.15987401,-1.70436,-0.21562099},
				{-0.36151901,-2.4576099,-0.222047},
				{0.242737,-2.3440101,-0.215608},
				{-0.234566,-2.84254,-0.222031},
				{0.265892,-2.9196899,-0.215593}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.45840499,0.25180799,-0.29812399}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57122803,0.27684,-0.198698},
				{0.121513,0.202206,-0.175432},
				{-0.314255,-0.642654,-0.222055},
				{0.26639599,-0.486397,-0.215625},
				{-0.341194,-1.26057,-0.222057},
				{0.31604001,-1.11945,-0.21562301},
				{-0.25211301,-1.8516901,-0.22205},
				{0.162209,-1.70452,-0.215611},
				{-0.364555,-2.4575601,-0.22203299},
				{0.245628,-2.3438699,-0.215593},
				{-0.235291,-2.8440199,-0.222022},
				{0.26653299,-2.9202399,-0.21559}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Guerilla01
	{
		class driver
		{
			selections[]=
			{
				{-0.45848799,0.25155601,-0.29811901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57131201,0.27707699,-0.19870199},
				{0.121666,0.20237701,-0.175432},
				{-0.314201,-0.64258599,-0.222055},
				{0.266159,-0.48625901,-0.215626},
				{-0.3405,-1.26071,-0.22205999},
				{0.315819,-1.1195,-0.21562301},
				{-0.25191501,-1.8516001,-0.22205099},
				{0.161461,-1.7045799,-0.21561401},
				{-0.36335799,-2.4576099,-0.222039},
				{0.24507099,-2.3438301,-0.21559601},
				{-0.23529799,-2.84392,-0.222023},
				{0.26655599,-2.9203999,-0.215588}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Guerilla02
	{
		class driver
		{
			selections[]=
			{
				{-0.45831299,0.25034001,-0.298042}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57132697,0.27690899,-0.19868401},
				{0.121696,0.20350599,-0.175429},
				{-0.31527701,-0.64270401,-0.22205301},
				{0.26676199,-0.48625201,-0.215624},
				{-0.34085101,-1.2606601,-0.222058},
				{0.31493399,-1.1195,-0.215627},
				{-0.250175,-1.8516001,-0.222058},
				{0.159683,-1.70438,-0.21562199},
				{-0.36133599,-2.4576001,-0.222049},
				{0.242966,-2.34412,-0.215607},
				{-0.23465,-2.84251,-0.222031},
				{0.26586199,-2.91977,-0.215593}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Guerilla03
	{
		class driver
		{
			selections[]=
			{
				{-0.45844299,0.24875601,-0.29785401}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57134998,0.274158,-0.198714},
				{0.121689,0.20096999,-0.17544},
				{-0.31485,-0.64256299,-0.22205301},
				{0.26898199,-0.48624399,-0.215615},
				{-0.345566,-1.26091,-0.222036},
				{0.32148001,-1.1190701,-0.215597},
				{-0.25698099,-1.8522,-0.22202501},
				{0.166153,-1.7044801,-0.21559},
				{-0.366714,-2.4576299,-0.222021},
				{0.24633799,-2.34377,-0.21559},
				{-0.235512,-2.84448,-0.22202},
				{0.266846,-2.9205201,-0.215588}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Guerilla04
	{
		class driver
		{
			selections[]=
			{
				{-0.45846599,0.25175101,-0.29810601}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57118201,0.27704999,-0.19870199},
				{0.121666,0.202187,-0.17544},
				{-0.31405601,-0.64247102,-0.222056},
				{0.26621199,-0.486305,-0.215626},
				{-0.340431,-1.26051,-0.22205999},
				{0.31533101,-1.11957,-0.215625},
				{-0.25155601,-1.85177,-0.22205099},
				{0.161873,-1.70436,-0.215611},
				{-0.364014,-2.4576399,-0.22203501},
				{0.24529999,-2.3438399,-0.21559501},
				{-0.235191,-2.84378,-0.22202399},
				{0.266487,-2.92027,-0.21559}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Guerilla05
	{
		class driver
		{
			selections[]=
			{
				{-0.45813799,0.251598,-0.29821199}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57142597,0.277069,-0.19868},
				{0.121719,0.20222101,-0.175437},
				{-0.314156,-0.64262801,-0.222055},
				{0.26633501,-0.486229,-0.215625},
				{-0.34054601,-1.2607501,-0.222059},
				{0.31566599,-1.1194201,-0.215624},
				{-0.25174701,-1.85156,-0.22205199},
				{0.161972,-1.70454,-0.215611},
				{-0.36438799,-2.45766,-0.22203299},
				{0.245094,-2.34389,-0.21559601},
				{-0.235146,-2.8436,-0.22202501},
				{0.266487,-2.9203899,-0.215588}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Guerilla06
	{
		class driver
		{
			selections[]=
			{
				{-0.45822901,0.25083199,-0.298076}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.571289,0.277004,-0.198699},
				{0.121574,0.20292699,-0.175429},
				{-0.31446099,-0.64262801,-0.222054},
				{0.26647201,-0.48623699,-0.215624},
				{-0.340538,-1.2605799,-0.222059},
				{0.315216,-1.1195199,-0.215625},
				{-0.250496,-1.85156,-0.222057},
				{0.160118,-1.70445,-0.21562099},
				{-0.36234999,-2.4576299,-0.22204299},
				{0.244102,-2.3438399,-0.215601},
				{-0.234924,-2.8432701,-0.222027},
				{0.26640299,-2.9200201,-0.21559}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Guerilla07
	{
		class driver
		{
			selections[]=
			{
				{-0.45821401,0.249851,-0.29815799}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57122803,0.27671799,-0.198659},
				{0.121727,0.203632,-0.175459},
				{-0.315689,-0.64271498,-0.22205},
				{0.267075,-0.48621699,-0.21562199},
				{-0.34093499,-1.26055,-0.222057},
				{0.31522399,-1.11966,-0.215625},
				{-0.25060999,-1.85153,-0.222056},
				{0.160179,-1.70445,-0.21562},
				{-0.361435,-2.4576399,-0.222049},
				{0.24205799,-2.3440399,-0.21561199},
				{-0.23435999,-2.84185,-0.22203501},
				{0.26574701,-2.91958,-0.21559399}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Guerilla08
	{
		class driver
		{
			selections[]=
			{
				{-0.45854199,0.251968,-0.297977}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57125098,0.27613801,-0.19873901},
				{0.121368,0.20192701,-0.175534},
				{-0.31361401,-0.64259303,-0.222058},
				{0.26615101,-0.48624,-0.215626},
				{-0.34117901,-1.26068,-0.222056},
				{0.31675699,-1.11948,-0.21562},
				{-0.25262499,-1.85172,-0.222047},
				{0.16284201,-1.7044899,-0.215607},
				{-0.36482999,-2.4576199,-0.222031},
				{0.245689,-2.34377,-0.215592},
				{-0.235413,-2.8440101,-0.222022},
				{0.266525,-2.92046,-0.215588}
			};
			path[]=
			{
				{-10},
				{-10},
				{0},
				{5},
				{1},
				{6},
				{2},
				{7},
				{3},
				{8},
				{4},
				{9}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_Black
	{
		class driver
		{
			selections[]=
			{
				{0.000114441,-0.0112572,-0.043404602}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.0665894,-0.028572099,0.061058499},
				{-0.0284958,0.0495186,0.063253403}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_White
	{
		class driver
		{
			selections[]=
			{
				{0.00028228801,-0.0114136,-0.0433378}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.066528298,-0.028873401,0.061308902},
				{-0.0284729,0.049602501,0.063258201}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.459602,0.25059301,-0.296637}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57041198,0.275341,-0.19769301},
				{0.11673,0.20132799,-0.175488}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_Guerilla01
	{
		class driver
		{
			selections[]=
			{
				{-0.45951799,0.250999,-0.29720601}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57216603,0.27679801,-0.199321},
				{0.117882,0.200077,-0.175615}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_Guerilla02
	{
		class driver
		{
			selections[]=
			{
				{-0.45953399,0.25098801,-0.29720801}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57211298,0.276566,-0.199224},
				{0.117851,0.199913,-0.175611}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_Guerilla03
	{
		class driver
		{
			selections[]=
			{
				{-0.459526,0.25089601,-0.297205}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57211298,0.27642801,-0.199074},
				{0.117859,0.200058,-0.17560101}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_Guerilla04
	{
		class driver
		{
			selections[]=
			{
				{-0.45957899,0.25102201,-0.297216}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57213598,0.27661899,-0.199369},
				{0.117828,0.19984099,-0.17560899}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_Guerilla05
	{
		class driver
		{
			selections[]=
			{
				{-0.459602,0.25074801,-0.297185}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57212102,0.27636299,-0.19934499},
				{0.117798,0.199764,-0.175605}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_Guerilla06
	{
		class driver
		{
			selections[]=
			{
				{-0.45954099,0.25072899,-0.297214}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.572182,0.276867,-0.19946501},
				{0.117889,0.199936,-0.17563701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_Guerilla07
	{
		class driver
		{
			selections[]=
			{
				{-0.45957899,0.25038901,-0.29714301}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57210499,0.27623701,-0.199323},
				{0.11776,0.200066,-0.175603}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Box_Guerilla08
	{
		class driver
		{
			selections[]=
			{
				{-0.45954099,0.25106001,-0.29720601}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.57207501,0.27649701,-0.199147},
				{0.117775,0.200066,-0.175602}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Fuel_Black
	{
		class driver
		{
			selections[]=
			{
				{-0.00026702901,-0.0115356,-0.0436306}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.0666885,-0.027721399,0.0603518},
				{-0.0284805,0.049789399,0.063196197}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Fuel_White
	{
		class driver
		{
			selections[]=
			{
				{-0.000198364,-0.0110168,-0.043644398}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.066665597,-0.0274696,0.060571201},
				{-0.028503399,0.049835201,0.063211903}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Fuel_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.00019073499,-0.0110893,-0.043642499}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.066726699,-0.0272217,0.060244098},
				{-0.0284729,0.0495224,0.063189499}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Fuel_Guerilla01
	{
		class driver
		{
			selections[]=
			{
				{-0.00016021699,-0.0111923,-0.043648198}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.066741899,-0.0271606,0.0603218},
				{-0.0284729,0.049842801,0.063195199}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Fuel_Guerilla02
	{
		class driver
		{
			selections[]=
			{
				{-0.000183105,-0.0111732,-0.043607701}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.066665597,-0.027915999,0.0605946},
				{-0.028595001,0.050048798,0.063212402}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Van_Fuel_Guerilla03
	{
		class driver
		{
			selections[]=
			{
				{-0.000244141,-0.0113754,-0.043637801}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.066741899,-0.027622201,0.060413402},
				{-0.0284042,0.049789399,0.063201897}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Volha_Blue
	{
		class driver
		{
			selections[]=
			{
				{0.000137329,-0.0077362098,-0.11008}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-7.6293902e-005,-0.0086059598,-0.081006996},
				{-0.000167847,-0.0088272104,-0.083500899},
				{-0.000213623,-0.0086898804,-0.081006102},
				{-0.106369,-0.0026092499,0.26879799}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Volha_White
	{
		class driver
		{
			selections[]=
			{
				{0.00069427502,-0.0087203998,-0.110079}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00037384001,-0.0087738,-0.081005603},
				{0.00025939901,-0.0082702599,-0.083500899},
				{0.000198364,-0.00769806,-0.081006497},
				{-0.105949,-0.00137329,0.26879701}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Volha_Black
	{
		class driver
		{
			selections[]=
			{
				{0.00068664597,-0.0087432899,-0.110079}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00037384001,-0.00868225,-0.081006996},
				{0.00025176999,-0.0083007803,-0.083500899},
				{0.00019073499,-0.0078277597,-0.081006102},
				{-0.105949,-0.00146484,0.26879701}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Car_Zamak
	{
		class driver
		{
			selections[]=
			{
				{-0.58103198,2.75439,-0.40412301}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.194916,2.7076199,-0.37939501},
				{0.73597002,2.67067,-0.37822101},
				{-0.83577698,0.87852901,-0.17053799},
				{0.91507,0.82974601,-0.114507},
				{-0.918594,0.197208,-0.20710801},
				{0.92001301,0.116314,-0.0236855},
				{-0.961151,-0.55440098,-0.15881801},
				{0.92574298,-0.61239201,-0.116257},
				{-0.86882001,-1.17024,-0.258185},
				{0.83419001,-1.17523,-0.142262},
				{-0.86172497,-1.9015599,-0.210905},
				{0.946136,-1.86341,-0.109213},
				{-1.00077,-2.50911,-0.165685},
				{0.84114802,-2.5620201,-0.081233501},
				{-0.88024098,-3.23528,-0.101627},
				{0.89956701,-3.2450099,-0.090296701}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_MountainBike
	{
		class driver
		{
			selections[]=
			{
				{-0.0181046,-0.318066,1.13715}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_OldBike
	{
		class driver
		{
			selections[]=
			{
				{0.00187683,-0.254547,0.205349}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_QuadBike_Black
	{
		class driver
		{
			selections[]=
			{
				{-0.0146561,-0.348896,-0.35713899}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.000961304,-0.73986799,-0.361817}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_QuadBike_Blue
	{
		class driver
		{
			selections[]=
			{
				{-0.0146484,-0.34890699,-0.35713801}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00095367403,-0.73985702,-0.36181799}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_QuadBike_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.0147018,-0.34851801,-0.35724199}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00099182106,-0.74125701,-0.36181501}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_QuadBike_White
	{
		class driver
		{
			selections[]=
			{
				{-0.0147095,-0.34845701,-0.357261}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00100708,-0.74110001,-0.361817}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_QuadBike_Nato
	{
		class driver
		{
			selections[]=
			{
				{-0.0146713,-0.349628,-0.356942}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.000961304,-0.74255401,-0.36181101}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_QuadBike_Csat
	{
		class driver
		{
			selections[]=
			{
				{-0.014679,-0.34944499,-0.35699001}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00097656297,-0.742432,-0.36181101}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_QuadBike_Fia
	{
		class driver
		{
			selections[]=
			{
				{-0.014389,-0.35298499,-0.35603499}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00066375697,-0.74503702,-0.36180699}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_QuadBike_Guerilla01
	{
		class driver
		{
			selections[]=
			{
				{-0.0147095,-0.34861401,-0.357218}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00099182106,-0.74134099,-0.36181501}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Bike_QuadBike_Guerilla02
	{
		class driver
		{
			selections[]=
			{
				{-0.0146942,-0.34859499,-0.35722101}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00099182106,-0.739986,-0.36182201}
			};
			path[]=
			{
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Chopper_Hellcat_Green
	{
		class driver
		{
			selections[]=
			{
				{0.49261501,3.8134601,-0.56177598}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.27091599,3.2813101,-0.44684401},
				{-0.263767,3.29353,-0.417714},
				{-0.297115,1.26394,-0.457849},
				{0.25713199,1.31174,-0.46865499},
				{0.266449,2.6844001,-0.41262501},
				{-0.21946099,2.70648,-0.456067}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.459663,3.81565,-0.54773301}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hellcat_FIA
	{
		class driver
		{
			selections[]=
			{
				{0.49261999,3.8134501,-0.56177503}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.271099,3.2809899,-0.44674999},
				{-0.26375401,3.29353,-0.41771299},
				{-0.29708299,1.26393,-0.45783699},
				{0.257063,1.3114901,-0.46876699},
				{0.26606801,2.68448,-0.41275299},
				{-0.21941601,2.70646,-0.45612699}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.45958301,3.81566,-0.54773402}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class UH1H_Clo
	{
		class driver
		{
			selections[]=
			{
				{0.51914799,3.1172299,-0.88432699}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.67966503,0.93476897,-0.94406998},
				{0.66682202,0.87402302,-0.92260301},
				{-0.61887199,0.891617,-0.98493701},
				{-0.28282899,1.71438,-0.87874299},
				{0.77815801,1.67681,-0.91170597},
				{-0.813164,1.67673,-0.91175097},
				{0.255775,1.67664,-0.91179502},
				{0.605618,0.92461401,-0.95483702},
				{-0.032129299,0.0147095,0.071199901}
			};
			path[]=
			{
				{1},
				{2},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.58324099,3.2116599,-0.93868297}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Huey_Green
	{
		class driver
		{
			selections[]=
			{
				{0.51914799,3.1172299,-0.88432801}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.67966503,0.93476897,-0.94407099},
				{0.66682202,0.87402302,-0.92260301},
				{-0.61887401,0.89158601,-0.98494101},
				{-0.28281599,1.71438,-0.87874299},
				{0.77815199,1.67681,-0.911708},
				{-0.813173,1.67673,-0.91175401},
				{0.25577,1.67654,-0.911843},
				{0.60550898,0.924622,-0.95488101},
				{-0.032113999,0.014679,0.071158901}
			};
			path[]=
			{
				{1},
				{2},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.58324099,3.2116599,-0.93868297}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Huey_Desert
	{
		class driver
		{
			selections[]=
			{
				{0.51914799,3.1172299,-0.88432699}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.67966503,0.93476897,-0.94406998},
				{0.66682202,0.87402302,-0.92260301},
				{-0.61887199,0.89159399,-0.98493999},
				{-0.28287101,1.71438,-0.87874401},
				{0.778099,1.67679,-0.91172099},
				{-0.81320202,1.67668,-0.91177499},
				{0.255766,1.6764801,-0.91187},
				{0.60550499,0.924622,-0.95488501},
				{-0.032113999,0.014679,0.071154602}
			};
			path[]=
			{
				{1},
				{2},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.58324099,3.2116599,-0.93868297}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class UH1H_M240
	{
		class driver
		{
			selections[]=
			{
				{0.51914799,3.09864,-0.89176798}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.89677799,1.63419,-1.20447},
				{-1.00225,1.63494,-1.20301},
				{0.77546501,1.66324,-1.2640899},
				{0.173374,1.59614,-1.2443},
				{0.722399,2.5638599,-1.21375},
				{-0.94089103,1.58997,-1.24278},
				{-0.37277201,2.6105001,-1.21383},
				{-0.78355998,2.3098099,-1.1999}
			};
			path[]=
			{
				{2},
				{3},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.50857502,0.95697802,-1.00999},
				{0.495096,0.85034198,-0.992823},
				{-0.58323902,3.2116599,-0.93868202}
			};
			path[]=
			{
				{0},
				{1},
				{4}
			};
		};
	};
	class Exile_Chopper_Huey_Armed_Green
	{
		class driver
		{
			selections[]=
			{
				{0.51914799,3.09864,-0.89176798}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.89677602,1.63419,-1.20447},
				{-1.00225,1.63494,-1.20301},
				{0.77546501,1.66324,-1.2641},
				{0.173372,1.59614,-1.2443},
				{0.72236598,2.5638499,-1.21375},
				{-0.94088697,1.58997,-1.24279},
				{-0.37282199,2.6104801,-1.21382},
				{-0.78348702,2.30986,-1.19997}
			};
			path[]=
			{
				{2},
				{3},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.50857502,0.95697802,-1.00999},
				{0.495096,0.85034198,-0.992823},
				{-0.58323902,3.2116599,-0.93868202}
			};
			path[]=
			{
				{0},
				{1},
				{4}
			};
		};
	};
	class Exile_Chopper_Huey_Armed_Desert
	{
		class driver
		{
			selections[]=
			{
				{0.51914799,3.09863,-0.89176798}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.89677799,1.63419,-1.20447},
				{-1.00225,1.63493,-1.20301},
				{0.775473,1.6632299,-1.26412},
				{0.17337599,1.59614,-1.24432},
				{0.72246403,2.56389,-1.21376},
				{-0.94086599,1.58998,-1.24282},
				{-0.372742,2.6105001,-1.21383},
				{-0.783508,2.30984,-1.19995}
			};
			path[]=
			{
				{2},
				{3},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.50857502,0.95696998,-1.00998},
				{0.495096,0.85033399,-0.992823},
				{-0.58324099,3.2116499,-0.93868297}
			};
			path[]=
			{
				{0},
				{1},
				{4}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Green
	{
		class driver
		{
			selections[]=
			{
				{-0.374823,1.18665,-0.043807499}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.28850001,0.27226299,-0.088810399},
				{0.300201,0.23658,-0.089783199},
				{0.82501602,0.96324903,-0.33308601},
				{-0.79894602,0.0632248,-0.33567601},
				{-0.832726,0.97071099,-0.34091899},
				{0.8272,0.065315202,-0.33856201}
			};
			path[]=
			{
				{-10},
				{-10},
				{1},
				{2},
				{3},
				{4}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.366716,1.1843801,-0.043147098}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Blue
	{
		class driver
		{
			selections[]=
			{
				{-0.37315899,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.307495,1.12669,0.64267802},
				{-0.330084,1.13381,0.64912701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.0332,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Red
	{
		class driver
		{
			selections[]=
			{
				{-0.37315601,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.307796,1.12571,0.64272797},
				{-0.330084,1.13381,0.64912599}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.03321,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_ION
	{
		class driver
		{
			selections[]=
			{
				{-0.37315899,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.0332,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_BlueLine
	{
		class driver
		{
			selections[]=
			{
				{-0.37315601,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30756599,1.12675,0.64265102},
				{-0.330084,1.13381,0.64912599}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.03321,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Digital
	{
		class driver
		{
			selections[]=
			{
				{-0.37315899,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.0332,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Elliptical
	{
		class driver
		{
			selections[]=
			{
				{-0.37315601,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.307796,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912599}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.03321,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Furious
	{
		class driver
		{
			selections[]=
			{
				{-0.37315899,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.0332,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher
	{
		class driver
		{
			selections[]=
			{
				{-0.37315601,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.307796,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912599}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.03321,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Jeans
	{
		class driver
		{
			selections[]=
			{
				{-0.37315899,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.0332,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Light
	{
		class driver
		{
			selections[]=
			{
				{-0.37315601,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912599}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.03321,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Shadow
	{
		class driver
		{
			selections[]=
			{
				{-0.37315899,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.0332,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Sheriff
	{
		class driver
		{
			selections[]=
			{
				{-0.37315601,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.33041,1.13467,0.64914203}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.03321,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Speedy
	{
		class driver
		{
			selections[]=
			{
				{-0.37315899,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.0332,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Sunset
	{
		class driver
		{
			selections[]=
			{
				{-0.37315601,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.307796,1.1257,0.64272797},
				{-0.330082,1.13381,0.64912599}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.03321,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Vrana
	{
		class driver
		{
			selections[]=
			{
				{-0.37315899,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.0332,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Wasp
	{
		class driver
		{
			selections[]=
			{
				{-0.37315601,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30779499,1.1257,0.64272797},
				{-0.330084,1.13381,0.64912599}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.03321,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Wave
	{
		class driver
		{
			selections[]=
			{
				{-0.37315899,2.03548,0.75279802}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.30753499,1.12673,0.64265102},
				{-0.330084,1.13381,0.64912701}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.36838201,2.0332,0.75345802}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Huron_Black
	{
		class driver
		{
			selections[]=
			{
				{0.47134799,7.6304302,-0.688492}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.98061001,-0.80104101,-1.2121},
				{-1.00673,2.7512701,-1.28184},
				{-0.87924802,1.52135,-1.26327},
				{-0.98036802,0.93372297,-1.21143},
				{-0.92894,0.34257501,-1.22218},
				{-0.873344,-0.349289,-1.26782},
				{0.89064801,2.7694499,-1.14054},
				{0.790308,2.1389699,-1.22912},
				{0.78027499,1.5601701,-1.2117701},
				{-1.04173,2.15187,-1.17479},
				{0.83252001,0.41681701,-1.1993999},
				{0.86339599,-0.227585,-1.17888},
				{0.83707798,0.97724903,-1.14817},
				{0.90031999,-0.77390301,-1.21403},
				{0.85444498,-1.31752,-1.30444},
				{-0.98433298,-1.3503799,-1.27188},
				{-0.94141197,4.0008898,-1.01086},
				{0.86428601,4.0194302,-1.01359}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{3},
				{4},
				{1},
				{2}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.53277397,7.6301699,-0.68883401}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Huron_Green
	{
		class driver
		{
			selections[]=
			{
				{0.47134799,7.6304302,-0.688492}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.98057598,-0.80120099,-1.21155},
				{-1.00705,2.7520101,-1.28193},
				{-0.87849599,1.5221,-1.26327},
				{-0.979689,0.933258,-1.21131},
				{-0.928949,0.34250599,-1.22212},
				{-0.87316501,-0.35032699,-1.26811},
				{0.89127898,2.7690401,-1.14063},
				{0.78867698,2.1382799,-1.22829},
				{0.78023899,1.5600899,-1.21189},
				{-1.04224,2.15207,-1.17469},
				{0.83199298,0.41680101,-1.19994},
				{0.863415,-0.227615,-1.17888},
				{0.837053,0.97724903,-1.14818},
				{0.89858103,-0.774445,-1.21444},
				{0.85444599,-1.31752,-1.30444},
				{-0.98433298,-1.3503799,-1.27188},
				{-0.94141197,4.0008898,-1.01086},
				{0.86428601,4.0194402,-1.01359}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{3},
				{4},
				{1},
				{2}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.532772,7.6301699,-0.68883502}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Mohawk_FIA
	{
		class driver
		{
			selections[]=
			{
				{0.74520499,6.3601799,-1.79773}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.94724703,-0.60831499,-1.74854},
				{-0.96755803,-1.62138,-1.72834},
				{-1.10735,1.62867,-1.6869},
				{1.08293,4.25459,-1.71578},
				{-1.06961,-1.0816801,-1.65363},
				{1.05392,1.03392,-1.67135},
				{1.05393,0.50672102,-1.67383},
				{-1.0723,0.045860302,-1.65116},
				{1.0475301,3.70452,-1.71331},
				{-1.05156,3.84514,-1.70143},
				{1.08292,4.7817898,-1.71331},
				{1.04063,-0.054382298,-1.69049},
				{-1.07477,-0.520576,-1.67029},
				{-1.08594,1.09486,-1.68633},
				{-1.06849,0.57122803,-1.67029},
				{-1.0761,3.1919301,-1.70371}
			};
			path[]=
			{
				{1},
				{2},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.79922098,6.3601799,-1.79773}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Orca_CSAT
	{
		class driver
		{
			selections[]=
			{
				{0.43556201,3.4662399,-1.0693001}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.55558002,2.5225401,-0.98940903},
				{0.045854598,2.7180901,-0.96555603},
				{-0.60786098,2.6161599,-0.96907997},
				{0.56712002,0.47721899,-0.94302702},
				{0.0113811,0.46904001,-0.97078401},
				{-0.59692198,0.47567001,-0.966079},
				{0.234129,1.55923,-0.868855},
				{-0.27028099,1.5894901,-0.94175899}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.46060601,3.46627,-1.06841}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Orca_Black
	{
		class driver
		{
			selections[]=
			{
				{0.43558499,3.4662199,-1.0693099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.55575901,2.5227399,-0.98972601},
				{0.0459232,2.7180901,-0.965608},
				{-0.60788,2.6161001,-0.969055},
				{0.56718302,0.477249,-0.94302601},
				{0.0114403,0.46922299,-0.97077799},
				{-0.596861,0.475876,-0.965985},
				{0.234198,1.5591,-0.86880797},
				{-0.27033401,1.58951,-0.941746}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.46060899,3.46627,-1.06841}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Orca_BlackCustom
	{
		class driver
		{
			selections[]=
			{
				{0.43562099,3.4662099,-1.0693099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.55601501,2.52298,-0.99005598},
				{0.0460186,2.7179699,-0.965689},
				{-0.607885,2.61604,-0.96906602},
				{0.56726301,0.47727999,-0.943003},
				{0.0116043,0.46965799,-0.97071201},
				{-0.59657699,0.476273,-0.96586198},
				{0.23448201,1.55874,-0.86826301},
				{-0.27048701,1.58957,-0.94171101}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.460621,3.46627,-1.0684201}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Chopper_Taru_CSAT
	{
		class driver
		{
			selections[]=
			{
				{-0.74333602,3.9835501,-0.91363001}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.365473,1.3930399,-1.874},
				{0.36002001,0.56244701,-1.87673},
				{0.34896499,-0.280159,-1.8822},
				{0.37917301,-1.1013499,-1.86579},
				{-0.55682403,-1.10304,-1.874},
				{-0.55134201,-0.267654,-1.87673},
				{-0.54038203,0.57022899,-1.8822},
				{-0.57049602,1.39569,-1.86579}
			};
			path[]=
			{
				{2},
				{3},
				{4},
				{5},
				{6},
				{7},
				{8},
				{9}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.809811,3.1880801,-1.28804},
				{0.56547201,3.9830401,-0.913984}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class Exile_Chopper_Taru_Black
	{
		class driver
		{
			selections[]=
			{
				{-0.74333799,3.9835501,-0.91363001}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.365473,1.3930399,-1.874},
				{0.36002001,0.56245399,-1.87673},
				{0.34896499,-0.28015101,-1.8822},
				{0.37917301,-1.1013499,-1.86579},
				{-0.556822,-1.10303,-1.874},
				{-0.55133998,-0.267647,-1.87673},
				{-0.54038203,0.57022899,-1.8822},
				{-0.57049602,1.3957,-1.86579}
			};
			path[]=
			{
				{2},
				{3},
				{4},
				{5},
				{6},
				{7},
				{8},
				{9}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.81000102,3.1881001,-1.28812},
				{0.56547201,3.9830401,-0.913984}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class Exile_Chopper_Taru_Covered_CSAT
	{
		class driver
		{
			selections[]=
			{
				{-0.74332798,3.9835501,-0.67762798}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.22076,1.90108,-1.23476},
				{-0.385353,1.95832,-1.1892999},
				{0.192709,1.28783,-1.15832},
				{-0.38923299,1.35446,-1.18341},
				{0.144962,0.71907002,-1.19103},
				{-0.385656,0.778633,-1.17393},
				{0.191029,0.20751201,-1.15948},
				{-0.43145201,0.18801101,-1.2165},
				{0.22897699,-0.26513699,-1.15409},
				{-0.35920101,-0.25910199,-1.2052799},
				{-0.39809,-0.88199598,-1.16758},
				{-0.33855999,-1.3231,-1.16987},
				{0.262196,-0.83157301,-1.23514},
				{0.20667499,-1.30769,-1.20709},
				{0.21130601,-2.0228,-1.20444},
				{-0.42447701,-2.01791,-1.2163}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.811333,3.1937101,-1.04759},
				{0.56547499,3.9830401,-0.67798501}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class Exile_Chopper_Taru_Covered_Black
	{
		class driver
		{
			selections[]=
			{
				{-0.74333,3.9835501,-0.67762899}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.22077601,1.90107,-1.23481},
				{-0.38535899,1.95834,-1.18928},
				{0.19256,1.28777,-1.15834},
				{-0.38912201,1.35443,-1.18349},
				{0.144997,0.719055,-1.1910501},
				{-0.38530499,0.77833599,-1.17384},
				{0.191122,0.20732901,-1.15943},
				{-0.43087199,0.188087,-1.21645},
				{0.22897699,-0.26515999,-1.15408},
				{-0.35925299,-0.259087,-1.2052799},
				{-0.39809799,-0.88199598,-1.16757},
				{-0.33856401,-1.32311,-1.16987},
				{0.262196,-0.83156598,-1.23514},
				{0.20571101,-1.3074501,-1.20719},
				{0.21130601,-2.0228,-1.20444},
				{-0.42447901,-2.0179,-1.2163}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.81148303,3.1940501,-1.04821},
				{0.56547397,3.9830401,-0.67798501}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class Exile_Chopper_Taru_Transport_CSAT
	{
		class driver
		{
			selections[]=
			{
				{-0.743334,3.9835501,-0.91362602}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.81071502,3.18698,-1.28904},
				{0.56546402,3.9830401,-0.913984}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class Exile_Chopper_Taru_Transport_Black
	{
		class driver
		{
			selections[]=
			{
				{-0.74333602,3.9835501,-0.913629}
			};
		};
		class cargo
		{
			selections[]={};
			path[]={};
		};
		class turret
		{
			selections[]=
			{
				{-0.81057,3.1869299,-1.28907},
				{0.56546599,3.9830401,-0.91398197}
			};
			path[]=
			{
				{1},
				{0}
			};
		};
	};
	class Exile_Boat_MotorBoat_Police
	{
		class driver
		{
			selections[]=
			{
				{0.061595902,0.00519562,0.0256062}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00049018901,-0.0085754404,0.0254097},
				{0.00046539301,-0.0086975098,0.0253677}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Boat_MotorBoat_Orange
	{
		class driver
		{
			selections[]=
			{
				{0.061721802,0.0035324099,0.0255585}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000480652,-0.0086212195,0.0253754},
				{0.00046539301,-0.0087280301,0.0253754}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Boat_MotorBoat_White
	{
		class driver
		{
			selections[]=
			{
				{0.061597802,0.00517273,0.0256081}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.000478745,-0.0086288499,0.0253735},
				{0.00046539301,-0.0087280301,0.0253773}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Boat_RubberDuck_CSAT
	{
		class driver
		{
			selections[]=
			{
				{0.0166569,-0.0551682,0.104486}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.016746501,0.063148499,0.055015601},
				{0.016492801,0.063148499,0.054577399},
				{0.027137799,-0.0663528,0.202452},
				{0.0076789898,-0.023162801,0.145529}
			};
			path[]=
			{
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Boat_RubberDuck_Digital
	{
		class driver
		{
			selections[]=
			{
				{0.0166569,-0.0551682,0.104486}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.016746501,0.063148499,0.055015601},
				{0.016492801,0.063148499,0.054577399},
				{0.027137799,-0.0663528,0.202452},
				{0.0076789898,-0.023162801,0.145529}
			};
			path[]=
			{
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Boat_RubberDuck_Orange
	{
		class driver
		{
			selections[]=
			{
				{0.0166569,-0.0551682,0.104486}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.016746501,0.063148499,0.055015601},
				{0.016492801,0.063148499,0.054577399},
				{0.027137799,-0.0663528,0.202452},
				{0.0076789898,-0.023162801,0.145529}
			};
			path[]=
			{
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Boat_RubberDuck_Blue
	{
		class driver
		{
			selections[]=
			{
				{0.0166569,-0.0551682,0.104486}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.016746501,0.063148499,0.055015601},
				{0.016492801,0.063148499,0.054577399},
				{0.027137799,-0.0663528,0.202452},
				{0.0076789898,-0.023162801,0.145529}
			};
			path[]=
			{
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Boat_RubberDuck_Black
	{
		class driver
		{
			selections[]=
			{
				{0.0166569,-0.0551682,0.104486}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.016746501,0.063148499,0.055015601},
				{0.016492801,0.063148499,0.054577399},
				{0.027137799,-0.0663528,0.202452},
				{0.0076789898,-0.023162801,0.145529}
			};
			path[]=
			{
				{0},
				{1},
				{2},
				{3}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Exile_Boat_SDV_CSAT
	{
		class driver
		{
			selections[]=
			{
				{0.00059318502,0.026298501,0.127645}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.038406398,-0.084823601,0.109874},
				{-0.038364399,-0.084899902,0.109885}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.000169754,0.0289078,0.128582}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Boat_SDV_Digital
	{
		class driver
		{
			selections[]=
			{
				{0.00071716303,0.026115401,0.12766901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.038408302,-0.084884599,0.10988},
				{-0.038244199,-0.084831201,0.109887}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{8.5830703e-005,0.029060399,0.128695}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Boat_SDV_Grey
	{
		class driver
		{
			selections[]=
			{
				{0.00050163298,0.026412999,0.127617}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.038400698,-0.084762603,0.109868},
				{-0.038318601,-0.0848694,0.109886}
			};
			path[]=
			{
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.000108719,0.0290375,0.128666}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class Exile_Plane_Cessna
	{
		class driver
		{
			selections[]=
			{
				{-0.256237,0.26628101,-0.50190002}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.19238301,0.265854,-0.50211},
				{0.17657501,-0.643951,-0.50914198},
				{-0.23796099,-0.64459199,-0.50947702}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class volha_Civ_01
	{
		class driver
		{
			selections[]=
			{
				{-0.360138,0.0147705,-0.78298002}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.40657401,0.087844796,-0.71564299},
				{-0.33656701,-0.76321399,-0.72948003},
				{0.425392,-0.768951,-0.73979598},
				{0.127518,-1.9544801,-0.68124199}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class volha_Civ_02
	{
		class driver
		{
			selections[]=
			{
				{-0.36011499,0.0146637,-0.78298199}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.40659001,0.087738,-0.71564603},
				{-0.336559,-0.76322901,-0.72947901},
				{0.42539999,-0.76878399,-0.739793},
				{0.12750199,-1.9545,-0.68124199}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class volha_Civ_03
	{
		class driver
		{
			selections[]=
			{
				{-0.36013001,0.0148773,-0.78297901}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.40656999,0.088012703,-0.715639},
				{-0.33657101,-0.763107,-0.72948098},
				{0.425396,-0.76902801,-0.73979598},
				{0.127514,-1.9545,-0.68124199}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Landrover_Des
	{
		class driver
		{
			selections[]=
			{
				{-0.50654602,0.108292,-0.485136}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.471333,0.15856899,-0.51005602},
				{-0.65272897,-0.56375098,-0.25244999},
				{0.63079101,-0.66200298,-0.253831},
				{-0.65779102,-1.28905,-0.252433},
				{0.622639,-1.3735,-0.23741999},
				{-0.56036401,-2.0706601,-0.30971101},
				{0.55360001,-2.14114,-0.31746599},
				{-0.60729599,-2.0558901,-0.33689901}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Landrover_Civ_01
	{
		class driver
		{
			selections[]=
			{
				{-0.50654602,0.108459,-0.485136}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.471333,0.158813,-0.51009101},
				{-0.65255702,-0.563721,-0.25244999},
				{0.63078302,-0.66200298,-0.25384399},
				{-0.65756202,-1.2890199,-0.25242901},
				{0.62241399,-1.37354,-0.237408},
				{-0.56066102,-2.0706501,-0.30971199},
				{0.55386001,-2.14113,-0.31746799},
				{-0.60736501,-2.0559499,-0.33686301}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Landrover_Civ_01_Urban1
	{
		class driver
		{
			selections[]=
			{
				{-0.50653797,0.107697,-0.485138}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.47132099,0.160202,-0.51005399},
				{-0.651627,-0.56373602,-0.25244701},
				{0.62999302,-0.66200298,-0.253777},
				{-0.65690202,-1.28903,-0.25244099},
				{0.62207001,-1.37343,-0.23754101},
				{-0.56084102,-2.0706601,-0.30971199},
				{0.55699199,-2.1410999,-0.31748199},
				{-0.614658,-2.0559199,-0.33664799}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Landrover_Civ_03
	{
		class driver
		{
			selections[]=
			{
				{-0.50640899,0.1082,-0.48513699}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.47152701,0.15863,-0.51010102},
				{-0.65263402,-0.56387299,-0.25244701},
				{0.631378,-0.66192597,-0.25387499},
				{-0.65834397,-1.28906,-0.25242901},
				{0.62269199,-1.3734,-0.237528},
				{-0.55866998,-2.0706501,-0.30970299},
				{0.55311602,-2.14117,-0.31746501},
				{-0.61018801,-2.05582,-0.33697799}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{0},
				{1},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class LR_Ambulance_01
	{
		class driver
		{
			selections[]=
			{
				{-0.50652301,0.82978803,-0.48524201}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.47135201,0.881531,-0.50977498},
				{-0.65145898,0.159973,-0.252599},
				{0.62632,0.062301598,-0.25304699},
				{-0.65549499,-0.56538397,-0.25257501},
				{0.62196702,-0.65028399,-0.240242},
				{-0.61709601,-1.33372,-0.23901001}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class LR_Ambulance_02
	{
		class driver
		{
			selections[]=
			{
				{-0.50650799,0.82963598,-0.48524299}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.47138199,0.88191199,-0.50967401},
				{-0.650581,0.159943,-0.25259399},
				{0.62588501,0.0623932,-0.252949},
				{-0.655285,-0.56542999,-0.25258499},
				{0.62234098,-0.65042102,-0.240392},
				{-0.61767602,-1.33339,-0.239389}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class UH1H_Closed_TK
	{
		class driver
		{
			selections[]=
			{
				{0.51914799,3.1172299,-0.88432699}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.67966503,0.93476897,-0.94406998},
				{0.66682202,0.87402302,-0.92260301},
				{-0.6189,0.89177698,-0.98493099},
				{-0.282646,1.71436,-0.87874103},
				{0.77832198,1.67688,-0.911672},
				{-0.812958,1.6768301,-0.91169697},
				{0.255842,1.6767401,-0.911744},
				{0.60574001,0.92459899,-0.95479202},
				{-0.032136898,0.0147629,0.071242802}
			};
			path[]=
			{
				{1},
				{2},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.58324099,3.2116599,-0.93868297}
			};
			path[]=
			{
				{0}
			};
		};
	};
	class UH1H_M240_TK
	{
		class driver
		{
			selections[]=
			{
				{0.51914799,3.09864,-0.89176798}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.89677602,1.63419,-1.20447},
				{-1.00225,1.63494,-1.20301},
				{0.77555799,1.66322,-1.26399},
				{0.17337599,1.59613,-1.24418},
				{0.72188401,2.5636101,-1.21366},
				{-0.94108403,1.58996,-1.2426701},
				{-0.37319201,2.6103401,-1.21377},
				{-0.78307301,2.3101399,-1.20039}
			};
			path[]=
			{
				{2},
				{3},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.50857699,0.95697802,-1.00998},
				{0.495094,0.85034198,-0.992823},
				{-0.58324099,3.2116599,-0.93868202}
			};
			path[]=
			{
				{0},
				{1},
				{4}
			};
		};
	};
	class B_APC_Wheeled_01_cannon_F
	{
		class driver
		{
			selections[]=
			{
				{-0.53311902,0.81268299,-1.5223401}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.00854492,0.0088653602,0.069808997},
				{0.0031280499,0.0188141,0.030911401},
				{-0.0095901499,0.019577,0.077568099},
				{0.0022659299,-0.022872901,0.0223455},
				{-0.0083656302,-0.042022701,0.046957001},
				{-0.031456001,0.0287781,0.0751305},
				{0.00315475,0.018478399,0.030688301},
				{-0.00938797,0.0079345703,0.069385499}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{0.566055,-1.9773901,-0.20819899},
				{0.198837,-1.2281801,-0.20836399}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class O_APC_Wheeled_02_rcws_F
	{
		class driver
		{
			selections[]=
			{
				{-0.19720501,-0.298538,-1.31811}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.86473799,-3.87024,-0.95417798},
				{-0.13146999,-3.93274,-1.0496},
				{0.86352199,-2.62872,-0.97800201},
				{-0.14950199,-2.7101901,-1.0522701},
				{0.87250501,-3.2997999,-1.0486},
				{-0.11573,-3.2655201,-0.97079402},
				{0.81846601,-2.05443,-0.93866801},
				{-0.16710301,-2.0752101,-0.89679497}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.048099499,-0.116928,-0.45265001},
				{-0.27599001,-1.07854,-0.845204}
			};
			path[]=
			{
				{0},
				{1}
			};
		};
	};
	class B_MBT_01_TUSK_F
	{
		class driver
		{
			selections[]=
			{
				{-0.0459061,-0.12262,-0.45264399}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.0041046101,-0.46441701,0.208023},
				{-0.0032768201,-0.043289199,0.054746602},
				{-0.0059509301,-0.052627601,0.0458684},
				{0.0032577501,-0.033340499,0.106069},
				{-0.0100212,-0.047027599,0.047081899},
				{0.0035858201,-0.035354599,0.062869102}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.0493927,-0.116135,-0.452647},
				{0.628986,-0.71003699,-0.64051002}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class I_APC_Wheeled_03_cannon_F
	{
		class driver
		{
			selections[]=
			{
				{-0.040336601,1.26404,-1.5155801}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.00240326,0.0215759,0.081075698},
				{0.0032081599,-0.0170746,0.066090599},
				{-0.00043869001,-0.0149994,0.0578079},
				{-0.031890899,0.017822299,0.071434997},
				{-0.0089759799,0.0076904302,0.069315001},
				{-0.0091362,-0.046218898,0.055479001},
				{-0.0046539302,-0.00691223,0.0704403},
				{0.0032386801,-0.017150899,0.065840699}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]=
			{
				{-0.038604699,0.017227201,0.0430374},
				{-0.107918,-0.0556641,-0.98707497}
			};
			path[]=
			{
				{0},
				{0,0}
			};
		};
	};
	class Ikarus_Base
	{
		class driver
		{
			selections[]=
			{
				{-0.85115099,3.93997,-0.214146}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.96113598,0.640854,-0.304607},
				{-0.97962201,3.0647099,-0.291253},
				{-1.01073,-0.158218,-0.28731501},
				{0.77399802,1.82841,-0.292373},
				{0.78150201,-3.3375399,-0.27790901},
				{-1.0248899,-1.6368901,-0.27769199},
				{0.78601801,-1.58829,-0.27759001},
				{0.23102599,0.98732001,-0.29971001},
				{-1.02837,-2.4743199,-0.28025901},
				{0.26107401,-3.1653299,-0.279264},
				{0.26319101,-1.67531,-0.27935901},
				{0.226448,1.80962,-0.28724599},
				{0.231941,-2.47473,-0.240832},
				{0.30733901,2.6828001,-0.26215601},
				{-0.96644598,-3.2720599,-0.28343201},
				{-0.99040198,-0.92086798,-0.288634},
				{-0.89694202,2.2528999,-0.27175301},
				{-0.94938302,1.45804,-0.271999},
				{0.71523303,1.00255,-0.26444399},
				{-0.27283499,-5.2999701,0.158076},
				{-0.30156699,-0.69947797,0.15807401},
				{-0.391579,-3.7831299,0.15807199},
				{-0.82511902,-4.5100098,0.15807}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ikarus_Civ_Base
	{
		class driver
		{
			selections[]=
			{
				{-0.851143,3.9399099,-0.214146}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.96113998,0.64083898,-0.30460799},
				{-0.979626,3.0646701,-0.291255},
				{-1.01073,-0.158234,-0.28731599},
				{0.77400202,1.8284301,-0.292373},
				{0.78150201,-3.3373899,-0.277924},
				{-1.0248899,-1.63739,-0.27773699},
				{0.78601801,-1.5881701,-0.27757999},
				{0.231003,0.987656,-0.299683},
				{-1.02819,-2.4739799,-0.28022701},
				{0.26101699,-3.1657901,-0.279223},
				{0.263165,-1.67511,-0.279342},
				{0.226463,1.80959,-0.28724799},
				{0.23192599,-2.4751699,-0.240835},
				{0.30741099,2.68221,-0.26218599},
				{-0.986076,-3.2295499,-0.27614099},
				{-0.99067301,-0.922791,-0.28880799},
				{-0.89612198,2.2509301,-0.27184501},
				{-0.94937903,1.4592,-0.27189499},
				{0.71521801,1.0034,-0.26435199},
				{-0.272205,-5.3000002,0.158078},
				{-0.301128,-0.69940197,0.15807401},
				{-0.39181501,-3.78333,0.15807199},
				{-0.82490498,-4.5100899,0.158071}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ikarus_Civ_02
	{
		class driver
		{
			selections[]=
			{
				{-0.85113901,3.9398999,-0.214146}
			};
		};
		class cargo
		{
			selections[]=
			{
				{-0.96113199,0.64082301,-0.304609},
				{-0.97961801,3.0646801,-0.29125401},
				{-1.01073,-0.158279,-0.287319},
				{0.77400202,1.8284,-0.29237601},
				{0.78149402,-3.3373301,-0.27792701},
				{-1.0248801,-1.63951,-0.27792501},
				{0.786026,-1.5911601,-0.27784401},
				{0.231003,0.987701,-0.299676},
				{-1.02772,-2.4732201,-0.28014699},
				{0.26084501,-3.16663,-0.279147},
				{0.26302001,-1.67377,-0.279223},
				{0.225677,1.81067,-0.28713},
				{0.23199099,-2.47363,-0.240821},
				{0.30727401,2.6837201,-0.26210999},
				{-0.98587,-3.2316101,-0.275962},
				{-0.98971599,-0.91766399,-0.28862101},
				{-0.86406702,2.2216599,-0.279183},
				{-0.94918102,1.45935,-0.272163},
				{0.71525598,1.00194,-0.26450899},
				{-0.27329999,-5.2999902,0.15807401},
				{-0.301918,-0.69953901,0.15807199},
				{-0.391357,-3.7829599,0.158071},
				{-0.82532501,-4.5099201,0.158069}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Lada_Civ_01
	{
		class driver
		{
			selections[]=
			{
				{-0.342529,-0.047164898,-0.71035099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.34343001,-0.051620498,-0.70383298},
				{-0.32986501,-0.84903002,-0.691311},
				{0.36381501,-0.84869403,-0.68573999},
				{-0.079223603,-1.76491,-0.728607}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Lada_Civ_02
	{
		class driver
		{
			selections[]=
			{
				{-0.34252501,-0.047134399,-0.710352}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.34343299,-0.051376302,-0.703834},
				{-0.32985699,-0.84893799,-0.69130999},
				{0.363819,-0.84903002,-0.68573999},
				{-0.079173997,-1.76413,-0.72860599}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Lada_Civ_03
	{
		class driver
		{
			selections[]=
			{
				{-0.342529,-0.0471191,-0.71035099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.34343299,-0.0514374,-0.70383298},
				{-0.32985699,-0.84896898,-0.691311},
				{0.36381501,-0.84889197,-0.68573999},
				{-0.0791931,-1.76451,-0.728607}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Lada_Civ_04
	{
		class driver
		{
			selections[]=
			{
				{-0.34254101,-0.0471191,-0.71035099}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.343418,-0.051605199,-0.703834},
				{-0.32986799,-0.84903002,-0.691311},
				{0.36380801,-0.84872401,-0.68573999},
				{-0.079216003,-1.7648799,-0.728607}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Lada_Militia
	{
		class driver
		{
			selections[]=
			{
				{-0.342522,-0.047134399,-0.70981503}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.34343299,-0.051544201,-0.70329499},
				{-0.32985699,-0.84899902,-0.69077301},
				{0.36381501,-0.84877002,-0.68520403},
				{-0.079212204,-1.76474,-0.72807401}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ural_Open_Base
	{
		class driver
		{
			selections[]=
			{
				{-0.50911701,1.52705,1.70417}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.677872,1.3767101,1.67594},
				{0.221512,1.43709,1.6627899},
				{0.96212,-0.70666498,2.1073799},
				{-0.923096,-0.52925098,2.07775},
				{0.96944398,-1.36476,2.09531},
				{-0.90221798,-1.15741,2.1006701},
				{0.96322298,-1.96207,2.1001201},
				{-0.89225,-1.86104,2.09849},
				{0.98275,-2.7035201,2.0899999},
				{-0.84346801,-2.51158,2.1008601},
				{1.0411,-3.2994399,2.0578899},
				{-0.94908899,-3.0499301,2.0632401},
				{0.94117701,-0.022033701,2.1052001},
				{-0.97935897,0.160477,2.0711601}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ural_Civ_01
	{
		class driver
		{
			selections[]=
			{
				{-0.55728501,1.7460001,-0.305796}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.62974501,1.59549,-0.334021},
				{0.173603,1.65613,-0.34707201},
				{0.91225398,-0.48466501,0.097178899},
				{-0.97061902,-0.31039399,0.068805203},
				{0.92129499,-1.1458,0.085341498},
				{-0.95042402,-0.93844599,0.090706803},
				{0.91622502,-1.743,0.089857601},
				{-0.94048297,-1.64215,0.0885377},
				{0.93382603,-2.48524,0.079450101},
				{-0.89272702,-2.29317,0.090594798},
				{0.99295402,-3.0804901,0.047928799},
				{-0.99731398,-2.8309901,0.0532827},
				{0.89400899,0.195724,0.095444702},
				{-1.02644,0.379623,0.062110402}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ural_Civ_02
	{
		class driver
		{
			selections[]=
			{
				{-0.55730098,1.7460001,-0.30579501}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.62974501,1.59549,-0.33397901},
				{0.173531,1.65613,-0.347092},
				{0.91223103,-0.48532099,0.096968703},
				{-0.97061902,-0.31056201,0.068715103},
				{0.92129099,-1.14583,0.0853424},
				{-0.95042801,-0.93843102,0.090706803},
				{0.91618299,-1.74298,0.0898709},
				{-0.94045597,-1.64214,0.088539101},
				{0.934219,-2.48528,0.079673298},
				{-0.89249003,-2.29303,0.090664901},
				{0.99294698,-3.0804901,0.047928799},
				{-0.99733001,-2.8309801,0.053285599},
				{0.89379102,0.195953,0.095432296},
				{-1.02663,0.379684,0.061992198}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ural_Civ_03
	{
		class driver
		{
			selections[]=
			{
				{-0.55729699,1.74602,-0.305794}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.62975299,1.59549,-0.33398899},
				{0.17352299,1.65611,-0.347096},
				{0.91222799,-0.485062,0.097033001},
				{-0.97061503,-0.310532,0.068736099},
				{0.92129499,-1.14581,0.0853424},
				{-0.95042402,-0.93843102,0.090707302},
				{0.916237,-1.743,0.089857601},
				{-0.94047499,-1.64215,0.0885382},
				{0.93415099,-2.4853201,0.0796289},
				{-0.89242601,-2.29303,0.090682998},
				{0.99297303,-3.0804901,0.0479321},
				{-0.99737501,-2.8309901,0.053293701},
				{0.89368403,0.19612101,0.0954208},
				{-1.0267299,0.37966901,0.0619183}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ural_Open_Civ_01
	{
		class driver
		{
			selections[]=
			{
				{-0.50910598,1.52716,1.70417}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.67792499,1.37666,1.67599},
				{0.22168,1.43726,1.66286},
				{0.960419,-0.70466602,2.1068699},
				{-0.922382,-0.52958697,2.07864},
				{0.96942103,-1.36473,2.0953},
				{-0.90225202,-1.15738,2.1006701},
				{0.96424103,-1.96191,2.09986},
				{-0.89229602,-1.86107,2.0985},
				{0.98242998,-2.70419,2.0896699},
				{-0.84443301,-2.5120201,2.10059},
				{1.04117,-3.2994399,2.0579},
				{-0.94923401,-3.0499301,2.0632601},
				{0.94200099,-0.0230103,2.1054001},
				{-0.97842401,0.16073599,2.07198}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ural_Open_Civ_02
	{
		class driver
		{
			selections[]=
			{
				{-0.50912899,1.52702,1.70417}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.677917,1.3765301,1.6759501},
				{0.221733,1.43716,1.6628799},
				{0.96038097,-0.70402497,2.1069801},
				{-0.92243201,-0.52960199,2.07864},
				{0.96946698,-1.36475,2.0953},
				{-0.90227503,-1.15738,2.1006701},
				{0.96425599,-1.96193,2.09986},
				{-0.89229602,-1.8610801,2.0985},
				{0.98230702,-2.7042401,2.0896001},
				{-0.84435701,-2.5120101,2.10061},
				{1.04114,-3.2994201,2.0578899},
				{-0.94918102,-3.0499301,2.0632501},
				{0.94203901,-0.023056,2.1054001},
				{-0.97842002,0.160721,2.07199}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
	class Ural_Open_Civ_03
	{
		class driver
		{
			selections[]=
			{
				{-0.50911701,1.5271,1.70417}
			};
		};
		class cargo
		{
			selections[]=
			{
				{0.67792499,1.3766,1.6759599},
				{0.221733,1.43723,1.6628799},
				{0.96032298,-0.70378101,2.10708},
				{-0.92241699,-0.52932698,2.0787599},
				{0.96946001,-1.36475,2.0953},
				{-0.90228301,-1.15741,2.1006701},
				{0.96452302,-1.96196,2.0998001},
				{-0.89228803,-1.8611,2.0985},
				{0.98169303,-2.70415,2.0892899},
				{-0.84470701,-2.51213,2.1005099},
				{1.04115,-3.2994399,2.0579},
				{-0.94920701,-3.0499301,2.0632601},
				{0.94216502,-0.023178101,2.1054101},
				{-0.97829401,0.16068999,2.0720601}
			};
			path[]=
			{
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{-10},
				{1},
				{0},
				{-10},
				{-10}
			};
		};
		class turret
		{
			selections[]={};
			path[]={};
		};
	};
};
class CfgExileToasts
{
	class InfoEmpty
	{
		template="%1";
		color[]={0.24699999,0.83099997,0.98799998,1};
	};
	class InfoTitleOnly
	{
		template="<t size='22' font='PuristaMedium'>%1</t>";
		color[]={0.24699999,0.83099997,0.98799998,1};
	};
	class InfoTitleAndText
	{
		template="<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[]={0.24699999,0.83099997,0.98799998,1};
	};
	class SuccessEmpty
	{
		template="%1";
		color[]={0.62699997,0.87400001,0.23100001,1};
	};
	class SuccessTitleOnly
	{
		template="<t size='22' font='PuristaMedium'>%1</t>";
		color[]={0.62699997,0.87400001,0.23100001,1};
	};
	class SuccessTitleAndText
	{
		template="<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[]={0.62699997,0.87400001,0.23100001,1};
	};
	class ErrorEmpty
	{
		template="%1";
		color[]={0.77999997,0.149,0.31799999,1};
	};
	class ErrorTitleOnly
	{
		template="<t size='22' font='PuristaMedium'>%1</t>";
		color[]={0.77999997,0.149,0.31799999,1};
	};
	class ErrorTitleAndText
	{
		template="<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[]={0.77999997,0.149,0.31799999,1};
	};
};
class CfgFlagsNative
{
	class BI
	{
		name="Bohemia Interactive";
		texture="exile_assets\texture\flag\flag_mate_bis_co.paa";
		uids[]={"76561197977933359","76561197968664825","76561198003485468","76561198050098256","76561198007169107","76561197971697870","76561198085333695","76561197991855773"};
	};
	class Vish
	{
		name="Vish";
		texture="exile_assets\texture\flag\flag_mate_vish_co.paa";
		uids[]={"76561198075905447"};
	};
	class Hollow
	{
		name="Hollow";
		texture="exile_assets\texture\flag\flag_mate_hollow_co.paa";
		uids[]={"76561198182951970"};
	};
	class Legion
	{
		name="Legion";
		texture="exile_assets\texture\flag\flag_mate_legion_ca.paa";
		uids[]={"76561198010969041","76561198124983829","76561198094881952","76561198111208683","76561198015966307","76561198078247060","76561198034836765","76561197998832240","76561197970701357","76561198123330495"};
	};
	class DogesOfMassDestruction
	{
		name="21 DMD";
		texture="exile_assets\texture\flag\flag_mate_21dmd_co.paa";
		uids[]={"76561198021615590"};
	};
	class Spawny
	{
		name="sp4wny";
		texture="exile_assets\texture\flag\flag_mate_spawny_co.paa";
		uids[]={"76561197960452768"};
	};
	class Tomms
	{
		name="Tomms";
		texture="exile_assets\texture\flag\flag_mate_secretone_co.paa";
		uids[]={"76561198003041335"};
	};
	class StitchMoonz
	{
		name="StitchMoonz";
		texture="exile_assets\texture\flag\flag_mate_stitchmoonz_co.paa";
		uids[]={"76561198112458056"};
	};
	class Blue
	{
		name="Blue";
		texture="\A3\Data_F\Flags\flag_blue_co.paa";
		uids[]={};
	};
	class Green
	{
		name="Green";
		texture="\A3\Data_F\Flags\flag_green_co.paa";
		uids[]={};
	};
	class Red
	{
		name="Red";
		texture="\A3\Data_F\Flags\flag_red_co.paa";
		uids[]={};
	};
	class White
	{
		name="White";
		texture="\A3\Data_F\Flags\flag_white_co.paa";
		uids[]={};
	};
	class CountryUK
	{
		name="United Kingdom";
		texture="\A3\Data_F\Flags\flag_uk_co.paa";
		uids[]={};
	};
	class CountryDE
	{
		name="Germany";
		texture="exile_assets\texture\flag\flag_country_de_co.paa";
		uids[]={};
	};
	class CountryAT
	{
		name="Austria";
		texture="exile_assets\texture\flag\flag_country_at_co.paa";
		uids[]={};
	};
	class CountrySCT
	{
		name="Scotland";
		texture="exile_assets\texture\flag\flag_country_sct_co.paa";
		uids[]={};
	};
	class CountryEE
	{
		name="Estonia";
		texture="exile_assets\texture\flag\flag_country_ee_co.paa";
		uids[]={};
	};
	class CountryCZ
	{
		name="Czech Republic";
		texture="exile_assets\texture\flag\flag_country_cz_co.paa";
		uids[]={};
	};
	class CountryNL
	{
		name="The Netherlands";
		texture="exile_assets\texture\flag\flag_country_nl_co.paa";
		uids[]={};
	};
	class CountryHR
	{
		name="Croatia";
		texture="exile_assets\texture\flag\flag_country_hr_co.paa";
		uids[]={};
	};
	class CountryCN
	{
		name="Canada";
		texture="exile_assets\texture\flag\flag_country_cn_co.paa";
		uids[]={};
	};
	class CountryRU
	{
		name="Russia";
		texture="exile_assets\texture\flag\flag_country_ru_co.paa";
		uids[]={};
	};
	class CountryIR
	{
		name="Ireland";
		texture="exile_assets\texture\flag\flag_country_ir_co.paa";
		uids[]={};
	};
	class CountryBY
	{
		name="Belarus";
		texture="exile_assets\texture\flag\flag_country_by_co.paa";
		uids[]={};
	};
	class CountryFI
	{
		name="Finland";
		texture="exile_assets\texture\flag\flag_country_fi_co.paa";
		uids[]={};
	};
	class CountryFR
	{
		name="France";
		texture="exile_assets\texture\flag\flag_country_fr_co.paa";
		uids[]={};
	};
	class CountryAU
	{
		name="Australia";
		texture="exile_assets\texture\flag\flag_country_au_co.paa";
		uids[]={};
	};
	class CountryBE
	{
		name="Belgium";
		texture="exile_assets\texture\flag\flag_country_be_co.paa";
		uids[]={};
	};
	class CountrySE
	{
		name="Sweden";
		texture="exile_assets\texture\flag\flag_country_se_co.paa";
		uids[]={};
	};
	class CountryPL
	{
		name="Poland";
		texture="exile_assets\texture\flag\flag_country_pl_co.paa";
		uids[]={};
	};
	class CountryPL2
	{
		name="Poland 2";
		texture="exile_assets\texture\flag\flag_country_pl2_co.paa";
		uids[]={};
	};
	class CountryPT
	{
		name="Portugal";
		texture="exile_assets\texture\flag\flag_country_pt_co.paa";
		uids[]={};
	};
	class Zand3rs
	{
		name="Zand3rs";
		texture="exile_assets\texture\flag\flag_mate_zanders_streched_co.paa";
		uids[]={};
	};
	class Brunswik
	{
		name="Brunswik";
		texture="exile_assets\texture\flag\flag_misc_brunswik_co.paa";
		uids[]={};
	};
	class Dorset
	{
		name="Dorset";
		texture="exile_assets\texture\flag\flag_misc_dorset_co.paa";
		uids[]={};
	};
	class Svarog
	{
		name="Children of Svarog";
		texture="exile_assets\texture\flag\flag_misc_svarog_co.paa";
		uids[]={};
	};
	class Exile
	{
		name="Exile";
		texture="exile_assets\texture\flag\flag_misc_exile_co.paa";
		uids[]={};
	};
	class UTcity
	{
		name="UTcity";
		texture="exile_assets\texture\flag\flag_misc_utcity_co.paa";
		uids[]={};
	};
	class Dickbutt
	{
		name="Dickbut";
		texture="exile_assets\texture\flag\flag_misc_dickbutt_co.paa";
		uids[]={};
	};
	class Rainbow
	{
		name="Rainbow";
		texture="exile_assets\texture\flag\flag_misc_rainbow_co.paa";
		uids[]={};
	};
	class BattlEye
	{
		name="BattlEye";
		texture="exile_assets\texture\flag\flag_misc_battleye_co.paa";
		uids[]={};
	};
	class BSS
	{
		name="Bluescreen Simulator";
		texture="exile_assets\texture\flag\flag_misc_bss_co.paa";
		uids[]={};
	};
	class Skippy
	{
		name="Skippy";
		texture="exile_assets\texture\flag\flag_misc_skippy_co.paa";
		uids[]={};
	};
	class KiwiFern
	{
		name="Silver Fern";
		texture="exile_assets\texture\flag\flag_misc_kiwifern_co.paa";
		uids[]={};
	};
	class Trololol
	{
		name="Trololol";
		texture="exile_assets\texture\flag\flag_misc_trololol_co.paa";
		uids[]={};
	};
	class DreamCat
	{
		name="Dream Cat";
		texture="exile_assets\texture\flag\flag_misc_dream_cat_co.paa";
		uids[]={};
	};
	class Pirate
	{
		name="Pirate";
		texture="exile_assets\texture\flag\flag_misc_pirate_co.paa";
		uids[]={};
	};
	class Pedobear
	{
		name="Pedobear";
		texture="exile_assets\texture\flag\flag_misc_pedobear_co.paa";
		uids[]={};
	};
	class Petoria
	{
		name="Petoria";
		texture="exile_assets\texture\flag\flag_misc_petoria_co.paa";
		uids[]={};
	};
	class Smashing
	{
		name="Smashing";
		texture="exile_assets\texture\flag\flag_misc_smashing_co.paa";
		uids[]={};
	};
	class LemonParty
	{
		name="Lemon Party";
		texture="exile_assets\texture\flag\flag_misc_lemonparty_co.paa";
		uids[]={};
	};
	class RMA
	{
		name="Respect my autoritah!";
		texture="exile_assets\texture\flag\flag_misc_rma_co.paa";
		uids[]={};
	};
	class CP
	{
		name="ClarkyCallad";
		texture="exile_assets\texture\flag\flag_cp_co.paa";
		uids[]={};
	};
	class Trouble2_NA
	{
		name="Trouble2";
		texture="exile_assets\texture\flag\flag_trouble2_co.paa";
		uids[]={};
	};
	class ExileCity
	{
		name="Exile City";
		texture="exile_assets\texture\flag\flag_exile_city_co.paa";
		uids[]={};
	};
	class Eraser1
	{
		name="eraser1";
		texture="exile_assets\texture\flag\flag_misc_eraser1_co.paa";
		uids[]={};
	};
	class Trespassers
	{
		name="Trespassers will be eaten";
		texture="exile_assets\texture\flag\flag_misc_willbeeaten_co.paa";
		uids[]={};
	};
	class PrivateProperty
	{
		name="Private Property";
		texture="exile_assets\texture\flag\flag_misc_privateproperty_co.paa";
		uids[]={};
	};
	class NuCoolR
	{
		name="Nu Cool R";
		texture="exile_assets\texture\flag\flag_misc_nuclear_co.paa";
		uids[]={};
	};
	class LazerKiwi
	{
		name="Lazer Kiwi";
		texture="exile_assets\texture\flag\flag_misc_lazerkiwi_co.paa";
		uids[]={};
	};
	class Beardageddon
	{
		name="Beardageddon";
		texture="exile_assets\texture\flag\flag_misc_beardageddon_co.paa";
		uids[]={};
	};
};
class CfgFontFamilies
{
	class RobotoRegular
	{
		spaceWidth=0.69999999;
		spacing=0.064999998;
		fonts[]=
		{
			"\exile_assets\font\RobotoRegular\RobotoRegular6",
			"\exile_assets\font\RobotoRegular\RobotoRegular7",
			"\exile_assets\font\RobotoRegular\RobotoRegular8",
			"\exile_assets\font\RobotoRegular\RobotoRegular9",
			"\exile_assets\font\RobotoRegular\RobotoRegular10",
			"\exile_assets\font\RobotoRegular\RobotoRegular11",
			"\exile_assets\font\RobotoRegular\RobotoRegular12",
			"\exile_assets\font\RobotoRegular\RobotoRegular13",
			"\exile_assets\font\RobotoRegular\RobotoRegular14",
			"\exile_assets\font\RobotoRegular\RobotoRegular15",
			"\exile_assets\font\RobotoRegular\RobotoRegular16",
			"\exile_assets\font\RobotoRegular\RobotoRegular17",
			"\exile_assets\font\RobotoRegular\RobotoRegular18",
			"\exile_assets\font\RobotoRegular\RobotoRegular19",
			"\exile_assets\font\RobotoRegular\RobotoRegular20",
			"\exile_assets\font\RobotoRegular\RobotoRegular21",
			"\exile_assets\font\RobotoRegular\RobotoRegular22",
			"\exile_assets\font\RobotoRegular\RobotoRegular23",
			"\exile_assets\font\RobotoRegular\RobotoRegular24",
			"\exile_assets\font\RobotoRegular\RobotoRegular25",
			"\exile_assets\font\RobotoRegular\RobotoRegular26",
			"\exile_assets\font\RobotoRegular\RobotoRegular27",
			"\exile_assets\font\RobotoRegular\RobotoRegular28",
			"\exile_assets\font\RobotoRegular\RobotoRegular29",
			"\exile_assets\font\RobotoRegular\RobotoRegular30",
			"\exile_assets\font\RobotoRegular\RobotoRegular31",
			"\exile_assets\font\RobotoRegular\RobotoRegular34",
			"\exile_assets\font\RobotoRegular\RobotoRegular35",
			"\exile_assets\font\RobotoRegular\RobotoRegular37",
			"\exile_assets\font\RobotoRegular\RobotoRegular46"
		};
	};
	class RobotoMedium
	{
		spaceWidth=0.69999999;
		spacing=0.064999998;
		fonts[]=
		{
			"\exile_assets\font\RobotoMedium\RobotoMedium6",
			"\exile_assets\font\RobotoMedium\RobotoMedium7",
			"\exile_assets\font\RobotoMedium\RobotoMedium8",
			"\exile_assets\font\RobotoMedium\RobotoMedium9",
			"\exile_assets\font\RobotoMedium\RobotoMedium10",
			"\exile_assets\font\RobotoMedium\RobotoMedium11",
			"\exile_assets\font\RobotoMedium\RobotoMedium12",
			"\exile_assets\font\RobotoMedium\RobotoMedium13",
			"\exile_assets\font\RobotoMedium\RobotoMedium14",
			"\exile_assets\font\RobotoMedium\RobotoMedium15",
			"\exile_assets\font\RobotoMedium\RobotoMedium16",
			"\exile_assets\font\RobotoMedium\RobotoMedium17",
			"\exile_assets\font\RobotoMedium\RobotoMedium18",
			"\exile_assets\font\RobotoMedium\RobotoMedium19",
			"\exile_assets\font\RobotoMedium\RobotoMedium20",
			"\exile_assets\font\RobotoMedium\RobotoMedium21",
			"\exile_assets\font\RobotoMedium\RobotoMedium22",
			"\exile_assets\font\RobotoMedium\RobotoMedium23",
			"\exile_assets\font\RobotoMedium\RobotoMedium24",
			"\exile_assets\font\RobotoMedium\RobotoMedium25",
			"\exile_assets\font\RobotoMedium\RobotoMedium26",
			"\exile_assets\font\RobotoMedium\RobotoMedium27",
			"\exile_assets\font\RobotoMedium\RobotoMedium28",
			"\exile_assets\font\RobotoMedium\RobotoMedium29",
			"\exile_assets\font\RobotoMedium\RobotoMedium30",
			"\exile_assets\font\RobotoMedium\RobotoMedium31",
			"\exile_assets\font\RobotoMedium\RobotoMedium34",
			"\exile_assets\font\RobotoMedium\RobotoMedium35",
			"\exile_assets\font\RobotoMedium\RobotoMedium37",
			"\exile_assets\font\RobotoMedium\RobotoMedium46"
		};
	};
	class OrbitronLight
	{
		spaceWidth=0.69999999;
		spacing=0.064999998;
		fonts[]=
		{
			"\exile_assets\font\OrbitronLight\OrbitronLight6",
			"\exile_assets\font\OrbitronLight\OrbitronLight7",
			"\exile_assets\font\OrbitronLight\OrbitronLight8",
			"\exile_assets\font\OrbitronLight\OrbitronLight9",
			"\exile_assets\font\OrbitronLight\OrbitronLight10",
			"\exile_assets\font\OrbitronLight\OrbitronLight11",
			"\exile_assets\font\OrbitronLight\OrbitronLight12",
			"\exile_assets\font\OrbitronLight\OrbitronLight13",
			"\exile_assets\font\OrbitronLight\OrbitronLight14",
			"\exile_assets\font\OrbitronLight\OrbitronLight15",
			"\exile_assets\font\OrbitronLight\OrbitronLight16",
			"\exile_assets\font\OrbitronLight\OrbitronLight17",
			"\exile_assets\font\OrbitronLight\OrbitronLight18",
			"\exile_assets\font\OrbitronLight\OrbitronLight19",
			"\exile_assets\font\OrbitronLight\OrbitronLight20",
			"\exile_assets\font\OrbitronLight\OrbitronLight21",
			"\exile_assets\font\OrbitronLight\OrbitronLight22",
			"\exile_assets\font\OrbitronLight\OrbitronLight23",
			"\exile_assets\font\OrbitronLight\OrbitronLight24",
			"\exile_assets\font\OrbitronLight\OrbitronLight25",
			"\exile_assets\font\OrbitronLight\OrbitronLight26",
			"\exile_assets\font\OrbitronLight\OrbitronLight27",
			"\exile_assets\font\OrbitronLight\OrbitronLight28",
			"\exile_assets\font\OrbitronLight\OrbitronLight29",
			"\exile_assets\font\OrbitronLight\OrbitronLight30",
			"\exile_assets\font\OrbitronLight\OrbitronLight31",
			"\exile_assets\font\OrbitronLight\OrbitronLight34",
			"\exile_assets\font\OrbitronLight\OrbitronLight35",
			"\exile_assets\font\OrbitronLight\OrbitronLight37",
			"\exile_assets\font\OrbitronLight\OrbitronLight46"
		};
	};
	class OrbitronMedium
	{
		spaceWidth=0.69999999;
		spacing=0.064999998;
		fonts[]=
		{
			"\exile_assets\font\OrbitronMedium\OrbitronMedium6",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium7",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium8",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium9",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium10",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium11",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium12",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium13",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium14",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium15",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium16",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium17",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium18",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium19",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium20",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium21",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium22",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium23",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium24",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium25",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium26",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium27",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium28",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium29",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium30",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium31",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium34",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium35",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium37",
			"\exile_assets\font\OrbitronMedium\OrbitronMedium46"
		};
	};
	class PressStart2P
	{
		spaceWidth=0.69999999;
		spacing=0.064999998;
		fonts[]=
		{
			"\exile_assets\font\PressStart2P\PressStart2P6",
			"\exile_assets\font\PressStart2P\PressStart2P7",
			"\exile_assets\font\PressStart2P\PressStart2P8",
			"\exile_assets\font\PressStart2P\PressStart2P9",
			"\exile_assets\font\PressStart2P\PressStart2P10",
			"\exile_assets\font\PressStart2P\PressStart2P11",
			"\exile_assets\font\PressStart2P\PressStart2P12",
			"\exile_assets\font\PressStart2P\PressStart2P13",
			"\exile_assets\font\PressStart2P\PressStart2P14",
			"\exile_assets\font\PressStart2P\PressStart2P15",
			"\exile_assets\font\PressStart2P\PressStart2P16",
			"\exile_assets\font\PressStart2P\PressStart2P17",
			"\exile_assets\font\PressStart2P\PressStart2P18",
			"\exile_assets\font\PressStart2P\PressStart2P19",
			"\exile_assets\font\PressStart2P\PressStart2P20",
			"\exile_assets\font\PressStart2P\PressStart2P21",
			"\exile_assets\font\PressStart2P\PressStart2P22",
			"\exile_assets\font\PressStart2P\PressStart2P23",
			"\exile_assets\font\PressStart2P\PressStart2P24",
			"\exile_assets\font\PressStart2P\PressStart2P25",
			"\exile_assets\font\PressStart2P\PressStart2P26",
			"\exile_assets\font\PressStart2P\PressStart2P27",
			"\exile_assets\font\PressStart2P\PressStart2P28",
			"\exile_assets\font\PressStart2P\PressStart2P29",
			"\exile_assets\font\PressStart2P\PressStart2P30",
			"\exile_assets\font\PressStart2P\PressStart2P31",
			"\exile_assets\font\PressStart2P\PressStart2P34",
			"\exile_assets\font\PressStart2P\PressStart2P35",
			"\exile_assets\font\PressStart2P\PressStart2P37",
			"\exile_assets\font\PressStart2P\PressStart2P46"
		};
	};
};
class CfgFunctions
{
	class A3
	{
		tag="BIS";
		project="arma3";
		class Ambient
		{
			file="exile_client\trashBin";
			class animalBehaviour
			{
			};
		};
		class Misc
		{
			delete progressLoadingScreen;
		};
		class BecauseArma
		{
			file="exile_client\bootstrap";
			class progressLoadingScreen
			{
			};
		};
		class MP
		{
			file="exile_client\trashBin";
			class execFSM
			{
			};
			class execVM
			{
			};
			class execRemote
			{
			};
			class addScore
			{
			};
			class setRespawnDelay
			{
			};
			class onPlayerConnected
			{
			};
			class initPlayable
			{
			};
			class missionTimeLeft
			{
			};
			class MP
			{
			};
			class MPexec
			{
			};
			class initMultiplayer
			{
			};
			class call
			{
			};
			class spawn
			{
			};
			class deleteVehicleCrew
			{
			};
			class admin
			{
			};
		};
	};
	class ExileClient
	{
		class Bootstrap
		{
			file="exile_client\bootstrap";
			class preStart
			{
				preStart=1;
			};
			class preInit
			{
				preInit=1;
			};
			class postInit
			{
				postInit=1;
			};
		};
		class FiniteStateMachine
		{
			file="exile_client\fsm";
			class login
			{
				ext=".fsm";
			};
			class scheduledCall
			{
				ext=".fsm";
			};
			class Exile_Animal_Goat
			{
				ext=".fsm";
			};
			class Exile_Animal_Hen
			{
				ext=".fsm";
			};
			class Exile_Animal_Rooster
			{
				ext=".fsm";
			};
			class Exile_Animal_Sheep
			{
				ext=".fsm";
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureExileAxeSwing01: Default
		{
			file="\exile_assets\animation\Exile_Axe_Swing01.rtm";
			looped=0;
			speed=1.5;
			mask="launcher";
			headBobStrength=0.2;
			headBobMode=2;
			disableWeapons=0;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKEnd=1;
		};
		class GestureExileSledgeHammerSwing01: Default
		{
			file="\exile_assets\animation\Exile_SledgeHammer_Swing01.rtm";
			looped=0;
			speed=0.75;
			mask="launcher";
			headBobStrength=0.2;
			headBobMode=2;
			disableWeapons=0;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKEnd=1;
		};
		class GestureExileSuicide01: Default
		{
			file="\exile_assets\animation\Exile_Suicide01.rtm";
			looped=0;
			speed=0.14354099;
			mask="rightHand";
			headBobStrength=0.2;
			headBobMode=2;
			disableWeapons=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKEnd=1;
		};
		class GestureExileSuicide02: Default
		{
			file="\exile_assets\animation\Exile_Suicide02.rtm";
			looped=0;
			speed=0.124481;
			mask="rightHand";
			headBobStrength=0.2;
			headBobMode=2;
			disableWeapons=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKEnd=1;
		};
		class GestureExileRussianRoulette01: Default
		{
			file="\exile_assets\animation\Exile_RussianRoulette01.rtm";
			looped=0;
			speed=0.30000001;
			mask="upperTorsoSelfShoot";
			headBobStrength=0.2;
			headBobMode=2;
			disableWeapons=1;
			disableWeaponsLong=1;
			rightHandIKBeg=0;
			rightHandIKEnd=0;
			leftHandIKBeg=0;
			leftHandIKEnd=0;
			rightHandIKCurve[]={};
			showItemInRightHand=0;
			showHandGun=1;
			weaponLowered=0;
			canPullTrigger=1;
			forceAim=1;
			enableOptics="false";
			showWeaponAim="false";
		};
		class GestureExileSuicideCancel01: Default
		{
			file="\A3\anims_f\Data\Anim\Sdr\gst\GestureHi";
			looped=0;
			speed=1;
			mask="rightHand";
			headBobStrength=0.2;
			headBobMode=2;
			disableWeapons=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKEnd=1;
		};
	};
	class BlendAnims
	{
		upperTorsoSelfShoot[]=
		{
			"head",
			1,
			"neck1",
			1,
			"neck",
			1,
			"weapon",
			0,
			"LeftShoulder",
			1,
			"LeftArm",
			1,
			"LeftArmRoll",
			1,
			"LeftForeArm",
			1,
			"LeftForeArmRoll",
			1,
			"LeftHand",
			1,
			"LeftHandRing",
			1,
			"LeftHandPinky1",
			1,
			"LeftHandPinky2",
			1,
			"LeftHandPinky3",
			1,
			"LeftHandRing1",
			1,
			"LeftHandRing2",
			1,
			"LeftHandRing3",
			1,
			"LeftHandMiddle1",
			1,
			"LeftHandMiddle2",
			1,
			"LeftHandMiddle3",
			1,
			"LeftHandIndex1",
			1,
			"LeftHandIndex2",
			1,
			"LeftHandIndex3",
			1,
			"LeftHandThumb1",
			1,
			"LeftHandThumb2",
			1,
			"LeftHandThumb3",
			1,
			"RightShoulder",
			1,
			"RightArm",
			1,
			"RightArmRoll",
			1,
			"RightForeArm",
			1,
			"RightForeArmRoll",
			1,
			"RightHand",
			1,
			"RightHandRing",
			1,
			"RightHandPinky1",
			1,
			"RightHandPinky2",
			1,
			"RightHandPinky3",
			1,
			"RightHandRing1",
			1,
			"RightHandRing2",
			1,
			"RightHandRing3",
			1,
			"RightHandMiddle1",
			1,
			"RightHandMiddle2",
			1,
			"RightHandMiddle3",
			1,
			"RightHandIndex1",
			1,
			"RightHandIndex2",
			1,
			"RightHandIndex3",
			1,
			"RightHandThumb1",
			1,
			"RightHandThumb2",
			1,
			"RightHandThumb3",
			0,
			"Spine",
			1,
			"Spine1",
			1,
			"Spine2",
			1,
			"Spine3",
			1,
			"pelvis",
			1
		};
	};
};
class CfgGlasses
{
	class G_I_Diving;
	class G_O_Diving;
	class G_B_Diving;
	class Exile_Glasses_Diving_AAF: G_I_Diving
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Diving Goggles (AAF, Forced)";
		mode=0;
	};
	class Exile_Glasses_Diving_CSAT: G_O_Diving
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Diving Goggles (CSAT, Forced)";
		mode=0;
	};
	class Exile_Glasses_Diving_NATO: G_B_Diving
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Diving Goggles (NATO, Forced)";
		mode=0;
	};
};
class CfgInGameUI
{
	class Actions
	{
		align="0x00 + 0x08";
		shadow=0;
		x="(safeZoneX + safeZoneW * 0.5)";
		y="(safeZoneY + safeZoneH * 0.6)";
		w="300 * pixelW";
		font="PuristaMedium";
		size="18 * pixelH";
		rows="5*SafeZoneH";
		arrowWidth=0.015;
		arrowHeight=0.02;
		iconArrowUp="\A3\ui_f\data\igui\cfg\actions\arrow_up_gs.paa";
		iconArrowDown="\A3\ui_f\data\igui\cfg\actions\arrow_down_gs.paa";
		background="\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
		underlineSelected=0;
		colorBackground[]=
		{
			"19/255",
			"22/255",
			"27/255",
			0.89999998
		};
		colorText[]=
		{
			"111/255",
			"113/255",
			"122/255",
			1
		};
		colorSelect[]={1,1,1,1};
		colorBackgroundSelected[]=
		{
			"63/255",
			"212/255",
			"252/255",
			0.60000002
		};
	};
	class DefaultAction
	{
		font="PuristaMedium";
		size="18 * pixelH";
		colorText[]=
		{
			"255/255",
			"180/255",
			"24/255",
			1
		};
		shadow=2;
		showHint=0;
		showNext=0;
		showLine=0;
		relativeToCursor=1;
		offsetX=0;
		offsetY=0.045000002;
		hotspotX=0;
		hotspotY=0;
		textTipFade=0.40000001;
		textTipDelay=0.40000001;
	};
	class CommandBar
	{
		left=-1;
		top=-1;
		show=0;
	};
};
class CfgInventoryGlobalVariable
{
	maxSoldierLoad=1700;
};
class CfgLocationTypes
{
	class Name;
	class ExileTerritory: Name
	{
		color[]={0.91000003,0,0,1};
		drawStyle="name";
		font="PuristaMedium";
		name="Exile Territory";
		textSize=0.050000001;
		size=15;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class HandGrenade_Stone;
	class Exile_AbstractItem_Interaction_Consuming
	{
		scope=1;
		sounds[]={};
		returnedItem="";
		stopBleeding=0;
		animations[]={};
		tools[]={};
	};
	class Exile_AbstractItem_Interaction_Eating: Exile_AbstractItem_Interaction_Consuming
	{
		scope=1;
		sounds[]=
		{
			"SndExileHeartbeatEating01",
			"SndExileHeartbeatEating02"
		};
	};
	class Exile_AbstractItem_Interaction_Eating_Can: Exile_AbstractItem_Interaction_Eating
	{
		tools[]=
		{
			"Exile_Item_CanOpener"
		};
	};
	class Exile_AbstractItem_Interaction_Drinking: Exile_AbstractItem_Interaction_Consuming
	{
		scope=1;
		sounds[]=
		{
			"SndExileHeartbeatDrinking01"
		};
	};
	class Exile_AbstractItem_Interaction_Consuming_Healing: Exile_AbstractItem_Interaction_Consuming
	{
		animations[]=
		{
			"AinvPknlMstpSlayWnonDnon_medic",
			"AinvPknlMstpSlayWrflDnon_medic",
			"AinvPknlMstpSlayWpstDnon_medic",
			"AinvPknlMstpSlayWrflDnon_medic",
			"AinvPknlMstpSlayWnonDnon_medic",
			"AinvPknlMstpSlayWnonDnon_medic",
			"AinvPknlMstpSlayWrflDnon_medic",
			"AinvPknlMstpSlayWpstDnon_medic",
			"AinvPknlMstpSlayWrflDnon_medic",
			"AinvPknlMstpSlayWnonDnon_medic",
			"AinvPpneMstpSlayWnonDnon_medic",
			"AinvPpneMstpSlayWrflDnon_medic",
			"AinvPpneMstpSlayWpstDnon_medic",
			"AinvPpneMstpSlayWrflDnon_medic",
			"AinvPpneMstpSlayWnonDnon_medic"
		};
	};
	class Exile_AbstractItem_Interaction_Using
	{
		scope=1;
		chance=100;
		successFunction="";
		successNotification="";
	};
	class Exile_AbstractItem_Interaction_Constructing
	{
		scope=1;
	};
	class Exile_AbstractItem: CA_Magazine
	{
		scope=1;
		descriptionShort="Dummy";
		displayName="Dummy";
		count=1;
		mass=1;
		picture="\exile_assets\texture\item\Dummy.paa";
		model="\exile_assets\model\Dummy.p3d";
		class Interactions
		{
		};
	};
	class Exile_Item_BreachingCharge_Wood: Exile_AbstractItem
	{
		scope=2;
		displayName="Breaching Charge (Wood)";
		descriptionShort="A basic breaching charge to destroy wood constructions.<br/><br/>It requires three breaching charges to destroy one construction object. Can only plant one at a time per construction object.";
		mass=20;
		model="\A3\Weapons_F\Explosives\c4_charge_small";
		picture="\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
	};
	class Exile_Item_BreachingCharge_Metal: Exile_AbstractItem
	{
		scope=2;
		displayName="Breaching Charge (Metal)";
		descriptionShort="Can be used to destroy reinforced wood constructions.<br/><br/>It requires three breaching charges to destroy one construction object. Can only plant one at a time per construction object.";
		mass=80;
		model="\A3\Weapons_F\Explosives\satchel_i";
		picture="\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
	};
	class Exile_Item_BreachingCharge_BigMomma: Exile_AbstractItem
	{
		scope=2;
		displayName="Breaching Charge (Big Momma)";
		descriptionShort="An expensive breaching charge that is used to destroy concrete constructions.<br/><br/>It requires three breaching charges to destroy one construction object. Can only plant one at a time per construction object.";
		mass=250;
		model="\exile_assets\model\Exile_Item_BigMomma.p3d";
		picture="\exile_assets\texture\item\Exile_Item_BigMomma_ca.paa";
	};
	class Exile_Item_Bandage: Exile_AbstractItem
	{
		scope=2;
		displayName="Bandage";
		descriptionShort="A small bandage to stop bleeding wounds.<br/>Health: +5%/10s";
		mass=10;
		model="\A3\Structures_F_EPA\Items\Medical\Bandage_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Bandage.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding=1;
				effects[]=
				{
					{0,5,10}
				};
			};
		};
	};
	class Exile_Item_BaseCameraKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Security Camera";
		descriptionShort="I see something you don't see!";
		mass=25;
		model="exile_assets\model\Exile_Construction_BaseCamera_world.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Camera.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_BBQSandwich: Exile_AbstractItem
	{
		scope=2;
		displayName="BBQ Sandwich (Raw)";
		descriptionShort="Some things shouldn't be canned.<br/>Hunger +40%/60s";
		model="\exile_assets\model\Exile_Item_BBQSandwich.p3d";
		picture="\exile_assets\texture\item\Exile_Item_BBQSandwich.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,40,60}
				};
			};
		};
	};
	class Exile_Item_BBQSandwich_Cooked: Exile_AbstractItem
	{
		scope=2;
		displayName="BBQ Sandwich (Cooked)";
		descriptionShort="Some things shouldn't be canned.<br/>Hunger +100%/30s";
		model="\exile_assets\model\Exile_Item_BBQSandwich_Cooked.p3d";
		picture="\exile_assets\texture\item\Exile_Item_BBQSandwich_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Exile_Item_BeefParts: Exile_AbstractItem
	{
		scope=2;
		displayName="Beef Parts";
		descriptionShort="A vegetarians nightmare. <br/>Hunger: +30%/30s";
		model="\exile_assets\model\Exile_Item_BeefParts.p3d";
		picture="\exile_assets\texture\item\Exile_Item_BeefParts.paa";
		mass=15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,30,30}
				};
			};
		};
	};
	class Exile_Item_Beer: Exile_AbstractItem
	{
		scope=2;
		displayName="Hausmann Beer";
		descriptionShort="No expiration date, no problem! <br/>Thirst: +75%/30s<br/>Temperature: +0.5°C%/10s<br/>Alc. Vol.: 7‰";
		picture="\exile_assets\texture\item\Exile_Item_Beer.paa";
		model="\exile_assets\model\Exile_Item_Beer.p3d";
		mass=10;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,75,30},
					{4,0.40000001,0},
					{5,0.5,10}
				};
			};
		};
	};
	class Exile_Item_BushKit_Green: Exile_AbstractItem
	{
		scope=2;
		displayName="Bush Kit (Green)";
		descriptionShort="We want: A SHRUBBERY!";
		mass=50;
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				successFunction="ExileClient_object_bush_attachGreenBush";
				successNotification="TurnedIntoABushNotification";
			};
		};
	};
	class Exile_Item_CamoTentKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Camo Tent Kit";
		descriptionShort="A packed tent.";
		model="\a3\structures_f\Civ\Camping\Sleeping_bag_folded_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_CamoTentKit.paa";
		mass=10;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_CampFireKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Camp Fire Kit";
		descriptionShort="Camping Fire";
		mass=10;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Construction_CampFire.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_CanOpener: Exile_AbstractItem
	{
		scope=2;
		displayName="Can Opener";
		descriptionShort="Used to open cans.";
		model="\A3\Structures_F_EPA\Items\Tools\CanOpener_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_CanOpener.paa";
		mass=5;
	};
	class Exile_Item_Can_Empty: Exile_AbstractItem
	{
		scope=2;
		displayName="Can (Empty)";
		descriptionShort="An empty tin can.";
		model="\exile_assets\model\Exile_Item_Can_Empty.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Can_Empty.paa";
		mass=5;
	};
	class Exile_Item_CarWheel: Exile_AbstractItem
	{
		scope=2;
		displayName="Car Wheel";
		descriptionShort="A simple car wheel. Looks a bit like a tire.";
		model="\A3\Structures_F\Civ\Garbage\Tyre_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_CarWheel.paa";
		mass=100;
	};
	class Exile_Item_CatFood: Exile_AbstractItem
	{
		scope=2;
		displayName="Cat Food (Raw)";
		descriptionShort="Meow... <br/>Hunger: +40%/40s";
		model="\exile_assets\model\Exile_Item_Catfood.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Catfood.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,40,40}
				};
			};
		};
	};
	class Exile_Item_CatFood_Cooked: Exile_AbstractItem
	{
		scope=2;
		displayName="Cat Food (Cooked)";
		descriptionShort="Meow... <br/>Hunger: +100%/20s";
		model="\exile_assets\model\Exile_Item_Catfood_Cooked.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Catfood_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Exile_Item_Cement: Exile_AbstractItem
	{
		scope=2;
		displayName="Bag of Cement";
		picture="\exile_assets\texture\item\Exile_Item_Cement.paa";
		model="\exile_assets\model\Exile_Item_Cement.p3d";
		descriptionShort="Perfect for making shoes that fits every size!";
		mass=25;
	};
	class Exile_Item_Cheathas: Exile_AbstractItem
	{
		scope=2;
		displayName="Cheathas";
		descriptionShort="Perfect for a cozy TV evening with friends. If you have some. <br/>Hunger: +30%/30s";
		model="\exile_assets\model\Exile_Item_Cheathas.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Cheathas.paa";
		mass=15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,30,30}
				};
			};
		};
	};
	class Exile_Item_ChocolateMilk: Exile_AbstractItem
	{
		scope=2;
		displayName="Chocolate Milk";
		descriptionShort="Half chocolate, half questionable milk.<br/>Thirst: +35%/10s";
		picture="\exile_assets\texture\item\Exile_Item_ChocolateMilk_ca.paa";
		model="\exile_assets\model\Exile_Item_ChocolateMilk.p3d";
		mass=7;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,35,10}
				};
			};
		};
	};
	class Exile_Item_ChristmasTinner: Exile_AbstractItem
	{
		scope=2;
		displayName="Christmas Tinner (Raw)";
		descriptionShort="Festive!<br/>Hunger: +40%/60s";
		model="\exile_assets\model\Exile_Item_ChristmasTinner.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ChristmasTinner.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,40,60}
				};
			};
		};
	};
	class Exile_Item_ChristmasTinner_Cooked: Exile_AbstractItem
	{
		scope=2;
		displayName="Christmas Tinner (Cooked)";
		descriptionShort="Festive!<br/>Hunger: +100%/30s";
		model="\exile_assets\model\Exile_Item_ChristmasTinner_Cooked.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ChristmasTinner_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Exile_Item_CockONut: Exile_AbstractItem
	{
		scope=2;
		displayName="Cock'O'Nut";
		descriptionShort="The real candy bar. <br/>Hunger: +20%/40s";
		model="\exile_assets\model\Exile_Item_CockONut.p3d";
		picture="\exile_assets\texture\item\Exile_Item_CockONut.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,20,40}
				};
			};
		};
	};
	class Exile_Item_Codelock: Exile_AbstractItem
	{
		scope=2;
		displayName="Code Lock";
		descriptionShort="Used to lock doors or gates on bases.";
		model="\exile_assets\model\Exile_Item_Codelock.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Codelock.paa";
		mass=5;
	};
	class Exile_Item_ConcreteDoorKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Concrete Door Kit";
		descriptionShort="Obviously an even better construction for knock-knock jokes.";
		mass=100;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ConcreteDoorKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_ConcreteDoorwayKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Concrete Doorway Kit";
		descriptionShort="The perfect construction for knock-knock jokes.";
		mass=100;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ConcreteDoorwayKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_ConcreteFloorKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Concrete Floor Kit";
		descriptionShort="A 6x6m floor made out of concrete.";
		mass=100;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ConcreteFloorKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_ConcreteFloorPortKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Concrete Floor Port Kit";
		descriptionShort="A 6x6m floor made out of concrete. This is a special floor with a hole in it. Place stairs inside to get to the next floor or use it was a secret escape on the bottom of your base.";
		mass=100;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ConcreteFloorPortKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_ConcreteGateKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Concrete Gate Kit";
		descriptionShort="Similar to a door, but is used for vehicles.";
		mass=100;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ConcreteGate.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_ConcreteStairsKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Concrete Stairs Kit";
		descriptionShort="Since we do not have an elevator yet...";
		mass=100;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ConcreteStairsKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_ConcreteSupportKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Concrete Support Kit";
		descriptionShort="An effective way to build on not-so-flat terrain.";
		mass=100;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ConcreteSupportKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_ConcreteWallKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Concrete Wall Kit";
		descriptionShort="A 6x3m wall made out of concrete and steel.";
		mass=100;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ConcreteWallKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_ConcreteWindowKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Concrete Window Kit";
		descriptionShort="Offers a good position to shoot out of your base. Does not contain glass.";
		mass=100;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ConcreteWindowKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_CookingPot: Exile_AbstractItem
	{
		scope=2;
		displayName="Cooking Pot";
		descriptionShort="If you know how to cook, this pot will surely become handy sometime.";
		model="\exile_assets\model\Exile_Item_Cookingpot.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Cookingpot.paa";
		mass=20;
	};
	class Exile_Item_CordlessScrewdriver: Exile_AbstractItem
	{
		scope=2;
		displayName="Cordless Screwdriver";
		descriptionShort="Let's drill some holes... :)";
		model="\A3\Structures_F\Items\Tools\DrillAku_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_CordlessScrewdriver.paa";
		mass=30;
	};
	class Exile_Item_Defibrillator: Exile_AbstractItem
	{
		scope=2;
		displayName="Defibrillator";
		descriptionShort="";
		model="\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Defibrillator.paa";
		mass=30;
	};
	class Exile_Item_DogFood: Exile_AbstractItem
	{
		scope=2;
		displayName="Dog Food (Raw)";
		descriptionShort="Woof, Woof, Bark! <br/>Hunger: +30%/30s";
		model="\exile_assets\model\Exile_Item_DogFood.p3d";
		picture="\exile_assets\texture\item\Exile_Item_DogFood.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,30,30}
				};
			};
		};
	};
	class Exile_Item_DogFood_Cooked: Exile_AbstractItem
	{
		scope=2;
		displayName="Dog Food (Cooked)";
		descriptionShort="Good boy! <br/>Hunger: +100%/20s";
		model="\exile_assets\model\Exile_Item_DogFood_Open.p3d";
		picture="\exile_assets\texture\item\Exile_Item_DogFood_Open.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Exile_Item_DsNuts: Exile_AbstractItem
	{
		scope=2;
		displayName="D's Nuts";
		descriptionShort="A tiny can with huge nuts. <br/>Hunger: +30%/60s";
		model="\exile_assets\model\Exile_Item_DsNuts.p3d";
		picture="\exile_assets\texture\item\Exile_Item_DsNuts.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,30,60}
				};
			};
		};
	};
	class Exile_Item_DuctTape: Exile_AbstractItem
	{
		scope=2;
		displayName="Duct Tape";
		descriptionShort="Can fix almost anything. If it moves and it should not, use Duct Tape.";
		model="\a3\structures_f_epa\Items\Tools\DuctTape_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_DuctTape.paa";
		mass=5;
	};
	class Exile_Item_EMRE: Exile_AbstractItem
	{
		scope=2;
		displayName="EMRE";
		descriptionShort="Extra delicious, well tinned remains. <br/>Hunger: +75%/60s";
		model="\exile_assets\model\Exile_Item_EMRE.p3d";
		picture="\exile_assets\texture\item\Exile_Item_EMRE.paa";
		mass=20;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,75,60}
				};
			};
		};
	};
	class Exile_Item_EnergyDrink: Exile_AbstractItem
	{
		scope=2;
		displayName="Energy Drink";
		descriptionShort="Gotta go fast!<br/>Thirst: +75%/20s";
		picture="\exile_assets\texture\item\Exile_Item_EnergyDrink.paa";
		model="\exile_assets\model\Exile_Item_EnergyDrink.p3d";
		mass=7;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,75,20}
				};
			};
		};
	};
	class Exile_Item_ExtensionCord: Exile_AbstractItem
	{
		scope=2;
		displayName="Extension Cord";
		descriptionShort="Used to connect electronic devices to a power supply.";
		model="\a3\structures_f\Items\Electronics\ExtensionCord_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_ExtensionCord.paa";
		mass=5;
	};
	class Exile_Item_FireExtinguisher: Exile_AbstractItem
	{
		scope=2;
		displayName="Fire Extinguisher";
		descriptionShort="Used to put out fires.";
		model="\A3\Structures_F_EPA\Items\Tools\FireExtinguisher_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_FireExtinguisher.paa";
		mass=30;
	};
	class Exile_Item_Flag: Exile_AbstractItem
	{
		scope=2;
		displayName="Territory Flag Kit";
		descriptionShort="A flag in cardboard box and your cats favorite toy. Can be used to setup a base zone flag.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_FlagStolen1: Exile_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 1)";
		descriptionShort="Can be sold at the trader.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
	};
	class Exile_Item_FlagStolen10: Exile_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 10)";
		descriptionShort="Can be sold at the trader.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
	};
	class Exile_Item_FlagStolen2: Exile_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 2)";
		descriptionShort="Can be sold at the trader.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
	};
	class Exile_Item_FlagStolen3: Exile_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 3)";
		descriptionShort="Can be sold at the trader.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
	};
	class Exile_Item_FlagStolen4: Exile_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 4)";
		descriptionShort="Can be sold at the trader.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
	};
	class Exile_Item_FlagStolen5: Exile_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 5)";
		descriptionShort="Can be sold at the trader.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
	};
	class Exile_Item_FlagStolen6: Exile_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 6)";
		descriptionShort="Can be sold at the trader.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
	};
	class Exile_Item_FlagStolen7: Exile_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 7)";
		descriptionShort="Can be sold at the trader.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
	};
	class Exile_Item_FlagStolen8: Exile_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 8)";
		descriptionShort="Can be sold at the trader.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
	};
	class Exile_Item_FlagStolen9: Exile_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 9)";
		descriptionShort="Can be sold at the trader.";
		model="\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass=50;
	};
	class Exile_Item_FloodLightKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Flood Light Kit";
		descriptionShort="Flood Light";
		mass=10;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Construction_FloodLight.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_Foolbox: Exile_AbstractItem
	{
		scope=2;
		displayName="Foolbox";
		picture="\exile_assets\texture\item\Exile_Item_Toolbox.paa";
		model="\exile_assets\model\Exile_Item_Toolbox.p3d";
		descriptionShort="The ultimate tool box for the overly-manly-man.";
		mass=50;
	};
	class Exile_Item_FortificationUpgrade: Exile_AbstractItem
	{
		scope=2;
		displayName="Fortification Upgrade Kit";
		picture="\exile_assets\texture\item\Exile_Item_MetalBoard.paa";
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort="Used to upgrade wood constructions to fortified wood constructions";
		mass=100;
	};
	class Exile_Item_FuelBarrelEmpty: Exile_AbstractItem
	{
		scope=2;
		displayName="Fuel Barrel (Empty)";
		descriptionShort="";
		model="\a3\structures_f\Items\Vessels\metalbarrel_f.p3d";
		picture="\exile_assets\texture\item\Exile_Item_FuelBarrel.paa";
		mass=150;
	};
	class Exile_Item_FuelBarrelFull: Exile_AbstractItem
	{
		scope=2;
		displayName="Fuel Barrel (Full)";
		descriptionShort="";
		model="\a3\structures_f\Items\Vessels\metalbarrel_f.p3d";
		picture="\exile_assets\texture\item\Exile_Item_FuelBarrel.paa";
		mass=150;
		count=300;
	};
	class Exile_Item_FuelCanisterEmpty: Exile_AbstractItem
	{
		scope=2;
		displayName="Fuel Canister (Empty)";
		descriptionShort="";
		model="\a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_FuelCanister.paa";
		mass=2;
	};
	class Exile_Item_FuelCanisterFull: Exile_AbstractItem
	{
		scope=2;
		displayName="Fuel Canister (Full)";
		descriptionShort="";
		model="\a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_FuelCanister.paa";
		mass=22;
		count=20;
	};
	class Exile_Item_GloriousKnakworst: Exile_AbstractItem
	{
		scope=2;
		displayName="Glorious Knakworst (Raw)";
		descriptionShort="As Dutch as it gets. <br/>Hunger +60%/30s";
		model="\exile_assets\model\Exile_Item_Knakworst.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Knakworst.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,60,30}
				};
			};
		};
	};
	class Exile_Item_GloriousKnakworst_Cooked: Exile_AbstractItem
	{
		scope=2;
		displayName="Glorious Knakworst (Cooked)";
		descriptionShort="As Dutch as it gets. <br/>Hunger +100%/20s";
		model="\exile_assets\model\Exile_Item_Knakworst_Cooked.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Knakworst_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Exile_Item_Grinder: Exile_AbstractItem
	{
		scope=2;
		displayName="Grinder";
		descriptionShort="";
		model="\A3\Structures_F\Items\Tools\Grinder_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Grinder.paa";
		mass=30;
	};
	class Exile_Item_Hammer: Exile_AbstractItem
	{
		scope=2;
		displayName="Hammer";
		descriptionShort="STOP... Hammer time!";
		model="\A3\Structures_F\Items\Tools\Hammer_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Hammer.paa";
		mass=10;
	};
	class Exile_Item_Handsaw: Exile_AbstractItem
	{
		scope=2;
		displayName="Handsaw";
		descriptionShort="";
		model="\A3\Structures_F\Items\Tools\Saw_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Handsaw.paa";
		mass=20;
	};
	class Exile_Item_HBarrier5Kit: Exile_AbstractItem
	{
		scope=2;
		displayName="H-barrier (5 Blocks)";
		picture="\exile_assets\texture\item\Exile_Item_HBarrier5Kit.paa";
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort="Can be used to craft a 5-block H-barrier.";
		mass=150;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_Heatpack: Exile_AbstractItem
	{
		scope=2;
		displayName="Thermal Buddy";
		descriptionShort="Can be used to warm you up a bit. You just need to rub it.<br/>Temperature: +1°C/10s";
		mass=5;
		model="\A3\Structures_F_EPA\Items\Medical\HeatPack_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Heatpack.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[]=
				{
					{5,1,10}
				};
			};
		};
	};
	class Exile_Item_InstaDoc: Exile_AbstractItem
	{
		scope=2;
		displayName="InstaDoc";
		descriptionShort="The universal auto-injector to regenerate health and stop bleeding wounds.<br/>Health: +100%/30s";
		mass=15;
		model="\exile_assets\model\Exile_Item_Instadoc.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Instadoc.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding=1;
				effects[]=
				{
					{0,100,30}
				};
			};
		};
	};
	class Exile_Item_InstantCoffee: Exile_AbstractItem
	{
		scope=2;
		displayName="Instant Coffee Beanz";
		descriptionShort="100% Beanz!<br/>Hunger +5%/10s";
		model="\exile_assets\model\Exile_Item_InstantCoffee.p3d";
		picture="\exile_assets\texture\item\Exile_Item_InstantCoffee.paa";
		mass=10;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,10}
				};
			};
		};
	};
	class Exile_Item_JunkMetal: Exile_AbstractItem
	{
		scope=2;
		displayName="Junk Metal";
		descriptionShort="This must have been something useful before. Rest in pieces.";
		picture="\exile_assets\texture\item\Exile_Item_Junkmetal.paa";
		model="\exile_assets\model\Exile_Item_Junkmetal.p3d";
		mass=25;
	};
	class Exile_Item_Knife: Exile_AbstractItem
	{
		scope=2;
		displayName="Knife";
		descriptionShort="Combine this with bubble gum and do some MacGyver-like things with it.";
		model="\exile_assets\model\Exile_Item_Knife.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Knife.paa";
		mass=10;
	};
	class Exile_Item_Laptop: Exile_AbstractItem
	{
		scope=2;
		displayName="Base Laptop";
		descriptionShort="The best of best!";
		picture="\exile_assets\texture\item\Exile_Item_Laptop.paa";
		model="\exile_assets\model\Exile_Construction_Laptop.p3d";
		mass=30;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_Leaves: Exile_AbstractItem
	{
		scope=2;
		displayName="Leaves";
		descriptionShort="A very useful stack of leaves.";
		model="\exile_assets\model\item\Exile_Item_Leaves.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Leaves.paa";
		mass=5;
	};
	class Exile_Item_LightBulb: Exile_AbstractItem
	{
		scope=2;
		displayName="Light Bulb";
		descriptionShort="How many bambis does it take it replace a light bulb? None. They do not know what a light bulb is. Haha. Ha. Okay, that was lame.";
		model="\exile_assets\model\Exile_Item_LightBulb.p3d";
		picture="\exile_assets\texture\item\Exile_Item_LightBulb.paa";
		mass=5;
	};
	class Exile_Item_MacasCheese: Exile_AbstractItem
	{
		scope=2;
		displayName="Maca's Cheese (Raw)";
		descriptionShort="#BlameMaca! <br/>Hunger: +40%/60s";
		model="\exile_assets\model\Exile_Item_MacasCheese.p3d";
		picture="\exile_assets\texture\item\Exile_Item_MacasCheese.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,40,60}
				};
			};
		};
	};
	class Exile_Item_MacasCheese_Cooked: Exile_AbstractItem
	{
		scope=2;
		displayName="Maca's Cheese (Cooked)";
		descriptionShort="Extra cheesy <br/>Hunger: +100%/20s";
		model="\exile_assets\model\Exile_Item_MacasCheese_Open.p3d";
		picture="\exile_assets\texture\item\Exile_Item_MacasCheese_Open.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Exile_Item_Magazine01: Exile_AbstractItem
	{
		scope=2;
		displayName="Better Prisoners #01";
		descriptionShort="First edition of the Better Prisoners magazine.";
		model="\exile_assets\model\Exile_Item_Magazine01.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Magazine01.paa";
		mass=5;
	};
	class Exile_Item_Magazine02: Exile_AbstractItem
	{
		scope=2;
		displayName="Better Prisoners #02";
		descriptionShort="Second edition of the Better Prisoners magazine.";
		model="\exile_assets\model\Exile_Item_Magazine02.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Magazine02.paa";
		mass=5;
	};
	class Exile_Item_Magazine03: Exile_AbstractItem
	{
		scope=2;
		displayName="Better Prisoners #03";
		descriptionShort="Third edition of the Better Prisoners magazine.";
		model="\exile_assets\model\Exile_Item_Magazine03.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Magazine03.paa";
		mass=5;
	};
	class Exile_Item_Magazine04: Exile_AbstractItem
	{
		scope=2;
		displayName="Better Prisoners #04";
		descriptionShort="Fourth edition of the Better Prisoners magazine.";
		model="\exile_assets\model\Exile_Item_Magazine04.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Magazine04.paa";
		mass=5;
	};
	class Exile_Item_Matches: Exile_AbstractItem
	{
		scope=2;
		displayName="Box of Matches";
		descriptionShort="Kill it with fire!";
		model="\exile_assets\model\Exile_Item_Matchbox.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Matchbox.paa";
		mass=1;
		count=10;
	};
	class Exile_Item_MetalBoard: Exile_AbstractItem
	{
		scope=2;
		displayName="Metal Board";
		descriptionShort="Can be used to fortify wood constructions.";
		mass=50;
		model="\exile_assets\model\Exile_Item_MetalBoard.p3d";
		picture="\exile_assets\texture\item\Exile_Item_MetalBoard.paa";
	};
	class Exile_Item_MetalHedgehogKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Metal Hedgehog Kit";
		descriptionShort="Can be used to construct a metal hedgehog.";
		mass=50;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Construction_Hedgehog_Metal.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_MetalPole: Exile_AbstractItem
	{
		scope=2;
		displayName="Metal Pole";
		descriptionShort="Time for a pole dance!";
		mass=20;
		model="\exile_assets\model\Exile_Item_MetalPole.p3d";
		picture="\exile_assets\texture\item\Exile_Item_MetalPole.paa";
	};
	class Exile_Item_MetalScrews: Exile_AbstractItem
	{
		scope=2;
		displayName="Box of Screws";
		picture="\exile_assets\texture\item\Exile_Item_MetalScrews.paa";
		model="\exile_assets\model\Exile_Item_MetalScrews.p3d";
		descriptionShort="Not only do I have a screw loose. I can't find the screw driver.";
		mass=10;
	};
	class Exile_Item_MetalWire: Exile_AbstractItem
	{
		scope=2;
		displayName="Metal Wire";
		descriptionShort="In case you do not know what a metal wire is: It is a wire made out of metal.";
		model="\A3\Structures_F_EPA\Items\Tools\MetalWire_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_MetalWire.paa";
		mass=5;
	};
	class Exile_Item_MobilePhone: Exile_AbstractItem
	{
		scope=2;
		displayName="Mobile Phone";
		descriptionShort="A massive, ancient mobile phone. Magically capable of 8G network.";
		picture="\exile_assets\texture\item\Exile_Item_Phone_ca.paa";
		model="\exile_assets\model\Exile_Item_Phone.p3d";
		mass=10;
	};
	class Exile_Item_Moobar: Exile_AbstractItem
	{
		scope=2;
		displayName="Moobar";
		descriptionShort="Some yummi milky chocolate! <br/>Hunger: +10%/30s";
		model="\exile_assets\model\Exile_Item_Moobar.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Moobar.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,10,30}
				};
			};
		};
	};
	class Exile_Item_MountainDupe: Exile_AbstractItem
	{
		scope=2;
		displayName="Mountain Dupe";
		descriptionShort="Original Bavarian Soft Drink<br/>Thirst: +50%/20s";
		picture="\exile_assets\texture\item\Exile_Item_MountainDupe.paa";
		model="\exile_assets\model\Exile_Item_MountainDupe.p3d";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,50,20}
				};
			};
		};
	};
	class Exile_Item_Noodles: Exile_AbstractItem
	{
		scope=2;
		displayName="Chemical Noodles";
		descriptionShort="BIO is yesterday's quality. <br/>Hunger: +25%/50s";
		model="\exile_assets\model\Exile_Item_Noodles.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Noodles.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,25,50}
				};
			};
		};
	};
	class Exile_Item_OilCanister: Exile_AbstractItem
	{
		scope=2;
		displayName="Oil Canister";
		descriptionShort="";
		model="\A3\Structures_F\Items\Vessels\CanisterOil_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_OilCanister.paa";
		mass=30;
	};
	class Exile_Item_PlasticBottleCoffee: Exile_AbstractItem
	{
		scope=2;
		displayName="Plastic Bottle (Coffee)";
		descriptionShort="No milk, no sugar. Just pure darkness.<br/>Thirst: +100%/60s<br/>Hunger: +10%/5s<br/>Temperature: +0.5°C%/10s";
		picture="\exile_assets\texture\item\Exile_Item_Waterbottle_Coffee.paa";
		model="\exile_assets\model\Exile_Item_Waterbottle_Coffee.p3d";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem="Exile_Item_PlasticBottleEmpty";
				effects[]=
				{
					{3,100,60},
					{2,10,5},
					{5,0.5,10}
				};
			};
		};
	};
	class Exile_Item_PlasticBottleDirtyWater: Exile_AbstractItem
	{
		scope=2;
		displayName="Plastic Bottle (Dirty Water)";
		descriptionShort="Contains a lot of bacteria. Drink at your own risk.<br/>Thirst: +10%/20s<br/>Health: -10%/5s";
		picture="\exile_assets\texture\item\Exile_Item_Waterbottle_Dirty.paa";
		model="\exile_assets\model\Exile_Item_Waterbottle_Dirty.p3d";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem="Exile_Item_PlasticBottleEmpty";
				effects[]=
				{
					{3,10,20},
					{0,-10,5}
				};
			};
		};
	};
	class Exile_Item_PlasticBottleEmpty: Exile_AbstractItem
	{
		scope=2;
		displayName="Plastic Bottle (Empty)";
		descriptionShort="Fill it with salt water at the ocean or rain water at local water tanks. Or collect the deposit at a trader.";
		picture="\exile_assets\texture\item\Exile_Item_Waterbottle_Empty.paa";
		model="\exile_assets\model\Exile_Item_Waterbottle_Empty.p3d";
		mass=5;
	};
	class Exile_Item_PlasticBottleFreshWater: Exile_AbstractItem
	{
		scope=2;
		displayName="Plastic Bottle (Fresh Water)";
		descriptionShort="Enjoy the refreshing taste of nothing.<br/>Thirst: +80%/15s";
		picture="\exile_assets\texture\item\Exile_Item_Waterbottle_Clean.paa";
		model="\exile_assets\model\Exile_Item_Waterbottle_Clean.p3d";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem="Exile_Item_PlasticBottleEmpty";
				effects[]=
				{
					{3,80,15}
				};
			};
		};
	};
	class Exile_Item_PlasticBottleSaltWater: Exile_AbstractItem
	{
		scope=2;
		displayName="Plastic Bottle (Salt Water)";
		descriptionShort="Drink this fishy soup to commit suicide slowly.<br/>Thirst: -20%/10s<br/>Health: -30%/15s";
		picture="\exile_assets\texture\item\Exile_Item_Waterbottle_Salty.paa";
		model="\exile_assets\model\Exile_Item_Waterbottle_Salty.p3d";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem="Exile_Item_PlasticBottleEmpty";
				effects[]=
				{
					{3,-20,10},
					{0,-30,15}
				};
			};
		};
	};
	class Exile_Item_Pliers: Exile_AbstractItem
	{
		scope=2;
		displayName="Pliers";
		descriptionShort="";
		model="\A3\Structures_F\Items\Tools\Pliers_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Pliers.paa";
		mass=10;
	};
	class Exile_Item_PortableGeneratorKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Portable Generator Kit";
		descriptionShort="Can be used to switch your flood lights on and off.";
		mass=10;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Construction_PortableGenerator.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_PowerDrink: Exile_AbstractItem
	{
		scope=2;
		displayName="Power Drink";
		descriptionShort="Recharge in seconds!<br/>Thirst: +95%/10s";
		picture="\exile_assets\texture\item\Exile_Item_PowerDrink.paa";
		model="\exile_assets\model\Exile_Item_PowerDrink.p3d";
		mass=15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,95,10}
				};
			};
		};
	};
	class Exile_Item_Raisins: Exile_AbstractItem
	{
		scope=2;
		displayName="Raisins";
		descriptionShort="There is a time in life where you don't regret to eat this. <br/>Hunger: +15%/30s";
		model="\exile_assets\model\Exile_Item_Raisins.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Raisins.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30}
				};
			};
		};
	};
	class Exile_Item_RazorWireKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Razor Wire Kit";
		picture="\exile_assets\texture\item\Exile_Item_RazorWireKit.paa";
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort="Good to stop infantry, but can be destroyed by driving into it. Might rip the wheels, though.";
		mass=50;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_RepairKitConcrete: Exile_AbstractItem
	{
		scope=2;
		displayName="Concrete Repair Kit";
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Construction_Crate.paa";
		descriptionShort="Used to repair concrete constructions.";
		mass=100;
	};
	class Exile_Item_RepairKitMetal: Exile_AbstractItem
	{
		scope=2;
		displayName="Metal Repair Kit";
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Construction_Crate.paa";
		descriptionShort="Used to repair metal constructions.";
		mass=75;
	};
	class Exile_Item_RepairKitWood: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Repair Kit";
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Construction_Crate.paa";
		descriptionShort="Used to repair wood constructions.";
		mass=50;
	};
	class Exile_Item_Rope: Exile_AbstractItem
	{
		scope=2;
		displayName="Rope";
		descriptionShort="Time for some rope skipping!";
		mass=10;
		model="\exile_assets\model\Exile_Item_Rope.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Rope.paa";
	};
	class Exile_Item_RubberDuck: Exile_AbstractItem
	{
		scope=2;
		displayName="Linus' Rubber Duck";
		descriptionShort="A rubber duck";
		mass=5;
		model="\exile_assets\model\Exile_Item_RubberDuck.p3d";
		picture="\exile_assets\texture\item\Exile_Item_RubberDuck.paa";
	};
	class Exile_Item_SafeKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Safe Kit";
		descriptionShort="Storage for the elite.";
		mass=200;
		model="\exile_assets\model\Exile_Container_Safe_Groundmodel.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Safe.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_Sand: Exile_AbstractItem
	{
		scope=2;
		displayName="Bag of Sand";
		picture="\exile_assets\texture\item\Exile_Item_Sand.paa";
		model="\exile_assets\model\Exile_Item_Sand.p3d";
		descriptionShort="A portable do-it-yourself sand castle";
		mass=25;
	};
	class Exile_Item_SandBagsKit_Corner: Exile_AbstractItem
	{
		scope=2;
		displayName="Sandbags Kit (Corner)";
		picture="\exile_assets\texture\item\Exile_Item_SandBagsKit_Corner.paa";
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort="Can be used to craft a corner sandbag fence.";
		mass=50;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_SandBagsKit_Long: Exile_AbstractItem
	{
		scope=2;
		displayName="Sandbags Kit (Long)";
		picture="\exile_assets\texture\item\Exile_Item_SandBagsKit_Long.paa";
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort="Can be used to craft a long sandbag fence.";
		mass=100;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_SausageGravy: Exile_AbstractItem
	{
		scope=2;
		displayName="Sausage Gravy (Raw)";
		descriptionShort="Looks like sea men <br/>Hunger +50%/25s";
		model="\exile_assets\model\Exile_Item_SausageGravy.p3d";
		picture="\exile_assets\texture\item\Exile_Item_SausageGravy.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,50,25}
				};
			};
		};
	};
	class Exile_Item_SausageGravy_Cooked: Exile_AbstractItem
	{
		scope=2;
		displayName="Sausage Gravy (Cooked)";
		descriptionShort="Looks like sea men <br/>Hunger +100%/20s";
		model="\exile_assets\model\Exile_Item_SausageGravy_Cooked.p3d";
		picture="\exile_assets\texture\item\Exile_Item_SausageGravy_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Exile_Item_Screwdriver: Exile_AbstractItem
	{
		scope=2;
		displayName="Screwdriver";
		descriptionShort="";
		model="\A3\Structures_F\Items\Tools\Screwdriver_V1_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Screwdriver.paa";
		mass=10;
	};
	class Exile_Item_SeedAstics: Exile_AbstractItem
	{
		scope=2;
		displayName="Seed-Astics";
		descriptionShort="Bird is the word. <br/>Hunger: +20%/40s";
		model="\exile_assets\model\Exile_Item_SeedAstics.p3d";
		picture="\exile_assets\texture\item\Exile_Item_SeedAstics.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,20,40}
				};
			};
		};
	};
	class Exile_Item_Shovel: Exile_AbstractItem
	{
		scope=2;
		displayName="Shovel";
		descriptionShort="";
		model="\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Shovel.paa";
		mass=30;
	};
	class Exile_Item_SleepingMat: Exile_AbstractItem
	{
		scope=2;
		displayName="Sleeping Mat";
		descriptionShort="";
		model="\A3\Structures_F\Civ\Camping\Ground_sheet_folded_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_SleepingMat.paa";
		mass=30;
	};
	class Exile_Item_Storagecratekit: Exile_AbstractItem
	{
		scope=2;
		displayName="Storage Crate Kit";
		descriptionShort="Simple storage.";
		mass=75;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Storagecrate.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_Surstromming: Exile_AbstractItem
	{
		scope=2;
		displayName="Surströmming (Raw)";
		descriptionShort="Rotten fish in pickle. Nothing more, nothing less.<br/>Hunger +55%/25s<br/>Thirst -10%/5s";
		model="\exile_assets\model\Exile_Item_Surstromming.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Surstromming.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,55,25},
					{3,-10,5}
				};
			};
		};
	};
	class Exile_Item_Surstromming_Cooked: Exile_AbstractItem
	{
		scope=2;
		displayName="Surströmming (Cooked)";
		descriptionShort="Rotten fish in pickle. Nothing more, nothing less.<br/>Hunger +100%/20s";
		model="\exile_assets\model\Exile_Item_Surstromming_Cooked.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Surstromming_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Exile_Item_ThermalScannerPro: Exile_AbstractItem
	{
		scope=2;
		displayName="Thermal Scanner Pro";
		descriptionShort="Prints a thermal image of a used code lock. Can only be used five times. Does not work in safe zones.";
		picture="\exile_assets\texture\item\Dummy.paa";
		model="\exile_assets\model\Exile_Item_ThermalScannerPro.p3d";
		mass=5;
		count=5;
	};
	class Exile_Item_ToiletPaper: Exile_AbstractItem
	{
		scope=2;
		displayName="Toilet Paper";
		picture="\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
		model="\exile_assets\model\Exile_Item_ToiletPaper.p3d";
		descriptionShort="How do blind people know when to stop using this?";
		mass=5;
	};
	class Exile_Item_Vishpirin: Exile_AbstractItem
	{
		scope=2;
		displayName="Vishpirin";
		descriptionShort="Oestrogen Power Shot!<br/>Health: +25%/30s<br/>Instant Soberness!";
		model="\exile_assets\model\Exile_Item_Vishpirin.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Vishpirin.paa";
		mass=15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[]=
				{
					{0,25,30},
					{4,-5,0}
				};
			};
		};
	};
	class Exile_Item_WaterBarrelKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Water Barrel Kit";
		descriptionShort="Can be used to re-fill your water bottles with dirty water. May taste suspicious.";
		mass=40;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Construction_WaterBarrel.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WaterCanisterDirtyWater: Exile_AbstractItem
	{
		scope=2;
		displayName="Water Canister (Dirty Water)";
		descriptionShort="A canister full of water. Surprise, surprise.";
		model="\a3\structures_f\Items\Vessels\CanisterPlastic_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WaterCanister.paa";
		mass=20;
	};
	class Exile_Item_WaterCanisterEmpty: Exile_AbstractItem
	{
		scope=2;
		displayName="Water Canister (Empty)";
		descriptionShort="An empty plastic canister.";
		model="\a3\structures_f\Items\Vessels\CanisterPlastic_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WaterCanister.paa";
		mass=10;
	};
	class Exile_Item_WireFenceKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wire Fence Kit";
		picture="\exile_assets\texture\item\Exile_Item_WireFenceKit.paa";
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort="The grass is always greener on the other side of the fence. Good that this one is look-through.";
		mass=150;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodDoorKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Door Kit";
		descriptionShort="A must-have for your base.";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodDoorKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodDoorwayKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Doorway Kit";
		descriptionShort="A wall with a doorway, that is, without a door.";
		mass=50;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodDoorwayKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodDrawBridgeKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Drawbridge Kit";
		descriptionShort="Now all you need is a moat.";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodDrawBridgeKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodFloorKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Floor Kit";
		descriptionShort="A 6x6m floor made out of wood.";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodFloorKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodFloorPortKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Floor Port Kit";
		descriptionShort="A 6x6m floor made out of wood. This is a special floor with a hole in it. Place stairs inside to get to the next floor or use it was a secret escape on the bottom of your base.";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodFloorPortKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodFloorPortSmallKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Floor Port Small Kit";
		descriptionShort="A 6x6m floor made out of wood. This is a special floor with a hole in it. Expand the functionality of this floor with a ladder!";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodFloorPortSmallKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodGateKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Gate Kit";
		descriptionShort="Similar to a door, but is used for vehicles.";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodGateKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodLadderKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Ladder Kit";
		descriptionShort="Since we have not mastered levitation yet...";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodLadderKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodLog: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Log";
		descriptionShort="Timber!";
		model="exile_assets\model\Exile_Item_Woodlog.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Woodlog.paa";
		mass=20;
	};
	class Exile_Item_WoodPlank: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Plank";
		descriptionShort="The reason why Planking became a trend.";
		mass=20;
		model="\exile_assets\model\Exile_Item_WoodPlank.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodPlank.paa";
	};
	class Exile_Item_WoodStairsKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Stairs Kit";
		descriptionShort="Since we do not have an elevator yet...";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodStairsKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodSticks: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Sticks";
		descriptionShort="The imaginary sword of the young and innocent.";
		model="\exile_assets\model\item\Exile_Item_WoodSticks.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodSticks.paa";
		mass=15;
	};
	class Exile_Item_WoodSupportKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Support Kit";
		descriptionShort="An effective way to build on not-so-flat terrain.";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodSupportKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodWallHalfKit: Exile_AbstractItem
	{
		scope=2;
		displayName="1/2 Wood Wall Kit";
		descriptionShort="A 6x1.5m wall made out of wood.";
		mass=30;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodWallHalfKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodWallKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Wall Kit";
		descriptionShort="A 6x3m wall made out of wood.";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodWallKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WoodWindowKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Wood Window Kit";
		descriptionShort="Offers a good position to shoot out of your base. Does not contain glass.";
		mass=60;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WoodWindowKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_WorkBenchKit: Exile_AbstractItem
	{
		scope=2;
		displayName="Work Bench Kit";
		descriptionShort="Used to craft most construction items.";
		mass=50;
		model="\exile_assets\model\Exile_Construction_Crate.p3d";
		picture="\exile_assets\texture\item\Exile_Item_WorkBenchKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing
			{
			};
		};
	};
	class Exile_Item_Wrench: Exile_AbstractItem
	{
		scope=2;
		displayName="Wrench";
		descriptionShort="";
		model="\A3\Structures_F\Items\Tools\Wrench_F.p3d";
		picture="\exile_assets\texture\item\Exile_Item_Wrench.paa";
		mass=10;
	};
	class Exile_Item_ZipTie: HandGrenade_Stone
	{
		scope=2;
		displayName="Zip Tie";
		picture="\exile_assets\texture\item\Exile_Item_ZipTie.paa";
		model="\exile_assets\model\Exile_Item_ZipTie.p3d";
		descriptionShort="Can be used for handcuffing and secret, super-special operations.";
		mass=5;
	};
	class spraycan_blk;
	class spraycan_red;
	class spraycan_grn;
	class spraycan_wht;
	class spraycan_blu;
	class burlap;
	class 556;
	class 762;
	class wpn_prt;
	class Alsatain_Ck;
	class Alsatian_Raw;
	class CatShark_Ck;
	class CatShark_Raw;
	class Chicken_Ck;
	class Chicken_Raw;
	class Fin_Ck;
	class Fin_Raw;
	class Goat_Raw;
	class Goat_Ck;
	class Mackrel_Ck;
	class Mackrel_Raw;
	class Mullet_Raw;
	class Mullet_Ck;
	class Ornate_Raw;
	class Ornate_Ck;
	class Rabbit_Ck;
	class Rabbit_Raw;
	class Rooster_Raw;
	class Rooster_Ck;
	class Salema_Ck;
	class Salema_Raw;
	class Sheep_Raw;
	class Sheep_Ck;
	class Snake_Ck;
	class Snake_Raw;
	class Tuna_Raw;
	class Tuna_Ck;
	class Turtle_Ck;
	class Turtle_Raw;
	class Exile_Item_SprayCan_Black: spraycan_blk
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Spray Can (Black)";
	};
	class Exile_Item_SprayCan_Red: spraycan_red
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Spray Can (Red)";
	};
	class Exile_Item_SprayCan_Green: spraycan_grn
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Spray Can (Green)";
	};
	class Exile_Item_SprayCan_White: spraycan_wht
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Spray Can (White)";
	};
	class Exile_Item_SprayCan_Blue: spraycan_blu
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Spray Can (Blue)";
	};
	class Exile_Item_BurlapSack: burlap
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Burlap Sack";
	};
	class Exile_Item_Bullets_556: 556
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="5.56mm Bullets";
	};
	class Exile_Item_Bullets_762: 762
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="7.62mm Bullets";
	};
	class Exile_Item_WeaponParts: wpn_prt
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Weapon Parts";
	};
	class Exile_Item_AlsatianSteak_Raw: Alsatian_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Alsatian Steak (Raw)";
		descriptionShort="So raw, you can still hear the faint woofs<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30},
					{0,-10,30}
				};
			};
		};
	};
	class Exile_Item_AlsatianSteak_Cooked: Alsatain_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Alsatian Steak (Cooked)";
		descriptionShort="Alsatian, only the best<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Exile_Item_CatSharkFilet_Raw: CatShark_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Cat Shark Filet (Raw)";
		descriptionShort="It's dangerous on land and in water. Meow...<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,25,30},
					{0,-20,30}
				};
			};
		};
	};
	class Exile_Item_CatSharkFilet_Cooked: CatShark_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Cat Shark Filet (Cooked)";
		descriptionShort="I want my food, right meow<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Exile_Item_ChickenFilet_Raw: Chicken_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Chicken Filet (Raw)";
		descriptionShort="So fresh, you can still see the feathers<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,10,30},
					{0,-7,30}
				};
			};
		};
	};
	class Exile_Item_ChickenFilet_Cooked: Chicken_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Chicken Filet (Cooked)";
		descriptionShort="Sadly, its not deep fried<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,70,30}
				};
			};
		};
	};
	class Exile_Item_FinSteak_Raw: Fin_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Fin Steak (Raw)";
		descriptionShort="Come here, good boy..........<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30},
					{0,-10,30}
				};
			};
		};
	};
	class Exile_Item_FinSteak_Cooked: Fin_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Fin Steak (Cooked)";
		descriptionShort="Now who is the monster?<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Exile_Item_GoatSteak_Raw: Goat_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Goat Steak (Raw)";
		descriptionShort="Haven't goat any words....<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30},
					{0,-10,30}
				};
			};
		};
	};
	class Exile_Item_GoatSteak_Cooked: Goat_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Goat Steak (Cooked)";
		descriptionShort="That raw goat pun was baaaaaaaaaad<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Exile_Item_MackerelFilet_Raw: Mackrel_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Mackeral Filet (Raw)";
		descriptionShort="The unholy mackerel<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Exile_Item_MackerelFilet_Cooked: Mackrel_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Mackeral Filet (Cooked)";
		descriptionShort="A holy mackeral!<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,55,30}
				};
			};
		};
	};
	class Exile_Item_MulletFilet_Raw: Mullet_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Mullet Filet (Raw)";
		descriptionShort="We aren't talking about the one on your head<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Exile_Item_MulletFilet_Cooked: Mullet_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Mullet Filet (Cooked)";
		descriptionShort="Don't mistake this for your ""awesome"" hairstyle<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,65,30}
				};
			};
		};
	};
	class Exile_Item_OrnateFilet_Raw: Ornate_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Ornate Filet (Raw)";
		descriptionShort="To be, ornate to be<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Exile_Item_OrnateFilet_Cooked: Ornate_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Ornate Filet (Cooked)";
		descriptionShort="Maybe ornater time...<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,40,30}
				};
			};
		};
	};
	class Exile_Item_RabbitSteak_Raw: Rabbit_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Rabbit Steak (Raw)";
		descriptionShort="Don't eat my carrots<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Exile_Item_RabbitSteak_Cooked: Rabbit_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Rabbit Steak (Cooked)";
		descriptionShort="I'd make a veggie joke, but no one would carrot all<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,80,30}
				};
			};
		};
	};
	class Exile_Item_RoosterFilet_Raw: Rooster_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Rooster Filet (Raw)";
		descriptionShort="Up since the break of dawn<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,10,30},
					{0,-8,30}
				};
			};
		};
	};
	class Exile_Item_RoosterFilet_Cooked: Rooster_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Rooster Filet (Cooked)";
		descriptionShort="It's the year of the rooster<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,70,30}
				};
			};
		};
	};
	class Exile_Item_SalemaFilet_Raw: Salema_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Salema Filet (Raw)";
		descriptionShort="Don't worry, you won't trip out<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Exile_Item_SalemaFilet_Cooked: Salema_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Salema Filet (Cooked)";
		descriptionShort="Seriously, don't worry.<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,65,30}
				};
			};
		};
	};
	class Exile_Item_SheepSteak_Raw: Sheep_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Sheep Steak (Raw)";
		descriptionShort="What is love? Baby don't herd me..<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30},
					{0,-10,30}
				};
			};
		};
	};
	class Exile_Item_SheepSteak_Cooked: Sheep_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Sheep Steak (Cooked)";
		descriptionShort="Don't herd me, no more...<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Exile_Item_SnakeFilet_Raw: Snake_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Snake Filet (Raw)";
		descriptionShort="Hiss off! I'm serious<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Exile_Item_SnakeFilet_Cooked: Snake_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Snake Filet (Cooked)";
		descriptionShort="Hiss off!<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,40,30}
				};
			};
		};
	};
	class Exile_Item_TunaFilet_Raw: Tuna_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Tuna Filet (Raw)";
		descriptionShort="What's the difference between a fish and a piano? You can't tuna fish..<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,20,30},
					{0,-15,30}
				};
			};
		};
	};
	class Exile_Item_TunaFilet_Cooked: Tuna_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Tuna Filet (Cooked)";
		descriptionShort="Tunas, huh?<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,90,30}
				};
			};
		};
	};
	class Exile_Item_TurtleFilet_Raw: Turtle_Raw
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Turtle Filet (Raw)";
		descriptionShort="Be careful, they bite hard.<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30},
					{0,-10,30}
				};
			};
		};
	};
	class Exile_Item_TurtleFilet_Cooked: Turtle_Ck
	{
		scope=2;
		author="Exile Mod Team";
		count=1;
		displayName="Turtle Filet (Cooked)";
		descriptionShort="TMNT FTW<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class 10Rnd_765x17ball;
	class Exile_Magazine_10Rnd_765x17_SA61: 10Rnd_765x17ball
	{
		scope=2;
		author="Exile Mod Team";
		displayName="7.65 mm 10Rnd Mag";
		descriptionShort="Caliber: 7.65x17 mm<br />Rounds: 10<br />Used in: SA61";
	};
	class 20Rnd_765x17ball;
	class Exile_Magazine_20Rnd_765x17_SA61: 20Rnd_765x17ball
	{
		scope=2;
		author="Exile Mod Team";
		displayName="7.65 mm 20Rnd Mag";
		descriptionShort="Caliber: 7.65x17 mm<br />Rounds: 20<br />Used in: SA61";
	};
	class 5Rnd_127x108_APDS_KSVK;
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK: 5Rnd_127x108_APDS_KSVK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="APDS 12.7 mm 5Rnd Mag";
		descriptionShort="Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK";
	};
	class 5Rnd_127x108_KSVK;
	class Exile_Magazine_5Rnd_127x108_KSVK: 5Rnd_127x108_KSVK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="12.7 mm 5Rnd Mag";
		descriptionShort="Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK";
	};
	class 10Rnd_127x99_m107;
	class Exile_Magazine_10Rnd_127x99_m107: 10Rnd_127x99_m107
	{
		scope=2;
		author="Exile Mod Team";
		displayName="12.7 mm 10Rnd Mag";
		descriptionShort="Caliber: 12.7x99 mm<br />Rounds: 10<br />Used in: M107";
	};
	class 30Rnd_762x39_AK47_M;
	class Exile_Magazine_30Rnd_762x39_AK: 30Rnd_762x39_AK47_M
	{
		scope=2;
		author="Exile Mod Team";
		displayName="7.62 mm 30Rnd Mag";
		descriptionShort="Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK47, AKM, AKS";
	};
	class 30Rnd_545x39_AK;
	class Exile_Magazine_30Rnd_545x39_AK: 30Rnd_545x39_AK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="5.45 mm 30Rnd Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_Green_Tracer_545x39_AK;
	class Exile_Magazine_30Rnd_545x39_AK_Green: 30Rnd_Green_Tracer_545x39_AK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="5.45 mm 30Rnd Tracer (Green) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_Red_Tracer_545x39_AK;
	class Exile_Magazine_30Rnd_545x39_AK_Red: 30Rnd_Red_Tracer_545x39_AK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="5.45 mm 30Rnd Tracer (Red) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_White_Tracer_545x39_AK;
	class Exile_Magazine_30Rnd_545x39_AK_White: 30Rnd_White_Tracer_545x39_AK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="5.45 mm 30Rnd Tracer (White) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_Yellow_Tracer_545x39_AK;
	class Exile_Magazine_30Rnd_545x39_AK_Yellow: 30Rnd_Yellow_Tracer_545x39_AK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="5.45 mm 30Rnd Tracer (Yellow) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 45Rnd_Green_Tracer_545x39_RPK;
	class Exile_Magazine_45Rnd_545x39_RPK_Green: 45Rnd_Green_Tracer_545x39_RPK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="5.45 mm 45Rnd Tracer (Green) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 45<br />Used in: RPK";
	};
	class 75Rnd_Green_Tracer_545x39_RPK;
	class Exile_Magazine_75Rnd_545x39_RPK_Green: 75Rnd_Green_Tracer_545x39_RPK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="5.45 mm 75Rnd Tracer (Green) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 75<br />Used in: RPK";
	};
	class 20Rnd_762x51_DMR;
	class Exile_Magazine_20Rnd_762x51_DMR: 20Rnd_762x51_DMR
	{
		scope=2;
		author="Exile Mod Team";
		displayName="7.62 mm 20Rnd Mag";
		descriptionShort="Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 20Rnd_Yellow_Tracer_762x51_DMR;
	class Exile_Magazine_20Rnd_762x51_DMR_Yellow: 20Rnd_Yellow_Tracer_762x51_DMR
	{
		scope=2;
		author="Exile Mod Team";
		displayName="7.62 mm 20Rnd Tracer (Yellow) Mag";
		descriptionShort="Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 20Rnd_Red_Tracer_762x51_DMR;
	class Exile_Magazine_20Rnd_762x51_DMR_Red: 20Rnd_Red_Tracer_762x51_DMR
	{
		scope=2;
		author="Exile Mod Team";
		displayName="7.62 mm 20Rnd Tracer (Red) Mag";
		descriptionShort="Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 20Rnd_Green_Tracer_762x51_DMR;
	class Exile_Magazine_20Rnd_762x51_DMR_Green: 20Rnd_Green_Tracer_762x51_DMR
	{
		scope=2;
		author="Exile Mod Team";
		displayName="7.62 mm 20Rnd Tracer (Green) Mag";
		descriptionShort="Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 10x_303_M;
	class Exile_Magazine_10Rnd_303: 10x_303_M
	{
		scope=2;
		author="Exile Mod Team";
		displayName=".303 British Mag";
		descriptionShort="Caliber: .303 British<br />Rounds: 10<br />Used in: Lee-Enfield No.4 Mk.I";
	};
	class 100Rnd_762x54_PK_Tracer_Green;
	class Exile_Magazine_100Rnd_762x54_PK_Green: 100Rnd_762x54_PK_Tracer_Green
	{
		scope=2;
		author="Exile Mod Team";
		displayName="7.62 mm 100Rnd Belt Tracer (Green)";
		descriptionShort="Caliber: 7.62x54 mm<br />Rounds: 100<br />Used in: PK, PKP";
	};
	class 7Rnd_45ACP_1911;
	class Exile_Magazine_7Rnd_45ACP: 7Rnd_45ACP_1911
	{
		scope=2;
		author="Exile Mod Team";
		displayName=".45 ACP 7Rnd Mag";
		descriptionShort="Caliber: .45 ACP<br />Rounds: 7<br />Used in: Colt 1911";
	};
	class 8Rnd_9x18_Makarov;
	class Exile_Magazine_8Rnd_9x18: 8Rnd_9x18_Makarov
	{
		scope=2;
		author="Exile Mod Team";
		displayName="9 mm 8Rnd Mag";
		descriptionShort="Caliber: 9x18 mm<br />Rounds: 8<br />Used in: Makarov";
	};
	class 6Rnd_45ACP;
	class Exile_Magazine_6Rnd_45ACP: 6Rnd_45ACP
	{
		scope=2;
		author="Exile Mod Team";
		displayName="45 ACP 6Rnd Mag";
		descriptionShort="Caliber: 45 ACP<br />Rounds: 6<br />Used in: Taurus";
	};
	class 5x_22_LR_17_HMR_M;
	class Exile_Magazine_5Rnd_22LR: 5x_22_LR_17_HMR_M
	{
		scope=2;
		author="Exile Mod Team";
		displayName=".22LR 5Rnd Mag";
		descriptionShort="Caliber: .22LR<br />Rounds: 5<br />Used in: CZ550";
	};
	class 10Rnd_762x54_SVD;
	class Exile_Magazine_10Rnd_762x54: 10Rnd_762x54_SVD
	{
		scope=2;
		author="Exile Mod Team";
		displayName="762x54 10Rnd Mag";
		descriptionShort="Caliber: 762x54<br />Rounds: 10<br />Used in: SVD";
	};
	class 8rnd_B_Beneli_74Slug;
	class Exile_Magazine_8Rnd_74Slug: 8rnd_B_Beneli_74Slug
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Slug 8Rnd";
		descriptionShort="Caliber: 12 Gauge<br />Rounds: 8<br />Used in: M1014";
	};
	class 8Rnd_B_Beneli_74Pellets;
	class Exile_Magazine_8Rnd_74Pellets: 8Rnd_B_Beneli_74Pellets
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Pellets 8Rnd";
		descriptionShort="Caliber: 12 Gauge<br />Rounds: 8<br />Used in: M1014";
	};
	class Exile_Magazine_Battery: Exile_AbstractItem
	{
		scope=2;
		count=100;
		displayName="Battery";
		ammo="Exile_Ammo_Battery";
		mass=3;
		picture="\exile_assets\texture\item\Exile_Item_Battery.paa";
		model="\A3\Structures_F_EPA\Items\Electronics\Battery_F.p3d";
		descriptionShort="Used in electronic devices.";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622776,
			1,
			1600
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\dummysound",
			0.0099999998,
			1,
			10
		};
	};
	class 5Rnd_127x108_Mag;
	class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag: 5Rnd_127x108_Mag
	{
		scope=2;
		author="Exile Mod Team";
		displayName="12.7 mm 5Rnd 8G Bullet Cam Mag";
		exileBulletCam=1;
		picture="\exile_assets\texture\item\Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag_ca.paa";
		descriptionShort="Caliber: 12.7x108 mm Russian<br />Rounds: 5<br />Used in: GM6 Lynx<br /><br />Supports 8G Bullet Cam";
	};
	class 5Rnd_127x108_APDS_Mag;
	class Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag: 5Rnd_127x108_APDS_Mag
	{
		scope=2;
		author="Exile Mod Team";
		displayName="12.7 mm 5Rnd APDS 8G Bullet Cam Mag";
		exileBulletCam=1;
		picture="\exile_assets\texture\item\Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag_ca.paa";
		descriptionShort="Caliber: 12.7x108 mm APDS Russian<br />Rounds: 5<br />Used in: GM6 Lynx<br /><br />Supports 8G Bullet Cam";
	};
	class 10Rnd_93x64_DMR_05_Mag;
	class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag: 10Rnd_93x64_DMR_05_Mag
	{
		scope=2;
		author="Exile Mod Team";
		displayName="9.3 mm 10Rnd 8G Bullet Cam Mag";
		exileBulletCam=1;
		picture="\exile_assets\texture\item\Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag_ca.paa";
		descriptionShort="Caliber: 9.3x64mm<br />Rounds: 10<br />Used in: Cyrus<br /><br />Supports 8G Bullet Cam";
	};
	class 7Rnd_408_Mag;
	class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag: 7Rnd_408_Mag
	{
		scope=2;
		author="Exile Mod Team";
		displayName=".408 7Rnd 8G Bullet Cam Mag";
		exileBulletCam=1;
		picture="\exile_assets\texture\item\Exile_Magazine_7Rnd_408_Bullet_Cam_Mag_ca.paa";
		descriptionShort="Caliber: .408<br />Rounds: 7<br />Used in: M320 LRR<br /><br />Supports 8G Bullet Cam";
	};
	class 10Rnd_338_Mag;
	class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag: 10Rnd_338_Mag
	{
		scope=2;
		author="Exile Mod Team";
		displayName=".338 LM 10Rnd 8G Bullet Cam Mag";
		exileBulletCam=1;
		picture="\exile_assets\texture\item\Exile_Magazine_10Rnd_338_Bullet_Cam_Mag_ca.paa";
		descriptionShort="Caliber: .338 Lapua Magnum<br />Rounds: 10<br />Used in: MAR-10<br /><br />Supports 8G Bullet Cam";
	};
	class Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag: 10Rnd_127x99_m107
	{
		scope=2;
		author="Exile Mod Team";
		displayName="12.7 mm 10Rnd 8G Bullet Cam Mag";
		exileBulletCam=1;
		picture="\exile_assets\texture\item\Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag.paa";
		descriptionShort="Caliber: 12.7x99 mm<br />Rounds: 10<br />Used in: M107<br /><br />Supports 8G Bullet Cam";
	};
	class Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag: 5Rnd_127x108_KSVK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="12.7 mm 5Rnd 8G Bullet Cam Mag";
		exileBulletCam=1;
		picture="\exile_assets\texture\item\Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag.paa";
		descriptionShort="Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK<br /><br />Supports 8G Bullet Cam";
	};
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag: 5Rnd_127x108_APDS_KSVK
	{
		scope=2;
		author="Exile Mod Team";
		displayName="12.7 mm 5Rnd APDS 8G Bullet Cam Mag";
		exileBulletCam=1;
		picture="\exile_assets\texture\item\Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag.paa";
		descriptionShort="Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK<br /><br />Supports 8G Bullet Cam";
	};
	class Exile_Magazine_Swing: Exile_AbstractItem
	{
		scope=2;
		count=999;
		autoReload=1;
		flash="";
		flashSize=0;
		displayName="Swing";
		ammo="Exile_Ammo_Swing";
		mass=0;
		picture="\exile_assets\texture\item\Exile_Magazine_Swing.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		initSpeed=0.1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622776,
			1,
			1600
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\dummysound",
			0.0099999998,
			1,
			10
		};
	};
	class Exile_Magazine_Boing: Exile_Magazine_Swing
	{
		scope=2;
		displayName="Boing";
		ammo="Exile_Ammo_Boing";
		initSpeed=0.1;
	};
	class Exile_Magazine_Swoosh: Exile_Magazine_Swing
	{
		scope=2;
		displayName="Swoosh";
		ammo="Exile_Ammo_Swoosh";
		initSpeed=0.1;
	};
};
class CfgMarkerClasses
{
	class ExileEvents
	{
		displayName="Exile Events";
	};
	class ExileNonConstructionZone
	{
		displayName="Exile Non-Construction Zone";
	};
	class ExileSpawnZone
	{
		displayName="Exile Spawn Zone";
	};
	class ExileSpawnZoneIcon
	{
		displayName="Exile Spawn Zone Icon";
	};
	class ExileTraderZone
	{
		displayName="Exile Trader Zone";
	};
	class ExileTraderZoneIcon
	{
		displayName="Exile Trader Zone Icon";
	};
	class ExileContaminatedZone
	{
		displayName="Exile Contaminated Zone";
	};
	class ExileContaminatedZoneIcon
	{
		displayName="Exile Contaminated Zone Icon";
	};
	class ExileConcreteMixerZone
	{
		displayName="Exile Concrete Mixer Zone";
	};
	class ExileConcreteMixerZoneIcon
	{
		displayName="Exile Concrete Mixer Zone Icon";
	};
	class ExilePlayer
	{
		displayName="Exile Player";
	};
	class ExileLandVehicleSpawn
	{
		displayName="Exile Land Vehicle Spawn";
	};
	class ExileAirVehicleSpawn
	{
		displayName="Exile Air Vehicle Spawn";
	};
	class ExileSeaVehicleSpawn
	{
		displayName="Exile Sea Vehicle Spawn";
	};
	class ExileRussianRouletteIcon
	{
		displayName="Exile Russian Roulette Icon";
	};
	class ExileSpecOpsTraderIcon
	{
		displayName="Exile Spec Ops Trader Icon";
	};
	class ExileAircraftTraderIcon
	{
		displayName="Exile Aircraft Trader Icon";
	};
	class ExileBoatTraderIcon
	{
		displayName="Exile Boat Trader Icon";
	};
	class ExileDiversTraderIcon
	{
		displayName="Exile Divers Trader Icon";
	};
};
class CfgMarkers
{
	class ExileMissionHardcoreIcon
	{
		scope=0;
		name="Exile Mission Icon (Hardcore)";
		icon="exile_assets\texture\marker\mission_hardcore_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileEvents";
		showEditorMarkerColor=0;
	};
	class ExileMissionModerateIcon
	{
		scope=0;
		name="Exile Mission Icon (Moderate)";
		icon="exile_assets\texture\marker\mission_moderate_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileEvents";
		showEditorMarkerColor=0;
	};
	class ExileMissionDifficultIcon
	{
		scope=0;
		name="Exile Mission Icon (Difficult)";
		icon="exile_assets\texture\marker\mission_difficult_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileEvents";
		showEditorMarkerColor=0;
	};
	class ExileMissionEasyIcon
	{
		scope=0;
		name="Exile Mission Icon (Easy)";
		icon="exile_assets\texture\marker\mission_easy_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileEvents";
		showEditorMarkerColor=0;
	};
	class ExileMissionCapturePointIcon
	{
		scope=0;
		name="Exile Capture Point Icon";
		icon="exile_assets\texture\marker\capture_point_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileEvents";
		showEditorMarkerColor=0;
	};
	class ExileMissionStrongholdIcon
	{
		scope=0;
		name="Exile Stronghold Icon";
		icon="exile_assets\texture\marker\stronghold_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileEvents";
		showEditorMarkerColor=0;
	};
	class ExileNonConstructionZone
	{
		scope=0;
		name="Exile Non-Construction Zone";
		icon="exile_assets\texture\marker\spawn_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileNonConstructionZone";
		showEditorMarkerColor=0;
	};
	class ExileSpawnZone
	{
		scope=0;
		name="Exile Spawn Zone";
		icon="exile_assets\texture\marker\spawn_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileSpawnZone";
		showEditorMarkerColor=0;
	};
	class ExileSpawnZoneIcon
	{
		scope=0;
		name="Exile Spawn Zone Icon";
		icon="exile_assets\texture\marker\spawn_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileSpawnZoneIcon";
		showEditorMarkerColor=0;
	};
	class ExileTraderZone
	{
		scope=0;
		name="Exile Trader Zone";
		icon="exile_assets\texture\marker\trader_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileTraderZone";
		showEditorMarkerColor=0;
	};
	class ExileTraderZoneIcon
	{
		scope=0;
		name="Exile Trader Zone Icon";
		icon="exile_assets\texture\marker\trader_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileTraderZoneIcon";
		showEditorMarkerColor=0;
	};
	class ExilePlayer
	{
		scope=0;
		name="Exile Player";
		icon="\A3\ui_f\data\map\VehicleIcons\iconman_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExilePlayer";
		showEditorMarkerColor=0;
	};
	class ExileSafe
	{
		scope=0;
		name="Exile Safe";
		icon="exile_assets\texture\marker\unlocked_safe_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileSafe";
		showEditorMarkerColor=0;
	};
	class ExileHeart
	{
		scope=0;
		name="Exile Heart";
		icon="exile_assets\texture\marker\supply_drop_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileHeart";
		showEditorMarkerColor=0;
	};
	class ExileContaminatedZone
	{
		scope=0;
		name="Exile Heart";
		icon="exile_assets\texture\marker\contaminated_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileContaminatedZone";
		showEditorMarkerColor=0;
	};
	class ExileContaminatedZoneIcon
	{
		scope=0;
		name="Exile Heart";
		icon="exile_assets\texture\marker\contaminated_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileContaminatedZoneIcon";
		showEditorMarkerColor=0;
	};
	class ExileConcreteMixerZone
	{
		scope=0;
		name="Exile Concrete Mixer Zone";
		icon="exile_assets\texture\marker\spawn_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileConcreteMixerZone";
		showEditorMarkerColor=0;
	};
	class ExileConcreteMixerZoneIcon
	{
		scope=0;
		name="Exile Concrete Mixer Zone Icon";
		icon="exile_assets\texture\marker\concrete_mixer_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileConcreteMixerZoneIcon";
		showEditorMarkerColor=0;
	};
	class ExileDiversTraderIcon
	{
		scope=0;
		name="Exile Divers Trader Icon";
		icon="exile_assets\texture\marker\divers_trader_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileDiversTraderIcon";
		showEditorMarkerColor=0;
	};
	class ExileBoatTraderIcon
	{
		scope=0;
		name="Exile Boat Trader Icon";
		icon="exile_assets\texture\marker\boat_trader_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileBoatTraderIcon";
		showEditorMarkerColor=0;
	};
	class ExileAircraftTraderIcon
	{
		scope=0;
		name="Exile Aircraft Trader Icon";
		icon="exile_assets\texture\marker\aircraft_trader_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileAircraftTraderIcon";
		showEditorMarkerColor=0;
	};
	class ExileSpecOpsTraderIcon
	{
		scope=0;
		name="Exile Spec Ops Trader Icon";
		icon="exile_assets\texture\marker\spec_ops_trader_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileSpecOpsTraderIcon";
		showEditorMarkerColor=0;
	};
	class ExileRussianRouletteIcon
	{
		scope=0;
		name="Exile Russian Roulette Icon";
		icon="exile_assets\texture\marker\russian_roulette_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExileRussianRouletteIcon";
		showEditorMarkerColor=0;
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class ExileIntro
		{
			directory="exile_client\missions\ExileIntro.VR";
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class Exile: Mod_Base
	{
		name="Exile Mod";
		author="Exile Mod Team";
		action="http://www.exilemod.com";
		dir="@Exile";
		logo="exile_assets\texture\mod\logo.paa";
		logoOver="exile_assets\texture\mod\logo.paa";
		logoSmall="exile_assets\texture\mod\icon.paa";
		picture="exile_assets\texture\mod\logo.paa";
		hidePicture=0;
		hideName=0;
		dlcColor[]={0.94,0.28999999,0.98000002,1};
		version="1.0.3";
		armaVersion="170";
		overview="";
		itemPrevNotifText="";
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		GestureExileAxeSwing01="";
		GestureExileSledgeHammerSwing01="";
		GestureExileSuicide01="";
		GestureExileSuicide02="";
		GestureExileSuicideCancel01="";
		GestureExileRussianRoulette01="";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureExileAxeSwing01[]=
			{
				"GestureExileAxeSwing01",
				"Gesture"
			};
			GestureExileSledgeHammerSwing01[]=
			{
				"GestureExileSledgeHammerSwing01",
				"Gesture"
			};
			GestureExileSuicide01[]=
			{
				"GestureExileSuicide01",
				"Gesture"
			};
			GestureExileSuicide02[]=
			{
				"GestureExileSuicide02",
				"Gesture"
			};
			GestureExileSuicideCancel01[]=
			{
				"GestureExileSuicideCancel01",
				"Gesture"
			};
			GestureExileRussianRoulette01[]=
			{
				"GestureExileRussianRoulette01",
				"Gesture"
			};
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class CutSceneAnimationBaseSit;
		class AmovPercMstpSnonWnonDnon;
		class HubSittingChairA_idle1;
		class AmovPercMstpSrasWlnrDnon;
		class Acts_AidlPsitMstpSsurWnonDnon_loop: CutSceneAnimationBaseSit
		{
			collisionShape="A3\anims_f\Data\Geom\Sdr\Psit.p3d";
			head="headDefault";
			ragdoll=1;
			terminal=1;
			affectedByFatigue="false";
			canPullTrigger=0;
			canReload=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			enableBinocular=0;
			enableMissile=0;
			enableOptics=0;
			showHandGun=0;
			showItemInHand=0;
			showItemInRightHand=0;
			showWeaponAim=0;
			actions="Acts_SittingTiedHands_actions";
			file="\A3\Anims_F_Mark\data\anim\sdr\cts\Acts_AidlPsitMstpSsurWnonDnon_1";
			VariantsPlayer[]=
			{
				"Acts_AidlPsitMstpSsurWnonDnon01",
				0.2,
				"Acts_AidlPsitMstpSsurWnonDnon02",
				0.2,
				"Acts_AidlPsitMstpSsurWnonDnon03",
				0.2,
				"Acts_AidlPsitMstpSsurWnonDnon04",
				0.2,
				"Acts_AidlPsitMstpSsurWnonDnon05",
				0.2
			};
			VariantsAI[]=
			{
				"Acts_AidlPsitMstpSsurWnonDnon01",
				0.2,
				"Acts_AidlPsitMstpSsurWnonDnon02",
				0.2,
				"Acts_AidlPsitMstpSsurWnonDnon03",
				0.2,
				"Acts_AidlPsitMstpSsurWnonDnon04",
				0.2,
				"Acts_AidlPsitMstpSsurWnonDnon05",
				0.2
			};
			VariantAfter[]={20,20,20};
			InterpolateTo[]=
			{
				"Acts_AidlPsitMstpSsurWnonDnon01",
				0.001,
				"Acts_AidlPsitMstpSsurWnonDnon02",
				0.001,
				"Acts_AidlPsitMstpSsurWnonDnon03",
				0.001,
				"Acts_AidlPsitMstpSsurWnonDnon04",
				0.001,
				"Acts_AidlPsitMstpSsurWnonDnon05",
				0.001,
				"Acts_AidlPsitMstpSsurWnonDnon_out",
				0.1,
				"Unconscious",
				0.0099999998
			};
		};
		class Exile_Acts_RepairVehicle01: CutSceneAnimationBaseSit
		{
			collisionShape="A3\anims_f\Data\Geom\Sdr\Psit.p3d";
			head="headDefault";
			ragdoll=1;
			terminal=1;
			affectedByFatigue="false";
			canPullTrigger=0;
			canReload=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			enableBinocular=0;
			enableMissile=0;
			enableOptics=0;
			showHandGun=0;
			showItemInHand=0;
			showItemInRightHand=0;
			showWeaponAim=0;
			actions="Acts_SittingTiedHands_actions";
			file="A3\anims_f\data\Anim\sdr\cts\InBaseMoves_repairVehicleKnl";
			VariantsPlayer[]=
			{
				"Exile_Acts_RepairVehicle01_Animation01",
				0.2
			};
			VariantsAI[]=
			{
				"Exile_Acts_RepairVehicle01_Animation01",
				0.2
			};
			VariantAfter[]={20,20,20};
			InterpolateTo[]=
			{
				"Exile_Acts_RepairVehicle01_Animation01",
				0.001,
				"Unconscious",
				0.0099999998
			};
		};
		class Exile_Acts_RepairVehicle01_Animation01: Exile_Acts_RepairVehicle01
		{
			equivalentTo="Exile_Acts_RepairVehicle01";
			speed=-25;
			VariantsPlayer[]={};
			VariantsAI[]={};
			interpolationSpeed=0.5;
			InterpolateTo[]=
			{
				"Exile_Acts_RepairVehicle01",
				0.001,
				"Unconscious",
				0.0099999998
			};
		};
		class Exile_Acts_Suicide01: AmovPercMstpSnonWnonDnon
		{
			looped=0;
			file="\exile_assets\animation\Exile_Suicide01";
			terminal=0;
			speed=0.14354099;
			showHandGun=1;
			head="headNo";
			forceAim=1;
			ConnectTo[]=
			{
				"DeadState",
				1
			};
			InterpolateTo[]={};
		};
		class Exile_Acts_Suicide02: AmovPercMstpSnonWnonDnon
		{
			looped=0;
			file="\exile_assets\animation\Exile_Suicide02";
			terminal=0;
			speed=0.124481;
			showHandGun=1;
			head="headNo";
			forceAim=1;
			ConnectTo[]=
			{
				"DeadState",
				1
			};
			InterpolateTo[]={};
		};
		class Exile_RouletteSitting01: CutSceneAnimationBaseSit
		{
			collisionShape="A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			head="headDefault";
			ragdoll=1;
			terminal=0;
			affectedByFatigue="false";
			canPullTrigger=0;
			canReload=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			enableBinocular=0;
			enableMissile=0;
			enableOptics=0;
			showHandGun=1;
			showItemInHand=0;
			showItemInRightHand=0;
			showWeaponAim=0;
			actions="Acts_SittingTiedHands_actions";
			file="\A3\Anims_F_EPA\data\Anim\sdr\cts\HubCleaned\SittingChair\HubSittingChairA_idle1";
			VariantsPlayer[]=
			{
				"Exile_RouletteSitting01_Animation01",
				0.2
			};
			VariantsAI[]=
			{
				"Exile_RouletteSitting01_Animation01",
				0.2
			};
			VariantAfter[]={20,20,20};
			InterpolateTo[]=
			{
				"Exile_RouletteSitting01_Animation01",
				0.001,
				"DeadState",
				0.0099999998
			};
		};
		class Exile_RouletteSitting01_Animation01: Exile_RouletteSitting01
		{
			equivalentTo="Exile_RouletteSitting01";
			speed=-25;
			VariantsPlayer[]={};
			VariantsAI[]={};
			interpolationSpeed=0.2;
			InterpolateTo[]=
			{
				"Exile_RouletteSitting01",
				0.001,
				"DeadState",
				0.0099999998
			};
		};
		class Exile_Shovel_Dig01: AmovPercMstpSrasWlnrDnon
		{
			file="\exile_assets\animation\Exile_Shovel_Dig01";
			looped=0;
			speed=0.1;
			duty=0.69999999;
			mask="BodyFull";
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			weaponIK=4;
			showWeaponAim=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			enableBinocular=0;
			enableMissile=0;
			enableOptics=0;
			canReload=0;
			leaning="empty";
			aimingBody="empty";
			aiming="empty";
			forceAim=1;
			limitGunMovement=9.1000004;
			headBobMode=0;
			headBobStrength=0;
			canPullTrigger=0;
			enableDirectControl=0;
			weaponLowered=0;
			variantsPlayer[]={};
			variantsAI[]={};
			ConnectFrom[]=
			{
				"AmovPercMstpSrasWlnrDnon",
				2,
				"AmovPercMstpSlowWlnrDnon",
				2
			};
			ConnectTo[]=
			{
				"AmovPercMstpSrasWlnrDnon",
				2,
				"AmovPercMstpSlowWlnrDnon",
				2
			};
			InterpolateTo[]=
			{
				"DeadState",
				0.0099999998
			};
			showHandGun=0;
			showItemInRightHand=0;
			soundEnabled=1;
		};
	};
};
class CfgMusic
{
	class ExileTrack01
	{
		duration=170;
		musicClass="Lead";
		name="Exile Track 01 - Main Theme";
		sound[]=
		{
			"exile_assets\music\track01.ogg",
			1,
			1
		};
	};
	class ExileTrack02
	{
		duration=223;
		musicClass="Lead";
		name="Exile Track 02 - Welcome to Exile (Menu Version)";
		sound[]=
		{
			"exile_assets\music\track02.ogg",
			1,
			1
		};
	};
	class ExileTrack03
	{
		duration=170;
		musicClass="Lead";
		name="Exile Track 03 - Welcome to Exile (Original Composition)";
		sound[]=
		{
			"exile_assets\music\track03.ogg",
			1,
			1
		};
	};
	class ExileTrack04
	{
		duration=317;
		musicClass="Calm";
		name="Exile Track 04 - The Island (Roaming Ambience)";
		sound[]=
		{
			"exile_assets\music\track04.ogg",
			1,
			1
		};
	};
	class ExileTrack05
	{
		duration=317;
		musicClass="Calm";
		name="Exile Track 05 - The Island Minor (Roaming Ambience)";
		sound[]=
		{
			"exile_assets\music\track05.ogg",
			1,
			1
		};
	};
	class ExileTrack06
	{
		duration=115;
		musicClass="Action";
		name="Exile Track 06 - Lethal Force (Combat Soundtrack)";
		sound[]=
		{
			"exile_assets\music\track06.ogg",
			1,
			1
		};
	};
	class ExileTrack07
	{
		duration=157;
		musicClass="Action";
		name="Exile Track 07 - LethalForce v2 (Combat Soundtrack)";
		sound[]=
		{
			"exile_assets\music\track07.ogg",
			1,
			1
		};
	};
};
class CfgNetworkMessages
{
	class announceAnimalRequest
	{
		module="object_animal";
		parameters[]=
		{
			"STRING"
		};
	};
	class gutAnimalRequest
	{
		module="object_animal";
		parameters[]=
		{
			"STRING"
		};
	};
	class playEarthQuakeEffectRequest
	{
		module="system_earthQuake";
		parameters[]=
		{
			"SCALAR"
		};
	};
	class requestJoinRussianRouletteDialogRequest
	{
		module="system_russianRoulette";
		parameters[]={};
	};
	class requestJoinRussianRouletteDialogResponse
	{
		module="system_russianRoulette";
		parameters[]=
		{
			"SCALAR",
			"SCALAR"
		};
	};
	class concreteMixerStartRequest
	{
		module="object_concreteMixer";
		parameters[]=
		{
			"STRING",
			"STRING"
		};
	};
	class concreteMixerAddSmokeRequest
	{
		module="object_concreteMixer";
		parameters[]=
		{
			"STRING"
		};
	};
	class concreteMixerRemoveSmokeRequest
	{
		module="object_concreteMixer";
		parameters[]=
		{
			"STRING"
		};
	};
	class winRussianRouletteRequest
	{
		module="system_russianRoulette";
		parameters[]=
		{
			"ARRAY",
			"SCALAR",
			"SCALAR"
		};
	};
	class joinRussianRouletteRequest
	{
		module="system_russianRoulette";
		parameters[]={};
	};
	class joinRussianRouletteResponse
	{
		module="system_russianRoulette";
		parameters[]=
		{
			"STRING"
		};
	};
	class leaveRussianRouletteRequest
	{
		module="system_russianRoulette";
		parameters[]={};
	};
	class leaveRussianRouletteResponse
	{
		module="system_russianRoulette";
		parameters[]=
		{
			"ARRAY",
			"SCALAR"
		};
	};
	class updateRussianRouletteGameStatusRequest
	{
		module="system_russianRoulette";
		parameters[]=
		{
			"SCALAR",
			"SCALAR",
			"ARRAY",
			"STRING",
			"SCALAR",
			"SCALAR"
		};
	};
	class fireRussianRouletteRevolverRequest
	{
		module="system_russianRoulette";
		parameters[]=
		{
			"BOOL"
		};
	};
	class fireRussianRouletteRevolverResponse
	{
		module="system_russianRoulette";
		parameters[]={};
	};
	class startSessionRequest
	{
		module="system_session";
		parameters[]=
		{
			"STRING"
		};
	};
	class startSessionResponse
	{
		module="system_session";
		parameters[]=
		{
			"STRING"
		};
	};
	class updateSessionRequest
	{
		module="system_session";
		parameters[]=
		{
			"STRING"
		};
	};
	class switchMoveRequest
	{
		module="object_player";
		parameters[]=
		{
			"STRING",
			"STRING"
		};
	};
	class updateStatsRequest
	{
		module="object_player";
		parameters[]=
		{
			"STRING",
			"SCALAR",
			"SCALAR"
		};
	};
	class showFragRequest
	{
		module="gui";
		parameters[]=
		{
			"ARRAY"
		};
	};
	class hasPlayerRequest
	{
		module="object_player";
		parameters[]={};
	};
	class hasPlayerResponse
	{
		module="object_player";
		parameters[]=
		{
			"BOOL"
		};
	};
	class createPlayerRequest
	{
		module="object_player";
		parameters[]=
		{
			"STRING"
		};
	};
	class createPlayerResponse
	{
		module="object_player";
		parameters[]=
		{
			"OBJECT",
			"STRING",
			"STRING",
			"SCALAR",
			"SCALAR",
			"SCALAR",
			"SCALAR",
			"SCALAR",
			"SCALAR",
			"ARRAY",
			"SCALAR"
		};
	};
	class loadPlayerRequest
	{
		module="object_player";
		parameters[]={};
	};
	class loadPlayerResponse
	{
		module="object_player";
		parameters[]=
		{
			"STRING",
			"STRING",
			"SCALAR",
			"SCALAR",
			"SCALAR",
			"SCALAR",
			"SCALAR",
			"ARRAY",
			"SCALAR",
			"SCALAR"
		};
	};
	class updatePlayerIncapacitatedRequest
	{
		module="object_player";
		parameters[]=
		{
			"BOOL"
		};
	};
	class savePlayerRequest
	{
		module="object_player";
		parameters[]=
		{
			"SCALAR",
			"SCALAR",
			"SCALAR",
			"SCALAR",
			"SCALAR"
		};
	};
	class hideBodyRequest
	{
		module="object_player";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class chopTreeRequest
	{
		module="object_tree";
		parameters[]=
		{
			"STRING"
		};
	};
	class smashShippingContainerRequest
	{
		module="object_shippingContainer";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class chopBushRequest
	{
		module="object_bush";
		parameters[]=
		{
			"STRING"
		};
	};
	class systemChatRequest
	{
		module="gui";
		parameters[]=
		{
			"STRING"
		};
	};
	class advancedHintRequest
	{
		module="gui";
		parameters[]=
		{
			"STRING"
		};
	};
	class standardHintRequest
	{
		module="gui";
		parameters[]=
		{
			"STRING"
		};
	};
	class toastRequest
	{
		module="gui";
		parameters[]=
		{
			"STRING",
			"ARRAY"
		};
	};
	class baguetteRequest
	{
		module="gui";
		parameters[]=
		{
			"STRING"
		};
	};
	class dynamicTextRequest
	{
		module="gui";
		parameters[]=
		{
			"STRING",
			"SCALAR",
			"SCALAR",
			"STRING"
		};
	};
	class resetPlayerRequest
	{
		module="object_player";
		parameters[]={};
	};
	class buildConstructionRequest
	{
		module="object_construction";
		parameters[]=
		{
			"STRING",
			"ARRAY"
		};
	};
	class repairConstructionRequest
	{
		module="object_construction";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class repairConstructionResponse
	{
		module="object_construction";
		parameters[]=
		{
			"STRING"
		};
	};
	class payTerritoryProtectionMoneyRequest
	{
		module="system_territory";
		parameters[]=
		{
			"STRING"
		};
	};
	class buildTerritoryRequest
	{
		module="object_construction";
		parameters[]=
		{
			"STRING",
			"ARRAY",
			"STRING",
			"STRING"
		};
	};
	class constructionResponse
	{
		module="object_construction";
		parameters[]=
		{
			"STRING"
		};
	};
	class swapConstructionRequest
	{
		module="object_construction";
		parameters[]=
		{
			"STRING",
			"STRING",
			"ARRAY"
		};
	};
	class deconstructConstructionRequest
	{
		module="object_construction";
		parameters[]=
		{
			"STRING"
		};
	};
	class moveConstructionRequest
	{
		module="object_construction";
		parameters[]=
		{
			"STRING"
		};
	};
	class constructionMoveResponse
	{
		module="object_construction";
		parameters[]=
		{
			"BOOL",
			"STRING"
		};
	};
	class upgradeConstructionRequest
	{
		module="object_construction";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class upgradeConstructionResponse
	{
		module="object_construction";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class flipVehRequest
	{
		module="object_vehicle";
		parameters[]=
		{
			"STRING"
		};
	};
	class pushVehicleRequest
	{
		module="object_vehicle";
		parameters[]=
		{
			"STRING",
			"SCALAR",
			"SCALAR",
			"STRING"
		};
	};
	class rotateVehicleRequest
	{
		module="object_vehicle";
		parameters[]=
		{
			"STRING",
			"SCALAR"
		};
	};
	class lockVehicleRequest
	{
		module="object_vehicle";
		parameters[]=
		{
			"STRING",
			"BOOL"
		};
	};
	class lockResponse
	{
		module="object_vehicle";
		parameters[]=
		{
			"STRING",
			"BOOL",
			"STRING",
			"STRING",
			"SCALAR"
		};
	};
	class spawnLootRequest
	{
		module="system_lootManager";
		parameters[]=
		{
			"ARRAY"
		};
	};
	class toggleFloodLightRequest
	{
		module="object_floodLight";
		parameters[]=
		{
			"STRING",
			"SCALAR"
		};
	};
	class connectionTest
	{
		module="object_player";
		parameters[]=
		{
			"BOOL"
		};
	};
	class purchaseVehicleRequest
	{
		module="system_trading";
		parameters[]=
		{
			"STRING",
			"STRING"
		};
	};
	class purchaseVehicleResponse
	{
		module="system_trading";
		parameters[]=
		{
			"SCALAR",
			"STRING",
			"SCALAR"
		};
	};
	class vehicleSaveRequest
	{
		module="system_vehicleSaveQueue";
		parameters[]=
		{
			"STRING"
		};
	};
	class purchaseVehicleSkinRequest
	{
		module="system_trading";
		parameters[]=
		{
			"STRING",
			"ARRAY"
		};
	};
	class purchaseVehicleSkinResponse
	{
		module="system_trading";
		parameters[]=
		{
			"SCALAR",
			"SCALAR"
		};
	};
	class endBambiStateRequest
	{
		module="object_player";
		parameters[]={};
	};
	class purchaseItemRequest
	{
		module="system_trading";
		parameters[]=
		{
			"STRING",
			"SCALAR",
			"SCALAR",
			"STRING"
		};
	};
	class purchaseItemResponse
	{
		module="system_trading";
		parameters[]=
		{
			"SCALAR",
			"SCALAR",
			"STRING",
			"SCALAR",
			"SCALAR",
			"STRING"
		};
	};
	class sellItemRequest
	{
		module="system_trading";
		parameters[]=
		{
			"STRING",
			"SCALAR",
			"SCALAR",
			"STRING"
		};
	};
	class sellItemResponse
	{
		module="system_trading";
		parameters[]=
		{
			"SCALAR",
			"SCALAR",
			"STRING",
			"SCALAR",
			"SCALAR",
			"STRING",
			"STRING"
		};
	};
	class hotwireLockRequest
	{
		module="object_lock";
		parameters[]=
		{
			"STRING"
		};
	};
	class lockToggle
	{
		module="object_lock";
		parameters[]=
		{
			"STRING",
			"STRING",
			"BOOL"
		};
	};
	class setPin
	{
		module="object_lock";
		parameters[]=
		{
			"STRING",
			"STRING",
			"STRING"
		};
	};
	class setPinResponse
	{
		module="object_lock";
		parameters[]=
		{
			"ARRAY",
			"STRING",
			"STRING"
		};
	};
	class packRequest
	{
		module="object_container";
		parameters[]=
		{
			"STRING",
			"STRING"
		};
	};
	class setFuelRequest
	{
		module="object_vehicle";
		parameters[]=
		{
			"STRING",
			"SCALAR"
		};
	};
	class registerClanRequest
	{
		module="system_clan";
		parameters[]=
		{
			"STRING"
		};
	};
	class registerClanResponse
	{
		module="system_clan";
		parameters[]=
		{
			"SCALAR",
			"SCALAR",
			"ARRAY"
		};
	};
	class leaveClanRequest
	{
		module="system_clan";
		parameters[]={};
	};
	class leaveClanResponse
	{
		module="system_clan";
		parameters[]=
		{
			"BOOL",
			"STRING"
		};
	};
	class updateClanInfoFull
	{
		module="system_clan";
		parameters[]=
		{
			"STRING",
			"STRING",
			"ARRAY",
			"ARRAY",
			"ARRAY",
			"GROUP"
		};
	};
	class updateClanGotKicked
	{
		module="system_clan";
		parameters[]=
		{
			"STRING",
			"ARRAY"
		};
	};
	class updateMarkers
	{
		module="system_clan";
		parameters[]=
		{
			"ARRAY"
		};
	};
	class updatePolys
	{
		module="system_clan";
		parameters[]=
		{
			"ARRAY"
		};
	};
	class inviteToClanRequest
	{
		module="system_clan";
		parameters[]=
		{
			"STRING"
		};
	};
	class inviteToClanRequestClient
	{
		module="system_clan";
		parameters[]=
		{
			"STRING",
			"STRING"
		};
	};
	class inviteToClanRequestClientResponse
	{
		module="system_clan";
		parameters[]=
		{
			"BOOL"
		};
	};
	class clanInviteServerResponse
	{
		module="system_clan";
		parameters[]=
		{
			"BOOL"
		};
	};
	class kickClanPlayerRequest
	{
		module="system_clan";
		parameters[]=
		{
			"STRING"
		};
	};
	class addMarkerRequest
	{
		module="system_clan";
		parameters[]=
		{
			"STRING",
			"ARRAY",
			"ARRAY",
			"SCALAR",
			"STRING",
			"SCALAR"
		};
	};
	class addPolyRequest
	{
		module="system_clan";
		parameters[]=
		{
			"ARRAY",
			"ARRAY"
		};
	};
	class removeMarkerRequest
	{
		module="system_clan";
		parameters[]=
		{
			"SCALAR",
			"SCALAR"
		};
	};
	class inviteToPartyRequest
	{
		module="system_party";
		parameters[]=
		{
			"STRING"
		};
	};
	class joinPartyRequest
	{
		module="system_party";
		parameters[]=
		{
			"STRING"
		};
	};
	class kickFromPartyRequest
	{
		module="system_party";
		parameters[]=
		{
			"STRING"
		};
	};
	class announceTerritoryRequest
	{
		module="system_territory";
		parameters[]=
		{
			"STRING"
		};
	};
	class addToTerritoryRequest
	{
		module="system_territory";
		parameters[]=
		{
			"STRING",
			"STRING"
		};
	};
	class removeFromTerritoryRequest
	{
		module="system_territory";
		parameters[]=
		{
			"STRING",
			"STRING"
		};
	};
	class moderationTerritoryRequest
	{
		module="system_territory";
		parameters[]=
		{
			"STRING",
			"STRING",
			"BOOL"
		};
	};
	class purchaseTerritory
	{
		module="system_territory";
		parameters[]={};
	};
	class purchaseTerritoryResponse
	{
		module="system_territory";
		parameters[]=
		{
			"SCALAR"
		};
	};
	class requestTerritoryUpgradeDialog
	{
		module="system_territory";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class payFlagRansomRequest
	{
		module="system_territory";
		parameters[]=
		{
			"STRING"
		};
	};
	class restoreFlagRequest
	{
		module="system_territory";
		parameters[]=
		{
			"STRING"
		};
	};
	class addLockRequest
	{
		module="object_construction";
		parameters[]=
		{
			"OBJECT",
			"STRING"
		};
	};
	class addLockResponse
	{
		module="object_construction";
		parameters[]=
		{
			"STRING"
		};
	};
	class territoryUpgradeDialogResponse
	{
		module="gui_upgradeTerritoryDialog";
		parameters[]=
		{
			"SCALAR"
		};
	};
	class territoryUpgradeRequest
	{
		module="system_territory";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class deleteGroupPlz
	{
		module="system";
		parameters[]=
		{
			"GROUP"
		};
	};
	class wasteDumpRequest
	{
		module="system_trading";
		parameters[]=
		{
			"STRING",
			"SCALAR"
		};
	};
	class wasteDumpResponse
	{
		module="system_trading";
		parameters[]=
		{
			"SCALAR",
			"SCALAR",
			"STRING"
		};
	};
	class beginTakeAllRequest
	{
		module="object_player";
		parameters[]=
		{
			"STRING"
		};
	};
	class beginTakeAllResponse
	{
		module="object_player";
		parameters[]=
		{
			"STRING"
		};
	};
	class endTakeAllRequest
	{
		module="object_player";
		parameters[]=
		{
			"STRING"
		};
	};
	class scanCodeLockRequest
	{
		module="object_lock";
		parameters[]=
		{
			"STRING"
		};
	};
	class scanCodeLockResponse
	{
		module="object_lock";
		parameters[]=
		{
			"STRING"
		};
	};
	class enableSimulationRequest
	{
		module="system_simulationMonitor";
		parameters[]=
		{
			"STRING"
		};
	};
	class attachSupplyBoxRequest
	{
		module="object_supplyBox";
		parameters[]=
		{
			"STRING"
		};
	};
	class detachSupplyBoxRequest
	{
		module="object_supplyBox";
		parameters[]=
		{
			"STRING"
		};
	};
	class installSupplyBoxRequest
	{
		module="object_supplyBox";
		parameters[]=
		{
			"STRING"
		};
	};
	class handcuffRequest
	{
		module="object_handcuffs";
		parameters[]=
		{
			"STRING"
		};
	};
	class handcuffResponse
	{
		module="object_handcuffs";
		parameters[]=
		{
			"STRING"
		};
	};
	class freeRequest
	{
		module="object_handcuffs";
		parameters[]=
		{
			"STRING"
		};
	};
	class freeResponse
	{
		module="object_handcuffs";
		parameters[]=
		{
			"STRING"
		};
	};
	class breakFreeRequest
	{
		module="object_handcuffs";
		parameters[]={};
	};
	class breakFreeResponse
	{
		module="object_handcuffs";
		parameters[]=
		{
			"STRING"
		};
	};
	class updateMyPartyMarkerRequest
	{
		module="system_party";
		parameters[]=
		{
			"BOOL",
			"ARRAY"
		};
	};
	class updatePartyMarkerRequest
	{
		module="system_party";
		parameters[]=
		{
			"STRING",
			"BOOL",
			"ARRAY"
		};
	};
	class resetCodeRequest
	{
		module="object_vehicle";
		parameters[]=
		{
			"STRING",
			"STRING",
			"STRING"
		};
	};
	class resetCodeResponse
	{
		module="object_vehicle";
		parameters[]=
		{
			"ARRAY",
			"STRING",
			"STRING"
		};
	};
	class rekeyVehicleRequest
	{
		module="object_vehicle";
		parameters[]=
		{
			"STRING",
			"STRING"
		};
	};
	class rekeyVehicleDialogRequest
	{
		module="object_vehicle";
		parameters[]=
		{
			"STRING",
			"SCALAR"
		};
	};
	class rekeyVehicleDialogResponse
	{
		module="gui_vehicleRekeyDialog";
		parameters[]=
		{
			"STRING",
			"STRING",
			"SCALAR"
		};
	};
	class resetCodeDialogRequest
	{
		module="object_vehicle";
		parameters[]=
		{
			"STRING"
		};
	};
	class resetCodeDialogResponse
	{
		module="gui_vehicleRekeyDialog";
		parameters[]=
		{
			"STRING",
			"STRING"
		};
	};
	class putMoneyRequest
	{
		module="system_money";
		parameters[]=
		{
			"STRING",
			"SCALAR"
		};
	};
	class takeMoneyRequest
	{
		module="system_money";
		parameters[]=
		{
			"STRING",
			"SCALAR"
		};
	};
	class moneyTransactionResponse
	{
		module="system_money";
		parameters[]=
		{
			"STRING",
			"SCALAR"
		};
	};
	class flagStolenRequest
	{
		module="system_territory";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class lockerDepositRequest
	{
		module="system_locker";
		parameters[]=
		{
			"STRING"
		};
	};
	class lockerWithdrawRequest
	{
		module="system_locker";
		parameters[]=
		{
			"STRING"
		};
	};
	class lockerResponse
	{
		module="system_locker";
		parameters[]={};
	};
	class slothMachineRequest
	{
		module="system_slothMachine";
		parameters[]={};
	};
	class slothMachineResponse
	{
		module="system_slothMachine";
		parameters[]=
		{
			"STRING",
			"SCALAR",
			"SCALAR",
			"ARRAY"
		};
	};
	class breachingStart
	{
		module="system_breaching";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class breachingResponse
	{
		module="system_breaching";
		parameters[]=
		{
			"OBJECT",
			"OBJECT"
		};
	};
	class breachingPlaceRequest
	{
		module="system_breaching";
		parameters[]=
		{
			"ARRAY",
			"ARRAY",
			"OBJECT"
		};
	};
	class breachingCancel
	{
		module="system_breaching";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class breachingPlaceResponse
	{
		module="system_breaching";
		parameters[]=
		{
			"OBJECT"
		};
	};
	class chargePlanted
	{
		module="system_breaching";
		parameters[]={};
	};
	class detonateAllCharges
	{
		module="system_breaching";
		parameters[]={};
	};
};
class CfgRemoteExec
{
	class Functions
	{
		mode=1;
		jip=0;
		class ExileServer_system_network_dispatchIncomingMessage
		{
			allowedTargets=2;
		};
	};
	class Commands
	{
		mode=0;
		jip=0;
	};
};
class CfgRespawnTemplates
{
	class Exile
	{
		isCall=1;
		onPlayerKilled="ExileClient_object_player_event_onPlayerKilled";
		onPlayerRespawn="ExileClient_object_player_event_onPlayerRespawn";
		respawnDelay=30;
		respawnOnStart=0;
		respawnButton=1;
	};
};
class CfgSFX
{
	class Exile_Sfx_Flies
	{
		name="Exile Flies";
		sounds[]=
		{
			"flies01"
		};
		flies01[]=
		{
			"\exile_assets\sound\flies.ogg",
			3,
			1,
			60,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			1,
			3,
			5
		};
	};
	class Exile_Sfx_PortableGenerator
	{
		name="Exile Exile_Sfx_PortableGenerator";
		sounds[]=
		{
			"noise01"
		};
		noise01[]=
		{
			"\a3\sounds_f\ambient\objects\aircontition_5.wss",
			1,
			1,
			50,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			1,
			3,
			5
		};
	};
};
class CfgSounds
{
	class SndExileTwinkleTwisterCharge01
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\twinkle_twister_charge_01",
			1,
			1
		};
		titles[]={};
	};
	class SndExileTwinkleTwisterCharge02
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\twinkle_twister_charge_02",
			1,
			1
		};
		titles[]={};
	};
	class SndExileTwinkleTwisterCharge03
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\twinkle_twister_charge_03",
			1,
			1
		};
		titles[]={};
	};
	class SndExileTwinkleTwisterChargeDone01
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\twinkle_twister_charge_done_01",
			1,
			1
		};
		titles[]={};
	};
	class SndExileTwinkleTwisterChargeDone02
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\twinkle_twister_charge_done_02",
			1,
			1
		};
		titles[]={};
	};
	class SndExileTwinkleTwisterChargeDone03
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\twinkle_twister_charge_done_03",
			1,
			1
		};
		titles[]={};
	};
	class SndExileTwinkleTwisterSuccess
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\twinkle_twister_success",
			1,
			1
		};
		titles[]={};
	};
	class SndExileTwinkleTwisterFail
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\twinkle_twister_fail",
			1,
			1
		};
		titles[]={};
	};
	class SndXM8PowerOn
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\xm8_power_on",
			1,
			1
		};
		titles[]={};
	};
	class SndXM8PowerOff
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\xm8_power_off",
			1,
			1
		};
		titles[]={};
	};
	class SndExileHeartbeatFast
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\heartbeat_fast.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExileHeartbeatSlow
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\heartbeat_slow.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExileHeartbeatSlowSingle
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\heartbeat_slow_single.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExileHeartbeatStopping
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\heartbeat_stopping.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExileHeartbeatEating01
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\eating01.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExileHeartbeatEating02
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\eating02.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExileHeartbeatDrinking01
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\drinking01.ogg",
			1,
			1
		};
		titles[]={};
	};
	class BaDumTss
	{
		name="";
		sound[]=
		{
			"exile_assets\sound\ba_dum_tss",
			10,
			1
		};
		titles[]={};
	};
	class ExileIntro01
	{
		name="";
		sound[]=
		{
			"\a3\dubbing_f_bootcamp\BOOT_m02\15_Introduction\boot_m02_15_introduction_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExileIntro02
	{
		name="";
		sound[]=
		{
			"\a3\dubbing_f_bootcamp\BOOT_m02\15_Introduction\boot_m02_15_introduction_ADA_1.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExileIntro03
	{
		name="";
		sound[]=
		{
			"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_d05_aaf_anger_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExileIntro04
	{
		name="";
		sound[]=
		{
			"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_d05_aaf_anger_ADA_1.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExileIntro05
	{
		name="";
		sound[]=
		{
			"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_15_introduction_ADA_2.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExileIntro06
	{
		name="";
		sound[]=
		{
			"\a3\dubbing_f_bootcamp\BOOT_m03\20_Lesson\boot_m03_20_lesson_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExileIntro07
	{
		name="";
		sound[]=
		{
			"a3\dubbing_f_bootcamp\BOOT_m03\75_Orders\boot_m03_75_orders_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExileIntro08
	{
		name="";
		sound[]=
		{
			"\a3\dubbing_f_bootcamp\BOOT_m03\80_Get_In\boot_m03_80_get_in_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExileIntro09
	{
		name="";
		sound[]=
		{
			"\a3\dubbing_f_bootcamp\BOOT_m04\65_Regroup\boot_m04_65_regroup_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExileIntro10
	{
		name="";
		sound[]=
		{
			"\a3\sounds_f\characters\movements\bodyfallsbodyfall_concrete_3.wss",
			1,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GeigerCounter_Low01
	{
		name="Geiger Counter";
		sound[]=
		{
			"\exile_assets\sound\Exile_GeigerCounter_Low01.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GeigerCounter_Low02
	{
		name="Geiger Counter";
		sound[]=
		{
			"\exile_assets\sound\Exile_GeigerCounter_Low02.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GeigerCounter_Low03
	{
		name="Geiger Counter";
		sound[]=
		{
			"\exile_assets\sound\Exile_GeigerCounter_Low03.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GeigerCounter_Medium01
	{
		name="Geiger Counter";
		sound[]=
		{
			"\exile_assets\sound\Exile_GeigerCounter_Medium01.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GeigerCounter_Medium02
	{
		name="Geiger Counter";
		sound[]=
		{
			"\exile_assets\sound\Exile_GeigerCounter_Medium02.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GeigerCounter_Medium03
	{
		name="Geiger Counter";
		sound[]=
		{
			"\exile_assets\sound\Exile_GeigerCounter_Medium03.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GeigerCounter_High01
	{
		name="Geiger Counter";
		sound[]=
		{
			"\exile_assets\sound\Exile_GeigerCounter_High01.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GeigerCounter_High02
	{
		name="Geiger Counter";
		sound[]=
		{
			"\exile_assets\sound\Exile_GeigerCounter_High02.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GeigerCounter_High03
	{
		name="Geiger Counter";
		sound[]=
		{
			"\exile_assets\sound\Exile_GeigerCounter_High03.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GasMaskBreathing01
	{
		name="Gas Mask Breathing";
		sound[]=
		{
			"\a3\sounds_f\characters\human-sfx\diver-breath-1.wss",
			0.25,
			1
		};
		titles[]={};
	};
	class Exile_Sound_GasMaskBreathing02
	{
		name="Gas Mask Breathing";
		sound[]=
		{
			"\a3\sounds_f\characters\human-sfx\diver-breath-3.wss",
			0.25,
			1
		};
		titles[]={};
	};
};
class CfgTasks
{
	class Exile_Animal_Rooster
	{
		name="Rooster Main Task";
		fsm="\exile_client\fsm\Exile_Animal_Rooster.fsm";
		condition="\A3\animals_f\Data\scripts\createSingleTask.sqf";
		description="";
		destination="";
		resources[]={};
	};
	class Exile_Animal_Hen
	{
		name="Hen Main Task";
		fsm="\exile_client\fsm\Exile_Animal_Hen.fsm";
		condition="\A3\animals_f\Data\scripts\createSingleTask.sqf";
		description="";
		destination="";
		resources[]={};
	};
	class Exile_Animal_Goat
	{
		name="Goat Main Task";
		fsm="\exile_client\fsm\Exile_Animal_Goat.fsm";
		condition="\A3\animals_f\Data\scripts\createSingleTask.sqf";
		description="";
		destination="";
		resources[]={};
	};
	class Exile_Animal_Sheep
	{
		name="Sheep Main Task";
		fsm="\exile_client\fsm\Exile_Animal_Sheep.fsm";
		condition="\A3\animals_f\Data\scripts\createSingleTask.sqf";
		description="";
		destination="";
		resources[]={};
	};
};
class CfgTwinkleTwister
{
	chances[]=
	{
		
		{
			30,
			""
		},
		
		{
			40,
			"FreeRound"
		},
		
		{
			70,
			"GloriousKnakworst"
		},
		
		{
			80,
			"InstaDoc"
		},
		
		{
			95,
			"CookingPot"
		},
		
		{
			100,
			"Rangefinder"
		}
	};
	class Prizes
	{
		class FreeRound
		{
			name="100 Pop Tabs";
			symbol="Banana";
			color="#e4e645";
			type=0;
			prize=100;
		};
		class GloriousKnakworst
		{
			name="Glorious Knakworst";
			symbol="Strawberry";
			color="#c90d0d";
			type=1;
			prize="Exile_Item_GloriousKnakworst";
		};
		class InstaDoc
		{
			name="InstaDoc";
			symbol="Cucumber";
			color="#9eed3f";
			type=1;
			prize="Exile_Item_InstaDoc";
		};
		class CookingPot
		{
			name="Cooking Pot";
			symbol="Pineapple";
			color="#e4e645";
			type=1;
			prize="Exile_Item_CookingPot";
		};
		class Rangefinder
		{
			name="Rangefinder";
			symbol="Grape";
			color="#304bef";
			type=1;
			prize="Rangefinder";
		};
	};
};
class CfgUnitInsignia
{
	class ExileBrunswik
	{
		author="Exile Mod Team";
		displayName="Brunswik";
		texture="\exile_assets\texture\insignia\brunswik_ca.paa";
		textureVehicle="";
		scopeArsenal=2;
	};
	class Exile
	{
		author="Exile Mod Team";
		displayName="Exile";
		texture="\exile_assets\texture\insignia\exile_co.paa";
		textureVehicle="";
		scopeArsenal=2;
	};
};
class CfgVehicleClasses
{
	class ExileConstructions
	{
		displayName="Exile Constructions";
	};
	class ExileContainers
	{
		displayName="Exile Containers";
	};
	class ExileCars
	{
		displayName="Exile Cars";
	};
	class ExileBikes
	{
		displayName="Exile Bikes";
	};
	class ExilePlanes
	{
		displayName="Exile Planes";
	};
	class ExileBoats
	{
		displayName="Exile Boats";
	};
	class ExileChoppers
	{
		displayName="Exile Choppers";
	};
};
class UniformSlotInfo;
class SmallFire;
class DefaultEventHandlers;
class AnimationSources;
class CfgVehicles
{
	class VirtualMan_F;
	class Man;
	class NATO_Box_Base;
	class thing;
	class thingX;
	class NonStrategic;
	class FlagCarrier;
	class Land_PortableLight_single_F;
	class Land_WorkStand_F;
	class SignAd_Sponsor_F;
	class SignAd_SponsorS_F;
	class Static;
	class Headgear_Base_F;
	class ReammoBox;
	class Sound;
	class CAManBase: Man
	{
		class ViewPilot;
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class LootWeaponHolder: ReammoBox
	{
		author="Exile Mod Team";
		displayName="Loot Weapon Holder";
		scope=1;
		scopeCurator=0;
		model="\A3\Weapons_f\dummyweapon.p3d";
		accuracy=0.2;
		forceSupply=1;
		showWeaponCargo=1;
		transportMaxMagazines=1e+009;
		transportMaxWeapons=1e+009;
		destrType="DestructNo";
		transportMaxBackpacks=0;
		isGround=1;
		icon="iconObject_1x1";
		class TransportMagazines
		{
		};
	};
	class B_Soldier_diver_base_F;
	class I_G_engineer_F;
	class I_G_medic_F;
	class I_G_officer_F;
	class I_G_Soldier_A_F;
	class I_G_Soldier_exp_F;
	class I_G_Soldier_F;
	class I_G_Soldier_GL_F;
	class I_G_Soldier_LAT_F;
	class I_G_Soldier_lite_F;
	class I_G_Soldier_M_F;
	class I_G_Soldier_SL_F;
	class I_G_Soldier_TL_F;
	class C_man_1;
	class Civilian;
	class I_Soldier_diver_base_F;
	class O_Soldier_diver_base_F;
	class I_G_Soldier_AR_F;
	class SoldierWB: CAManBase
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class SoldierEB: CAManBase
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class SoldierGB: CAManBase
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_diver_F: B_Soldier_diver_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_engineer_F: I_G_engineer_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_medic_F: I_G_medic_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_officer_F: I_G_officer_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_Soldier_A_F: I_G_Soldier_A_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_Soldier_F: I_G_Soldier_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_Soldier_M_F: I_G_Soldier_M_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_Soldier_base_F: SoldierWB
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_Soldier_02_f: B_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_Soldier_03_f: B_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_Soldier_04_f: B_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_Soldier_05_f: B_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_Helipilot_F: B_Soldier_04_f
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_helicrew_F: B_Helipilot_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_Pilot_F: B_Soldier_05_f
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_RangeMaster_F: B_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class b_soldier_survival_F: B_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class B_Story_SF_Captain_F: B_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class C_journalist_F: C_man_1
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class C_Driver_1_F: C_man_1
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class C_man_1_1_F: C_man_1
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class Civilian_F: Civilian
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class C_man_hunter_1_F: C_man_1
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class C_man_p_fugitive_F: C_man_1
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class C_man_p_beggar_F: C_man_p_fugitive_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class C_man_pilot_F: C_man_1
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class C_man_w_worker_F: C_man_1
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class C_Marshal_F: B_RangeMaster_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class C_scientist_F: C_man_w_worker_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class I_diver_F: I_Soldier_diver_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class I_G_Soldier_base_F: SoldierGB
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class I_G_Story_SF_Captain_F: B_G_Soldier_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class I_Soldier_base_F: SoldierGB
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class I_officer_F: I_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class I_Soldier_03_F: I_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class I_Soldier_04_F: I_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_diver_F: O_Soldier_diver_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_engineer_F: I_G_engineer_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_medic_F: I_G_medic_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_officer_F: I_G_officer_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_Soldier_A_F: I_G_Soldier_A_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_Soldier_AR_F: I_G_Soldier_AR_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_Soldier_F: I_G_Soldier_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_Soldier_M_F: I_G_Soldier_M_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_Soldier_base_F: SoldierEB
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_officer_F: O_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class O_Soldier_02_F: O_Soldier_base_F
	{
		side=2;
		modelSides[]={2};
		faction="IND_F";
	};
	class DemoCharge_F;
	class SatchelCharge_F;
	class Exile_Ammo_BreachingCharge_BigMomma_Veh: DemoCharge_F
	{
		displayName="Breaching Charge (Big Momma)";
		model="\exile_assets\model\Exile_Item_BigMomma.p3d";
		ammo="Exile_Ammo_BreachingCharge_BigMomma";
		simulation="thingX";
		submerged=0;
		submergeSpeed=0;
		timetolive=2147483647;
		disappearAtContact=0;
		airFriction2[]={0.0099999998,0.0099999998,0.0099999998};
		airFriction1[]={0.0099999998,0.0099999998,0.0099999998};
		airFriction0[]={0.0099999998,0.0099999998,0.0099999998};
		airRotation=0;
		gravityFactor=0;
		minHeight=0;
		maxHeight=0;
		avgHeight=0;
	};
	class Exile_Ammo_BreachingCharge_Wood_Veh: DemoCharge_F
	{
		displayName="Breaching Charge (Wood)";
		ammo="Exile_Ammo_BreachingCharge_Wood";
		simulation="thingX";
		submerged=0;
		submergeSpeed=0;
		timetolive=2147483647;
		disappearAtContact=0;
		airFriction2[]={0.0099999998,0.0099999998,0.0099999998};
		airFriction1[]={0.0099999998,0.0099999998,0.0099999998};
		airFriction0[]={0.0099999998,0.0099999998,0.0099999998};
		airRotation=0;
		gravityFactor=0;
		minHeight=0;
		maxHeight=0;
		avgHeight=0;
	};
	class Exile_Ammo_BreachingCharge_Metal_Veh: SatchelCharge_F
	{
		displayName="Breaching Charge (Metal)";
		ammo="Exile_Ammo_BreachingCharge_Metal";
		simulation="thingX";
		submerged=0;
		submergeSpeed=0;
		timetolive=2147483647;
		disappearAtContact=0;
		airFriction2[]={0.0099999998,0.0099999998,0.0099999998};
		airFriction1[]={0.0099999998,0.0099999998,0.0099999998};
		airFriction0[]={0.0099999998,0.0099999998,0.0099999998};
		airRotation=0;
		gravityFactor=0;
		minHeight=0;
		maxHeight=0;
		avgHeight=0;
	};
	class Exile_ConcreteMixer: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Concrete Mixer";
		model="\exile_assets\model\Exile_ConcreteMixer.p3d";
		destrType="DestructNo";
		class EventHandlers
		{
			init="";
		};
		class AnimationSources
		{
			class SpinSource
			{
				source="user";
				initPhase=0;
				animPeriod=60;
				sound="";
			};
		};
	};
	class Exile_Cutscene_Abstract: B_Soldier_base_F
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Guard Base";
		side=2;
		modelSides[]={2};
		faction="IND_F";
		vehicleClass="Men";
		weapons[]={};
		respawnWeapons[]={};
		magazines[]={};
		respawnMagazines[]={};
		items[]={};
		respawnItems[]={};
		linkedItems[]={};
		respawnLinkedItems[]={};
		backpack="";
		canCarryBackPack=1;
		nakedUniform="U_BasicBody";
		model="\A3\characters_F\common\coveralls";
		uniformClass="";
		class EventHandlers
		{
			init="";
		};
		class UserActions
		{
		};
		actionBegin1="";
		actionEnd1="";
	};
	class Exile_Cutscene_Player: Exile_Cutscene_Abstract
	{
		displayName="Exile Cutcene Player";
		uniformClass="Exile_Uniform_BambiOverall";
		linkedItems[]={};
		weapons[]={};
	};
	class Exile_Cutscene_Prisoner01: Exile_Cutscene_Abstract
	{
		displayName="Exile Cutcene Prisoner 01";
		uniformClass="Exile_Uniform_BambiOverall";
		linkedItems[]=
		{
			"G_Bandanna_beast"
		};
		weapons[]={};
	};
	class Exile_Cutscene_Prisoner02: Exile_Cutscene_Abstract
	{
		displayName="Exile Cutcene Prisoner 02";
		uniformClass="Exile_Uniform_BambiOverall";
		linkedItems[]=
		{
			"G_Sport_Blackred"
		};
		weapons[]={};
	};
	class Exile_Cutscene_Pilot: Exile_Cutscene_Abstract
	{
		displayName="Exile Cutcene Pilot";
		uniformClass="U_B_PilotCoveralls";
		linkedItems[]=
		{
			"H_CrewHelmetHeli_B"
		};
		weapons[]=
		{
			"arifle_MXC_Black_F"
		};
	};
	class Exile_Cutscene_Police01: Exile_Cutscene_Abstract
	{
		displayName="Exile Cutcene Police 01";
		uniformClass="U_C_Journalist";
		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"G_Diving",
			"H_Watchcap_blk"
		};
		weapons[]=
		{
			"arifle_MXC_Black_F"
		};
	};
	class Exile_Cutscene_Police02: Exile_Cutscene_Abstract
	{
		displayName="Exile Cutcene Police 01";
		uniformClass="U_Rangemaster";
		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"G_Shades_Blue",
			"H_Cap_police"
		};
		weapons[]=
		{
			"arifle_MXC_Black_F"
		};
	};
	class Exile_Guard_Abstract: B_Soldier_base_F
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Guard Base";
		side=2;
		modelSides[]={2};
		faction="IND_F";
		vehicleClass="Men";
		weapons[]={};
		respawnWeapons[]={};
		magazines[]={};
		respawnMagazines[]={};
		items[]={};
		respawnItems[]={};
		linkedItems[]={};
		respawnLinkedItems[]={};
		backpack="";
		canCarryBackPack=1;
		nakedUniform="U_BasicBody";
		model="\A3\characters_F\common\coveralls";
		uniformClass="";
		class EventHandlers
		{
			init="";
		};
		class UserActions
		{
		};
		actionBegin1="";
		actionEnd1="";
	};
	class Exile_Guard_01: Exile_Guard_Abstract
	{
		displayName="Exile Guard 01";
		uniformClass="U_BG_Guerrilla_6_1";
		linkedItems[]=
		{
			"V_TacVest_khk",
			"H_ShemagOpen_tan"
		};
		weapons[]=
		{
			"srifle_DMR_03_F"
		};
	};
	class Exile_Guard_02: Exile_Guard_Abstract
	{
		displayName="Exile Guard 02";
		uniformClass="U_BG_Guerilla1_1";
		linkedItems[]=
		{
			"V_PlateCarrierIA2_dgtl",
			"H_Hat_camo"
		};
		weapons[]=
		{
			"arifle_Mk20_GL_F"
		};
	};
	class Exile_Guard_03: Exile_Guard_Abstract
	{
		displayName="Exile Guard 03";
		uniformClass="U_BG_Guerilla2_3";
		linkedItems[]=
		{
			"V_TacVestIR_blk",
			"H_Bandanna_camo",
			"G_Squares_Tinted"
		};
		weapons[]=
		{
			"SMG_02_F"
		};
	};
	class UserTexture10m_F;
	class Exile_Helper_50mBox: UserTexture10m_F
	{
		model="\exile_assets\model\Exile_Helper_50mBox.p3d";
	};
	class Exile_Helper_175mSafeZone: UserTexture10m_F
	{
		model="\exile_assets\model\Exile_Helper_175mSafeZone.p3d";
	};
	class Exile_Locker: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Locker";
		model="\exile_assets\model\Exile_Locker.p3d";
		destrType="DestructNo";
		class EventHandlers
		{
			init="";
		};
		class UserActions
		{
			class play
			{
				displayName="Inventory";
				position="left";
				radius=3;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_lockerDialog_show";
			};
		};
	};
	class Exile_PopTabs: thing
	{
		author="Exile Mod Team";
		scope=1;
		side=2;
		mapSize=0.15000001;
		displayName="Pop Tabs";
		simulation="thing";
		animated=0;
		vehicleClass="Small_items";
		faction="None";
		icon="iconObject";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Default";
		destrType="DestructNo";
		armor=999999;
		cost=100;
		model="\exile_assets\model\Exile_Item_PopTabs.p3d";
		class Eventhandlers
		{
			init="";
			killed="";
		};
		class UserActions
		{
			class Take
			{
				available=1;
				displayNameDefault="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='2' shadow='true' />";
				condition="true";
				displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='1' shadow='true' /> Take Pop Tabs";
				onlyForPlayer=1;
				position="Supply";
				priority=6;
				radius=2;
				showWindow=1;
				statement="this call ExileClient_system_money_take";
			};
		};
	};
	class Exile_Preloader: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Preloader";
		model="\exile_assets\model\Exile_Preloader.p3d";
		destrType="DestructNo";
		class EventHandlers
		{
			init="";
		};
	};
	class Land_ChairWood_F;
	class Exile_RussianRouletteChair: Land_ChairWood_F
	{
		scope=2;
		author="Exile Mod Team";
		destrType="DestructNo";
		displayName="Exile Russian Roulette Chair";
	};
	class Exile_Sound_Flies: Sound
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Flies Sound";
		sound="Exile_Sfx_Flies";
	};
	class Exile_Sound_PortableGenerator: Sound
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Portable Generator Sound";
		sound="Exile_Sfx_PortableGenerator";
	};
	class Exile_Trader_Abstract: B_Soldier_base_F
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Trader Base";
		side=2;
		modelSides[]={2};
		faction="IND_F";
		vehicleClass="Men";
		weapons[]={};
		respawnWeapons[]={};
		magazines[]={};
		respawnMagazines[]={};
		items[]={};
		respawnItems[]={};
		linkedItems[]={};
		respawnLinkedItems[]={};
		backpack="";
		canCarryBackPack=1;
		nakedUniform="U_BasicBody";
		model="\A3\characters_F\common\coveralls";
		uniformClass="";
		class EventHandlers
		{
			init="";
		};
		class UserActions
		{
			class trade
			{
				displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Trade";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_traderDialog_show";
			};
		};
		actionBegin1="trade";
		actionEnd1="trade";
	};
	class Exile_Trader_Armory: Exile_Trader_Abstract
	{
		displayName="Exile Armory Trader";
		uniformClass="U_Rangemaster";
		linkedItems[]=
		{
			"V_Rangemaster_belt",
			"H_Cap_headphones",
			"G_Shades_Black"
		};
		weapons[]=
		{
			"srifle_DMR_06_olive_F"
		};
	};
	class Exile_Trader_Diving: Exile_Trader_Abstract
	{
		displayName="Exile Dive Trader";
		linkedItems[]=
		{
			"V_RebreatherIA",
			"G_I_Diving"
		};
		uniformClass="U_I_Wetsuit";
		weapons[]=
		{
			"arifle_SDAR_F"
		};
	};
	class Exile_Trader_SpecialOperations: Exile_Trader_Abstract
	{
		displayName="Exile Special Operations Trader";
		backpack="B_Parachute";
		linkedItems[]=
		{
			"V_PlateCarrierGL_blk",
			"H_HelmetB_light_black",
			"G_Balaclava_lowprofile",
			"NVGoggles_OPFOR",
			"muzzle_snds_H",
			"acc_pointer_IR",
			"optic_KHS_blk",
			"bipod_03_F_blk"
		};
		uniformClass="U_B_CTRG_1";
		weapons[]=
		{
			"arifle_MX_Black_F"
		};
	};
	class Exile_Trader_Equipment: Exile_Trader_Abstract
	{
		displayName="Exile Equipment Trader";
		uniformClass="U_BG_Guerrilla_6_1";
		linkedItems[]=
		{
			"V_I_G_resistanceLeader_F",
			"H_Watchcap_khk",
			"optic_KHS_blk"
		};
		weapons[]=
		{
			"arifle_MX_GL_Black_F"
		};
	};
	class Exile_Trader_Food: Exile_Trader_Abstract
	{
		displayName="Exile Food Trader";
		uniformClass="U_C_Poloshirt_blue";
		linkedItems[]=
		{
			"H_Cap_tan"
		};
	};
	class Exile_Trader_Hardware: Exile_Trader_Abstract
	{
		displayName="Exile Hardware Trader";
		backpack="B_UAV_01_backpack_F";
		uniformClass="U_C_WorkerCoveralls";
		linkedItems[]=
		{
			"V_BandollierB_rgr",
			"H_Booniehat_khk_hs"
		};
		weapons[]={};
	};
	class Exile_Trader_Vehicle: Exile_Trader_Abstract
	{
		displayName="Exile Vehicle Trader";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]=
		{
			"H_RacingHelmet_4_F"
		};
		class UserActions
		{
			class trade
			{
				displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Vehicle";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_vehicleTraderDialog_show";
			};
		};
	};
	class Exile_Trader_Aircraft: Exile_Trader_Abstract
	{
		displayName="Exile Aircraft Trader";
		uniformClass="U_I_pilotCoveralls";
		linkedItems[]=
		{
			"H_PilotHelmetHeli_O"
		};
		class UserActions
		{
			class trade
			{
				displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Aircraft";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_vehicleTraderDialog_show";
			};
		};
	};
	class Exile_Trader_Boat: Exile_Trader_Abstract
	{
		displayName="Exile Boat Trader";
		uniformClass="U_OrestesBody";
		linkedItems[]=
		{
			"H_Cap_surfer"
		};
		class UserActions
		{
			class trade
			{
				displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Boat";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_vehicleTraderDialog_show";
			};
		};
	};
	class Exile_Trader_WasteDump: Exile_Trader_Abstract
	{
		displayName="Exile Waste Dump Trader";
		uniformClass="U_I_G_Story_Protagonist_F";
		linkedItems[]=
		{
			"V_Rangemaster_belt",
			"H_MilCap_gry"
		};
		class UserActions
		{
			class trade
			{
				displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Recycle Goods";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_wasteDumpDialog_show";
			};
		};
	};
	class Exile_Trader_Office: Exile_Trader_Abstract
	{
		displayName="Exile Office Trader";
		uniformClass="U_I_G_resistanceLeader_F";
		linkedItems[]=
		{
			"V_Rangemaster_belt",
			"H_Hat_brown"
		};
		class UserActions
		{
			class clanCreate
			{
				displayName="Create a family";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_registerClanDialog_show";
			};
			class territory
			{
				displayName="Purchase Territory";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_purchaseTerritoryDialog_show";
			};
			class upgradeTerritory
			{
				displayName="Upgrade Territory";
				position="ohniste";
				radius=3;
				priority=5;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_upgradeTerritoryDialog_show";
			};
			class territoryProtectionMoney
			{
				displayName="Pay Territory Protection Money";
				position="ohniste";
				radius=3;
				priority=5;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_payTerritoryProtectionMoneyDialog_show";
			};
			class payFlagRansom
			{
				displayName="Pay Territory Flag Ransom";
				position="ohniste";
				radius=3;
				priority=5;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_payFlagRansomDialog_show";
			};
		};
	};
	class Exile_Trader_VehicleCustoms: Exile_Trader_Abstract
	{
		displayName="Exile Vehicle Customs Trader";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
		class UserActions
		{
			class trade
			{
				displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_vehicleCustomsDialog_show";
			};
			class changePin
			{
				displayName="<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_AircraftCustoms: Exile_Trader_Abstract
	{
		displayName="Exile Aircraft Customs Trader";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]=
		{
			"H_PilotHelmetFighter_B",
			"V_RebreatherB"
		};
		class UserActions
		{
			class trade
			{
				displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_vehicleCustomsDialog_show";
			};
			class pin
			{
				displayName="<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_BoatCustoms: Exile_Trader_Abstract
	{
		displayName="Exile Boat Customs Trader";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
		class UserActions
		{
			class trade
			{
				displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_gui_vehicleCustomsDialog_show";
			};
			class pin
			{
				displayName="<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_RussianRoulette: Exile_Trader_Abstract
	{
		displayName="Exile Russian Roulette Trader";
		uniformClass="U_Marshal";
		linkedItems[]=
		{
			"V_Rangemaster_belt",
			"H_Cap_marshal",
			"G_Sport_Blackyellow"
		};
		weapons[]=
		{
			"hgun_Pistol_Signal_F"
		};
		class UserActions
		{
			class join
			{
				displayName="Play Russian Roulette";
				position="ohniste";
				radius=3;
				priority=6;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_system_russianRoulette_requestJoinDialog";
			};
		};
	};
	class Exile_Trader_CommunityCustoms: Exile_Trader_Abstract
	{
		displayName="Exile Community Customs Trader";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
	};
	class Exile_Trader_CommunityCustoms2: Exile_Trader_Abstract
	{
		displayName="Exile Community Customs Trader 2";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
	};
	class Exile_Trader_CommunityCustoms3: Exile_Trader_Abstract
	{
		displayName="Exile Community Customs Trader 3";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
	};
	class Exile_Trader_CommunityCustoms4: Exile_Trader_Abstract
	{
		displayName="Exile Community Customs Trader 4";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
	};
	class Exile_Trader_CommunityCustoms5: Exile_Trader_Abstract
	{
		displayName="Exile Community Customs Trader 5";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
	};
	class Exile_Trader_CommunityCustoms6: Exile_Trader_Abstract
	{
		displayName="Exile Community Customs Trader 6";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
	};
	class Exile_Trader_CommunityCustoms7: Exile_Trader_Abstract
	{
		displayName="Exile Community Customs Trader 7";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
	};
	class Exile_Trader_CommunityCustoms8: Exile_Trader_Abstract
	{
		displayName="Exile Community Customs Trader 8";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
	};
	class Exile_Trader_CommunityCustoms9: Exile_Trader_Abstract
	{
		displayName="Exile Community Customs Trader 9";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
	};
	class Exile_Trader_CommunityCustoms10: Exile_Trader_Abstract
	{
		displayName="Exile Community Customs Trader 10";
		uniformClass="Exile_Uniform_ExileCustoms";
		linkedItems[]={};
	};
	class Exile_Loot_XmasPresent_Abstract: LootWeaponHolder
	{
		model="\exile_assets\model\Exile_Item_XmasPresent.p3d";
		hiddenSelections[]=
		{
			"bow",
			"box"
		};
	};
	class Exile_Loot_XmasPresent_Blue: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.901,0.843,0.207,1,co)",
			"\exile_assets\model\Exile_Item_XmasPresent_blue.paa"
		};
	};
	class Exile_Loot_XmasPresent_Gold: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.172,0.180,0.196,1,co)",
			"\exile_assets\model\Exile_Item_XmasPresent_golden.paa"
		};
	};
	class Exile_Loot_XmasPresent_Green: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.725,0.945,0.964,1,co)",
			"\exile_assets\model\Exile_Item_XmasPresent_green01.paa"
		};
	};
	class Exile_Loot_XmasPresent_Mint: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.305,0.564,0.062,1,co)",
			"\exile_assets\model\Exile_Item_XmasPresent_green02.paa"
		};
	};
	class Exile_Loot_XmasPresent_Pink: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.929,0.815,0.890,1,co)",
			"\exile_assets\model\Exile_Item_XmasPresent_pink.paa"
		};
	};
	class Exile_Loot_XmasPresent_Purple: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.862,0.505,0.792,1,co)",
			"\exile_assets\model\Exile_Item_XmasPresent_purple.paa"
		};
	};
	class Exile_Loot_XmasPresent_Magenta: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.576,0.894,0.972,1,co)",
			"\exile_assets\model\Exile_Item_XmasPresent_red01.paa"
		};
	};
	class Exile_Loot_XmasPresent_Red: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.9,0.9,0.9,1,co)",
			"\exile_assets\model\Exile_Item_XmasPresent_red02.paa"
		};
	};
	class Exile_Construction_Abstract_Physics: thingX
	{
		scope=1;
		author="Exile Mod Team";
		mapSize=1;
		armor=1000;
		cost=1000;
		icon="iconObject_1x1";
		destrType="DestructNo";
		vehicleclass="ExileConstructions";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class Exile_Construction_Abstract_Static: NonStrategic
	{
		scope=1;
		author="Exile Mod Team";
		mapSize=1;
		armor=10000;
		cost=1000;
		icon="iconObject_1x1";
		destrType="DestructNo";
		vehicleclass="ExileConstructions";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		exileRequiresSimulation=0;
	};
	class Exile_Construction_BaseCamera_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="exile_assets\model\Exile_Construction_BaseCamera.p3d";
		displayName="Base Camera (Preview)";
		class AnimationSources
		{
			class ExileCctvPitch
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="";
			};
			class ExileCctvYaw
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="";
			};
		};
	};
	class Exile_Construction_BaseCamera_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="exile_assets\model\Exile_Construction_BaseCamera.p3d";
		displayName="Base Camera";
		exileRequiresSimulation=1;
		class AnimationSources
		{
			class ExileCctvPitch
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="";
			};
			class ExileCctvYaw
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="";
			};
		};
	};
	class Exile_Construction_CamoTent_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\a3\structures_f\Civ\Camping\TentA_F.p3d";
		displayName="Camo Tent";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_CampFire_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\a3\structures_f\Civ\Camping\Campfire_F.p3d";
		displayName="Camp Fire";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_CampFire_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\a3\structures_f\Civ\Camping\Campfire_F.p3d";
		displayName="Camp Fire";
		simulation="fire";
		exileRequiresSimulation=1;
		class Effects: SmallFire
		{
			class Light1
			{
				simulation="light";
				type="SmallFireLight";
			};
			class sound
			{
				simulation="sound";
				type="Fire_camp";
			};
			class Smoke1
			{
				simulation="particles";
				type="SmallFireS";
			};
			class Fire1: Smoke1
			{
				simulation="particles";
				type="SmallFireF";
			};
			class Refract1
			{
				simulation="particles";
				type="SmallFireFRefract";
			};
		};
		class UserActions
		{
			class lightup
			{
				displayNameDefault="Light fire";
				displayName="Light fire";
				position="ohniste";
				radius=3;
				onlyForPlayer=0;
				condition="!(inflamed this)";
				statement="this call ExileClient_object_fire_inflame";
			};
			class putout
			{
				displayNameDefault="Put out fire";
				displayName="Put out fire";
				position="ohniste";
				radius=3;
				onlyForPlayer=0;
				condition="(inflamed this)";
				statement="this call ExileClient_object_fire_extinguish";
			};
		};
		actionBegin1="lightup";
		actionEnd1="lightup";
	};
	class Exile_Construction_ConcreteDoorway_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteDoorway_Preview.p3d";
		displayName="Concrete Doorway";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteDoorway_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteDoorway.p3d";
		displayName="Concrete Doorway";
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"
		};
	};
	class Exile_Construction_ConcreteDoor_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteDoor_Preview.p3d";
		displayName="Concrete Door";
		hiddenSelections[]=
		{
			"Component01",
			"Component02"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteDoor_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteDoor.p3d";
		displayName="Concrete Door";
		exileIsDoor=1;
		exileIsLockable=1;
		exileRequiresSimulation=1;
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"
		};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="MetalDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Open Door";
				position="DoorTrigger";
				priority=6;
				radius=3;
				onlyForPlayer="true";
				condition="this call ExileClient_object_construction_openShow";
				statement="this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName="Close Door";
				condition="this animationPhase 'DoorRotation' >= 0.5";
				statement="this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1="OpenDoor";
		actionEnd1="OpenDoor";
		numberOfDoors=1;
	};
	class Exile_Construction_ConcreteFloorHatch_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteFloorPort_Preview.p3d";
		displayName="Concrete Floor Hatch";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteFloorHatch_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteFloorHatch.p3d";
		displayName="Concrete Floor Hatch";
		exileIsDoor=1;
		exileIsLockable=1;
		exileRequiresSimulation=1;
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"
		};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="MetalDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Open Door";
				position="DoorTrigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer="true";
				condition="this call ExileClient_object_construction_openShow";
				statement="this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName="Close Door";
				priority=0.2;
				condition="this animationPhase 'DoorRotation' >= 0.5";
				statement="this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1="OpenDoor";
		actionEnd1="OpenDoor";
		numberOfDoors=1;
	};
	class Exile_Construction_ConcreteFloorPort_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteFloorPort_Preview.p3d";
		displayName="Concrete Floor Port";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteFloorPort_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteFloorPort.p3d";
		displayName="Concrete Floor Port";
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"
		};
	};
	class Exile_Construction_ConcreteFloor_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteFloor_Preview.p3d";
		displayName="Concrete Floor";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteFloor_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteFloor.p3d";
		displayName="Concrete Floor";
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"
		};
	};
	class Exile_Construction_ConcreteGate_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteGate_Preview.p3d";
		displayName="Concrete Gate";
		hiddenSelections[]=
		{
			"Component01",
			"Component02",
			"Component03",
			"Component04"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteGate_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteGate.p3d";
		displayName="Concrete Gate";
		exileIsDoor=1;
		exileIsLockable=1;
		exileRequiresSimulation=1;
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete",
			"Gate"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa",
			"exile_assets\model\Exile_MetalGate_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat",
			"exile_assets\model\Exile_MetalGate.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa",
			"exile_assets\model\Exile_MetalGate_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat",
			"exile_assets\model\Exile_MetalGate_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa",
			"exile_assets\model\Exile_MetalGate_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat",
			"exile_assets\model\Exile_MetalGate_Damage02.rvmat"
		};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source="user";
				initPhase=0;
				animPeriod=2;
				sound="MetalBigDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Open Door";
				position="DoorHandle";
				priority=0.40000001;
				radius=3.5;
				onlyForPlayer="true";
				condition="this call ExileClient_object_construction_openGateShow";
				statement="this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
			};
			class CloseDoor: OpenDoor
			{
				displayName="Close Door";
				priority=0.2;
				condition="this animationPhase 'DoorRotationLeft' >= 0.5";
				statement="this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
			};
		};
		actionBegin1="OpenDoor";
		actionEnd1="OpenDoor";
		numberOfDoors=1;
	};
	class Exile_Construction_ConcreteStairs_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteStairs_Preview.p3d";
		displayName="Concrete Stairs";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteStairs_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteStairs.p3d";
		displayName="Concrete Stairs";
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"
		};
	};
	class Exile_Construction_ConcreteSupport_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteSupport_Preview.p3d";
		displayName="Concrete Support";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteSupport_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteSupport.p3d";
		displayName="Concrete Support";
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"
		};
	};
	class Exile_Construction_ConcreteWall_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteWall_Preview.p3d";
		displayName="Concrete Wall";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteWall_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteWall.p3d";
		displayName="Concrete Wall";
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"
		};
	};
	class Exile_Construction_ConcreteWindowHatch_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteWindowHatch_Preview.p3d";
		displayName="Concrete Window Hatch";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteWindowHatch_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteWindowHatch.p3d";
		displayName="Concrete Window Hatch";
		exileIsDoor=1;
		exileIsLockable=1;
		exileRequiresSimulation=1;
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"
		};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="RollDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Open Hatch";
				position="DoorTrigger";
				priority=0.40000001;
				radius=1.5;
				onlyForPlayer="true";
				condition="this animationPhase 'DoorRotation' < 0.5";
				statement="this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName="Close Hatch";
				priority=0.2;
				condition="this animationPhase 'DoorRotation' >= 0.5";
				statement="this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1="OpenDoor";
		actionEnd1="OpenDoor";
		numberOfDoors=1;
	};
	class Exile_Construction_ConcreteWindow_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteWindow_Preview.p3d";
		displayName="Concrete Window";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_ConcreteWindow_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_ConcreteWindow.p3d";
		displayName="Concrete Window";
		armor=20000;
		hiddenSelections[]=
		{
			"Concrete"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"
		};
	};
	class Exile_Construction_Flag_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		displayName="Territory Flag";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_Flag_Static: FlagCarrier
	{
		scope=2;
		model="\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		displayName="Territory Flag";
		exileRequiresSimulation=1;
		armor=10000;
		destrType="DestructNo";
	};
	class Exile_Construction_FloodLight_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\a3\structures_f_epa\civ\constructions\PortableLight_single_F.p3d";
		displayName="Flood Light";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_FloodLight_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\a3\structures_f_epa\civ\constructions\PortableLight_single_F.p3d";
		displayName="Flood Light";
		exileRequiresSimulation=1;
		destrType="DestructTree";
		class EventHandlers
		{
			init="(_this select 0) setHit ['light_1_hitpoint', 0.92];";
		};
		class AnimationSources
		{
			class Light_1_jaw_source
			{
				animPeriod=2;
				initPhase=0.13;
				source="user";
			};
			class Light_1_pitch_source
			{
				animPeriod="1/45";
				initPhase=0;
				source="user";
			};
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={1000,1000,1200};
				ambient[]={10,10,12};
				intensity=5;
				size=1;
				innerAngle=60;
				outerAngle=130;
				coneFadeCoef=6;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.89999998;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=2;
					quadratic=0.5;
					hardLimitStart=50;
					hardLimitEnd=70;
				};
			};
		};
	};
	class Exile_Construction_HBarrier5_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="A3\Structures_F\Mil\Fortification\HBarrier_5_F.p3d";
		displayName="H-barrier (5 Blocks)";
	};
	class Exile_Construction_HBarrier5_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		displayName="H-barrier (5 Blocks)";
		mapSize=3.1199999;
		model="A3\Structures_F\Mil\Fortification\HBarrier_5_F.p3d";
		icon="iconObject_7x1";
		armor=1000;
		destrType="DestructTent";
	};
	class Exile_Construction_Laptop_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="exile_assets\model\exile_construction_laptop.p3d";
		displayName="Base Laptop";
		class AnimationSources
		{
			class LaptopLidRotation
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
	};
	class Exile_Construction_Laptop_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="exile_assets\model\exile_construction_laptop.p3d";
		displayName="Base Laptop";
		exileRequiresSimulation=1;
		class AnimationSources
		{
			class LaptopLidRotation
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenLid
			{
				displayNameDefault="<img image='exile_assets\texture\hud\hud_icon_laptop.paa' size='2'/>";
				displayName="Open Laptop";
				position="LaptopLid";
				priority=0.40000001;
				radius=1;
				onlyForPlayer="true";
				condition="this call ExileClient_gui_baseCamera_lidOpenShow";
				statement="this animate ['LaptopLidRotation', 1]; call ExileClient_gui_interactionMenu_unhook";
			};
			class CloseLid: OpenLid
			{
				displayName="Close Laptop";
				priority=0.2;
				condition="this animationPhase 'LaptopLidRotation' >= 0.5";
				statement="this animate ['LaptopLidRotation', 0]; call ExileClient_gui_interactionMenu_unhook";
			};
		};
	};
	class Exile_Construction_MetalHedgehog_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_Hedgehog_Metal.p3d";
		displayName="Metal Hedgehog";
	};
	class Exile_Construction_MetalHedgehog_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_Hedgehog_Metal.p3d";
		displayName="Metal Hedgehog";
		destrType="DestructNo";
		requiresTerritory=0;
		canBePlacedOnRoad=1;
	};
	class Exile_Construction_PortableGenerator_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\a3\structures_f\Items\Electronics\Portable_generator_F.p3d";
		displayName="Portable Generator";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_PortableGenerator_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\a3\structures_f\Items\Electronics\Portable_generator_F.p3d";
		displayName="Portable Generator";
		exileRequiresSimulation=1;
		class EventHandlers
		{
			init="(_this select 0) setVariable['isRunning', false];";
		};
		class UserActions
		{
			class switchOn
			{
				displayName="Switch On";
				position="left";
				radius=3;
				onlyForPlayer=1;
				condition="!(this getVariable 'isRunning')";
				statement="this call ExileClient_object_portableGenerator_switchOn;";
			};
			class switchOff
			{
				displayName="Switch Off";
				position="left";
				radius=3;
				onlyForPlayer=1;
				condition="(this getVariable 'isRunning')";
				statement="this call ExileClient_object_portableGenerator_switchOff;";
			};
		};
	};
	class Exile_Construction_RazorWire_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\A3\Structures_F\Mil\Fortification\Razorwire_F.p3d";
		displayName="Razor Wire";
	};
	class Exile_Construction_Safe_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Container_Safe.p3d";
		displayName="Safe";
		exileContainer=1;
	};
	class Exile_Construction_SandBags_Corner_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="A3\Structures_F\Mil\BagFence\BagFence_Corner_F.p3d";
		displayName="Sandbags (Corner)";
	};
	class Exile_Construction_SandBags_Corner_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		displayName="Sandbags (Corner)";
		mapSize=3.1199999;
		model="A3\Structures_F\Mil\BagFence\BagFence_Corner_F.p3d";
		icon="iconObject_7x1";
		armor=1000;
		destrType="DestructTent";
	};
	class Exile_Construction_SandBags_Long_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="A3\Structures_F\Mil\BagFence\BagFence_Long_F.p3d";
		displayName="Sand Bags (Long)";
	};
	class Exile_Construction_SandBags_Long_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		displayName="Sand Bags (Long)";
		mapSize=3.1199999;
		model="A3\Structures_F\Mil\BagFence\BagFence_Long_F.p3d";
		icon="iconObject_7x1";
		armor=1000;
		destrType="DestructTent";
	};
	class Exile_Construction_StorageCrate_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Container_Storagecrate.p3d";
		displayName="Crate";
		exileContainer=1;
	};
	class Exile_Construction_SupplyBox_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		displayName="Supply Box";
		exileContainer=1;
	};
	class Exile_Construction_WaterBarrel_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\A3\Structures_F\Items\Vessels\WaterBarrel_F.p3d";
		displayName="Water Barrel";
	};
	class Exile_Construction_WaterBarrel_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\A3\Structures_F\Items\Vessels\WaterBarrel_F.p3d";
		displayName="Water Barrel";
		armor=50;
	};
	class Exile_Construction_WiredFence_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\A3\Structures_F\Walls\Mil_WiredFence_F.p3d";
		displayName="Wired Fence";
	};
	class Exile_Construction_WiredFence_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		displayName="Wired Fence";
		mapSize=7.9699998;
		model="\A3\Structures_F\Walls\Mil_WiredFence_F.p3d";
		icon="iconObject_5x1";
		armor=100;
		destrType="DestructTent";
	};
	class Exile_Construction_WoodDoorway_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDoorway_Preview.p3d";
		displayName="Wood Doorway";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodDoorway_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDoorway_Preview.p3d";
		displayName="Wood Doorway (Reinforced)";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodDoorway_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDoorway_Reinforced.p3d";
		displayName="Wood Doorway (Reinforced)";
		armor=4000;
		hiddenSelections[]=
		{
			"WoodPlank",
			"MetalBoard"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_WoodPlank_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_WoodPlank.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"
		};
	};
	class Exile_Construction_WoodDoorway_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDoorway.p3d";
		displayName="Wood Doorway";
		armor=1000;
		hiddenSelections[]=
		{
			"WoodBoard",
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodboard_co.paa",
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodboard.rvmat",
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage01_co.paa",
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage01.rvmat",
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage02_co.paa",
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage02.rvmat",
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
	};
	class Exile_Construction_WoodDoor_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDoor_Preview.p3d";
		displayName="Wood Door";
		hiddenSelections[]=
		{
			"Component01",
			"Component02"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodDoor_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDoor_Preview.p3d";
		displayName="Wood Door (Reinforced)";
		hiddenSelections[]=
		{
			"Component01",
			"Component02"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodDoor_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDoor_Reinforced.p3d";
		displayName="Wood Door (Reinforced)";
		exileIsDoor=1;
		exileIsLockable=1;
		exileRequiresSimulation=1;
		armor=4000;
		hiddenSelections[]=
		{
			"WoodPlank",
			"MetalBoard"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_WoodPlank_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_WoodPlank.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"
		};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="FenceGateDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Open Door";
				position="DoorTrigger";
				priority=0.40000001;
				radius=1.5;
				onlyForPlayer="true";
				condition="this call ExileClient_object_construction_openShow";
				statement="this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName="Close Door";
				priority=0.2;
				condition="this animationPhase 'DoorRotation' >= 0.5";
				statement="this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1="OpenDoor";
		actionEnd1="OpenDoor";
		numberOfDoors=1;
	};
	class Exile_Construction_WoodDoor_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDoor.p3d";
		displayName="Wood Door";
		exileIsDoor=1;
		exileIsLockable=1;
		exileRequiresSimulation=1;
		armor=1000;
		hiddenSelections[]=
		{
			"WoodBoard",
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodboard_co.paa",
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodboard.rvmat",
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage01_co.paa",
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage01.rvmat",
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage02_co.paa",
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage02.rvmat",
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Open Door";
				position="DoorTrigger";
				priority=0.40000001;
				radius=1.5;
				onlyForPlayer="true";
				condition="this call ExileClient_object_construction_openShow";
				statement="this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName="Close Door";
				priority=0.2;
				condition="this animationPhase 'DoorRotation' >= 0.5";
				statement="this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1="OpenDoor";
		actionEnd1="OpenDoor";
		numberOfDoors=1;
	};
	class Exile_Construction_WoodDrawBridge_Abstract: Exile_Construction_Abstract_Static
	{
		scope=1;
		author="Exile Mod Team";
	};
	class Exile_Construction_WoodDrawBridge_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDrawBridge_Preview.p3d";
		displayName="Wood DrawBridge";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodDrawBridge_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDrawBridge_Preview.p3d";
		displayName="Wood DrawBridge (Reinforced)";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodDrawBridge_Reinforced_Static: Exile_Construction_WoodDrawBridge_Abstract
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDrawBridge_Reinforced.p3d";
		displayName="Wood DrawBridge (Reinforced)";
		exileIsDoor=1;
		exileIsLockable=1;
		exileRequiresSimulation=1;
		armor=1000;
		hiddenSelections[]=
		{
			"WoodPlank",
			"MetalBoard"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_WoodPlank_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_WoodPlank.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"
		};
		class AnimationSources
		{
			class DrawBridge_Source
			{
				source="user";
				initPhase=2;
				animPeriod=2;
				sound="FenceGateDoorsSound";
			};
		};
	};
	class Exile_Construction_WoodDrawBridge_Static: Exile_Construction_WoodDrawBridge_Abstract
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodDrawBridge.p3d";
		displayName="Wood DrawBridge";
		exileIsDoor=1;
		exileIsLockable=1;
		exileRequiresSimulation=1;
		armor=1000;
		hiddenSelections[]=
		{
			"WoodBoard",
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodboard_co.paa",
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodboard.rvmat",
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage01_co.paa",
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage01.rvmat",
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage02_co.paa",
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage02.rvmat",
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
		class AnimationSources
		{
			class DrawBridge_Source
			{
				source="user";
				initPhase=2;
				animPeriod=2;
				sound="RoadGateDoors";
			};
		};
	};
	class Exile_Construction_WoodFloorPortSmall_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodFloorPortSmall_Preview.p3d";
		displayName="Wood Floor Port (Small)";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodFloorPortSmall_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodFloorPortSmall_Reinforced.p3d";
		displayName="Wood Floor Port (Small - Reinforced)";
		armor=4000;
		hiddenSelections[]=
		{
			"WoodPlank",
			"MetalBoard"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_WoodPlank_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_WoodPlank.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"
		};
	};
	class Exile_Construction_WoodFloorPortSmall_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodFloorPortSmall.p3d";
		displayName="Wood Floor Port (Small)";
		armor=1000;
		hiddenSelections[]=
		{
			"WoodBoard",
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodboard_co.paa",
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodboard.rvmat",
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage01_co.paa",
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage01.rvmat",
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage02_co.paa",
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage02.rvmat",
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
	};
	class Exile_Construction_WoodFloorPort_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodFloorPort_Preview.p3d";
		displayName="Wood Floor Port";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodFloorPort_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodFloorPort.p3d";
		displayName="Wood Floor Port";
		armor=1000;
		hiddenSelections[]=
		{
			"WoodBoard",
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodboard_co.paa",
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodboard.rvmat",
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage01_co.paa",
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage01.rvmat",
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage02_co.paa",
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage02.rvmat",
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
	};
	class Exile_Construction_WoodFloor_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodFloor_Preview.p3d";
		displayName="Wood Floor";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodFloor_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodFloor_Reinforced_Preview.p3d";
		displayName="Wood Floor (Reinforced)";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodFloor_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodFloor_Reinforced.p3d";
		displayName="Wood Floor (Reinforced)";
		armor=4000;
		hiddenSelections[]=
		{
			"WoodPlank",
			"MetalBoard"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_WoodPlank_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_WoodPlank.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"
		};
	};
	class Exile_Construction_WoodFloor_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodFloor.p3d";
		displayName="Wood Floor";
		armor=1000;
		hiddenSelections[]=
		{
			"WoodBoard",
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodboard_co.paa",
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodboard.rvmat",
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage01_co.paa",
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage01.rvmat",
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage02_co.paa",
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage02.rvmat",
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
	};
	class Exile_Construction_WoodGate_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodGate_Preview.p3d";
		displayName="Wood Gate";
		hiddenSelections[]=
		{
			"Component01",
			"Component02",
			"Component03",
			"Component04"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodGate_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodGate_Preview.p3d";
		displayName="Wood Gate (Reinforced)";
		hiddenSelections[]=
		{
			"Component01",
			"Component02",
			"Component03",
			"Component04"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodGate_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodGate_Reinforced.p3d";
		displayName="Wood Gate (Reinforced)";
		exileIsDoor=1;
		exileIsLockable=1;
		exileRequiresSimulation=1;
		armor=4000;
		hiddenSelections[]=
		{
			"WoodPlank",
			"MetalBoard"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_WoodPlank_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_WoodPlank.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"
		};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source="user";
				initPhase=0;
				animPeriod=2;
				sound="RoadGateDoors";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Open Door";
				position="DoorHandle";
				priority=0.40000001;
				radius=3.5;
				onlyForPlayer="true";
				condition="this call ExileClient_object_construction_openGateShow";
				statement="this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
			};
			class CloseDoor: OpenDoor
			{
				displayName="Close Door";
				priority=0.2;
				condition="this animationPhase 'DoorRotationLeft' >= 0.5";
				statement="this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
			};
		};
		actionBegin1="OpenDoor";
		actionEnd1="OpenDoor";
		numberOfDoors=1;
	};
	class Exile_Construction_WoodGate_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodGate.p3d";
		displayName="Wood Gate";
		exileIsDoor=1;
		exileIsLockable=1;
		exileRequiresSimulation=1;
		armor=1000;
		hiddenSelections[]=
		{
			"WoodBoard",
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodboard_co.paa",
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodboard.rvmat",
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage01_co.paa",
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage01.rvmat",
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage02_co.paa",
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage02.rvmat",
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source="user";
				initPhase=0;
				animPeriod=2;
				sound="RoadGateDoors";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Open Door";
				position="DoorHandle";
				priority=0.40000001;
				radius=3.5;
				onlyForPlayer="true";
				condition="this call ExileClient_object_construction_openGateShow";
				statement="this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
			};
			class CloseDoor: OpenDoor
			{
				displayName="Close Door";
				priority=0.2;
				condition="this animationPhase 'DoorRotationLeft' >= 0.5";
				statement="this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
			};
		};
		actionBegin1="OpenDoor";
		actionEnd1="OpenDoor";
		numberOfDoors=1;
	};
	class Exile_Construction_WoodLadder_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodLadder_Preview.p3d";
		displayName="Wood Ladder";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodLadder_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodLadder.p3d";
		displayName="Wood Ladder";
		exileIsDoor=1;
		exileIsLockable=0;
		exileRequiresSimulation=1;
		armor=1000;
		hiddenSelections[]=
		{
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
		ladders[]=
		{
			
			{
				"start",
				"end"
			}
		};
	};
	class Exile_Construction_WoodStairs_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodStairs_Preview.p3d";
		displayName="Wood Stairs";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodStairs_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodStairs.p3d";
		displayName="Wood Stairs";
		armor=1000;
		hiddenSelections[]=
		{
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
	};
	class Exile_Construction_WoodSupport_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodSupport_Preview.p3d";
		displayName="Wood Support";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodSupport_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodSupport.p3d";
		displayName="Wood Support";
		armor=1000;
		hiddenSelections[]=
		{
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
	};
	class Exile_Construction_WoodWallHalf_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWallHalf_Preview.p3d";
		displayName="1/2 Wood Wall";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodWallHalf_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWallHalf_Preview.p3d";
		displayName="1/2 Wood Wall (Reinforced)";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodWallHalf_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWallHalf_Reinforced.p3d";
		displayName="1/2 Wood Wall (Reinforced)";
		armor=4000;
		hiddenSelections[]=
		{
			"WoodPlank",
			"MetalBoard"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_WoodPlank_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_WoodPlank.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"
		};
	};
	class Exile_Construction_WoodWallHalf_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWallHalf.p3d";
		displayName="1/2 Wood Wall";
		armor=1000;
		hiddenSelections[]=
		{
			"WoodBoard",
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodboard_co.paa",
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodboard.rvmat",
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage01_co.paa",
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage01.rvmat",
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage02_co.paa",
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage02.rvmat",
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
	};
	class Exile_Construction_WoodWall_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWall_Preview.p3d";
		displayName="Wood Wall";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodWall_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWall_Preview.p3d";
		displayName="Wood Wall (Reinforced)";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodWall_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWall_Reinforced.p3d";
		displayName="Wood Wall (Reinforced)";
		armor=4000;
		hiddenSelections[]=
		{
			"WoodPlank",
			"MetalBoard"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_WoodPlank_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_WoodPlank.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"
		};
	};
	class Exile_Construction_WoodWall_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWall.p3d";
		displayName="Wood Wall";
		armor=1000;
		hiddenSelections[]=
		{
			"WoodBoard",
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodboard_co.paa",
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodboard.rvmat",
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage01_co.paa",
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage01.rvmat",
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage02_co.paa",
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage02.rvmat",
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
	};
	class Exile_Construction_WoodWindow_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWindow_Preview.p3d";
		displayName="Wood Window";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodWindow_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWindow_Preview.p3d";
		displayName="Wood Window (Reinforced)";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WoodWindow_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWindow_Reinforced.p3d";
		displayName="Wood Window (Reinforced)";
		armor=4000;
		hiddenSelections[]=
		{
			"WoodPlank",
			"MetalBoard"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_WoodPlank_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\Exile_WoodPlank.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage01.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02_co.paa",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\Exile_WoodPlank_Damage02.rvmat",
			"exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"
		};
	};
	class Exile_Construction_WoodWindow_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		model="\exile_assets\model\Exile_Construction_WoodWindow.p3d";
		displayName="Wood Window";
		armor=1000;
		hiddenSelections[]=
		{
			"WoodBoard",
			"WoodPlank"
		};
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\exile_woodboard_co.paa",
			"exile_assets\model\exile_woodplank_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"exile_assets\model\exile_woodboard.rvmat",
			"exile_assets\model\exile_woodplank.rvmat"
		};
		damageLevel1Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage01_co.paa",
			"exile_assets\model\exile_woodplank_damage01_co.paa"
		};
		damageLevel1Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage01.rvmat",
			"exile_assets\model\exile_woodplank_damage01.rvmat"
		};
		damageLevel2Textures[]=
		{
			"exile_assets\model\exile_woodboard_damage02_co.paa",
			"exile_assets\model\exile_woodplank_damage02_co.paa"
		};
		damageLevel2Materials[]=
		{
			"exile_assets\model\exile_woodboard_damage02.rvmat",
			"exile_assets\model\exile_woodplank_damage02.rvmat"
		};
	};
	class Exile_Construction_WorkBench_Preview: Exile_Construction_Abstract_Physics
	{
		scope=2;
		model="\a3\structures_f\civ\constructions\WorkStand_F.p3d";
		displayName="Work Bench";
		hiddenSelections[]=
		{
			"Component01"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
		};
	};
	class Exile_Construction_WorkBench_Static: Exile_Construction_Abstract_Static
	{
		scope=2;
		displayName="Work Bench";
		model="\A3\Structures_F\Civ\Constructions\WorkStand_F.p3d";
	};
	class ReammoBox_F;
	class Exile_Container_Abstract: ReammoBox_F
	{
		author="Exile Mod Team";
		scope=1;
		vehicleClass="Ammo";
		exileContainer=1;
		icon="iconCrateWpns";
		simulation="thingX";
		exileRequiresSimulation=0;
		maximumLoad=500;
		armor=1000;
		destrType="DestructNo";
		exileIsLockable=0;
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class Exile_Container_CamoTent: Exile_Container_Abstract
	{
		scope=2;
		model="\a3\structures_f\Civ\Camping\TentA_F.p3d";
		displayName="Camo Tent";
		destrType="DestructTent";
		icon="iconObject_2x3";
		maximumLoad=500;
		simulation="house";
		exileRequiresSimulation=1;
	};
	class Exile_Container_Safe: Exile_Container_Abstract
	{
		scope=2;
		model="\exile_assets\model\Exile_Container_Safe.p3d";
		displayName="Safe";
		destrType="DestructNo";
		maximumLoad=3000;
		armor=2000;
		exileIsLockable=1;
		simulation="house";
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="MetalDoorsSound";
			};
		};
	};
	class Exile_Container_Storagecrate: Exile_Container_Abstract
	{
		scope=2;
		model="\exile_assets\model\Exile_Container_Storagecrate.p3d";
		shortDescription="Will explode when shot. Powered by Michael Bay.";
		displayName="Storage Crate";
		destrType="DestructBuilding";
		icon="iconCrate";
		explosionEffect="BasicAmmoExplosion";
		maximumLoad=600;
		armor=5000;
		simulation="house";
	};
	class Exile_Container_SupplyBox: Exile_Container_Abstract
	{
		scope=2;
		model="\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		shortDescription="A supply box that can hold a lot of things.";
		displayName="Supply Box";
		destrType="DestructBuilding";
		icon="iconCrate";
		explosionEffect="BasicAmmoExplosion";
		maximumLoad=5000;
		armor=5000;
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsMaterials[]={};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
			""
		};
		hiddenUnderwaterSelections[]={};
		hiddenUnderwaterSelectionsTextures[]={};
		slingLoadCargoMemoryPoints[]={};
		slingLoadCargoMemoryPointsDir[]={};
	};
	class Land_TacticalBacon_F;
	class Exile_Cosmetic_BBQSandwich: Land_TacticalBacon_F
	{
		scope=2;
		author="Exile Mod Team";
		displayName="BBQ Sandwich (Cosmetic)";
		destrType="DestructNo";
		model="\exile_assets\model\Exile_Item_BBQSandwich.p3d";
	};
	class Exile_Cosmetic_BeefParts: Exile_Cosmetic_BBQSandwich
	{
		displayName="Beef Parts (Cosmetic)";
		model="\exile_assets\model\Exile_Item_BeefParts.p3d";
	};
	class Exile_Cosmetic_Beer: Exile_Cosmetic_BBQSandwich
	{
		displayName="Hausmann Beer (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Beer.p3d";
	};
	class Exile_Cosmetic_CatFood: Exile_Cosmetic_BBQSandwich
	{
		displayName="Cat Food (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Catfood.p3d";
	};
	class Exile_Cosmetic_Cheathas: Exile_Cosmetic_BBQSandwich
	{
		displayName="Cheathas (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Cheathas.p3d";
	};
	class Exile_Cosmetic_CockONut: Exile_Cosmetic_BBQSandwich
	{
		displayName="Cock'O'Nut (Cosmetic)";
		model="\exile_assets\model\Exile_Item_CockONut.p3d";
	};
	class Exile_Cosmetic_DogFood: Exile_Cosmetic_BBQSandwich
	{
		displayName="Dog Food (Cosmetic)";
		model="\exile_assets\model\Exile_Item_DogFood.p3d";
	};
	class Exile_Cosmetic_EnergyDrink: Exile_Cosmetic_BBQSandwich
	{
		displayName="Energy Drink (Cosmetic)";
		model="\exile_assets\model\Exile_Item_EnergyDrink.p3d";
	};
	class Exile_Cosmetic_EMRE: Exile_Cosmetic_BBQSandwich
	{
		displayName="EMRE (Cosmetic)";
		model="\exile_assets\model\Exile_Item_EMRE.p3d";
	};
	class Exile_Cosmetic_InstantCoffee: Exile_Cosmetic_BBQSandwich
	{
		displayName="Instant Coffee Beanz (Cosmetic)";
		model="\exile_assets\model\Exile_Item_InstantCoffee.p3d";
	};
	class Exile_Cosmetic_MacasCheese: Exile_Cosmetic_BBQSandwich
	{
		displayName="Maca's Cheese (Cosmetic)";
		model="\exile_assets\model\Exile_Item_MacasCheese.p3d";
	};
	class Exile_Cosmetic_Moobar: Exile_Cosmetic_BBQSandwich
	{
		displayName="Moobar (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Moobar.p3d";
	};
	class Exile_Cosmetic_Raisins: Exile_Cosmetic_BBQSandwich
	{
		displayName="Raisins (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Raisins.p3d";
	};
	class Exile_Cosmetic_PowerDrink: Exile_Cosmetic_BBQSandwich
	{
		displayName="Power Drink (Cosmetic)";
		model="\exile_assets\model\Exile_Item_PowerDrink.p3d";
	};
	class Exile_Cosmetic_Surstromming: Exile_Cosmetic_BBQSandwich
	{
		displayName="Surströmming (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Surstromming.p3d";
	};
	class Exile_Cosmetic_Magazine01: Exile_Cosmetic_BBQSandwich
	{
		displayName="Better Prisoners #01 (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Magazine01.p3d";
	};
	class Exile_Cosmetic_Magazine02: Exile_Cosmetic_BBQSandwich
	{
		displayName="Better Prisoners #02 (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Magazine02.p3d";
	};
	class Exile_Cosmetic_Magazine03: Exile_Cosmetic_BBQSandwich
	{
		displayName="Better Prisoners #03 (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Magazine03.p3d";
	};
	class Exile_Cosmetic_Magazine04: Exile_Cosmetic_BBQSandwich
	{
		displayName="Better Prisoners #04 (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Magazine04.p3d";
	};
	class Exile_Cosmetic_PopTabs: Exile_Cosmetic_BBQSandwich
	{
		displayName="PopTabs (Cosmetic)";
		model="\exile_assets\model\Exile_Item_PopTabs.p3d";
	};
	class Exile_Cosmetic_GasMask: Exile_Cosmetic_BBQSandwich
	{
		displayName="Gas Mask (Cosmetic)";
		model="\exile_assets\model\Exile_Clothing_Gasmask_World.p3d";
	};
	class Exile_Cosmetic_Knife: Exile_Cosmetic_BBQSandwich
	{
		displayName="Knife (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Knife.p3d";
	};
	class Exile_Cosmetic_Foolbox: Exile_Cosmetic_BBQSandwich
	{
		displayName="Foolbox (Cosmetic)";
		model="\exile_assets\model\Exile_Item_Toolbox.p3d";
	};
	class Exile_Cosmetic_Axe: Exile_Cosmetic_BBQSandwich
	{
		displayName="Axe (Cosmetic)";
		model="\exile_assets\model\Exile_Melee_Axe.p3d";
	};
	class Exile_Cosmetic_SledgeHammer: Exile_Cosmetic_BBQSandwich
	{
		displayName="Sledge Hammer (Cosmetic)";
		model="\exile_assets\model\Exile_Melee_SledgeHammer.p3d";
	};
	class Exile_Cosmetic_Shovel: Exile_Cosmetic_BBQSandwich
	{
		displayName="Shovel (Cosmetic)";
		model="\exile_assets\model\Exile_Melee_Shovel.p3d";
	};
	class Exile_Cosmetic_MG: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Cosmetic MG";
		model="\A3\Static_F_Gamma\HMG_01\HMG_01_F.p3d";
		destrType="DestructNo";
	};
	class Exile_Cosmetic_UAV: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Cosmetic UAV";
		model="\A3\Drones_F\Air_F_Gamma\UAV_01\UAV_01_F.p3d";
		destrType="DestructNo";
	};
	class Exile_Sign_Aircraft: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Aircraft)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Aircraft_co.paa"
		};
	};
	class Exile_Sign_AircraftCustoms: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Aircraft Customs)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_AircraftCustoms_co.paa"
		};
	};
	class Exile_Sign_AircraftCustoms_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (AircraftCustoms, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_AircraftCustoms_Small_co.paa"
		};
	};
	class Exile_Sign_Aircraft_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Aircraft, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Aircraft_Small_co.paa"
		};
	};
	class Exile_Sign_Armory: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Armory)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Armory_co.paa"
		};
	};
	class Exile_Sign_Armory_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Armory, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Armory_Small_co.paa"
		};
	};
	class Exile_Sign_Boat: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Boat)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Boat_co.paa"
		};
	};
	class Exile_Sign_BoatAndDiving_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Boat and Diving, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Boat_Diving_co.paa"
		};
	};
	class Exile_Sign_BoatCustoms: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Boat Customs)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_BoatCustoms_co.paa"
		};
	};
	class Exile_Sign_BoatCustoms_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (BoatCustoms, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_BoatCustoms_Small_co.paa"
		};
	};
	class Exile_Sign_Boat_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Boat, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Boat_Small_co.paa"
		};
	};
	class Exile_Sign_Diving_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Diving, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Diving_co.paa"
		};
	};
	class Exile_Sign_Equipment: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Equipment)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Equipment_co.paa"
		};
	};
	class Exile_Sign_Equipment_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Equipment, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Equipment_Small_co.paa"
		};
	};
	class Exile_Sign_Food: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Food)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Food_co.paa"
		};
	};
	class Exile_Sign_Food_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Food, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Food_Small_co.paa"
		};
	};
	class Exile_Sign_Foolbox: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Foolbox)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Foolbox_co.paa"
		};
	};
	class Exile_Sign_Hardware: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Hardware)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Hardware_co.paa"
		};
	};
	class Exile_Sign_Hardware_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Hardware, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Hardware_Small_co.paa"
		};
	};
	class Exile_Sign_Hausmann: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Hausmann)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Hausmann_co.paa"
		};
	};
	class Exile_Sign_Locker: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Locker)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Locker_co.paa"
		};
	};
	class Exile_Sign_Office: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Office)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Office_co.paa"
		};
	};
	class Exile_Sign_Office_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Office, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Office_Small_co.paa"
		};
	};
	class Exile_Sign_RussianRoulette: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Russian Roulette)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_RussianRoulette_co.paa"
		};
	};
	class Exile_Sign_SpecialOperations: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Special Operations)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_SpecialOperations_co.paa"
		};
	};
	class Exile_Sign_SpecialOperations_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Special Operations, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_SpecialOperations_Small_co.paa"
		};
	};
	class Land_Billboard_F;
	class Exile_Sign_TraderCity: Land_Billboard_F
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Sign (Trader City)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_TraderCity_co.paa"
		};
	};
	class Exile_Sign_VehicleCustoms: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Vehicle Customs)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_VehicleCustoms_co.paa"
		};
	};
	class Exile_Sign_VehicleCustoms_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Vehicle Customs, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_VehicleCustoms_Small_co.paa"
		};
	};
	class Exile_Sign_Vehicles: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Vehicles)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Vehicles_co.paa"
		};
	};
	class Exile_Sign_Vehicles_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Vehicles, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_Vehicles_Small_co.paa"
		};
	};
	class Exile_Sign_WasteDump: SignAd_Sponsor_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Waste Dump)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_WasteDump_co.paa"
		};
	};
	class Exile_Sign_WasteDump_Small: SignAd_SponsorS_F
	{
		author="Exile Mod Team";
		displayName="Exile Sign (Waste Dump, small)";
		hiddenSelectionsTextures[]=
		{
			"exile_assets\model\Exile_Sign_WasteDump_Small_co.paa"
		};
	};
	class Exile_Unit_Abstract: C_man_w_worker_F
	{
		scope=0;
		author="Exile Mod Team";
		displayName="Exile Unit Abstract";
		side=2;
		modelSides[]={2};
		faction="IND_F";
		vehicleClass="Men";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[]={};
		respawnItems[]={};
		linkedItems[]={};
		respawnLinkedItems[]={};
		canCarryBackPack=1;
		nakedUniform="U_BasicBody";
		model="";
		uniformClass="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType=602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType=604;
				};
				class Googles: UniformSlotInfo
				{
					slotType=603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType=605;
				};
			};
		};
	};
	class Exile_Unit_ExileCustoms: Exile_Unit_Abstract
	{
		scope=2;
		displayName="Exile Customs";
		model="\A3\characters_F\common\coveralls";
		uniformClass="Exile_Unitform_ExileCustoms";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\Exile_Uniform_ExileCustoms_co.paa"
		};
	};
	class Exile_Unit_GhostPlayer: VirtualMan_F
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Player Slot";
		side=2;
		modelSides[]={2};
		faction="IND_F";
		vehicleClass="Men";
	};
	class Exile_Unit_Player: Exile_Unit_Abstract
	{
		scope=2;
		displayName="Exile Player";
		model="\A3\characters_F\common\coveralls";
		uniformClass="Exile_Uniform_BambiOverall";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\Exile_Uniform_BambiOverall_co.paa"
		};
	};
	class Exile_Unit_Wetsuit_NATO: B_diver_F
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Diver (NATO, Forced)";
		hiddenUnderwaterSelections[]={};
	};
	class Exile_Unit_Wetsuit_AAF: I_diver_F
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Diver (AAF, Forced)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia",
			"hide"
		};
		hiddenSelectionsMaterials[]={};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\diver_suit_rus_co.paa",
			"\A3\Characters_F\Common\Data\diver_equip_rus_co.paa"
		};
		hiddenUnderwaterSelections[]={};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
		shownUnderwaterSelections[]={};
	};
	class Exile_Unit_Wetsuit_CSAT: O_diver_F
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Diver (CSAT, Forced)";
		hiddenUnderwaterSelections[]={};
	};
	class Exile_Unit_Woodland: Exile_Unit_Abstract
	{
		scope=2;
		displayName="Exile Woodland";
		uniformClass="Exile_Unitform_Woodland";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing_wdl_co.paa"
		};
	};
	class BRDM2_HQ_CHDKZ;
	class Exile_Car_BRDM2_HQ_Abstract: BRDM2_HQ_CHDKZ
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="BRDM-2 (HQ)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad=1500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_BRDM2_HQ: Exile_Car_BRDM2_HQ_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_brdm\data\brdm2_01_co.paa",
			"Exile_psycho_brdm\data\brdm2_02_co.paa"
		};
	};
	class Golf_Civ_Base;
	class Exile_Car_Golf_Abstract: Golf_Civ_Base
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Golf";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1000;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Golf_Red: Exile_Car_Golf_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenSelectionsTextures[]=
		{
			"exile_psycho_VWGolf\data\vwgolf_body_co.paa"
		};
	};
	class Exile_Car_Golf_Black: Exile_Car_Golf_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"exile_psycho_VWGolf\data\texture\black_co.paa"
		};
	};
	class C_Hatchback_01_F;
	class Exile_Car_Hatchback_Abstract: C_Hatchback_01_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Hatchback";
		fuelConsumptionRate="0.03f";
		maximumLoad=1300;
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Hatchback_Beige: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Beige";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Green: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Blue: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"
		};
	};
	class Exile_Car_Hatchback_BlueCustom: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Blue Custom";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"
		};
	};
	class Exile_Car_Hatchback_BeigeCustom: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Beige Custom";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Yellow: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Yellow";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Grey: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Grey";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Black: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Dark: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Dark";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Rusty1: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Rusty White";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat",
			"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat"
		};
	};
	class Exile_Car_Hatchback_Rusty2: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Rusty Red";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat",
			"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat"
		};
	};
	class Exile_Car_Hatchback_Rusty3: Exile_Car_Hatchback_Abstract
	{
		scope=2;
		skinName="Rusty Yellow";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat",
			"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat"
		};
	};
	class C_Hatchback_01_sport_F;
	class Exile_Car_Hatchback_Sport_Abstract: C_Hatchback_01_sport_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Hatchback (Sport)";
		fuelConsumptionRate="0.04f";
		maximumLoad=1300;
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Hatchback_Sport_Red: Exile_Car_Hatchback_Sport_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Sport_Blue: Exile_Car_Hatchback_Sport_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Sport_Orange: Exile_Car_Hatchback_Sport_Abstract
	{
		scope=2;
		skinName="Orange";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Sport_White: Exile_Car_Hatchback_Sport_Abstract
	{
		scope=2;
		skinName="White";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Sport_Beige: Exile_Car_Hatchback_Sport_Abstract
	{
		scope=2;
		skinName="Beige";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Sport_Green: Exile_Car_Hatchback_Sport_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"
		};
	};
	class Exile_Car_Hatchback_Sport_Admin: Exile_Car_Hatchback_Sport_Abstract
	{
		scope=2;
		skinName="Admin Speedster";
		maxSpeed=600;
		acceleration=100;
		brakeTorque=12000;
		redRpm=9900;
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"
		};
	};
	class B_Truck_01_transport_F;
	class Exile_Car_HEMMT_Abstract: B_Truck_01_transport_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="HEMMT (Transport)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=4600;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_HEMMT: Exile_Car_HEMMT_Abstract
	{
		scope=2;
	};
	class HMMWV_M134;
	class Exile_Car_HMMWV_M134_Abstract: HMMWV_M134
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="HMMWV (M134)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad=1500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_HMMWV_M134_Green: Exile_Car_HMMWV_M134_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_hmmw\data\hmmwv_body_co.paa"
		};
	};
	class Exile_Car_HMMWV_M134_Desert: Exile_Car_HMMWV_M134_Abstract
	{
		scope=2;
		skinName="Desert";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"
		};
	};
	class HMMWV_M2;
	class Exile_Car_HMMWV_M2_Abstract: HMMWV_M2
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="HMMWV (M2)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad=1200;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_HMMWV_M2_Green: Exile_Car_HMMWV_M2_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_hmmw\data\hmmwv_body_co.paa"
		};
	};
	class Exile_Car_HMMWV_M2_Desert: Exile_Car_HMMWV_M2_Abstract
	{
		scope=2;
		skinName="Desert";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"
		};
	};
	class HMMWV_MEV;
	class Exile_Car_HMMWV_MEV_Abstract: HMMWV_MEV
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="HMMWV (MEV)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad=2000;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_HMMWV_MEV_Green: Exile_Car_HMMWV_MEV_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"
		};
	};
	class Exile_Car_HMMWV_MEV_Desert: Exile_Car_HMMWV_MEV_Abstract
	{
		scope=2;
		skinName="Desert";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"
		};
	};
	class HMMWV_UNA;
	class Exile_Car_HMMWV_UNA_Abstract: HMMWV_UNA
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="HMMWV (Unarmed)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad=2000;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_HMMWV_UNA_Green: Exile_Car_HMMWV_UNA_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_hmmw\data\hmmwv_body_co.paa"
		};
	};
	class Exile_Car_HMMWV_UNA_Desert: Exile_Car_HMMWV_UNA_Abstract
	{
		scope=2;
		skinName="Desert";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"
		};
	};
	class B_MRAP_01_F;
	class Exile_Car_Hunter_Abstract: B_MRAP_01_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Hunter";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=2200;
		armor=200;
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_LB",
			"Door_RB"
		};
		crewVulnerable=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Hunter: Exile_Car_Hunter_Abstract
	{
		scope=2;
	};
	class O_MRAP_02_F;
	class Exile_Car_Ifrit_Abstract: O_MRAP_02_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Ifrit";
		fuelConsumptionRate="0.05f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1800;
		armor=150;
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_LB",
			"Door_RB",
			"Door_rear"
		};
		crewVulnerable=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Ifrit: Exile_Car_Ifrit_Abstract
	{
		scope=2;
	};
	class Ikarus_Civ_02;
	class Exile_Car_Ikarus_Abstract: Ikarus_Civ_02
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Ikarus";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="Exile_psycho_Ikarus\Data\sounds\d1opn_r";
		maximumLoad=4000;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Ikarus_Blue: Exile_Car_Ikarus_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenselections[]=
		{
			"Camo1"
		};
		hiddenselectionstextures[]=
		{
			"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"
		};
	};
	class Exile_Car_Ikarus_Red: Exile_Car_Ikarus_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenselections[]=
		{
			"Camo1"
		};
		hiddenselectionstextures[]=
		{
			"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"
		};
	};
	class Exile_Car_Ikarus_Party: Exile_Car_Ikarus_Abstract
	{
		scope=2;
		skinName="Party";
		hiddenselections[]=
		{
			"Camo1"
		};
		hiddenselectionstextures[]=
		{
			"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"
		};
	};
	class C_Kart_01_black_F;
	class Exile_Car_Kart_Abstract: C_Kart_01_black_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Kart";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Kart_BluKing: Exile_Car_Kart_Abstract
	{
		scope=2;
		skinName="BluKing";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
	};
	class Exile_Car_Kart_RedStone: Exile_Car_Kart_Abstract
	{
		scope=2;
		skinName="RedStone";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
	};
	class Exile_Car_Kart_Vrana: Exile_Car_Kart_Abstract
	{
		scope=2;
		skinName="Vrana";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
	};
	class Exile_Car_Kart_Green: Exile_Car_Kart_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
	};
	class Exile_Car_Kart_Blue: Exile_Car_Kart_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
	};
	class Exile_Car_Kart_Orange: Exile_Car_Kart_Abstract
	{
		scope=2;
		skinName="Orange";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
	};
	class Exile_Car_Kart_White: Exile_Car_Kart_Abstract
	{
		scope=2;
		skinName="White";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa",
			"",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
	};
	class Exile_Car_Kart_Yellow: Exile_Car_Kart_Abstract
	{
		scope=2;
		skinName="Yellow";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa",
			"",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
	};
	class Exile_Car_Kart_Black: Exile_Car_Kart_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
	};
	class Lada_Base;
	class Exile_Car_Lada_Abstract: Lada_Base
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Lada";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_lada\sounds\lada_door";
		maximumLoad=1500;
		maxSpeed=110;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Lada_Green: Exile_Car_Lada_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenselections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenselectionstextures[]=
		{
			"exile_psycho_lada\data\lada_eciv1_co.paa",
			"exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"
		};
	};
	class Exile_Car_Lada_Taxi: Exile_Car_Lada_Abstract
	{
		scope=2;
		skinName="Taxi";
		hiddenselections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenselectionstextures[]=
		{
			"exile_psycho_lada\data\Lada_red_CO.paa"
		};
		model="\exile_psycho_lada\Lada_LM.p3d";
	};
	class Exile_Car_Lada_Red: Exile_Car_Lada_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenselections[]=
		{
			"Camo1"
		};
		hiddenselectionstextures[]=
		{
			"exile_psycho_lada\data\Lada_red_CO.paa"
		};
	};
	class Exile_Car_Lada_White: Exile_Car_Lada_Abstract
	{
		scope=2;
		skinName="White";
		hiddenSelectionsTextures[]={};
	};
	class Exile_Car_Lada_Hipster: Exile_Car_Lada_Abstract
	{
		scope=2;
		skinName="Hipster";
		hiddenselections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenselectionstextures[]=
		{
			"exile_psycho_lada\data\lada_eciv2_co.paa",
			"exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"
		};
	};
	class Landrover_Civ_02;
	class Exile_Car_LandRover_Abstract: Landrover_Civ_02
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Land Rover";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_lrc\data\sounds\LRover_door";
		maximumLoad=2200;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_LandRover_Red: Exile_Car_LandRover_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_LRC\data\r_lr_base_co.paa",
			"Exile_psycho_LRC\data\r_lr_special_co.paa"
		};
	};
	class Exile_Car_LandRover_Urban: Exile_Car_LandRover_Abstract
	{
		scope=2;
		skinName="Urban";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa",
			"Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"
		};
	};
	class Exile_Car_LandRover_Green: Exile_Car_LandRover_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_LRC\data\lr_acr_base_co.paa",
			"Exile_psycho_LRC\data\lr_acr_spec_co.paa"
		};
	};
	class Exile_Car_LandRover_Sand: Exile_Car_LandRover_Abstract
	{
		scope=2;
		skinName="Sand";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa",
			"Exile_psycho_LRC\data\lr_special_acr_co.paa"
		};
	};
	class Exile_Car_LandRover_Desert: Exile_Car_LandRover_Abstract
	{
		scope=2;
		skinName="Desert";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_LRC\data\lr_acrs_base_co.paa",
			"Exile_psycho_LRC\data\lr_special_acr_co.paa"
		};
	};
	class LR_Ambulance_Base;
	class Exile_Car_LandRover_Ambulance_Abstract: LR_Ambulance_Base
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Land Rover (Ambulance)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_lrc\data\sounds\LRover_door";
		maximumLoad=2500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_LandRover_Ambulance_Green: Exile_Car_LandRover_Ambulance_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_LRC\data\lr_acr_base_co.paa",
			"Exile_psycho_LRC\data\lr_amb_ext_co.paa",
			"Exile_psycho_LRC\data\lr_acr_spec_co.paa"
		};
	};
	class Exile_Car_LandRover_Ambulance_Desert: Exile_Car_LandRover_Ambulance_Abstract
	{
		scope=2;
		skinName="Desert";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_LRC\data\lr_acrs_base_co.paa",
			"Exile_psycho_LRC\data\lr_amb_ext_co.paa",
			"Exile_psycho_LRC\data\lr_special_acr_co.paa"
		};
	};
	class Exile_Car_LandRover_Ambulance_Sand: Exile_Car_LandRover_Ambulance_Abstract
	{
		scope=2;
		skinName="Sand";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa",
			"Exile_psycho_LRC\data\lr_amb_ext_co.paa",
			"Exile_psycho_LRC\data\lr_special_acr_co.paa"
		};
	};
	class C_Offroad_02_unarmed_orange_F;
	class Exile_Car_MB4WD: C_Offroad_02_unarmed_orange_F
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="Orange";
		displayName="MB 4WD";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=3000;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class I_C_Offroad_02_unarmed_F;
	class Exile_Car_MB4WDOpen: I_C_Offroad_02_unarmed_F
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="Orange";
		displayName="MB 4WD (Open)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=3000;
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Octavia_Civ_01;
	class Exile_Car_Octavius_Abstract: Octavia_Civ_01
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Octavius";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad=1500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Octavius_White: Exile_Car_Octavius_Abstract
	{
		scope=2;
		skinName="White";
		hiddenSelectionsTextures[]=
		{
			"exile_psycho_Octavia\Data\car_body_co.paa"
		};
	};
	class Exile_Car_Octavius_Black: Exile_Car_Octavius_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"exile_psycho_Octavia\Data\car_body_bl_co.paa"
		};
	};
	class Offroad_01_civil_base_F;
	class Exile_Car_Offroad_Abstract: Offroad_01_civil_base_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Offroad";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=2000;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Offroad_Red: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"
		};
	};
	class Exile_Car_Offroad_Beige: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Beige";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"
		};
	};
	class Exile_Car_Offroad_White: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="White";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"
		};
	};
	class Exile_Car_Offroad_Blue: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"
		};
	};
	class Exile_Car_Offroad_DarkRed: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Dark Red";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"
		};
	};
	class Exile_Car_Offroad_BlueCustom: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Blue Custom";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla01: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 01";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla02: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 02";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla03: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 03";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla04: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 04";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla05: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 05";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla06: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 06";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla07: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 07";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla08: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 08";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla09: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 09";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla10: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 10";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla11: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 11";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"
		};
	};
	class Exile_Car_Offroad_Guerilla12: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Guerilla 12";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"
		};
	};
	class Exile_Car_Offroad_Rusty1: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Rusty Red";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\RTV\Exile_offroad_01_co.paa",
			"\exile_assets\model\RTV\Exile_offroad_01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\exile_assets\model\RTV\Exile_offroad_01.rvmat",
			"\exile_assets\model\RTV\Exile_offroad_01.rvmat"
		};
	};
	class Exile_Car_Offroad_Rusty2: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Rusty Blue";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\RTV\Exile_offroad_02_co.paa",
			"\exile_assets\model\RTV\Exile_offroad_02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\exile_assets\model\RTV\Exile_offroad_01.rvmat",
			"\exile_assets\model\RTV\Exile_offroad_01.rvmat"
		};
	};
	class Exile_Car_Offroad_Rusty3: Exile_Car_Offroad_Abstract
	{
		scope=2;
		skinName="Rusty White";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\RTV\Exile_offroad_03_co.paa",
			"\exile_assets\model\RTV\Exile_offroad_03_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\exile_assets\model\RTV\Exile_offroad_01.rvmat",
			"\exile_assets\model\RTV\Exile_offroad_01.rvmat"
		};
	};
	class I_G_Offroad_01_armed_F;
	class Exile_Car_Offroad_Armed_Abstract: I_G_Offroad_01_armed_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Offroad (Armed)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1100;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla01: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 01";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla02: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 02";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla03: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 03";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla04: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 04";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla05: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 05";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla06: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 06";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla07: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 07";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla08: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 08";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla09: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 09";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla10: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 10";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla11: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 11";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla12: Exile_Car_Offroad_Armed_Abstract
	{
		scope=2;
		skinName="Guerilla 12";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"
		};
	};
	class C_Offroad_01_repair_F;
	class Exile_Car_Offroad_Repair_Abstract: C_Offroad_01_repair_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		crew="";
		skinName="";
		displayName="Offroad (Repair)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1300;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Offroad_Repair_Civillian: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Civillian";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext.rvmat",
			"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
		};
	};
	class Exile_Car_Offroad_Repair_Red: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Beige: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Beige";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_White: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="White";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Blue: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_DarkRed: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Dark Red";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_BlueCustom: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Blue Custom";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa",
			"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla01: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 01";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla02: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 02";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla03: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 03";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla04: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 04";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla05: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 05";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla06: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 06";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla07: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 07";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla08: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 08";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla09: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 09";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla10: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 10";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla11: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 11";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla12: Exile_Car_Offroad_Repair_Abstract
	{
		scope=2;
		skinName="Guerilla 12";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa",
			"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"
		};
	};
	class TractorOld;
	class Exile_Car_OldTractor_Abstract: TractorOld
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Old Tractor";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_lada\sounds\lada_door";
		maxSpeed=35;
		maximumLoad=1100;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_OldTractor_Red: Exile_Car_OldTractor_Abstract
	{
		scope=2;
		skinName="Red";
	};
	class B_CTRG_LSV_01_light_F;
	class Exile_Car_ProwlerLight: B_CTRG_LSV_01_light_F
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="Olive";
		displayName="Prowler (Light)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=3800;
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class B_T_LSV_01_unarmed_black_F;
	class Exile_Car_ProwlerUnarmed: B_T_LSV_01_unarmed_black_F
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="Black";
		displayName="Prowler (Unarmed)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=3800;
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class O_T_LSV_02_unarmed_black_F;
	class Exile_Car_QilinUnarmed: O_T_LSV_02_unarmed_black_F
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="Black";
		displayName="Qilin (Unarmed)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=3800;
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class I_MRAP_03_F;
	class Exile_Car_Strider_Abstract: I_MRAP_03_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Strider";
		fuelConsumptionRate="0.05f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1800;
		armor=250;
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF"
		};
		crewVulnerable=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Strider: Exile_Car_Strider_Abstract
	{
		scope=2;
	};
	class C_SUV_01_F;
	class Exile_Car_SUV_Abstract: C_SUV_01_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="SUV";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1600;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_SUV_Red: Exile_Car_SUV_Abstract
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"
		};
		skinName="Red";
	};
	class Exile_Car_SUV_Black: Exile_Car_SUV_Abstract
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"
		};
		skinName="Black";
	};
	class Exile_Car_SUV_Grey: Exile_Car_SUV_Abstract
	{
		scope=2;
		skinName="Grey";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"
		};
	};
	class Exile_Car_SUV_Orange: Exile_Car_SUV_Abstract
	{
		scope=2;
		skinName="Orange";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"
		};
	};
	class Exile_Car_SUV_Rusty1: Exile_Car_SUV_Abstract
	{
		scope=2;
		skinName="Rusty White";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Suv_01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Suv.rvmat",
			"\exile_assets\model\RTV\Exile_Car_Suv.rvmat"
		};
	};
	class Exile_Car_SUV_Rusty2: Exile_Car_SUV_Abstract
	{
		scope=2;
		skinName="Rusty Dark";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Suv_02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Suv.rvmat",
			"\exile_assets\model\RTV\Exile_Car_Suv.rvmat"
		};
	};
	class Exile_Car_SUV_Rusty3: Exile_Car_SUV_Abstract
	{
		scope=2;
		skinName="Rusty Red";
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Suv_03_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\exile_assets\model\RTV\Exile_Car_Suv.rvmat",
			"\exile_assets\model\RTV\Exile_Car_Suv.rvmat"
		};
	};
	class SUV_Base;
	class Exile_Car_SUVXL_Abstract: SUV_Base
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="SUV (Classic)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="Exile_psycho_SUV_a3\sound\SUV_ext_door";
		maximumLoad=1800;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_SUVXL_Black: Exile_Car_SUVXL_Abstract
	{
		scope=2;
		skinName="Black";
	};
	class SUV_armored_Base;
	class Exile_Car_SUV_Armed_Abstract: SUV_armored_Base
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="SUV (Armed)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="Exile_psycho_SUV_a3\sound\SUV_ext_door";
		maximumLoad=1500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class UserActions
		{
			class Hide
			{
				condition="((driver this) == player) && ((this animationPhase 'HideGun_01') == 0) && (isNull (this turretUnit [0]))";
				displayName="Hide Gun";
				displayNameDefault="Hide Gun";
				onlyForPlayer=1;
				position="hideaction";
				radius=3;
				statement="this animate['HideGun_01', 1]; this animate['HideGun_02', 1]; this animate['HideGun_03', 1]; this animate['HideGun_04', 1]; this animate['CloseCover1', 1]; this animate['CloseCover2', 1]; this lockTurret [[0], true];";
			};
			class Unhide
			{
				condition="((driver this) == player) && ((this animationPhase 'HideGun_01') == 1)";
				displayName="Show Gun";
				displayNameDefault="Show Gun";
				onlyForplayer=1;
				position="hideaction";
				radius=3;
				statement="this animate['HideGun_01', 0]; this animate['HideGun_02', 0]; this animate['HideGun_03', 0]; this animate['HideGun_04', 0]; this animate['CloseCover1', 0]; this animate['CloseCover2', 0]; this lockTurret [[0], false];";
			};
		};
	};
	class Exile_Car_SUV_Armed_Black: Exile_Car_SUV_Armed_Abstract
	{
		scope=2;
		skinName="Black";
	};
	class O_Truck_03_transport_F;
	class Exile_Car_Tempest_Abstract: O_Truck_03_transport_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Tempest (Transport)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=3800;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Tempest: Exile_Car_Tempest_Abstract
	{
		scope=2;
	};
	class TowingTractor;
	class Exile_Car_TowTractor_Abstract: TowingTractor
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Tow Tractor";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_lada\sounds\lada_door";
		maxSpeed=25;
		maximumLoad=500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_TowTractor_White: Exile_Car_TowTractor_Abstract
	{
		scope=2;
		skinName="White";
	};
	class Tractor_Base;
	class Exile_Car_Tractor_Abstract: Tractor_Base
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="Red";
		displayName="Tractor";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_lada\sounds\lada_door";
		maxSpeed=45;
		maximumLoad=1200;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Tractor_Red: Exile_Car_Tractor_Abstract
	{
		scope=2;
		skinName="Red";
	};
	class UAZ_Base;
	class Exile_Car_UAZ_Abstract: UAZ_Base
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="UAZ";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad=1800;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_UAZ_Green: Exile_Car_UAZ_Abstract
	{
		scope=2;
		skinName="Green";
	};
	class UAZ_Open_Base;
	class Exile_Car_UAZ_Open_Abstract: UAZ_Open_Base
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="Green";
		displayName="UAZ (Open)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad=1800;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_UAZ_Open_Green: Exile_Car_UAZ_Open_Abstract
	{
		scope=2;
		skinName="Green";
	};
	class Ural_RU;
	class Exile_Car_Ural_Covered_Abstract: Ural_RU
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Ural (Covered)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="Exile_psycho_Ural\Sounds\int-ural-getout.wss";
		maximumLoad=4500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Ural_Covered_Blue: Exile_Car_Ural_Covered_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_Ural\data\ural_kabina_civil_co.paa",
			"Exile_psycho_Ural\data\ural_plachta_civil_co.paa"
		};
	};
	class Exile_Car_Ural_Covered_Yellow: Exile_Car_Ural_Covered_Abstract
	{
		scope=2;
		skinName="Yellow";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa",
			"Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"
		};
	};
	class Exile_Car_Ural_Covered_Worker: Exile_Car_Ural_Covered_Abstract
	{
		scope=2;
		skinName="Worker";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa",
			"Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"
		};
	};
	class Exile_Car_Ural_Covered_Military: Exile_Car_Ural_Covered_Abstract
	{
		scope=2;
		skinName="Military";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_Ural\data\ural_kabina_khk_co.paa",
			"Exile_psycho_Ural\data\ural_plachta_co.paa"
		};
	};
	class Ural_Open_RU;
	class Exile_Car_Ural_Open_Abstract: Ural_Open_RU
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Ural (Open)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="Exile_psycho_Ural\Sounds\int-ural-getout.wss";
		maximumLoad=4500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Ural_Open_Blue: Exile_Car_Ural_Open_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa",
			"Exile_psycho_Ural\data\ural_plachta_civil_co.paa"
		};
	};
	class Exile_Car_Ural_Open_Yellow: Exile_Car_Ural_Open_Abstract
	{
		scope=2;
		skinName="Yellow";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa",
			"Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"
		};
	};
	class Exile_Car_Ural_Open_Worker: Exile_Car_Ural_Open_Abstract
	{
		scope=2;
		skinName="Worker";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa",
			"Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"
		};
	};
	class Exile_Car_Ural_Open_Military: Exile_Car_Ural_Open_Abstract
	{
		scope=2;
		skinName="Military";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_Ural\data\ural_kabina_khk_co.paa",
			"Exile_psycho_Ural\data\ural_plachta_co.paa"
		};
	};
	class V3S_Base_EP1;
	class Exile_Car_V3S_Covered_Abstract: V3S_Base_EP1
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="V3S (Covered)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="Exile_psycho_Ural\Sounds\int-ural-getout.wss";
		maximumLoad=4500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_V3S_Covered: Exile_Car_V3S_Covered_Abstract
	{
		scope=2;
		skinName="Camo";
	};
	class V3S_base;
	class Exile_Car_V3S_Open_Abstract: V3S_base
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="V3S (Open)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="Exile_psycho_Ural\Sounds\int-ural-getout.wss";
		maximumLoad=4500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_V3S_Open: Exile_Car_V3S_Open_Abstract
	{
		scope=2;
		skinName="Green";
	};
	class C_Van_01_transport_F;
	class Exile_Car_Van_Abstract: C_Van_01_transport_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Van";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=3600;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Van_Black: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa",
			"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
		};
	};
	class Exile_Car_Van_White: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="White";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa",
			"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
		};
	};
	class Exile_Car_Van_Red: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa",
			"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
		};
	};
	class Exile_Car_Van_Guerilla01: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="Guerilla 01";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"
		};
	};
	class Exile_Car_Van_Guerilla02: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="Guerilla 02";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"
		};
	};
	class Exile_Car_Van_Guerilla03: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="Guerilla 03";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"
		};
	};
	class Exile_Car_Van_Guerilla04: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="Guerilla 04";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"
		};
	};
	class Exile_Car_Van_Guerilla05: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="Guerilla 05";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"
		};
	};
	class Exile_Car_Van_Guerilla06: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="Guerilla 06";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"
		};
	};
	class Exile_Car_Van_Guerilla07: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="Guerilla 07";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"
		};
	};
	class Exile_Car_Van_Guerilla08: Exile_Car_Van_Abstract
	{
		scope=2;
		skinName="Guerilla 08";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"
		};
	};
	class C_Van_01_box_F;
	class Exile_Car_Van_Box_Abstract: C_Van_01_box_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Van (Box)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=4600;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Van_Box_Black: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa",
			"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
		};
	};
	class Exile_Car_Van_Box_White: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="White";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa",
			"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
		};
	};
	class Exile_Car_Van_Box_Red: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa",
			"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
		};
	};
	class Exile_Car_Van_Box_Guerilla01: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="Guerilla 01";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"
		};
	};
	class Exile_Car_Van_Box_Guerilla02: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="Guerilla 02";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"
		};
	};
	class Exile_Car_Van_Box_Guerilla03: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="Guerilla 03";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"
		};
	};
	class Exile_Car_Van_Box_Guerilla04: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="Guerilla 04";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"
		};
	};
	class Exile_Car_Van_Box_Guerilla05: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="Guerilla 05";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"
		};
	};
	class Exile_Car_Van_Box_Guerilla06: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="Guerilla 06";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"
		};
	};
	class Exile_Car_Van_Box_Guerilla07: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="Guerilla 07";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"
		};
	};
	class Exile_Car_Van_Box_Guerilla08: Exile_Car_Van_Box_Abstract
	{
		scope=2;
		skinName="Guerilla 08";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"
		};
	};
	class C_Van_01_fuel_F;
	class Exile_Car_Van_Fuel_Abstract: C_Van_01_fuel_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Van (Fuel)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1100;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Van_Fuel_Black: Exile_Car_Van_Fuel_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa",
			"\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"
		};
	};
	class Exile_Car_Van_Fuel_White: Exile_Car_Van_Fuel_Abstract
	{
		scope=2;
		skinName="White";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa",
			"\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"
		};
	};
	class Exile_Car_Van_Fuel_Red: Exile_Car_Van_Fuel_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa",
			"\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"
		};
	};
	class Exile_Car_Van_Fuel_Guerilla01: Exile_Car_Van_Fuel_Abstract
	{
		scope=2;
		skinName="Guerilla 01";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"
		};
	};
	class Exile_Car_Van_Fuel_Guerilla02: Exile_Car_Van_Fuel_Abstract
	{
		scope=2;
		skinName="Guerilla 02";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"
		};
	};
	class Exile_Car_Van_Fuel_Guerilla03: Exile_Car_Van_Fuel_Abstract
	{
		scope=2;
		skinName="Guerilla 03";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa",
			"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"
		};
	};
	class volha_Base;
	class Exile_Car_Volha_Abstract: volha_Base
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Volha";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="Exile_psycho_Gaz_volha\sounds\gaz\gaz_door";
		maximumLoad=1800;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Volha_Blue: Exile_Car_Volha_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenselections[]=
		{
			"Camo1"
		};
		hiddenselectionstextures[]=
		{
			"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"
		};
	};
	class Exile_Car_Volha_White: Exile_Car_Volha_Abstract
	{
		scope=2;
		skinName="White";
		hiddenselections[]=
		{
			"Camo1"
		};
		hiddenselectionstextures[]=
		{
			"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"
		};
	};
	class Exile_Car_Volha_Black: Exile_Car_Volha_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenselections[]=
		{
			"Camo1"
		};
		hiddenselectionstextures[]=
		{
			"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"
		};
	};
	class I_Truck_02_transport_F;
	class Exile_Car_Zamak_Abstract: I_Truck_02_transport_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Zamak (Transport)";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=4200;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Car_Zamak: Exile_Car_Zamak_Abstract
	{
		scope=2;
	};
	class dbo_CIV_new_bike;
	class Exile_Bike_MountainBike: dbo_CIV_new_bike
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileBikes";
		displayName="Mountain Bike";
		skinName="";
	};
	class dbo_CIV_ol_bike;
	class Exile_Bike_OldBike: dbo_CIV_ol_bike
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileBikes";
		displayName="Old Bike";
		skinName="";
	};
	class Quadbike_01_base_F;
	class Exile_Bike_QuadBike_Abstract: Quadbike_01_base_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileCars";
		skinName="";
		displayName="Quad Bike";
		fuelConsumptionRate="0.03f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=600;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Bike_QuadBike_Black: Exile_Bike_QuadBike_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa",
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"
		};
	};
	class Exile_Bike_QuadBike_Blue: Exile_Bike_QuadBike_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa",
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"
		};
	};
	class Exile_Bike_QuadBike_Red: Exile_Bike_QuadBike_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa",
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"
		};
	};
	class Exile_Bike_QuadBike_White: Exile_Bike_QuadBike_Abstract
	{
		scope=2;
		skinName="White";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa",
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"
		};
	};
	class Exile_Bike_QuadBike_Nato: Exile_Bike_QuadBike_Abstract
	{
		scope=2;
		skinName="NATO";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa",
			"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"
		};
	};
	class Exile_Bike_QuadBike_Csat: Exile_Bike_QuadBike_Abstract
	{
		scope=2;
		skinName="CSAT";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa",
			"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"
		};
	};
	class Exile_Bike_QuadBike_Fia: Exile_Bike_QuadBike_Abstract
	{
		scope=2;
		skinName="FIA";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa",
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"
		};
	};
	class Exile_Bike_QuadBike_Guerilla01: Exile_Bike_QuadBike_Abstract
	{
		scope=2;
		skinName="Guerilla 01";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa",
			"\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"
		};
	};
	class Exile_Bike_QuadBike_Guerilla02: Exile_Bike_QuadBike_Abstract
	{
		scope=2;
		skinName="Guerilla 02";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa",
			"\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"
		};
	};
	class I_Heli_light_03_unarmed_F;
	class Exile_Chopper_Hellcat_Abstract: I_Heli_light_03_unarmed_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="WY-55 Hellcat";
		fuelConsumptionRate="0.515";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=2600;
		driverCanEject=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Hellcat_Green: Exile_Chopper_Hellcat_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"
		};
	};
	class Exile_Chopper_Hellcat_FIA: Exile_Chopper_Hellcat_Abstract
	{
		scope=2;
		skinName="FIA";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"
		};
	};
	class UH1H_Clo;
	class Exile_Chopper_Huey_Abstract: UH1H_Clo
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="UH-1H Huey";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		driverCanEject=1;
		maximumLoad=2500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Huey_Green: Exile_Chopper_Huey_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_UH1H\data\uh1h_co.paa",
			"Exile_psycho_UH1H\data\uh1h_in_co.paa",
			"Exile_psycho_UH1H\data\default_co.paa",
			"Exile_psycho_UH1H\data\alpha_ca.paa"
		};
	};
	class Exile_Chopper_Huey_Desert: Exile_Chopper_Huey_Abstract
	{
		scope=2;
		skinName="Desert";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_UH1H\data\uh1d_tka_co.paa",
			"Exile_psycho_UH1H\data\uh1d_in_tka_co.paa",
			"Exile_psycho_UH1H\data\default_co.paa",
			"Exile_psycho_UH1H\data\alpha_ca.paa"
		};
	};
	class UH1H_M240;
	class Exile_Chopper_Huey_Armed_Abstract: UH1H_M240
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="UH-1H Huey (Armed)";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		driverCanEject=1;
		maximumLoad=2500;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Huey_Armed_Green: Exile_Chopper_Huey_Armed_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_UH1H\data\uh1h_co.paa",
			"Exile_psycho_UH1H\data\uh1h_in_co.paa",
			"Exile_psycho_UH1H\data\default_co.paa",
			"Exile_psycho_UH1H\data\alpha_ca.paa"
		};
	};
	class Exile_Chopper_Huey_Armed_Desert: Exile_Chopper_Huey_Armed_Abstract
	{
		scope=2;
		skinName="Desert";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_UH1H\data\uh1d_tka_co.paa",
			"Exile_psycho_UH1H\data\uh1d_in_tka_co.paa",
			"Exile_psycho_UH1H\data\default_co.paa",
			"Exile_psycho_UH1H\data\alpha_ca.paa"
		};
	};
	class B_Heli_Light_01_F;
	class Exile_Chopper_Hummingbird_Abstract: B_Heli_Light_01_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="MH-9 Hummingbird";
		fuelConsumptionRate="0.0966";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1300;
		driverCanEject=1;
		driverDoor="DoorL_Front_Open";
		cargoDoors[]=
		{
			"DoorR_Front_Open",
			"DoorL_Back_Open",
			"DoorR_Back_Open"
		};
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Hummingbird_Green: Exile_Chopper_Hummingbird_Abstract
	{
		scope=2;
		skinName="Green";
	};
	class C_Heli_Light_01_civil_F;
	class Exile_Chopper_Hummingbird_Civillian_Abstract: C_Heli_Light_01_civil_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="M-900 (Civillian)";
		fuelConsumptionRate="0.0966";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1300;
		driverCanEject=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Blue: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Blue";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Red: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Red";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_ION: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="ION";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_BlueLine: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Blue Line";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Digital: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Digital";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Elliptical: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Elliptical";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Furious: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Furious";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Gray Watcher";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Jeans: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Jeans";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Light: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Light";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Shadow: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Shadow";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Sheriff: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Sheriff";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Speedy: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Speedy";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Sunset: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Sunset";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Vrana: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Vrana";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Wasp: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Wasp";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Wave: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope=2;
		skinName="Wave";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
		};
	};
	class B_Heli_Transport_03_unarmed_F;
	class Exile_Chopper_Huron_Abstract: B_Heli_Transport_03_unarmed_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="CH-67 Huron";
		fuelConsumptionRate="0.378";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=6000;
		driverCanEject=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Huron_Black: Exile_Chopper_Huron_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
		};
	};
	class Exile_Chopper_Huron_Green: Exile_Chopper_Huron_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
		};
	};
	class I_Heli_Transport_02_F;
	class Exile_Chopper_Mohawk_Abstract: I_Heli_Transport_02_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="CH-49 Mohawk";
		fuelConsumptionRate="0.406";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=4800;
		driverCanEject=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Mohawk_FIA: Exile_Chopper_Mohawk_Abstract
	{
		scope=2;
		skinName="FIA";
	};
	class O_Heli_Light_02_unarmed_F;
	class Exile_Chopper_Orca_Abstract: O_Heli_Light_02_unarmed_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="PO-30 Orca";
		fuelConsumptionRate="0.33";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=4600;
		driverCanEject=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Orca_CSAT: Exile_Chopper_Orca_Abstract
	{
		scope=2;
		skinName="CSAT";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"
		};
	};
	class Exile_Chopper_Orca_Black: Exile_Chopper_Orca_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"
		};
	};
	class Exile_Chopper_Orca_BlackCustom: Exile_Chopper_Orca_Abstract
	{
		scope=2;
		skinName="Black Custom";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"
		};
	};
	class O_Heli_Transport_04_bench_F;
	class Exile_Chopper_Taru_Abstract: O_Heli_Transport_04_bench_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="MI-280 Taru";
		fuelConsumptionRate="0.406";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=3200;
		driverCanEject=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Taru_CSAT: Exile_Chopper_Taru_Abstract
	{
		scope=2;
		skinName="CSAT";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa",
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"
		};
	};
	class Exile_Chopper_Taru_Black: Exile_Chopper_Taru_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"
		};
	};
	class O_Heli_Transport_04_covered_black_F;
	class Exile_Chopper_Taru_Covered_Abstract: O_Heli_Transport_04_covered_black_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="MI-280 Taru (Covered)";
		fuelConsumptionRate="0.406";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=4300;
		driverCanEject=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Taru_Covered_CSAT: Exile_Chopper_Taru_Covered_Abstract
	{
		scope=2;
		skinName="CSAT";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa",
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa",
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa",
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"
		};
	};
	class Exile_Chopper_Taru_Covered_Black: Exile_Chopper_Taru_Covered_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa",
			"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa",
			"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa",
			"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"
		};
	};
	class O_Heli_Transport_04_F;
	class Exile_Chopper_Taru_Transport_Abstract: O_Heli_Transport_04_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileChoppers";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="MI-280 Taru (Transport)";
		fuelConsumptionRate="0.406";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1100;
		driverCanEject=1;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Chopper_Taru_Transport_CSAT: Exile_Chopper_Taru_Transport_Abstract
	{
		scope=2;
		skinName="CSAT";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa",
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"
		};
	};
	class Exile_Chopper_Taru_Transport_Black: Exile_Chopper_Taru_Transport_Abstract
	{
		scope=2;
		skinName="Black";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
			"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"
		};
	};
	class Boat_Civil_01_base_F;
	class Exile_Boat_MotorBoat_Abstract: Boat_Civil_01_base_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileBoats";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="Motor Boat";
		fuelConsumptionRate="0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Boat_MotorBoat_Police: Exile_Boat_MotorBoat_Abstract
	{
		scope=2;
		skinName="Police";
		displayName="Motor Boat (Police)";
		class AnimationSources: AnimationSources
		{
			class Proxy
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Beacons
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		class Eventhandlers: EventHandlers
		{
			init="_this select 0 animate [""HidePoliceSigns"",0]; _this select 0 animate [""HideRescueSigns"",1]; _this select 0 animate [""HidePolice"",0];";
		};
		class UserActions
		{
			class beacons_start
			{
				userActionID=50;
				displayName="$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault="$STR_A3_CfgVehicles_beacons_on";
				position="mph_axis";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				condition="this animationPhase ""BeaconsStart"" < 0.5 AND Alive(this) AND driver this == player";
				statement="this animate [""BeaconsStart"",1];";
			};
			class beacons_stop: beacons_start
			{
				userActionID=51;
				displayName="$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault="$STR_A3_CfgVehicles_beacons_off";
				condition="this animationPhase ""BeaconsStart"" > 0.5 AND Alive(this) AND driver this == player";
				statement="this animate [""BeaconsStart"",0];";
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa",
			"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"
		};
		textureList[]=
		{
			"police",
			1
		};
		animationList[]=
		{
			"hidePolice",
			0,
			"HideRescueSigns",
			1,
			"HidePoliceSigns",
			0
		};
	};
	class Exile_Boat_MotorBoat_Orange: Exile_Boat_MotorBoat_Abstract
	{
		scope=2;
		skinName="Orange";
		displayName="Motor Boat (Orange)";
		hiddenSelectionsTextures[]=
		{
			"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa",
			"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"
		};
	};
	class Exile_Boat_MotorBoat_White: Exile_Boat_MotorBoat_Abstract
	{
		scope=2;
		skinName="White";
		displayName="Motor Boat (White)";
		textures[]=
		{
			"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa",
			"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"
		};
	};
	class B_G_Boat_Transport_02_F;
	class Exile_Boat_RHIB_Abstract: B_G_Boat_Transport_02_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileBoats";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="RHIB";
		fuelConsumptionRate="0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Boat_RHIB: Exile_Boat_RHIB_Abstract
	{
		scope=2;
		skinName="Gray";
		displayName="RHIB";
	};
	class C_Rubberboat;
	class Exile_Boat_RubberDuck_Abstract: C_Rubberboat
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileBoats";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="Rubber Duck";
		fuelConsumptionRate="0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Boat_RubberDuck_CSAT: Exile_Boat_RubberDuck_Abstract
	{
		scope=2;
		skinName="CSAT";
		displayName="Rubber Duck (CSAT)";
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"
		};
	};
	class Exile_Boat_RubberDuck_Digital: Exile_Boat_RubberDuck_Abstract
	{
		scope=2;
		skinName="Digital";
		displayName="Rubber Duck (Digital)";
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"
		};
	};
	class Exile_Boat_RubberDuck_Orange: Exile_Boat_RubberDuck_Abstract
	{
		scope=2;
		skinName="Orange";
		displayName="Rubber Duck (Orange)";
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"
		};
	};
	class Exile_Boat_RubberDuck_Blue: Exile_Boat_RubberDuck_Abstract
	{
		scope=2;
		skinName="Blue";
		displayName="Rubber Duck (Blue)";
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"
		};
	};
	class Exile_Boat_RubberDuck_Black: Exile_Boat_RubberDuck_Abstract
	{
		scope=2;
		skinName="Black";
		displayName="Rubber Duck (Black)";
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"
		};
	};
	class SDV_01_base_F;
	class Exile_Boat_SDV_Abstract: SDV_01_base_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileBoats";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="SDV";
		fuelConsumptionRate="0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Boat_SDV_CSAT: Exile_Boat_SDV_Abstract
	{
		scope=2;
		skinName="CSAT";
		displayName="SDV (CSAT)";
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"
		};
	};
	class Exile_Boat_SDV_Digital: Exile_Boat_SDV_Abstract
	{
		scope=2;
		skinName="Digital";
		displayName="SDV (Digital)";
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"
		};
	};
	class Exile_Boat_SDV_Grey: Exile_Boat_SDV_Abstract
	{
		scope=2;
		skinName="Grey";
		displayName="SDV (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"
		};
	};
	class C_Scooter_Transport_01_F;
	class Exile_Boat_WaterScooter_Abstract: C_Scooter_Transport_01_F
	{
		author="Exile Mod Team";
		scope=0;
		side=3;
		faction="CIV_F";
		vehicleclass="ExileBoats";
		crew="";
		typicalCargo[]={};
		skinName="";
		displayName="Water Scooter";
		fuelConsumptionRate="0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Exile_Boat_WaterScooter: Exile_Boat_WaterScooter_Abstract
	{
		scope=2;
		skinName="Black";
		displayName="Water Scooter";
		hiddenSelectionsTextures[]=
		{
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
		};
	};
	class an2_base;
	class Exile_Plane_AN2_Abstract: an2_base
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExilePlanes";
		displayName="An-2";
		skinName="";
		fuelExplosionPower=3;
		fuelConsumptionRate="0.05f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=2500;
		class AnimationSources
		{
			class door
			{
				animPeriod=1;
				initPhase=1;
				source="user";
			};
		};
		class TransportItems
		{
		};
		class UserActions
		{
			class opendoor
			{
				condition="((driver this) == player) && ((this animationPhase 'door') == 0) && (isNull (this turretUnit [3]))";
				displayName="Open Door";
				hideOnUse=1;
				onlyforplayer=1;
				position="pos cargo";
				radius=8;
				showWindow=0;
				statement="this animate ['door', 1]; this lockTurret [[3], true];";
			};
			class closedoor
			{
				condition="((driver this) == player) && ((this animationPhase 'door') == 1)";
				displayName="Close Door";
				hideOnUse=1;
				onlyforplayer=1;
				position="pos cargo";
				radius=40;
				showWindow=0;
				statement="this animate ['door', 0]; this lockTurret [[3], true];";
			};
		};
	};
	class Exile_Plane_AN2_Green: Exile_Plane_AN2_Abstract
	{
		scope=2;
		skinName="Green";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_An2\data\an2_1_co.paa",
			"Exile_psycho_An2\data\an2_2_co.paa",
			"Exile_psycho_An2\data\an2_wings_co.paa"
		};
	};
	class Exile_Plane_AN2_White: Exile_Plane_AN2_Abstract
	{
		scope=2;
		skinName="Red, White & Blue";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_An2\data\an2_1_a_co.paa",
			"Exile_psycho_An2\data\an2_2_a_co.paa",
			"Exile_psycho_An2\data\an2_wings_a_co.paa"
		};
	};
	class Exile_Plane_AN2_Stripe: Exile_Plane_AN2_Abstract
	{
		scope=2;
		skinName="Green Stripe";
		hiddenSelectionsTextures[]=
		{
			"Exile_psycho_An2\data\an2_1_b_co.paa",
			"Exile_psycho_An2\data\an2_2_b_co.paa",
			"Exile_psycho_An2\data\an2_wings_b_co.paa"
		};
	};
	class B_T_VTOL_01_infantry_F;
	class Exile_Plane_BlackfishInfantry: B_T_VTOL_01_infantry_F
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExilePlanes";
		crew="";
		typicalCargo[]={};
		skinName="Olive";
		displayName="V-44 X Blackfish (Infantry Transport)";
		fuelConsumptionRate="0.406";
		maximumLoad=7000;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class B_T_VTOL_01_vehicle_F;
	class Exile_Plane_BlackfishVehicle: B_T_VTOL_01_vehicle_F
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExilePlanes";
		crew="";
		typicalCargo[]={};
		skinName="Olive";
		displayName="V-44 X Blackfish (Vehicle Transport)";
		fuelConsumptionRate="0.406";
		maximumLoad=7000;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class C_Plane_Civil_01_F;
	class Exile_Plane_Ceasar: C_Plane_Civil_01_F
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExilePlanes";
		crew="";
		typicalCargo[]={};
		skinName="Redline";
		displayName="Ceasar BTT";
		fuelConsumptionRate="0.03f";
		maximumLoad=1300;
		class EventHandlers: DefaultEventHandlers
		{
			init="";
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class GNT_C185;
	class Exile_Plane_Cessna: GNT_C185
	{
		author="Exile Mod Team";
		scope=2;
		side=3;
		faction="CIV_F";
		vehicleclass="ExilePlanes";
		displayName="Cessna 185 Skywagon";
		skinName="";
		fuelExplosionPower=3;
		fuelConsumptionRate="0.05f";
		exileLockSound="exile_assets\sound\lock01.wss";
		exileUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad=1300;
		class TransportItems
		{
		};
	};
	class Exile_Casino_TwinkleTwister: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Twinkle Twister";
		model="\exile_assets\model\Exile_Test_OAB.p3d";
		destrType="DestructNo";
		class EventHandlers
		{
			init="";
		};
		class AnimationSources
		{
			class RotorLeft
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="";
			};
			class RotorMiddle
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="";
			};
			class RotorRight
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="";
			};
			class Light01
			{
				source="MarkerLight";
				markerLight="Light01";
			};
		};
		class MarkerLights
		{
			class Light01
			{
				color[]={1,0,0};
				ambient[]={0.0099999998,0,0};
				intensity=1000;
				name="Light01";
				useFlare=1;
				flareSize=1.7;
				flareMaxDistance=2000;
				activeLight=0;
				dayLight=1;
				blinking=1;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				class Attenuation
				{
					start=0;
					constant=10;
					linear=6;
					quadratic=4;
					hardLimitStart=12;
					hardLimitEnd=15;
				};
			};
		};
		class UserActions
		{
			class play
			{
				displayName="Play";
				position="left";
				radius=3;
				onlyForPlayer=1;
				condition="true";
				statement="this call ExileClient_object_twinkleTwister_play";
			};
		};
	};
	class Exile_Plant_GreenBush: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Bush (Green)";
		model="\A3\plants_f\Bush\b_FicusC1s_F.p3d";
		destrType="DestructNo";
	};
	class Exile_Plant_GreenBush2: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Bush (Green)";
		model="\A3\plants_f\Bush\b_ficusC2d_F.p3d";
		destrType="DestructNo";
	};
	class Exile_Plant_GreenBush3: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Bush (Green)";
		model="\A3\plants_f\Bush\b_FicusC2s_F.p3d";
		destrType="DestructNo";
	};
	class Exile_Plant_BrownBush: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Bush (Brown)";
		model="\A3\plants_f\Bush\b_NeriumO2d_F.p3d";
		destrType="DestructNo";
	};
	class Exile_Plant_GreenBush5: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Bush (Green)";
		model="\A3\plants_f\Bush\b_NeriumO2s_F.p3d";
		destrType="DestructNo";
	};
	class Exile_Plant_GreenBush6: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Bush (Green)";
		model="\A3\plants_f\Bush\b_ArundoD2s_F.p3d";
		destrType="DestructNo";
	};
	class Exile_Plant_GreenBush7: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Bush (Green)";
		model="\A3\plants_f\Bush\b_ArundoD3s_F.p3d";
		destrType="DestructNo";
	};
	class Exile_Plant_GreenBush8: NonStrategic
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Bush (Green)";
		model="\A3\plants_f\Bush\b_Thistle_Thorn_Green.p3d";
		destrType="DestructNo";
	};
	class Exile_Effect_Abstract: thing
	{
		author="Exile Mod Team";
		scope=1;
		side=2;
		animated=0;
		faction="None";
		vehicleClass="Emitters";
		simulation="thing";
		icon="iconExplosiveAP";
		mapSize=1;
		displayName="Exile Effect";
		picture="\A3\weapons_f\ammoBoxes\data\ui\map_AmmoBox_F_CA.paa";
		model="\A3\Weapons_F\empty.p3d";
		class Eventhandlers
		{
			init="";
			killed="";
		};
	};
	class Exile_Effect_Flies: Exile_Effect_Abstract
	{
		displayName="Exile Flies Effect";
		class EventHandlers
		{
			init="(_this select 0) call ExileClient_object_flies_event_onInit";
			killed="(_this select 0) call ExileClient_object_flies_event_onKilled";
		};
	};
	class Animal_Base_F;
	class Exile_Animal_Abstract: Animal_Base_F
	{
		scope=1;
		author="Exile Mod Team";
		hiddenSelectionsTextures[]={};
		hiddenSelectionMaterials[]={};
		class EventHandlers
		{
			init="";
		};
		class Exile
		{
			variations[]={};
			fleeMove="";
			idleMove="";
			gutItems[]={};
			dangerSounds[]={};
			deathSounds[]={};
			idleSounds[]={};
		};
	};
	class Exile_Animal_Goat_Abstract: Exile_Animal_Abstract
	{
		scope=1;
		displayName="Goat";
		model="\A3\animals_f_beta\Goat\Goat_F.p3d";
		hasGeometry=1;
		moves="CfgMovesGoat_F";
		hiddenSelections[]=
		{
			"camo"
		};
		agentTasks[]=
		{
			"Exile_Animal_Goat"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"a3\animals_f_beta\Goat\data\goat.rvmat",
				"a3\animals_f_beta\Goat\data\W1_goat.rvmat",
				"a3\animals_f_beta\Goat\data\W2_goat.rvmat"
			};
		};
		class Exile
		{
			variations[]=
			{
				"Exile_Animal_Goat_Black",
				"Exile_Animal_Goat_Dirty",
				"Exile_Animal_Goat_White",
				"Exile_Animal_Goat_Old",
				"Exile_Animal_Goat_Spotted"
			};
			fleeMove="Goat_Run";
			idleMove="Goat_Idle_Stop";
			idleSounds[]=
			{
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
					100,
					4
				}
			};
			dangerSounds[]=
			{
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
					100,
					4
				}
			};
			deathSounds[]=
			{
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
					100,
					4
				}
			};
			gutItems[]=
			{
				
				{
					3,
					"Exile_Item_GoatSteak_Raw"
				}
			};
			bestPlaces="hills * (1 - trees) * (1 - forest)";
		};
	};
	class Exile_Animal_Goat_Black: Exile_Animal_Goat_Abstract
	{
		scope=2;
		displayName="Goat (Black)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Goat\Data\black_goat_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"a3\animals_f_beta\goat\data\goat_black.rvmat"
		};
	};
	class Exile_Animal_Goat_Dirty: Exile_Animal_Goat_Abstract
	{
		scope=2;
		displayName="Goat (Dirty)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Goat\Data\dirt_goat_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"a3\animals_f_beta\goat\data\goat_dirt.rvmat"
		};
	};
	class Exile_Animal_Goat_White: Exile_Animal_Goat_Abstract
	{
		scope=2;
		displayName="Goat (White)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Goat\Data\goat_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"a3\animals_f_beta\goat\data\goat_white.rvmat"
		};
	};
	class Exile_Animal_Goat_Old: Exile_Animal_Goat_Abstract
	{
		scope=2;
		displayName="Goat (Old)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Goat\Data\old_goat_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"a3\animals_f_beta\goat\data\goat_old.rvmat"
		};
	};
	class Exile_Animal_Goat_Spotted: Exile_Animal_Goat_Abstract
	{
		scope=2;
		displayName="Goat (Spotted)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Goat\Data\white_goat_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"a3\animals_f_beta\goat\data\goat_white.rvmat"
		};
	};
	class Exile_Animal_Hen_Abstract: Exile_Animal_Abstract
	{
		scope=1;
		displayName="Hen";
		model="\A3\animals_f_beta\chicken\Hen_F.p3d";
		hasGeometry=1;
		moves="CfgMovesHen_F";
		hiddenSelections[]=
		{
			"camo"
		};
		agentTasks[]=
		{
			"Exile_Animal_Hen"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"a3\animals_f_beta\Chicken\data\cock_white.rvmat",
				"a3\animals_f_beta\Chicken\data\W1_cock.rvmat",
				"a3\animals_f_beta\Chicken\data\W2_cock.rvmat"
			};
		};
		class Exile
		{
			variations[]=
			{
				"Exile_Animal_Hen_White"
			};
			fleeMove="Hen_Run";
			idleMove="Hen_Idle_Stop";
			idleSounds[]=
			{
				
				{
					"a3\sounds_f\environment\animals\hen1.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen2.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen3.wss",
					100,
					4
				}
			};
			dangerSounds[]=
			{
				
				{
					"a3\sounds_f\environment\animals\hen1.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen2.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen3.wss",
					100,
					4
				}
			};
			deathSounds[]=
			{
				
				{
					"a3\sounds_f\environment\animals\hen1.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen2.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen3.wss",
					100,
					4
				}
			};
			gutItems[]=
			{
				
				{
					2,
					"Exile_Item_ChickenFilet_Raw"
				}
			};
			bestPlaces="houses * (1 - sea)";
		};
	};
	class Exile_Animal_Hen_White: Exile_Animal_Hen_Abstract
	{
		scope=2;
		displayName="Hen (White)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Chicken\data\hen_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"a3\animals_f_beta\Chicken\data\hen.rvmat"
		};
	};
	class Exile_Animal_Rooster_Abstract: Exile_Animal_Abstract
	{
		scope=1;
		displayName="Rooster";
		model="\A3\animals_f_beta\chicken\Cock_F.p3d";
		hasGeometry=1;
		moves="CfgMovesCock_F";
		hiddenSelections[]=
		{
			"camo"
		};
		agentTasks[]=
		{
			"Exile_Animal_Rooster"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"a3\animals_f_beta\Chicken\data\hen.rvmat",
				"a3\animals_f_beta\Chicken\data\W1_hen.rvmat",
				"a3\animals_f_beta\Chicken\data\W2_hen.rvmat"
			};
		};
		class Exile
		{
			variations[]=
			{
				"Exile_Animal_Rooster_Gold",
				"Exile_Animal_Rooster_Brown",
				"Exile_Animal_Rooster_White"
			};
			fleeMove="Cock_Run";
			idleMove="Cock_Idle_Stop";
			idleSounds[]=
			{
				
				{
					"a3\sounds_f\environment\animals\hen1.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen2.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen3.wss",
					100,
					4
				}
			};
			dangerSounds[]=
			{
				
				{
					"a3\sounds_f\environment\animals\hen1.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen2.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen3.wss",
					100,
					4
				}
			};
			deathSounds[]=
			{
				
				{
					"a3\sounds_f\environment\animals\hen1.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen2.wss",
					100,
					4
				},
				
				{
					"a3\sounds_f\environment\animals\hen3.wss",
					100,
					4
				}
			};
			gutItems[]=
			{
				
				{
					2,
					"Exile_Item_RoosterFilet_Raw"
				}
			};
			bestPlaces="houses * (1 - sea)";
		};
	};
	class Exile_Animal_Rooster_Brown: Exile_Animal_Rooster_Abstract
	{
		scope=2;
		displayName="Rooster (Brown)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Chicken\data\brown_rooster_CO.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"a3\animals_f_beta\Chicken\data\cock_brown.rvmat"
		};
	};
	class Exile_Animal_Rooster_White: Exile_Animal_Rooster_Abstract
	{
		scope=2;
		displayName="Rooster (White)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Chicken\data\white_rooster_CO.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"a3\animals_f_beta\Chicken\data\cock_white.rvmat"
		};
	};
	class Exile_Animal_Rooster_Gold: Exile_Animal_Rooster_Abstract
	{
		scope=2;
		displayName="Rooster (Gold)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Chicken\data\kohout_co.paa"
		};
		hiddenSelectionMaterials[]=
		{
			"a3\animals_f_beta\Chicken\data\cock_brown.rvmat"
		};
	};
	class Exile_Animal_Sheep_Abstract: Exile_Animal_Abstract
	{
		scope=1;
		displayName="Sheep";
		model="\A3\animals_f_beta\Sheep\Sheep_F.p3d";
		hasGeometry=1;
		moves="CfgMovesSheep_F";
		hiddenSelections[]=
		{
			"camo"
		};
		agentTasks[]=
		{
			"Exile_Animal_Sheep"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\animals_f_beta\sheep\data\sheep.rvmat",
				"A3\animals_f_beta\sheep\data\W1_sheep.rvmat",
				"A3\animals_f_beta\sheep\data\W2_sheep.rvmat"
			};
		};
		class Exile
		{
			variations[]=
			{
				"Exile_Animal_Sheep_Beige",
				"Exile_Animal_Sheep_White",
				"Exile_Animal_Sheep_Brown",
				"Exile_Animal_Sheep_Spotted",
				"Exile_Animal_Sheep_Tricolor"
			};
			fleeMove="Sheep_Run";
			idleMove="Sheep_Idle_Stop";
			idleSounds[]=
			{
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
					100,
					4
				}
			};
			dangerSounds[]=
			{
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
					100,
					4
				}
			};
			deathSounds[]=
			{
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
					100,
					4
				},
				
				{
					"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
					100,
					4
				}
			};
			gutItems[]=
			{
				
				{
					3,
					"Exile_Item_SheepSteak_Raw"
				}
			};
			bestPlaces="meadow * (1 - hills) * (1 - sea) * (1 - trees) * (1 - forest) * (1 - houses)";
		};
	};
	class Exile_Animal_Sheep_Beige: Exile_Animal_Sheep_Abstract
	{
		scope=2;
		displayName="Sheep (Beige)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Sheep\Data\sheep_co.paa"
		};
	};
	class Exile_Animal_Sheep_White: Exile_Animal_Sheep_Abstract
	{
		scope=2;
		displayName="Sheep (White)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Sheep\Data\white_sheep_co.paa"
		};
	};
	class Exile_Animal_Sheep_Brown: Exile_Animal_Sheep_Abstract
	{
		scope=2;
		displayName="Sheep (Brown)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Sheep\Data\brown_sheep_co.paa"
		};
	};
	class Exile_Animal_Sheep_Spotted: Exile_Animal_Sheep_Abstract
	{
		scope=2;
		displayName="Sheep (Spotted)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Sheep\Data\blackwhite_sheep_co.paa"
		};
	};
	class Exile_Animal_Sheep_Tricolor: Exile_Animal_Sheep_Abstract
	{
		scope=2;
		displayName="Sheep (Tricolor)";
		hiddenSelectionsTextures[]=
		{
			"a3\animals_f_beta\Sheep\Data\tricolor_sheep_co.paa"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class Item_Base_F;
	class InventoryItem_Base_F;
	class SlotInfo;
	class Rifle;
	class Pistol;
	class TruckHorn;
	class H_Cap_red;
	class Vest_Camo_Base;
	class VestItem;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
	};
	class Uniform_Base: ItemCore
	{
		scope=0;
		allowedSlots[]={901};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Exile_Unit_Player";
			containerClass="Supply0";
			mass=0;
		};
	};
	class arifle_MX_Base_F;
	class MMG_01_base_F;
	class MMG_02_base_F;
	class arifle_SPAR_02_base_F;
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="";
				slot="";
			};
		};
	};
	class arifle_MX_SW_Black_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="";
				slot="";
			};
		};
	};
	class MMG_01_hex_F: MMG_01_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="";
				slot="";
			};
		};
	};
	class MMG_01_tan_F: MMG_01_hex_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="";
				slot="";
			};
		};
	};
	class MMG_02_camo_F: MMG_02_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="";
				slot="";
			};
		};
	};
	class MMG_02_black_F: MMG_02_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="";
				slot="";
			};
		};
	};
	class MMG_02_sand_F: MMG_02_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="";
				slot="";
			};
		};
	};
	class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="";
				slot="";
			};
		};
	};
	class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="";
				slot="";
			};
		};
	};
	class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="";
				slot="";
			};
		};
	};
	class Default;
	class GrenadeLauncher: Default
	{
	};
	class Throw: GrenadeLauncher
	{
		muzzles[]=
		{
			"HandGrenade_Stone",
			"HandGrenadeMuzzle",
			"MiniGrenadeMuzzle",
			"SmokeShellMuzzle",
			"SmokeShellYellowMuzzle",
			"SmokeShellGreenMuzzle",
			"SmokeShellRedMuzzle",
			"SmokeShellPurpleMuzzle",
			"SmokeShellOrangeMuzzle",
			"SmokeShellBlueMuzzle",
			"ChemlightGreenMuzzle",
			"ChemlightRedMuzzle",
			"ChemlightYellowMuzzle",
			"ChemlightBlueMuzzle",
			"IRGrenade",
			"Exile_Item_ZipTie"
		};
		class ThrowMuzzle;
		class Exile_Item_ZipTie: ThrowMuzzle
		{
			magazines[]=
			{
				"Exile_Item_ZipTie"
			};
		};
	};
	class InventoryOpticsItem_Base_F;
	class optic_Nightstalker: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NCTALKEP
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class Rifle_Long_Base_F;
	class GM6_base_F: Rifle_Long_Base_F
	{
		magazines[]=
		{
			"5Rnd_127x108_Mag",
			"5Rnd_127x108_APDS_Mag",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag"
		};
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		magazines[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		magazines[]=
		{
			"7Rnd_408_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"
		};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		magazines[]=
		{
			"10Rnd_338_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"
		};
	};
	class Exile_Cap_Exile: H_Cap_red
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Cap (Exile)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_press_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPC\Civil\Data\Headgear_capb_press_co.paa"
		};
	};
	class Exile_Headgear_GasMask: ItemCore
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Gas Mask";
		descriptionShort="No Armor";
		picture="\exile_assets\texture\item\Exile_Clothing_Gasmask.paa";
		model="\exile_assets\model\Exile_Clothing_Gasmask_World.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenUnderwaterSelections[]={};
		hiddenUnderwaterSelectionsTextures[]={};
		weaponPoolAvailable=1;
		simulation="Weapon";
		optics=0;
		useModelOptics=0;
		class ItemInfo
		{
			hmdType=0;
			mass=60;
			modelOff="\exile_assets\model\Exile_Clothing_Gasmask.p3d";
			type=616;
			uniformModel="\exile_assets\model\Exile_Clothing_Gasmask.p3d";
		};
	};
	class Exile_Headgear_SafetyHelmet: ItemCore
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Security Helmet";
		descriptionShort="Armor Level 1";
		picture="\exile_assets\texture\item\Exile_Clothing_SafetyHelmet.paa";
		model="\exile_assets\model\Exile_Clothing_SafetyHelmet.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenUnderwaterSelections[]={};
		hiddenUnderwaterSelectionsTextures[]={};
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\exile_assets\model\Exile_Clothing_SafetyHelmet.p3d";
			modelSides[]={2};
			armor=10;
			passThrough=0.80000001;
		};
	};
	class Exile_Headgear_SantaHat: ItemCore
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Santa Hat";
		descriptionShort="No Armor";
		picture="\exile_assets\texture\item\Exile_Clothing_Santahat.paa";
		model="\exile_assets\model\Exile_Clothing_Santahat.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenUnderwaterSelections[]={};
		hiddenUnderwaterSelectionsTextures[]={};
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\exile_assets\model\Exile_Clothing_Santahat.p3d";
			modelSides[]={2};
			armor=0;
			passThrough=0.80000001;
		};
	};
	class Exile_Horn_Abstract: TruckHorn
	{
		scope=1;
		author="Exile Mod Team";
		displayName="Exile Horn Base";
	};
	class Exile_Horn_01: Exile_Horn_Abstract
	{
		scope=2;
		displayName="Horn 01";
		drySound[]=
		{
			"A3\Sounds_F\weapons\horns\car_horn_1",
			1,
			1,
			200
		};
	};
	class Exile_Horn_02: Exile_Horn_Abstract
	{
		scope=2;
		displayName="Horn 02";
		drySound[]=
		{
			"A3\Sounds_F\weapons\horns\car_horn_2",
			1,
			1,
			200
		};
	};
	class Exile_Horn_03: Exile_Horn_Abstract
	{
		scope=2;
		displayName="Horn 03";
		drySound[]=
		{
			"A3\Sounds_F\weapons\horns\MRAP_02_horn_1",
			1,
			1,
			200
		};
	};
	class Exile_Horn_04: Exile_Horn_Abstract
	{
		scope=2;
		displayName="Horn 04";
		drySound[]=
		{
			"A3\Sounds_F\weapons\horns\MRAP_02_horn_2",
			1,
			1,
			200
		};
	};
	class Exile_Horn_05: Exile_Horn_Abstract
	{
		scope=2;
		displayName="Horn 05";
		drySound[]=
		{
			"A3\Sounds_F\weapons\horns\truck_horn_1",
			1,
			1,
			200
		};
	};
	class Exile_Horn_06: Exile_Horn_Abstract
	{
		scope=2;
		displayName="Horn 06";
		drySound[]=
		{
			"A3\Sounds_F\weapons\horns\truck_horn_2",
			1,
			1,
			200
		};
	};
	class Exile_Horn_07: Exile_Horn_Abstract
	{
		scope=2;
		displayName="Horn 07";
		drySound[]=
		{
			"A3\Sounds_F\weapons\horns\truck_horn_3",
			1,
			1,
			200
		};
	};
	class Exile_Horn_08: Exile_Horn_Abstract
	{
		scope=2;
		displayName="Horn 08";
		drySound[]=
		{
			"A3\Sounds_F\weapons\horns\truck_horn_4",
			1,
			1,
			200
		};
	};
	class ItemWatch;
	class Exile_Item_XM8: ItemWatch
	{
		scope=2;
		author="Exile Mod Team";
		displayName="XM8";
		descriptionShort="Your personal assistant in Exile.";
		model="\exile_assets\model\Exile_Item_XM8.p3d";
		picture="\exile_assets\texture\item\Exile_Item_XM8.paa";
	};
	class Exile_Melee_Abstract: Rifle
	{
		scope=1;
		author="Exile Mod Team";
		displayName="Dummy";
		descriptionShort="Dummy";
		type=4;
		optics=0;
		primary=0;
		model="\exile_assets\model\Dummy.p3d";
		picture="\exile_assets\texture\item\Dummy.paa";
		cursor="EmptyCursor";
		cursorAim="throw";
		cursorSize=1;
		autoreload=1;
		canDrop=1;
		distanceZoomMin=2;
		distanceZoomMax=2;
		drySound[]=
		{
			"",
			0,
			1,
			20
		};
		fireLightDuration=0;
		fireLightIntensity=0;
		isFakeWeapon=0;
		minRange=0.30000001;
		minRangeProbab=0.33000001;
		midRange=0.30000001;
		midRangeProbab=0.33000001;
		maxRange=0.30000001;
		maxRangeProbab=0.34;
		modelOptics="-";
		magazines[]=
		{
			"Exile_Magazine_Swing"
		};
		recoil="recoil_pistol_heavy";
		recoilProne="recoil_prone_pistol_heavy";
		reloadAction="GestureReloadPistolHeavy02";
		reloadMagazineSound[]=
		{
			"",
			1
		};
		reloadTime=1;
		closure1[]=
		{
			"",
			1
		};
		soundClosure[]=
		{
			"closure1",
			1
		};
		weaponInfoType="RscWeaponEmpty";
		weaponReloadtime=1;
		weaponSoundEffect="DefaultRifle";
		modes[]=
		{
			"Hack"
		};
		craterEffects="NoCrater";
		explosionEffects="NoExplosion";
		class Library
		{
			libTextDesc="Long Description";
		};
	};
	class Exile_Melee_Axe: Exile_Melee_Abstract
	{
		scope=2;
		author="Exile Mod Team";
		_generalMacro="Exile_Melee_Axe";
		model="\exile_assets\model\Exile_Melee_Axe.p3d";
		displayName="Axe";
		descriptionShort="An old-fashioned tool used to chop wood.";
		picture="\exile_assets\texture\item\Exile_Item_Axe.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\exile_assets\animation\Exile_Axe_Idle01.rtm"
		};
		class WeaponSlotsInfo
		{
			mass=35;
		};
		class Hack: Mode_FullAuto
		{
			burst=0;
			autoFire=1;
			flashSize=0;
			dispersion=0;
			sounds[]=
			{
				"StandardSound"
			};
			minRange=0.30000001;
			minRangeProbab=0.33000001;
			midRange=0.30000001;
			midRangeProbab=0.33000001;
			maxRange=0.30000001;
			maxRangeProbab=0.34;
			reloadTime=1;
			class StandardSound
			{
				begin1[]=
				{
					"\exile_assets\sound\swoosh01.ogg",
					"db3",
					1,
					100
				};
				begin2[]=
				{
					"\exile_assets\sound\swoosh02.ogg",
					"db3",
					1,
					100
				};
				closure1[]=
				{
					"",
					1
				};
				soundBegin[]=
				{
					"begin1",
					1,
					"begin2",
					1
				};
				soundClosure[]=
				{
					"closure1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
		};
	};
	class Exile_Melee_Shovel: Exile_Melee_Abstract
	{
		scope=2;
		author="Exile Mod Team";
		_generalMacro="Exile_Melee_Shovel";
		model="\exile_assets\model\Exile_Melee_Shovel.p3d";
		displayName="Shovel";
		descriptionShort="Everyday I'm shovelling!";
		picture="\exile_assets\texture\item\Exile_Item_Shovel.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\exile_assets\animation\Exile_SledgeHammer_Idle01.rtm"
		};
		magazines[]=
		{
			"Exile_Magazine_Boing"
		};
		class WeaponSlotsInfo
		{
			mass=70;
		};
		class Hack: Mode_FullAuto
		{
			burst=0;
			autoFire=1;
			flashSize=0;
			dispersion=0;
			sounds[]=
			{
				"StandardSound"
			};
			minRange=0.30000001;
			minRangeProbab=0.33000001;
			midRange=0.30000001;
			midRangeProbab=0.33000001;
			maxRange=0.30000001;
			maxRangeProbab=0.34;
			reloadTime=1.75;
			class StandardSound
			{
				begin1[]=
				{
					"\exile_assets\sound\swoosh01.ogg",
					"db3",
					1,
					100
				};
				begin2[]=
				{
					"\exile_assets\sound\swoosh02.ogg",
					"db3",
					1,
					100
				};
				closure1[]=
				{
					"",
					1
				};
				soundBegin[]=
				{
					"begin1",
					1,
					"begin2",
					1
				};
				soundClosure[]=
				{
					"closure1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
		};
	};
	class Exile_Melee_SledgeHammer: Exile_Melee_Abstract
	{
		scope=2;
		author="Exile Mod Team";
		_generalMacro="Exile_Melee_SledgeHammer";
		model="\exile_assets\model\Exile_Melee_SledgeHammer.p3d";
		displayName="Sledge Hammer";
		descriptionShort="The ultimate solution when a normal hammer is simply not enough.";
		picture="\exile_assets\texture\item\Exile_Item_SledgeHammer.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\exile_assets\animation\Exile_SledgeHammer_Idle01.rtm"
		};
		magazines[]=
		{
			"Exile_Magazine_Swoosh"
		};
		class WeaponSlotsInfo
		{
			mass=70;
		};
		class Hack: Mode_FullAuto
		{
			burst=0;
			autoFire=1;
			flashSize=0;
			dispersion=0;
			sounds[]=
			{
				"StandardSound"
			};
			minRange=0.30000001;
			minRangeProbab=0.33000001;
			midRange=0.30000001;
			midRangeProbab=0.33000001;
			maxRange=0.30000001;
			maxRangeProbab=0.34;
			reloadTime=1.75;
			class StandardSound
			{
				begin1[]=
				{
					"\exile_assets\sound\swoosh01.ogg",
					"db3",
					1,
					100
				};
				begin2[]=
				{
					"\exile_assets\sound\swoosh02.ogg",
					"db3",
					1,
					100
				};
				closure1[]=
				{
					"",
					1
				};
				soundBegin[]=
				{
					"begin1",
					1,
					"begin2",
					1
				};
				soundClosure[]=
				{
					"closure1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
		};
	};
	class Exile_Uniform_BambiOverall: Uniform_Base
	{
		scope=2;
		displayName="Bambi Overall";
		author="Exile Mod Team";
		picture="\exile_assets\texture\item\Exile_Uniform_BambiOverall.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\Exile_Uniform_BambiOverall_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="\A3\characters_F\common\coveralls.p3d";
			uniformClass="Exile_Unit_Player";
			containerClass="Supply40";
			mass=30;
		};
	};
	class Exile_Uniform_ExileCustoms: Uniform_Base
	{
		scope=2;
		displayName="Exile Customs";
		author="Exile Mod Team";
		picture="\exile_assets\texture\item\Exile_Uniform_BambiOverall.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\Exile_Uniform_ExileCustoms_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Exile_Unit_ExileCustoms";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_O_Wetsuit;
	class U_I_Wetsuit;
	class U_B_Wetsuit;
	class Exile_Uniform_Wetsuit_NATO: U_B_Wetsuit
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Wetsuit (NATO, Forced)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Exile_Unit_Wetsuit_NATO";
			containerClass="Supply40";
			mass=40;
		};
	};
	class Exile_Uniform_Wetsuit_CSAT: U_O_Wetsuit
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Wetsuit (CSAT, Forced)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Exile_Unit_Wetsuit_CSAT";
			containerClass="Supply40";
			mass=40;
		};
	};
	class Exile_Uniform_Wetsuit_AAF: U_I_Wetsuit
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Wetsuit (AAF, Forced)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Exile_Unit_Wetsuit_AAF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class Exile_Uniform_Woodland: Uniform_Base
	{
		scope=2;
		displayName="Exile Woodland";
		author="Exile Mod Team";
		picture="\exile_assets\texture\item\Exile_Uniform_Woodland.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\model\Exile_Uniform_Woodland_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Exile_Unit_Woodland";
			containerClass="Supply80";
			mass=40;
		};
	};
	class V_RebreatherB;
	class V_RebreatherIA;
	class V_RebreatherIR;
	class Exile_Vest_Rebreather_NATO: V_RebreatherB
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Rebreather (NATO, Forced)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenUnderwaterSelections[]=
			{
				"hide"
			};
			hiddenUnderwaterSelectionsTextures[]=
			{
				"\A3\characters_f\common\data\diver_equip_nato_co.paa",
				"\A3\characters_f\common\data\diver_equip_nato_co.paa",
				"\A3\characters_f\data\visors_ca.paa"
			};
			containerClass="Supply0";
			mass=80;
			overlaySelectionsInfo[]=
			{
				"Ghillie_hide"
			};
			scope=0;
			showHolsteredPistol=0;
			type=701;
			uniformModel="\A3\Characters_F\Common\equip_rebreather";
			uniformType="Default";
			vestType="Rebreather";
		};
	};
	class Exile_Vest_Rebreather_AAF: V_RebreatherIA
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Rebreather (AAF, Forced)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_rus_co.paa"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_rus_co.paa",
			"\A3\characters_f\common\data\diver_equip_rus_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenUnderwaterSelections[]=
			{
				"hide"
			};
			hiddenUnderwaterSelectionsTextures[]=
			{
				"\A3\characters_f\common\data\diver_equip_nato_co.paa",
				"\A3\characters_f\common\data\diver_equip_nato_co.paa",
				"\A3\characters_f\data\visors_ca.paa"
			};
			containerClass="Supply0";
			mass=80;
			overlaySelectionsInfo[]=
			{
				"Ghillie_hide"
			};
			scope=0;
			showHolsteredPistol=0;
			type=701;
			uniformModel="\A3\Characters_F\Common\equip_rebreather";
			uniformType="Default";
			vestType="Rebreather";
		};
	};
	class Exile_Vest_Rebreather_CSAT: V_RebreatherIR
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Rebreather (CSAT, Forced)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_iran_co.paa"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_iran_co.paa",
			"\A3\characters_f\common\data\diver_equip_iran_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenUnderwaterSelections[]=
			{
				"hide"
			};
			hiddenUnderwaterSelectionsTextures[]=
			{
				"\A3\characters_f\common\data\diver_equip_nato_co.paa",
				"\A3\characters_f\common\data\diver_equip_nato_co.paa",
				"\A3\characters_f\data\visors_ca.paa"
			};
			containerClass="Supply0";
			mass=80;
			overlaySelectionsInfo[]=
			{
				"Ghillie_hide"
			};
			scope=0;
			showHolsteredPistol=0;
			type=701;
			uniformModel="\A3\Characters_F\Common\equip_rebreather";
			uniformType="Default";
			vestType="Rebreather";
		};
	};
	class Exile_Vest_Snow: Vest_Camo_Base
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Exile Snow Vest";
		descriptionShort="Armor Level IV";
		picture="\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\exile_assets\texture\item\Exile_Clothing_SnowVest.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=100;
			hiddenSelections[]=
			{
				"camo"
			};
			overlaySelctionsInfo[]=
			{
				"Ghillie_hide"
			};
			type=701;
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=20;
					hipointName="HitAbdomen";
					passThrough=0.2;
				};
				class Body
				{
					hipointName="HitBody";
					passThrough=0.2;
				};
				class Chest
				{
					armor=20;
					hipointName="HitChest";
					passThrough=0.2;
				};
				class Diaphragm
				{
					armor=20;
					hipointName="HitDiaphragm";
					passThrough=0.2;
				};
			};
		};
	};
	class CUP_arifle_AK107{
		scope=0;
		displayName="";
		author="";
	};
	class Exile_Weapon_AK107: CUP_arifle_AK107
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AK-107 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow"
		};
	};
	class CUP_arifle_AK107_GL;
	class Exile_Weapon_AK107_GL: CUP_arifle_AK107_GL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AK-107 GL 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow"
		};
	};
	class CUP_arifle_AK74;
	class Exile_Weapon_AK74: CUP_arifle_AK74
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AK-74 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm<br />Caliber: 40 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow"
		};
	};
	class CUP_arifle_AK74_GL;
	class Exile_Weapon_AK74_GL: CUP_arifle_AK74_GL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AK-74 3GL 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm<br />Grenade Laucher<br />Caliber: 40 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow"
		};
	};
	class CUP_arifle_AKS74;
	class Exile_Weapon_AKS74: CUP_arifle_AKS74
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AKS-74 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm<br />Grenade Laucher<br />Caliber: 40 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow"
		};
	};
	class CUP_arifle_AK74M;
	class Exile_Weapon_AK74M: CUP_arifle_AK74M
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AK-74M 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm<br />Grenade Laucher<br />Caliber: 40 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow"
		};
	};
	class CUP_arifle_AK74M_GL;
	class Exile_Weapon_AK74M_GL: CUP_arifle_AK74M_GL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AK-74M GL 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm<br />Grenade Laucher<br />Caliber: 40 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow"
		};
	};
	class CUP_arifle_AKS74U;
	class Exile_Weapon_AKS74U: CUP_arifle_AKS74U
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AKS-74U 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm<br />Grenade Laucher<br />Caliber: 40 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow"
		};
	};
	class CUP_arifle_AK47;
	class Exile_Weapon_AK47: CUP_arifle_AK47
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AK-47 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_762x39_AK"
		};
	};
	class CUP_arifle_AKM;
	class Exile_Weapon_AKM: CUP_arifle_AKM
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AKM 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm<br />Grenade Laucher<br />Caliber: 40 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_762x39_AK"
		};
	};
	class CUP_arifle_AKS;
	class Exile_Weapon_AKS: CUP_arifle_AKS
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AKS 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_762x39_AK"
		};
	};
	class CUP_arifle_AKS_Gold;
	class Exile_Weapon_AKS_Gold: CUP_arifle_AKS_Gold
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AKS 7.62 mm (Gold)";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"Exile_Magazine_30Rnd_762x39_AK"
		};
	};
	class CUP_arifle_CZ805_A1;
	class Exile_Weapon_CZ805_A1: CUP_arifle_CZ805_A1
	{
		scope=2;
		author="Exile Mod Team";
		displayName="CZ805 A1 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_CZ805_GL;
	class Exile_Weapon_CZ805_GL: CUP_arifle_CZ805_GL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="CZ805 GL 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_CZ805_A2;
	class Exile_Weapon_CZ805_A2: CUP_arifle_CZ805_A2
	{
		scope=2;
		author="Exile Mod Team";
		displayName="CZ805 A2 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_CZ805_B;
	class Exile_Weapon_CZ805_B: CUP_arifle_CZ805_B
	{
		scope=2;
		author="Exile Mod Team";
		displayName="CZ805 B 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_CZ805B",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B"
		};
	};
	class CUP_arifle_CZ805_B_GL;
	class Exile_Weapon_CZ805_B_GL: CUP_arifle_CZ805_B_GL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="CZ805 B GL 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_CZ805B",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B"
		};
	};
	class CUP_arifle_FNFAL;
	class Exile_Weapon_FNFAL: CUP_arifle_FNFAL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="FNFAL 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_FNFAL_M"
		};
	};
	class CUP_arifle_FNFAL5061;
	class Exile_Weapon_FNFAL5061: CUP_arifle_FNFAL5061
	{
		scope=2;
		author="Exile Mod Team";
		displayName="FNFAL 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_FNFAL_M"
		};
	};
	class CUP_arifle_FNFAL5062;
	class Exile_Weapon_FNFAL5062: CUP_arifle_FNFAL5062
	{
		scope=2;
		author="Exile Mod Team";
		displayName="FNFAL 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_FNFAL_M"
		};
	};
	class CUP_arifle_FNFAL_railed;
	class Exile_Weapon_FNFAL_railed: CUP_arifle_FNFAL_railed
	{
		scope=2;
		author="Exile Mod Team";
		displayName="FNFAL (Railed) 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_FNFAL_M"
		};
	};
	class CUP_arifle_G36A;
	class Exile_Weapon_G36A: CUP_arifle_G36A
	{
		scope=2;
		author="Exile Mod Team";
		displayName="G36A 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_G36A_camo;
	class Exile_Weapon_G36A_camo: CUP_arifle_G36A_camo
	{
		scope=2;
		author="Exile Mod Team";
		displayName="G36A (camo) 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_G36C;
	class Exile_Weapon_G36C: CUP_arifle_G36C
	{
		scope=2;
		author="Exile Mod Team";
		displayName="G36C 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_G36C_camo;
	class Exile_Weapon_G36C_camo: CUP_arifle_G36C_camo
	{
		scope=2;
		author="Exile Mod Team";
		displayName="G36C (camo) 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_G36K;
	class Exile_Weapon_G36K: CUP_arifle_G36K
	{
		scope=2;
		author="Exile Mod Team";
		displayName="G36K 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_G36K_camo;
	class Exile_Weapon_G36K_camo: CUP_arifle_G36K_camo
	{
		scope=2;
		author="Exile Mod Team";
		displayName="G36K (camo) 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_L85A2;
	class Exile_Weapon_L85A2: CUP_arifle_L85A2
	{
		scope=2;
		author="Exile Mod Team";
		displayName="L85 A2 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_L85A2_G;
	class Exile_Weapon_L85A2_G: CUP_arifle_L85A2_G
	{
		scope=2;
		author="Exile Mod Team";
		displayName="L85 A2 (grip) 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_L85A2_GL;
	class Exile_Weapon_L85A2_GL: CUP_arifle_L85A2_GL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="L85 A2 GL 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_L86A2;
	class Exile_Weapon_L86A2: CUP_arifle_L86A2
	{
		scope=2;
		author="Exile Mod Team";
		displayName="L86 A2 5.556 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_M16A4_Base;
	class Exile_Weapon_M16A4: CUP_arifle_M16A4_Base
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M16A4 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_M16A4_GL;
	class Exile_Weapon_M16A4_GL: CUP_arifle_M16A4_GL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M16A4 GL 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_M16A2;
	class Exile_Weapon_M16A2: CUP_arifle_M16A2
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M16A2 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_M16A2_GL;
	class Exile_Weapon_M16A2_GL: CUP_arifle_M16A2_GL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M16A02 GL 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_M4A1;
	class Exile_Weapon_M4: CUP_arifle_M4A1
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M4 A1 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_M4A1_black;
	class Exile_Weapon_M4_black: CUP_arifle_M4A1_black
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M4 A1 (black) 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_M4A1_camo;
	class Exile_Weapon_M4_camo: CUP_arifle_M4A1_camo
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M4 A1 (camo) 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_M4A1_desert;
	class Exile_Weapon_M4_desert: CUP_arifle_M4A1_desert
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M4 A1 (desert) 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_M4A1_BUIS_camo_GL;
	class Exile_Weapon_M4A1_GL_camo: CUP_arifle_M4A1_BUIS_camo_GL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M4 A1 GL (camo) 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_M4A3_desert;
	class Exile_Weapon_M4A3_desert: CUP_arifle_M4A3_desert
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M4 A3 (desert) 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_MG36;
	class Exile_Weapon_MG36: CUP_arifle_MG36
	{
		scope=2;
		author="Exile Mod Team";
		displayName="MG36 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag"
		};
	};
	class CUP_arifle_MG36_camo;
	class Exile_Weapon_MG36_camo: CUP_arifle_MG36_camo
	{
		scope=2;
		author="Exile Mod Team";
		displayName="MG36 (camo) 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag"
		};
	};
	class CUP_arifle_Mk16_CQC;
	class Exile_Weapon_Mk16_CQC: CUP_arifle_Mk16_CQC
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk16 CQC EGLM 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_Mk16_CQC_FG;
	class Exile_Weapon_Mk16_CQC_FG: CUP_arifle_Mk16_CQC_FG
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk16 CQC (foregrip) 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_Mk16_STD;
	class Exile_Weapon_Mk16_STD: CUP_arifle_Mk16_STD
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk16 STD 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_Mk16_STD_EGLM;
	class Exile_Weapon_Mk16_STD_EGLM: CUP_arifle_Mk16_STD_EGLM
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk16 EGLM 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_Mk16_STD_FG;
	class Exile_Weapon_Mk16_STD_FG: CUP_arifle_Mk16_STD_FG
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk16 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_Mk16_SV;
	class Exile_Weapon_Mk16_SV: CUP_arifle_Mk16_SV
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk16 SV 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_Mk17_CQC;
	class Exile_Weapon_Mk17_CQC: CUP_arifle_Mk17_CQC
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk17 CQC 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_B_SCAR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"

		};
	};
	class CUP_arifle_Mk17_CQC_EGLM;
	class Exile_Weapon_Mk17_CQC_EGLM: CUP_arifle_Mk17_CQC_EGLM
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk17 CQC 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_B_SCAR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"

		};
	};
	class CUP_arifle_Mk17_CQC_FG;
	class Exile_Weapon_Mk17_CQC_FG: CUP_arifle_Mk17_CQC_FG
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk17 CQC (foregrip) 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_B_SCAR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"

		};
	};
	class CUP_arifle_Mk17_STD;
	class Exile_Weapon_Mk17_STD: CUP_arifle_Mk17_STD
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk17 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_B_SCAR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"

		};
	};
	class CUP_arifle_Mk17_STD_EGLM;
	class Exile_Weapon_Mk17_STD_EGLM: CUP_arifle_Mk17_STD_EGLM
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk17 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_B_SCAR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"

		};
	};
	class CUP_arifle_Mk17_STD_FG;
	class Exile_Weapon_Mk17_STD_FG: CUP_arifle_Mk17_STD_FG
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk17 (foregrip) 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_B_SCAR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"

		};
	};
	class CUP_arifle_Mk20;
	class Exile_Weapon_Mk20: CUP_arifle_Mk20
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk20 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_B_SCAR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"

		};
	};
	class CUP_arifle_RPK74;
	class Exile_Weapon_RPK74: CUP_arifle_RPK74
	{
		scope=2;
		author="Exile Mod Team";
		displayName="RPK 74 (drum) 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm";
		magazines[]=
		{
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"

		};
	};
	class CUP_arifle_RPK74_45;
	class Exile_Weapon_RPK74_45: CUP_arifle_RPK74_45
	{
		scope=2;
		author="Exile Mod Team";
		displayName="RPK 74 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm";
		magazines[]=
		{
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"

		};
	};
	class CUP_arifle_RPK74M;
	class Exile_Weapon_RPK74M: CUP_arifle_RPK74M
	{
		scope=2;
		author="Exile Mod Team";
		displayName="RPK 74M 5.45 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm";
		magazines[]=
		{
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"

		};
	};
	class CUP_arifle_Sa58P;
	class Exile_Weapon_Sa58P: CUP_arifle_Sa58P
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Sa 58P 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M_TracerG",
			"CUP_30Rnd_Sa58_M_TracerR",
			"CUP_30Rnd_Sa58_M_TracerY"

		};
	};
	class CUP_arifle_Sa58P_des;
	class Exile_Weapon_Sa58P_desert: CUP_arifle_Sa58P_des
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Sa 58P (desert) 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M_TracerG",
			"CUP_30Rnd_Sa58_M_TracerR",
			"CUP_30Rnd_Sa58_M_TracerY"

		};
	};
	class CUP_arifle_Sa58RIS1;
	class Exile_Weapon_Sa58RIS1: CUP_arifle_Sa58RIS1
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Sa 58P RIS1 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M_TracerG",
			"CUP_30Rnd_Sa58_M_TracerR",
			"CUP_30Rnd_Sa58_M_TracerY"

		};
	};
	class CUP_arifle_Sa58RIS1_desert;
	class Exile_Weapon_Sa58RIS1_desert: CUP_arifle_Sa58RIS1_desert
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Sa 58P RIS1 (desert) 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M_TracerG",
			"CUP_30Rnd_Sa58_M_TracerR",
			"CUP_30Rnd_Sa58_M_TracerY"

		};
	};
	class CUP_arifle_Sa58RIS2;
	class Exile_Weapon_Sa58RIS2: CUP_arifle_Sa58RIS2
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Sa 58P RIS2 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M_TracerG",
			"CUP_30Rnd_Sa58_M_TracerR",
			"CUP_30Rnd_Sa58_M_TracerY"

		};
	};
	class CUP_arifle_Sa58RIS2_camo;
	class Exile_Weapon_Sa58RIS2_camo: CUP_arifle_Sa58RIS2_camo
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Sa 58P RIS2 (camo) 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M_TracerG",
			"CUP_30Rnd_Sa58_M_TracerR",
			"CUP_30Rnd_Sa58_M_TracerY"

		};
	};
	class CUP_arifle_Sa58RIS2_gl;
	class Exile_Weapon_Sa58RIS2_gl: CUP_arifle_Sa58RIS2_gl
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Sa 58P RIS GL 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M_TracerG",
			"CUP_30Rnd_Sa58_M_TracerR",
			"CUP_30Rnd_Sa58_M_TracerY"

		};
	};
	class CUP_arifle_Sa58V;
	class Exile_Weapon_Sa58V: CUP_arifle_Sa58V
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Sa 58V 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M_TracerG",
			"CUP_30Rnd_Sa58_M_TracerR",
			"CUP_30Rnd_Sa58_M_TracerY"

		};
	};
	class CUP_arifle_Sa58V_camo;
	class Exile_Weapon_Sa58V_camo: CUP_arifle_Sa58V_camo
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Sa 58V (camo) 7.62 mm";
		descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[]=
		{
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M_TracerG",
			"CUP_30Rnd_Sa58_M_TracerR",
			"CUP_30Rnd_Sa58_M_TracerY"

		};
	};
	class CUP_arifle_XM8_Carbine;
	class Exile_Weapon_XM8_Carbine: CUP_arifle_XM8_Carbine
	{
		scope=2;
		author="Exile Mod Team";
		displayName="XM8 Carbine 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_XM8_Carbine_FG;
	class Exile_Weapon_XM8_Carbine_FG: CUP_arifle_XM8_Carbine_FG
	{
		scope=2;
		author="Exile Mod Team";
		displayName="XM8 Carbine CQC 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_XM8_Carbine_GL;
	class Exile_Weapon_XM8_Carbine_GL: CUP_arifle_XM8_Carbine_GL
	{
		scope=2;
		author="Exile Mod Team";
		displayName="XM8 Carbine GL 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_XM8_Compact;
	class Exile_Weapon_XM8_Compact: CUP_arifle_XM8_Compact
	{
		scope=2;
		author="Exile Mod Team";
		displayName="XM8 Compact 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_XM8_Compact_Rail;
	class Exile_Weapon_XM8_Compact_Rail: CUP_arifle_XM8_Compact_Rail
	{
		scope=2;
		author="Exile Mod Team";
		displayName="XM8 Compact (railed) 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_XM8_Railed;
	class Exile_Weapon_XM8_Railed: CUP_arifle_XM8_Railed
	{
		scope=2;
		author="Exile Mod Team";
		displayName="XM8 Carbine (railed) 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_xm8_sharpshooter;
	class Exile_Weapon_XM8_sharpshooter: CUP_arifle_xm8_sharpshooter
	{
		scope=2;
		author="Exile Mod Team";
		displayName="XM8 Sharpshooter 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_arifle_xm8_SAW;
	class Exile_Weapon_XM8_SAW: CUP_arifle_xm8_SAW
	{
		scope=2;
		author="Exile Mod Team";
		displayName="XM8 SAW 5.56 mm";
		descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_glaunch_M32;
	class Exile_Weapon_M32: CUP_glaunch_M32
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M32";
		descriptionShort="Grenade Launcher";
		magazines[]=
		{
			"CUP_6Rnd_HE_M203",
			"CUP_6Rnd_FlareWhite_M203",
			"CUP_6Rnd_FlareGreen_M203",
			"CUP_6Rnd_FlareRed_M203",
			"CUP_6Rnd_FlareYellow_M203",
			"CUP_6Rnd_Smoke_M203",
			"CUP_6Rnd_SmokeRed_M203",
			"CUP_6Rnd_SmokeGreen_M203",
			"CUP_6Rnd_SmokeYellow_M203"

		};
	};
	class CUP_glaunch_6G30;
	class Exile_Weapon_6G30: CUP_glaunch_6G30
	{
		scope=2;
		author="Exile Mod Team";
		displayName="6G30";
		descriptionShort="Grenade Launcher";
		magazines[]=
		{
			"CUP_6Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_IlumFlareWhite_GP25_M",
			"CUP_IlumFlareRed_GP25_M",
			"CUP_IlumFlareGreen_GP25_M",
			"CUP_FlareWhite_GP25_M",
			"CUP_FlareGreen_GP25_M",
			"CUP_FlareRed_GP25_M",
			"CUP_FlareYellow_GP25_M"
		};
	};
	class CUP_glaunch_M79;
	class Exile_Weapon_M79: CUP_glaunch_M79
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M79";
		descriptionShort="Grenade Launcher";
		magazines[]=
		{
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_FlareWhite_M203",
			"CUP_FlareGreen_M203",
			"CUP_FlareRed_M203",
			"CUP_FlareYellow_M203",
			"CUP_1Rnd_StarFlare_White_M203",
			"CUP_1Rnd_StarFlare_Red_M203",
			"CUP_1Rnd_StarFlare_Green_M203",
			"CUP_1Rnd_StarCluster_White_M203",
			"CUP_1Rnd_StarCluster_Red_M203",
			"CUP_1Rnd_StarCluster_Green_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_SmokeRed_M203",
			"CUP_1Rnd_SmokeGreen_M203",
			"CUP_1Rnd_SmokeYellow_M203"
		};
	};
	class CUP_glaunch_Mk13;
	class Exile_Weapon_Mk13: CUP_glaunch_Mk13
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk13";
		descriptionShort="Grenade Launcher";
		magazines[]=
		{
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_FlareWhite_M203",
			"CUP_FlareGreen_M203",
			"CUP_FlareRed_M203",
			"CUP_FlareYellow_M203",
			"CUP_1Rnd_StarFlare_White_M203",
			"CUP_1Rnd_StarFlare_Red_M203",
			"CUP_1Rnd_StarFlare_Green_M203",
			"CUP_1Rnd_StarCluster_White_M203",
			"CUP_1Rnd_StarCluster_Red_M203",
			"CUP_1Rnd_StarCluster_Green_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_SmokeRed_M203",
			"CUP_1Rnd_SmokeGreen_M203",
			"CUP_1Rnd_SmokeYellow_M203"
		};
	};
	class CUP_hgun_BallisticShield_Armed;
	class Exile_Weapon_BallisticShield_Armed: CUP_hgun_BallisticShield_Armed
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Armed Balistic Shield 9 mm";
		descriptionShort="Balistic Shield (M9) 9x19 mm";
		magazines[]=
		{
			"CUP_15Rnd_9x19_M9"
		};
	};
	/*class arifle_RPK74;
	class Exile_Weapon_RPK: arifle_RPK74
	{
		scope=2;
		author="Exile Mod Team";
		displayName="RPK 5.45 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 5.45x39 mm";
		magazines[]=
		{
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green"
		};
	};*/
	class CUP_hgun_Colt1911;
	class Exile_Weapon_Colt1911: CUP_hgun_Colt1911
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Colt 1911 .45 ACP";
		descriptionShort="Handgun<br />Caliber: .45 ACP";
		magazines[]=
		{
			"Exile_Magazine_7Rnd_45ACP"
		};
	};
	class CUP_hgun_Makarov;
	class Exile_Weapon_Makarov: CUP_hgun_Makarov
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Makarov 9mm";
		descriptionShort="Handgun<br />Caliber: 9x18 mm";
		picture="\exile_psycho_weapons\ico\w_makarov_ca.paa";
		magazines[]=
		{
			"Exile_Magazine_8Rnd_9x18"
		};
	};
	class CUP_hgun_MicroUzi;
	class Exile_Weapon_MicroUzi: CUP_hgun_MicroUzi
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Micro UZI PDW";
		descriptionShort="Submachine gun<br />Caliber: 9x19 mm";
		magazines[]=
		{
			"CUP_30Rnd_9x19_UZI"
		};
	};
	class CUP_hgun_Phantom;
	class Exile_Weapon_Phantom: CUP_hgun_Phantom
	{
		scope=2;
		author="Exile Mod Team";
		displayName="CZ 75 PHANTOM";
		descriptionShort="Handgun<br />Caliber: 9x19 mm";
		magazines[]=
		{
			"CUP_18Rnd_9x19_Phantom"
		};
	};
	class CUP_hgun_SA61;
	class Exile_Weapon_SA61: CUP_hgun_SA61
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Sa-61";
		descriptionShort="Handgun<br />Caliber: 9x19 mm";
		magazines[]=
		{
			"CUP_20Rnd_B_765x17_Ball_M"
		};
	};
	class CUP_hgun_TaurusTracker455;
	class Exile_Weapon_Taurus: CUP_hgun_TaurusTracker455
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Taurus";
		descriptionShort="Revolver<br />Caliber: 45 ACP";
		magazines[]=
		{
			"Exile_Magazine_6Rnd_45ACP"
		};
	};
	class CUP_hgun_TaurusTracker455_gold;
	class Exile_Weapon_TaurusGold: CUP_hgun_TaurusTracker455_gold
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Taurus (Gold)";
		descriptionShort="Revolver<br />Caliber: 45 ACP";
		magazines[]=
		{
			"Exile_Magazine_6Rnd_45ACP"
		};
	};
	class CUP_lmg_L110A1;
	class Exile_Weapon_L110A1: CUP_lmg_L110A1
	{
		scope=2;
		author="Exile Mod Team";
		displayName="L110A1 5.56 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1"
		};
	};
	class CUP_lmg_L7A2;
	class Exile_Weapon_L7A2: CUP_lmg_L7A2
	{
		scope=2;
		author="Exile Mod Team";
		displayName="L7A2 GPMG 7.62 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
		};
	};
	class CUP_lmg_M240;
	class Exile_Weapon_M240: CUP_lmg_M240
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M240 7.62 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
		};
	};
	class CUP_lmg_M249_E2;
	class Exile_Weapon_M249_E2: CUP_lmg_M249_E2
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M249E2 5.56 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249"
		};
	};
	class CUP_lmg_m249_pip1;
	class Exile_Weapon_M249_PIP: CUP_lmg_m249_pip1
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M249 PIP 5.56 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249"
		};
	};
	class CUP_lmg_M60E4;
	class Exile_Weapon_M60E4: CUP_lmg_M60E4
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M60E4 (Railed) 5.56 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
		};
	};
	class CUP_lmg_minimi;
	class Exile_Weapon_minimi: CUP_lmg_minimi
	{
		scope=2;
		author="Exile Mod Team";
		displayName="FN Minimi 5.56 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249"
		};
	};
	class CUP_lmg_minimi_railed;
	class Exile_Weapon_minimi_railed: CUP_lmg_minimi_railed
	{
		scope=2;
		author="Exile Mod Team";
		displayName="FN Minimi (Railed) 5.56 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249"
		};
	};
	class CUP_lmg_minimipara;
	class Exile_Weapon_minimipara: CUP_lmg_minimipara
	{
		scope=2;
		author="Exile Mod Team";
		displayName="FN Minimi Para 5.56 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249"
		};
	};
	class CUP_lmg_Mk48_des;
	class Exile_Weapon_Mk48_desert: CUP_lmg_Mk48_des
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk48 Mod 0 (desert) 7.62 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
		};
	};
	class CUP_lmg_Mk48_wdl;
	class Exile_Weapon_Mk48_woodland: CUP_lmg_Mk48_wdl
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk48 Mod 0 (woodland) 7.62 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
		};
	};
	class CUP_lmg_PKM;
	class Exile_Weapon_PK: CUP_lmg_PKM
	{
		scope=2;
		author="Exile Mod Team";
		displayName="PKM 7.62 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 7.62x54 mm";
		magazines[]=
		{
			"Exile_Magazine_100Rnd_762x54_PK_Green"
		};
	};
	class CUP_lmg_Pecheneg;
	class Exile_Weapon_PKP: CUP_lmg_Pecheneg
	{
		scope=2;
		author="Exile Mod Team";
		displayName="PKP 7.62 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 7.62x54 mm";
		magazines[]=
		{
			"Exile_Magazine_100Rnd_762x54_PK_Green"
		};
	};
	class CUP_lmg_UK59;
	class Exile_Weapon_UK59: CUP_lmg_UK59
	{
		scope=2;
		author="Exile Mod Team";
		displayName="UK-59 7.62 mm";
		descriptionShort="Light Machine Gun<br />Caliber: 7.62x54 mm";
		magazines[]=
		{
			"CUP_50Rnd_UK59_762x54R_Tracer"
		};
	};
	class CUP_sgun_AA12;
	class Exile_Weapon_AA12: CUP_sgun_AA12
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AA-12";
		descriptionShort="Shotgun<br />Caliber: 12 Gauge";
		magazines[]=
		{
			"CUP_20Rnd_B_AA12_Pellets",
			"CUP_20Rnd_B_AA12_74Slug",
			"CUP_20Rnd_B_AA12_HE"
		};
	};
	class CUP_sgun_M1014;
	class Exile_Weapon_M1014: CUP_sgun_M1014
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M1014 12 Gauge";
		descriptionShort="Shotgun<br />Caliber: 12 Gauge";
		magazines[]=
		{
			"Exile_Magazine_8Rnd_74Slug",
			"Exile_Magazine_8Rnd_74Pellets"
		};
	};
	class CUP_sgun_Saiga12K;
	class Exile_Weapon_Saiga12K: CUP_sgun_Saiga12K
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Saiga 12K";
		descriptionShort="Shotgun<br />Caliber: 12 Gauge";
		magazines[]=
		{
			"CUP_8Rnd_B_Saiga12_74Slug_M",
			"CUP_8Rnd_B_Saiga12_74Pellets_M"
		};
	};
	class CUP_smg_bizon;
	class Exile_Weapon_bizon: CUP_smg_bizon
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Bizon PP-19 9 mm";
		descriptionShort="Submachine gun<br />Caliber: 9x18 mm";
		magazines[]=
		{
			"CUP_64Rnd_9x19_Bizon_M",
			"CUP_64Rnd_Green_Tracer_9x19_Bizon_M",
			"CUP_64Rnd_Red_Tracer_9x19_Bizon_M",
			"CUP_64Rnd_White_Tracer_9x19_Bizon_M",
			"CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M"
		};
	};
	class CUP_smg_EVO;
	class Exile_Weapon_EVO: CUP_smg_EVO
	{
		scope=2;
		author="Exile Mod Team";
		displayName="CZ SCORPION EVO 3 9 mm";
		descriptionShort="Submachine gun<br />Caliber: 9x19 mm";
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"CUP_30Rnd_9x19_EVO"
		};
	};
	class CUP_smg_MP5A5;
	class Exile_Weapon_MP5A5: CUP_smg_MP5A5
	{
		scope=2;
		author="Exile Mod Team";
		displayName="MP5A5 9 mm";
		descriptionShort="Submachine gun<br />Caliber: 9x19 mm";
		magazines[]=
		{
			"CUP_30Rnd_9x19_MP5"
		};
	};
	class CUP_smg_MP5SD6;
	class Exile_Weapon_MP5SD6: CUP_smg_MP5SD6
	{
		scope=2;
		author="Exile Mod Team";
		displayName="MP5SD6 9 mm";
		descriptionShort="Submachine gun<br />Caliber: 9x19 mm";
		magazines[]=
		{
			"CUP_30Rnd_9x19_MP5"
		};
	};
	class CUP_srifle_AS50;
	class Exile_Weapon_AS50: CUP_srifle_AS50
	{
		scope=2;
		author="Exile Mod Team";
		displayName="AS50 12.7 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 12.7x99 mm NATO";
		magazines[]=
		{
			"CUP_5Rnd_127x99_as50_M"
		};
	};
	class CUP_srifle_AWM_des;
	class Exile_Weapon_AWM_desert: CUP_srifle_AWM_des
	{
		scope=2;
		author="Exile Mod Team";
		displayName="L115A3 LRR (Desert) .338";
		descriptionShort="Sniper Rifle<br />Caliber: .338";
		magazines[]=
		{
			"CUP_5Rnd_86x70_L115A1"
		};
	};
	class CUP_srifle_AWM_wdl;
	class Exile_Weapon_AWM_woodland: CUP_srifle_AWM_wdl
	{
		scope=2;
		author="Exile Mod Team";
		displayName="L115A3 LRR (woodland) .338";
		descriptionShort="Sniper Rifle<br />Caliber: .338";
		magazines[]=
		{
			"CUP_5Rnd_86x70_L115A1"
		};
	};
	class CUP_srifle_CZ550;
	class Exile_Weapon_CZ550: CUP_srifle_CZ550
	{
		scope=2;
		author="Exile Mod Team";
		displayName="CZ550 .22LR";
		descriptionShort="Marksman Rifle<br />Caliber: .22LR";
		magazines[]=
		{
			"Exile_Magazine_5Rnd_22LR"
		};
	};
	class CUP_srifle_CZ550_rail;
	class Exile_Weapon_CZ550_rail: CUP_srifle_CZ550_rail
	{
		scope=2;
		author="Exile Mod Team";
		displayName="CZ550 (railed) .22LR";
		descriptionShort="Marksman Rifle<br />Caliber: .22LR";
		magazines[]=
		{
			"Exile_Magazine_5Rnd_22LR"
		};
	};
	class CUP_srifle_CZ750;
	class Exile_Weapon_CZ750: CUP_srifle_CZ750
	{
		scope=2;
		author="Exile Mod Team";
		displayName="CZ750 7.62 mm";
		descriptionShort="Marksman Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_10Rnd_762x51_CZ750_Tracer",
			"CUP_10Rnd_762x51_CZ750"
		};
	};
	class CUP_srifle_G22_des;
	class Exile_Weapon_G22_desert: CUP_srifle_G22_des
	{
		scope=2;
		author="Exile Mod Team";
		displayName="G22 7.62 mm";
		descriptionShort="Marksman Rifle<br />Caliber: 7.62x51 mm";
		magazines[]=
		{
			"CUP_5Rnd_762x67_G22"
		};
	};
	class CUP_srifle_ksvk;
	class Exile_Weapon_ksvk: CUP_srifle_ksvk
	{
		scope=2;
		author="Exile Mod Team";
		displayName="KSVK";
		descriptionShort="KSVK or Degtyarev sniper rifle is a 12.7mm anti-materiel sniper rifle developed in Russia for the purpose of counter sniping and penetrating thick walls, as well as light armored vehicles.<br />Caliber: 127x108";
		magazines[]=
		{
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK",
			"Exile_Magazine_5Rnd_127x108_KSVK",
			"Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag"
		};
	};
	class CUP_srifle_L129A1;
	class Exile_Weapon_L129A1: CUP_srifle_L129A1
	{
		scope=2;
		author="Exile Mod Team";
		displayName="L129a1 7.62 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[]=
		{
			"CUP_20Rnd_762x51_L129_M",
			"20Rnd_762x51_Mag"
		};
	};
	class CUP_srifle_L129A1_HG;
	class Exile_Weapon_L129A1_HG: CUP_srifle_L129A1_HG
	{
		scope=2;
		author="Exile Mod Team";
		displayName="L129a1 HG 7.62 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[]=
		{
			"CUP_20Rnd_762x51_L129_M",
			"20Rnd_762x51_Mag"
		};
	};
	class CUP_srifle_LeeEnfield;
	class Exile_Weapon_LeeEnfield: CUP_srifle_LeeEnfield
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Lee-Enfield MkI .303";
		descriptionShort="Marksman Rifle<br />Caliber: .303 British";
		magazines[]=
		{
			"Exile_Magazine_10Rnd_303"
		};
	};
	class CUP_srifle_LeeEnfield_rail;
	class Exile_Weapon_LeeEnfield_rail: CUP_srifle_LeeEnfield_rail
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Lee-Enfield MkI (rail) .303";
		descriptionShort="Marksman Rifle<br />Caliber: .303 British";
		magazines[]=
		{
			"Exile_Magazine_10Rnd_303"
		};
	};
	class CUP_srifle_M107_Base;
	class Exile_Weapon_m107: CUP_srifle_M107_Base
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M107";
		descriptionShort="M107, is a recoil-operated, semi-automatic sniper rifle.<br />Caliber: 127x99";
		magazines[]=
		{
			"Exile_Magazine_10Rnd_127x99_m107",
			"Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag"
		};
	};
	class CUP_srifle_M110;
	class Exile_Weapon_M110: CUP_srifle_M110
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M110";
		descriptionShort="Sniper rifle<br />Caliber: 7.62 mm";
		magazines[]=
		{
			"CUP_20Rnd_762x51_B_M110",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_M110",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_M110",
			"CUP_20Rnd_TE1_White_Tracer_762x51_M110"
		};
	};
	class CUP_srifle_M14;
	class Exile_Weapon_DMR: CUP_srifle_M14
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M14 7.62 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[]=
		{
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green"
		};
	};
	class CUP_srifle_M24_des;
	class Exile_Weapon_M24_desert: CUP_srifle_M24_des
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M24 (desert) 7.62 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[]=
		{
			"CUP_5Rnd_762x51_M24"
		};
	};
	class CUP_srifle_M24_des_LeupoldMk4LRT;
	class Exile_Weapon_M24_desert_LeupoldMk4LRT: CUP_srifle_M24_des_LeupoldMk4LRT
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M24 (scoped) 7.62 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[]=
		{
			"CUP_5Rnd_762x51_M24"
		};
	};
	class CUP_srifle_M24_ghillie;
	class Exile_Weapon_M24_ghillie: CUP_srifle_M24_ghillie
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M24 (ghillie) 7.62 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[]=
		{
			"CUP_5Rnd_762x51_M24"
		};
	};
	class CUP_srifle_M24_wdl;
	class Exile_Weapon_M24_woodland: CUP_srifle_M24_wdl
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M24 (woodland) 7.62 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[]=
		{
			"CUP_5Rnd_762x51_M24"
		};
	};
	class CUP_srifle_M24_wdl_LeupoldMk4LRT;
	class Exile_Weapon_M24_woodland_LeupoldMk4LRT: CUP_srifle_M24_wdl_LeupoldMk4LRT
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M24 (scoped) 7.62 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[]=
		{
			"CUP_5Rnd_762x51_M24"
		};
	};
	class CUP_srifle_M40A3;
	class Exile_Weapon_M40A3: CUP_srifle_M40A3
	{
		scope=2;
		author="Exile Mod Team";
		displayName="M40A3 7.62 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[]=
		{
			"CUP_5Rnd_762x51_M24"
		};
	};
	class CUP_srifle_Mk12SPR;
	class Exile_Weapon_Mk12SPR: CUP_srifle_Mk12SPR
	{
		scope=2;
		author="Exile Mod Team";
		displayName="Mk12 SPR 5.56 mm";
		descriptionShort="Sniper Rifle<br />Caliber: 5.56x45 mm";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	class CUP_srifle_SVD;
	class Exile_Weapon_SVD: CUP_srifle_SVD
	{
		scope=2;
		author="Exile Mod Team";
		displayName="SVD 762x54";
		descriptionShort="Marksman Rifle<br />Caliber: 762x54";
		magazines[]=
		{
			"Exile_Magazine_10Rnd_762x54"
		};
	};
	class CUP_srifle_SVD_des;
	class Exile_Weapon_SVDCamo: CUP_srifle_SVD_des
	{
		scope=2;
		author="Exile Mod Team";
		displayName="SVD (Camo) 762x54";
		descriptionShort="Marksman Rifle<br />Caliber: 762x54";
		magazines[]=
		{
			"Exile_Magazine_10Rnd_762x54"
		};
	};
	class CUP_srifle_SVD_des_ghillie_pso;
	class Exile_Weapon_SVD_des_ghillie_pso: CUP_srifle_SVD_des_ghillie_pso
	{
		scope=2;
		author="Exile Mod Team";
		displayName="SVD (ghillie) 762x54";
		descriptionShort="Marksman Rifle<br />Caliber: 762x54";
		magazines[]=
		{
			"Exile_Magazine_10Rnd_762x54"
		};
	};
	class CUP_srifle_VSSVintorez;
	class Exile_Weapon_VSS: CUP_srifle_VSSVintorez
	{
		scope=2;
		author="Exile Mod Team";
		displayName="VSS 9x39 mm";
		descriptionShort="Marksman Rifle<br />Caliber: 9x39 mm";
		magazines[]=
		{
			"CUP_10Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M"
		};
	};
	class CUP_srifle_VSSVintorez_pso;
	class Exile_Weapon_VSS_pso: CUP_srifle_VSSVintorez_pso
	{
		scope=2;
		author="Exile Mod Team";
		displayName="VSS (scoped) 9x39 mm";
		descriptionShort="Marksman Rifle<br />Caliber: 9x39 mm";
		magazines[]=
		{
			"CUP_10Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M"
		};
	};
};
class CfgWorlds
{
	class CAWorld;
	class Altis: CAWorld
	{
		cutscenes[]=
		{
			"ExileIntro"
		};
		class AmbientA3
		{
			class Radius40_60
			{
				class Species
				{
					delete CatShark_F;
					delete Mackerel_F;
					delete Mullet_F;
					delete Ornate_random_F;
					delete Salema_F;
					delete Snake_random_F;
					delete Tuna_F;
					delete Turtle_F;
				};
			};
			class Radius440_500
			{
				class Species
				{
					delete Rabbit_F;
				};
			};
		};
	};
	class Stratis: CAWorld
	{
		cutscenes[]=
		{
			"ExileIntro"
		};
	};
	class VR: CAWorld
	{
		cutscenes[]=
		{
			"ExileIntro"
		};
	};
	initWorld="VR";
	demoWorld="VR";
	groupNameFormat="Inmate %ExileAlphabet-%ExileNumbers";
	class ExileAlphabet
	{
		class A
		{
			name="A";
		};
		class B
		{
			name="B";
		};
		class C
		{
			name="C";
		};
		class D
		{
			name="D";
		};
		class E
		{
			name="E";
		};
		class F
		{
			name="F";
		};
		class G
		{
			name="G";
		};
		class H
		{
			name="H";
		};
		class I
		{
			name="I";
		};
		class J
		{
			name="J";
		};
		class K
		{
			name="K";
		};
		class L
		{
			name="L";
		};
		class M
		{
			name="M";
		};
		class N
		{
			name="N";
		};
		class O
		{
			name="O";
		};
		class P
		{
			name="P";
		};
		class Q
		{
			name="Q";
		};
		class R
		{
			name="R";
		};
		class S
		{
			name="S";
		};
		class T
		{
			name="T";
		};
		class U
		{
			name="U";
		};
		class V
		{
			name="V";
		};
		class W
		{
			name="W";
		};
		class X
		{
			name="X";
		};
		class Y
		{
			name="Y";
		};
		class Z
		{
			name="Z";
		};
	};
	class ExileNumbers
	{
		class Number1
		{
			name="1";
		};
		class Number2
		{
			name="2";
		};
		class Number3
		{
			name="3";
		};
		class Number4
		{
			name="4";
		};
		class Number5
		{
			name="5";
		};
		class Number6
		{
			name="6";
		};
		class Number7
		{
			name="7";
		};
		class Number8
		{
			name="8";
		};
		class Number9
		{
			name="9";
		};
	};
};
class CfgXM8
{
	class apps
	{
		controlID=4040;
		title="XM8";
	};
	class players
	{
		controlID=4110;
		title="8G Network";
	};
	class clan
	{
		controlID=4060;
		title="Family";
	};
	class settings
	{
		controlID=4070;
		title="Settings";
	};
	class hostParty
	{
		controlID=4080;
		title="Host Party";
	};
	class party
	{
		controlID=4100;
		title="Party";
	};
	class server
	{
		controlID=4090;
		title="Server Rules";
	};
	class healthScanner
	{
		controlID=4120;
		title="Health Scanner";
	};
	class territory
	{
		controlID=4130;
		title="Territory";
	};
	class slothMachine
	{
		controlID=4140;
		title="Sloth Machine";
	};
	class mobileXm8
	{
		controlID=4200;
		title="Mobile XM8";
	};
	class extraApps
	{
		controlID=5000;
		title="XM8";
	};
};
class Attributes;
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscObject;
class ctrlMenu;
class ctrlStaticPicture;
class RscButtonMenuSteam;
class RscButtonTextOnly;
class RscVehicleToggles
{
	y=-1;
};
class RscPictureButton: RscActivePicture
{
	color[]={1,1,1,0.69999999};
	tooltip="";
	text="";
	action="";
	style=2096;
};
class RscPictureMenuButton: RscButtonMenu
{
	style=2;
};
class RscExileQuickStats: RscStructuredText
{
	size="1 * pixelH";
};
class RscExileItemListBox: RscListBox
{
	sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	sizeEx2="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	rowHeight="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	canDrag=0;
	itemSpacing=0.001;
	period=1.2;
	shadow=0;
	maxHistoryDelay=1;
	fade=0;
	deletable=0;
	type=5;
	style=16;
	colorBackground[]={0,0,0,0.30000001};
	colorDisabled[]={1,1,1,0.25};
	colorPicture[]={1,1,1,1};
	colorPictureDisabled[]={1,1,1,0.25};
	colorPictureRight[]={1,1,1,1};
	colorPictureRightDisabled[]={1,1,1,0.25};
	colorPictureSelected[]={1,1,1,1};
	colorScrollbar[]={1,0,0,0};
	colorSelect2[]={0,0,0,1};
	colorSelect2Right[]={0,0,0,1};
	colorSelectBackground2[]={1,1,1,0.5};
	colorSelectBackground[]={0.94999999,0.94999999,0.94999999,1};
	colorSelectRight[]={0,0,0,1};
	colorShadow[]={0,0,0,0.5};
	colorText[]={1,1,1,1};
	colorTextRight[]={1,1,1,1};
	disabledCtrlColor[]={1,1,1,0.5};
	itemBackground[]={1,1,1,0.1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	tooltipColorText[]={1,1,1,1};
};
class RscExilePrimaryButton: RscButton
{
	w="300 * pixelW";
	h="60 * pixelH";
	colorBackground[]=
	{
		"199/255",
		"38/255",
		"81/255",
		1
	};
	colorText[]={1,1,1,1};
	shadow=0;
	font="RobotoMedium";
	sizeEx="30 * pixelH";
	colorFocused[]=
	{
		"199/255",
		"38/255",
		"81/255",
		0.80000001
	};
	colorBackgroundActive[]=
	{
		"199/255",
		"38/255",
		"81/255",
		0.80000001
	};
};
class RscDisplayClient: RscStandardDisplay
{
	delete scriptName;
	delete scriptPath;
	access=3;
	onLoad="with uiNameSpace do { [_this select 0, 'RscDisplayClient'] call ExileClient_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	class controlsBackground
	{
		class Black: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Map: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Noise: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Line: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExileBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class Controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapAuthor: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackBottom: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackTop: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapName: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapDescription: RscStructuredText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ProgressMap: RscProgress
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ProgressMission: ProgressMap
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc=66001;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="exile_assets\texture\loading\spinner_ca.paa";
			type=0;
			centerU=0.5;
			centerV=0.5;
			angle=90;
			show=0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc=66002;
			text="<t>Still loading...</t>";
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoMedium";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc=-1;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc=-1;
					text="exile_assets\texture\mod\icon.paa";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc=-1;
					text="Exile Mod";
					font="RobotoMedium";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
				};
				class ExileModUrl: RscText
				{
					idc=-1;
					text="www.exilemod.com";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc=66005;
					text="RscDisplayLoadMission";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="exile_assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc=66009;
					text="RscDisplayLoadMission";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	movingEnable=0;
	enableSimulation=0;
	enableDisplay=1;
	access=3;
	onLoad="with uiNameSpace do { [_this select 0, 'RscDisplayLoadMission'] call ExileClient_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsBackground
	{
		class Black: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Line: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Map: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Noise: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExileBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class LoadingStart: RscControlsGroup
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapAuthor: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackBottom: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackTop: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapDescription: RscStructuredText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapName: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ProgressMap: RscProgress
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ProgressMission: ProgressMap
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class Logo3DEN: ctrlStaticPicture
		{
			x="safeZoneX + safeZoneW - 60 * pixelW - 0.3";
			y="safeZoneY + safeZoneH - 60 * pixelW - 0.2";
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc=66001;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="exile_assets\texture\loading\spinner_ca.paa";
			type=0;
			centerU=0.5;
			centerV=0.5;
			angle=90;
			show=0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc=66002;
			text="<t>Still loading...</t>";
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoMedium";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc=-1;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc=-1;
					text="exile_assets\texture\mod\icon.paa";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc=-1;
					text="Exile Mod";
					font="RobotoMedium";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
				};
				class ExileModUrl: RscText
				{
					idc=-1;
					text="www.exilemod.com";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc=66005;
					text="RscDisplayLoadMission";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="exile_assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc=66009;
					text="RscDisplayLoadMission";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	access=3;
	onLoad="with uiNameSpace do { [_this select 0, 'RscDisplayLoadMission'] call ExileClient_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsbackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class RscTitleBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MainBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MissionSettingsBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class NumOfPlayersBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class SideBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class PlayersPoolHeaderBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class RolesBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ChatBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class PlayersPoolBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExileBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class SortPing: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class SortPlayers: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Y_GamerCard: RscActiveText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class PartyGUI: RscActiveText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MuteAll: RscCheckBox
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class AssignRole: RscActiveText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ButtonPlayers: RscButtonTextOnly
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ButtonPing: ButtonPlayers
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Title: RscTitle
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class PlayersName: RscTitle
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_TextVotingTimeLeft: RscTitle
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ValueMission: RscTitle
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_TextDescription: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_ValueDescription: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextIsland: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ValueIsland: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextSide: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_West: RscActiveText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Logic: CA_B_West
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_East: CA_B_West
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Guerrila: CA_B_West
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Civilian: CA_B_West
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Virtual: CA_B_West
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_ValueRoles: RscListBox
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_ValuePool: RscListNBox
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_EnableAll: RscButtonMenu
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Lock: RscButtonMenu
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Params: RscButtonMenu
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ButtonSteamWorkshop: RscButtonMenuSteam
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Kick: RscButtonMenu
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_ButtonContinue: RscButtonMenuOK
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_ButtonCancel: RscButtonMenuCancel
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextMission: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextRole: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextPlayersPool: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextListedPlayers: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ValueListedPlayers: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc=66001;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="exile_assets\texture\loading\spinner_ca.paa";
			type=0;
			centerU=0.5;
			centerV=0.5;
			angle=90;
			show=0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc=66002;
			text="<t>Still loading...</t>";
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoMedium";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc=-1;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc=-1;
					text="exile_assets\texture\mod\icon.paa";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc=-1;
					text="Exile Mod";
					font="RobotoMedium";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
				};
				class ExileModUrl: RscText
				{
					idc=-1;
					text="www.exilemod.com";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc=66005;
					text="RscDisplayLoadMission";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="exile_assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc=66009;
					text="RscDisplayLoadMission";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	enableSimulation=1;
	access=3;
	onLoad="with uiNameSpace do { [_this select 0, 'RscDisplayNotFreeze'] call ExileClient_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsBackground
	{
		class Black: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Line: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Map: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Noise: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExileBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class LoadingStart: RscControlsGroup
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapAuthor: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackBottom: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackTop: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapDescription: RscStructuredText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapName: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ProgressMap: RscProgress
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ProgressMission: ProgressMap
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class Logo3DEN: ctrlStaticPicture
		{
			x="safeZoneX + safeZoneW - 60 * pixelW - 0.3";
			y="safeZoneY + safeZoneH - 60 * pixelW - 0.2";
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc=66001;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="exile_assets\texture\loading\spinner_ca.paa";
			type=0;
			centerU=0.5;
			centerV=0.5;
			angle=90;
			show=0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc=66002;
			text="<t>Almost there...</t>";
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoMedium";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc=-1;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc=-1;
					text="exile_assets\texture\mod\icon.paa";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc=-1;
					text="Exile Mod";
					font="RobotoMedium";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
				};
				class ExileModUrl: RscText
				{
					idc=-1;
					text="www.exilemod.com";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc=66005;
					text="RscDisplayNotFreeze";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="exile_assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc=66009;
					text="RscDisplayNotFreeze";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscExileLoadingScreen: RscDisplayLoadMission
{
	idd=24001;
	access=3;
	onLoad="uiNamespace setVariable ['RscExileLoadingScreen', _this select 0]; with uiNameSpace do { [_this select 0, 'RscExileLoadingScreen'] call ExileClient_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; }; uiNamespace setVariable ['RscExileLoadingScreen', displayNull]";
};
class RscExileSelectSpawnLocationDialog
{
	idd=24002;
	access=3;
	duration=-1;
	onLoad="uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', _this select 0]; with uiNameSpace do { [_this select 0, 'RscExileSelectSpawnLocationDialog'] call ExileClient_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; }; uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', displayNull]";
	class controlsBackground
	{
		class ExileBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc=-1;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc=-1;
					text="exile_assets\texture\mod\icon.paa";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc=-1;
					text="Exile Mod";
					font="RobotoMedium";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
				};
				class ExileModUrl: RscText
				{
					idc=-1;
					text="www.exilemod.com";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc=66005;
					text="RscMPSetupMessage";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="exile_assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc=66009;
					text="RscMPSetupMessage";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class DialogBackground: RscText
		{
			idc=-1;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="safeZoneW - (60 + 60 + 380 + 60) * pixelW";
			h="safeZoneH - (60 + 60) * pixelH";
			colorBackground[]=
			{
				"32/255",
				"36/255",
				"42/255",
				1
			};
		};
		class DialogTitleBackground: RscText
		{
			idc=-1;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="safeZoneW - (60 + 60 + 380 + 60) * pixelW";
			h="60 * pixelH";
			colorBackground[]={0,0,0,1};
		};
		class DialogTitle: RscText
		{
			idc=-1;
			x="safeZoneX + (60 + 15) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="safeZoneW - (60 + 60 + 380 + 60 + 60 + 10) * pixelW";
			h="60 * pixelH";
			text="Spawn Location";
			sizeEx="30 * pixelH";
			font="RobotoCondensed";
		};
		class ListBoxLocations: RscListBox
		{
			idc=24002;
			text="Locations";
			font="RobotoCondensed";
			x="safeZoneX + (60 + 15) * pixelW";
			y="safeZoneY + (60 + 60 + 15) * pixelH";
			w="300 * pixelW";
			h="safeZoneH - (60 + 60 + 60 + 15 + 15 + 60 + 15) * pixelH";
			colorBackground[]={0,0,0,0.25};
			onLBSelChanged="_this call ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged;";
		};
		class Map: RscMapControl
		{
			idc=24001;
			text="";
			x="safeZoneX + (60 + 15 + 300 + 15) * pixelW";
			y="safeZoneY + (60 + 60 + 15) * pixelH";
			w="safeZoneW - (60 + 15 + 300 + 15 + 15 + 60 + 380 + 60) * pixelW";
			h="safeZoneH - (60 + 60 + 15 + 60 + 15) * pixelH";
			moveOnEdges=0;
			maxSatelliteAlpha=0.75;
			alphaFadeStartScale=1.15;
			alphaFadeEndScale=1.29;
		};
		class ButtonSpawn: RscExilePrimaryButton
		{
			idc=24003;
			text="OKAY";
			x="safeZoneX + (60 + 15) * pixelW";
			y="safeZoneY + safeZoneH - (60 + 15 + 60) * pixelH";
			w="300 * pixelW";
			h="60 * pixelH";
			onButtonClick="[] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick";
		};
	};
};
class RscMPSetupMessage
{
	access=3;
	onLoad="with uiNameSpace do { [_this select 0, 'RscMPSetupMessage'] call ExileClient_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	class controlsBackground
	{
		class FullscreenBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExileBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class Controls
	{
		class BackgroundFull: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class BackgroundProgress: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class DownloadText: RscStructuredText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExileProgress: RscProgress
		{
			idc=102;
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc=101;
			text="<t>Downloading...</t>";
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoMedium";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc=-1;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc=-1;
					text="exile_assets\texture\mod\icon.paa";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc=-1;
					text="Exile Mod";
					font="RobotoMedium";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
				};
				class ExileModUrl: RscText
				{
					idc=-1;
					text="www.exilemod.com";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc=66005;
					text="RscMPSetupMessage";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="exile_assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc=66009;
					text="RscMPSetupMessage";
					font="RobotoMedium";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExileMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscChatListDefault
{
	shadow=1;
	shadowPlayer=0;
	shadowColor[]={0,0,0,0.5};
	x="safeZoneX + 60 * pixelW";
	y="(safeZoneY + safeZoneH) - 140 * pixelH - 40 * pixelH";
	w="320 * pixelW";
	h="400 * pixelH";
	font="PuristaMedium";
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows="((5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))+ 0.3*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	colorBackground[]={0,0,0,0.30000001};
	colorGlobalChannel[]=
	{
		"0.606*1.4",
		"0.606*1.4",
		"0.606*1.4",
		1
	};
	colorGlobalChannelPlayerBackground[]=
	{
		"0.606*1.4",
		"0.606*1.4",
		"0.606*1.4",
		0.5
	};
	colorGlobalChannelPlayerText[]={0,0,0,1};
	colorSideChannel[]=
	{
		"0.196*1.4",
		"0.592*1.4",
		"0.706*1.4",
		1
	};
	colorSideChannelPlayerBackground[]=
	{
		"0.196*1.4",
		"0.592*1.4",
		"0.706*1.4",
		0.5
	};
	colorSideChannelPlayerText[]={0,0,0,1};
	colorCommandChannel[]=
	{
		"0.8275*1.4",
		"0.8196*1.4",
		"0.1961*1.4",
		1
	};
	colorCommandChannelPlayerBackground[]=
	{
		"0.8275*1.4",
		"0.8196*1.4",
		"0.1961*1.4",
		0.5
	};
	colorCommandChannelPlayerText[]={0,0,0,1};
	colorGroupChannel[]={0.70899999,0.972,0.384,1};
	colorGroupChannelPlayerBackground[]={0.70899999,0.972,0.384,0.5};
	colorGroupChannelPlayerText[]={0,0,0,1};
	colorVehicleChannel[]=
	{
		"0.863*1.4",
		"0.584*1.4",
		"0.0*1.4",
		1
	};
	colorVehicleChannelPlayerBackground[]=
	{
		"0.863*1.4",
		"0.584*1.4",
		"0.0*1.4",
		0.5
	};
	colorVehicleChannelPlayerText[]={0,0,0,1};
	colorDirectChannel[]={1,1,1,1};
	colorDirectChannelPlayerBackground[]={1,1,1,0.5};
	colorDirectChannelPlayerText[]={0,0,0,1};
	colorPlayerChannel[]={0.80000001,0.69999999,1,1};
	colorPlayerChannelPlayerBackground[]={0.80000001,0.69999999,1,0.5};
	colorPlayerChannelPlayerText[]={0,0,0,1};
	colorMessage[]={1,1,1,1};
	colorMessageProtocol[]={0.64999998,0.64999998,0.64999998,1};
};
class RscChatListMission: RscChatListDefault
{
	colorBackground[]={0,0,0,0.30000001};
	x="safeZoneX + 60 * pixelW";
	y="(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w="(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	h="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows="(profilenamespace getvariable [""IGUI_GRID_CHAT_H"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscChatListBriefing: RscChatListDefault
{
	x="1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
	y="14.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
	w="(18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
	h="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows="(SafezoneH - (17.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscChatListMap: RscChatListDefault
{
	x="safeZoneX + 60 * pixelW";
	y="(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w="(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	h="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows="(profilenamespace getvariable [""IGUI_GRID_CHAT_H"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscDisplayChannel
{
	idd=63;
	class controls
	{
		delete Channel;
		class CA_Channel: RscText
		{
			idc=101;
			style=0;
			x="safeZoneX + 60 * pixelW + 10 * pixelW";
			y="(safeZoneY + safeZoneH) - 50 * pixelH";
			w="155 * pixelW - 10 * pixelW";
			h="30 * pixelH";
			colorBackground[]={0,0,0,0};
			sizeEx="18 * pixelH";
		};
		class Background: RscText
		{
			x="safeZoneX + 60 * pixelW";
			y="(safeZoneY + safeZoneH) - 50 * pixelH";
			w="155 * pixelW";
			h="30 * pixelH";
			colorBackground[]=
			{
				"19/255",
				"22/255",
				"27/255",
				0.80000001
			};
		};
		class Picture: RscPicture
		{
			idc=102;
			x=-10.01;
			y=0.72000003;
			w=0.029999999;
			h=0.050000001;
		};
		class MuteChat: RscActiveText
		{
			x=-1;
			y=-1;
			w=0;
			h=0;
		};
		class MuteVON: RscActiveText
		{
			x=-1;
			y=-1;
			w=0;
			h=0;
		};
	};
};
class RscDisplayChat
{
	class controls
	{
		delete Line;
		delete Background;
		class CA_Background: RscText
		{
			x="safeZoneX + 215 * pixelW";
			y="(safeZoneY + safeZoneH) - 50 * pixelH";
			w="400 * pixelW";
			h="30 * pixelH";
			colorBackground[]=
			{
				"19/255",
				"22/255",
				"27/255",
				0.5
			};
			colorText[]={0,0,0,0};
		};
		class CA_Line: RscEdit
		{
			idc=101;
			x="safeZoneX + 215 * pixelW + 10 * pixelW";
			y="(safeZoneY + safeZoneH) - 50 * pixelH";
			w="400 * pixelW - 20 * pixelW";
			h="30 * pixelH";
			sizeEx="25 * pixelH";
			text="";
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			autocomplete="general";
			style="0x00 + 0x200";
		};
	};
};
class RscDisplayClientGetReady: RscDisplayGetReady
{
	onLoad="missionNamespace setVariable ['ExileClientServerIsInitializing', true]; ctrlActivate ((_this select 0) displayCtrl 1); (_this select 0) closeDisplay 1";
};
class RscDisplayDebriefing: RscStandardDisplay
{
	onLoad="(_this select 0) closeDisplay 0";
};
class RscDisplayInventory
{
	scriptName="RscDisplayInventory";
	scriptPath="IGUI";
	onLoad="[""onLoad"",_this,""RscDisplayInventory"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn ExileClient_gui_inventory_event_onLoad";
	onUnload="[""onUnload"",_this,""RscDisplayInventory"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	idd=602;
	enableSimulation=1;
	class Colors
	{
		dragValidBgr[]=
		{
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
			0.5
		};
		dragInvalidBgr[]=
		{
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])",
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])",
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",
			0.5
		};
		dragValidBar[]=
		{
			"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])",
			"(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])",
			"(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])",
			0.5
		};
		dragInvalidBar[]=
		{
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])",
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])",
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",
			0.5
		};
		progressBar[]=
		{
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
			1
		};
		progressBarBgr[]=
		{
			"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
			"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
			"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
			0.75
		};
		highlight[]=
		{
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
			0.5
		};
	};
	class controlsBackground
	{
	};
	class controls
	{
		delete Background;
		delete Title;
		delete ButtonOK;
		delete ButtonCancel;
		delete BackgroundSlotPrimary;
		delete BackgroundSlotHeadgear;
		delete BackgroundSlotGoggles;
		delete BackgroundSlotHMD;
		delete BackgroundSlotBinoculars;
		delete BackgroundSlotPrimaryMuzzle;
		delete BackgroundSlotPrimaryUnderBarrel;
		delete BackgroundSlotPrimaryFlashlight;
		delete BackgroundSlotPrimaryOptics;
		delete BackgroundSlotPrimaryMagazineGL;
		delete BackgroundSlotPrimaryMagazine;
		delete BackgroundSlotSecondary;
		delete BackgroundSlotSecondaryMuzzle;
		delete BackgroundSlotSecondaryUnderBarrel;
		delete BackgroundSlotSecondaryFlashlight;
		delete BackgroundSlotSecondaryOptics;
		delete BackgroundSlotSecondaryMagazine;
		delete BackgroundSlotHandgunFlashlight;
		delete BackgroundSlotHandgunOptics;
		delete BackgroundSlotHandgunMagazine;
		delete BackgroundSlotHandgun;
		delete BackgroundSlotMap;
		delete BackgroundSlotGPS;
		delete BackgroundSlotHandgunMuzzle;
		delete BackgroundSlotHandgunUnderBarrel;
		delete BackgroundSlotRadio;
		delete BackgroundSlotCompass;
		delete BackgroundSlotWatch;
		class GroundTab: RscActiveText
		{
			colorBackgroundSelected[]={1,1,1,1};
			colorFocused[]={1,1,1,0};
			soundDoubleClick[]=
			{
				"",
				0.1,
				1
			};
			color[]={1,1,1,1};
			idc=6321;
			x="7 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="6 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class RankBackground: RscText
		{
			idc=1014;
			x=-1;
			y=-1;
			w="0.6 * (0.03)";
			h="0.6 * (0.04)";
			colorBackground[]={1,1,1,0.2};
		};
		class RankPicture: RscPicture
		{
			idc=1203;
			text="\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
			x=-1;
			y=-1;
			w="0.6 * (0.03)";
			h="0.6 * (0.04)";
		};
		class UniformTab: GroundTab
		{
			idc=6332;
			x=-1;
			y=-1;
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorBackground[]={1,1,0,1};
		};
		class VestTab: UniformTab
		{
			idc=6382;
			x=-1;
			y=-1;
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorBackground[]={1,1,0,1};
		};
		class BackpackTab: UniformTab
		{
			idc=6192;
			x=-1;
			y=-1;
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorBackground[]={1,1,0,1};
		};
		class CA_ContainerBackground: RscText
		{
			idc=1001;
			x="6.5 * (0.03) + (-0.25)";
			y="7.5 * (0.04) + (-0.25)";
			w="13 * (0.03)";
			h="23 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class CA_PlayerBackground: RscText
		{
			idc=1002;
			x="20 * (0.03) + (-0.25)";
			y="7.5 * (0.04) + (-0.25)";
			w="23.5 * (0.03)";
			h="23 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class TitleBackground: RscText
		{
			idc=1020;
			x="20 * (0.03) + (-0.25)";
			y="6.4 * (0.04) + (-0.25)";
			w="23.5 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class PlayersName: RscText
		{
			idc=111;
			text="Player name:";
			x="20 * (0.03) + (-0.25)";
			y="6.4 * (0.04) + (-0.25)";
			w="11.5 * (0.03)";
			h="1 * (0.04)";
		};
		class ExileContainerLoadBackground: RscText
		{
			idc=-1;
			text="";
			x="7 * (0.03) + (-0.25)";
			y="29.5 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="0.5 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class ExilePlayerLoadBackground: RscText
		{
			idc=-1;
			text="";
			x="20.5 * (0.03) + (-0.25)";
			y="29.5 * (0.04) + (-0.25)";
			w="22.5 * (0.03)";
			h="0.5 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class ExileEquipmentLoadBackground: RscText
		{
			idc=-1;
			text="";
			x="20.5 * (0.03) + (-0.25)";
			y="12 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="0.5 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class ButtonBack: RscActiveText
		{
			color[]={1,1,1,0.69999999};
			idc=2;
			style=48;
			text="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x="42.4 * (0.03) + (-0.25)";
			y="6.4 * (0.04) + (-0.25)";
			w="1 * (0.03)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.69999999};
			colorActive[]={1,1,1,1};
			tooltip="Close";
		};
		class ExternalContainerBackground: RscPicture
		{
			idc=1240;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="7 * (0.03) + (-0.25)";
			y="11 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="16 * (0.04)";
			colorText[]={1,1,1,0.1};
		};
		class PlayerContainerBackground: ExternalContainerBackground
		{
			idc=1241;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="20.5 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="14 * (0.04)";
			colorText[]={1,1,1,0.1};
		};
		class SoldierTab: GroundTab
		{
			idc=6401;
			x="13 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="6 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class GroundContainer: RscListBox
		{
			itemBackground[]={1,1,1,0.1};
			idc=632;
			sizeEx2="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag=1;
			itemSpacing=0.001;
			x="7 * (0.03) + (-0.25)";
			y="11 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="16 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class SoldierContainer: GroundContainer
		{
			idc=640;
			x="7 * (0.03) + (-0.25)";
			y="11 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="16 * (0.04)";
			colorBackground[]={0,0,0,0};
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GroundFilter: RscCombo
		{
			idc=6554;
			x="7 * (0.03) + (-0.25)";
			y="9.5 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="1 * (0.04)";
		};
		class GroundLoad: RscProgress
		{
			colorBar[]={0.89999998,0.89999998,0.89999998,0.89999998};
			colorExtBar[]={1,1,1,1};
			idc=6307;
			texture="";
			textureExt="";
			x="7 * (0.03) + (-0.25)";
			y="29.5 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="0.5 * (0.04)";
			colorFrame[]={0,0,0,0};
		};
		class SlotPrimary: GroundTab
		{
			color[]={1,1,1,1};
			colorBackgroundSelected[]={1,1,1,0.1};
			colorFocused[]={0,0,0,0};
			idc=610;
			style="0x30 + 0x800";
			canDrag=1;
			onMouseButtonDblClick="_this call ExileClient_gui_inventory_event_onSlotDoubleClick";
			x="33 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="3.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryMuzzle: SlotPrimary
		{
			idc=620;
			x="34 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryUnderBarrel: SlotPrimary
		{
			idc=641;
			x="35.5 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryFlashlight: SlotPrimary
		{
			idc=622;
			x="37 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryOptics: SlotPrimary
		{
			idc=621;
			x="38.5 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryMagazineGL: SlotPrimary
		{
			idc=644;
			x="40 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryMagazine: SlotPrimary
		{
			idc=623;
			x="41.5 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondary: SlotPrimary
		{
			idc=611;
			x="33 * (0.03) + (-0.25)";
			y="18.5 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="3.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondaryMuzzle: SlotPrimary
		{
			idc=624;
			x="35.5 * (0.03) + (-0.25)";
			y="22 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondaryUnderBarrel: SlotPrimary
		{
			idc=642;
			x="37 * (0.03) + (-0.25)";
			y="22 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondaryFlashlight: SlotPrimary
		{
			idc=626;
			x="38.5 * (0.03) + (-0.25)";
			y="22 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondaryOptics: SlotPrimary
		{
			idc=625;
			x="40 * (0.03) + (-0.25)";
			y="22 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondaryMagazine: SlotPrimary
		{
			idc=627;
			x="41.5 * (0.03) + (-0.25)";
			y="22 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgun: SlotPrimary
		{
			idc=612;
			x="33 * (0.03) + (-0.25)";
			y="24 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="3.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgunMuzzle: SlotPrimary
		{
			idc=628;
			x="35.5 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgunUnderBarrel: SlotPrimary
		{
			idc=643;
			x="37 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgunFlashlight: SlotPrimary
		{
			idc=630;
			x="38.5 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgunOptics: SlotPrimary
		{
			idc=629;
			x="40 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgunMagazine: SlotPrimary
		{
			idc=631;
			x="41.5 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHeadgear: SlotPrimary
		{
			idc=6240;
			x="33 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="2.5 * (0.03)";
			h="2.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotGoggles: SlotPrimary
		{
			idc=6216;
			x="35.5 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="2.5 * (0.03)";
			h="2.5 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0};
		};
		class SlotHMD: SlotPrimary
		{
			idc=6217;
			x="38 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="2.5 * (0.03)";
			h="2.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotBinoculars: SlotPrimary
		{
			idc=6238;
			x="40.5 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="2.5 * (0.03)";
			h="2.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotMap: SlotPrimary
		{
			idc=6211;
			x="35 * (0.03) + (-0.25)";
			y="10.5 * (0.04) + (-0.25)";
			w="2 * (0.03)";
			h="2 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotGPS: SlotPrimary
		{
			idc=6215;
			x="37 * (0.03) + (-0.25)";
			y="10.5 * (0.04) + (-0.25)";
			w="2 * (0.03)";
			h="2 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotCompass: SlotPrimary
		{
			idc=6212;
			x="39 * (0.03) + (-0.25)";
			y="10.5 * (0.04) + (-0.25)";
			w="2 * (0.03)";
			h="2 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotRadio: SlotPrimary
		{
			idc=6214;
			x="41 * (0.03) + (-0.25)";
			y="10.5 * (0.04) + (-0.25)";
			w="2 * (0.03)";
			h="2 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotWatch: SlotPrimary
		{
			idc=6213;
			x="33 * (0.03) + (-0.25)";
			y="10.5 * (0.04) + (-0.25)";
			w="2 * (0.03)";
			h="2 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class UniformSlot: SlotPrimary
		{
			idc=6331;
			x="20.5 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={1,1,1,0.1};
		};
		class UniformLoad: GroundLoad
		{
			idc=6304;
			x="20.5 * (0.03) + (-0.25)";
			y="12 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="0.5 * (0.04)";
			colorFrame[]={0,0,0,0};
		};
		class UniformContainer: GroundContainer
		{
			idc=633;
			onLBDblClick="_this call ExileClient_gui_inventory_event_onItemDoubleClick";
			x="20.5 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="14 * (0.04)";
			colorBackground[]={0,0,0,0};
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class VestSlot: SlotPrimary
		{
			idc=6381;
			x="24.5 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={1,1,1,0.1};
		};
		class VestLoad: GroundLoad
		{
			idc=6305;
			x="24.5 * (0.03) + (-0.25)";
			y="12 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="0.5 * (0.04)";
			colorFrame[]={0,0,0,0};
		};
		class VestContainer: UniformContainer
		{
			idc=638;
			onLBDblClick="_this call ExileClient_gui_inventory_event_onItemDoubleClick";
			x="20.5 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="14 * (0.04)";
			colorBackground[]={0,0,0,0};
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackpackSlot: SlotPrimary
		{
			idc=6191;
			x="28.5 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={1,1,1,0.1};
		};
		class BackpackLoad: GroundLoad
		{
			idc=6306;
			x="28.5 * (0.03) + (-0.25)";
			y="12 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="0.5 * (0.04)";
			colorFrame[]={0,0,0,0};
		};
		class BackpackContainer: UniformContainer
		{
			idc=619;
			onLBDblClick="_this call ExileClient_gui_inventory_event_onItemDoubleClick";
			x="20.5 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="14 * (0.04)";
			colorBackground[]={0,0,0,0};
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TotalLoad: GroundLoad
		{
			idc=6308;
			x="20.5 * (0.03) + (-0.25)";
			y="29.5 * (0.04) + (-0.25)";
			w="22.5 * (0.03)";
			h="0.5 * (0.04)";
			colorFrame[]={0,0,0,0};
		};
		class ContainerMarker: GroundTab
		{
			idc=6325;
			x="-5.5 * (0.03) + (-0.25)";
			y="32.5 * (0.04) + (-0.25)";
			w="1 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class GroundMarker: ContainerMarker
		{
			idc=6385;
			x="-3.5 * (0.03) + (-0.25)";
			y="32.5 * (0.04) + (-0.25)";
			w="1 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class SoldierMarker: ContainerMarker
		{
			idc=6405;
			x="-2 * (0.03) + (-0.25)";
			y="32.5 * (0.04) + (-0.25)";
			w="1 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class ExileSecondaryBackground: RscText
		{
			idc=1055;
			x="33 * (0.03) + (-0.25)";
			y="18.5 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="5 * (0.04)";
			colorBackground[]={1,1,1,0.050000001};
		};
		class ExileHandgunBackground: RscText
		{
			idc=1056;
			x="33 * (0.03) + (-0.25)";
			y="24 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="5 * (0.04)";
			colorBackground[]={1,1,1,0.050000001};
		};
		class ExilePrimaryBackground: RscText
		{
			idc=1057;
			x="33 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="5 * (0.04)";
			colorBackground[]={1,1,1,0.050000001};
		};
		class ExileItemsBackground: RscText
		{
			idc=1058;
			x="33 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="4.5 * (0.04)";
			colorBackground[]={1,1,1,0.050000001};
		};
		class ExileButtonTakeAll: RscButtonMenu
		{
			idc=20001;
			onMouseButtonDown="call ExileClient_gui_inventory_takeAll";
			text="TAKE ALL";
			x="6.5 * (0.03) + (-0.25)";
			y="31 * (0.04) + (-0.25)";
			w="8.5 * (0.03)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			style=2;
			class Attributes
			{
				align="center";
			};
		};
		class ExileButtonCombineMags: RscButtonMenu
		{
			idc=20002;
			onMouseButtonDown="call ExileClient_gui_inventory_combineMagazines";
			text="COMBINE MAGS";
			x="(6.5 + 8.5 + 0.5) * (0.03) + (-0.25)";
			y="31 * (0.04) + (-0.25)";
			w="8.5 * (0.03)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			style=2;
			class Attributes
			{
				align="center";
			};
		};
		class ExileButtonClose: RscButtonMenu
		{
			idc=-1;
			onMouseButtonDown="closeDialog 0";
			text="CLOSE";
			x="35 * (0.03) + (-0.25)";
			y="31 * (0.04) + (-0.25)";
			w="8.5 * (0.03)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			style=2;
			class Attributes
			{
				align="center";
			};
		};
		class ExileContainerPopTabsBackground: RscText
		{
			idc=-1;
			x="7 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="6.5 * (0.03)";
			h="1.5 * (0.04)";
			colorBackground[]={1,1,1,0.1};
		};
		class ExileContainerPopTabs: RscStructuredText
		{
			idc=25000;
			size="24 * pixelH";
			sizeEx="24 * pixelH";
			text="<t size='1' font='RobotoCondensed' align='right'>999999 / 999999 <img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x="7 * (0.03) + (-0.25)";
			y="(27.5 + 0.25) * (0.04) + (-0.25)";
			w="6.5 * (0.03)";
			h="(1.5 - 0.25) * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class ExilePlayerPopTabsBackground: RscText
		{
			idc=-1;
			x="26 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="6.5 * (0.03)";
			h="1.5 * (0.04)";
			colorBackground[]={1,1,1,0.1};
		};
		class ExilePlayerPopTabs: RscStructuredText
		{
			idc=25001;
			size="24 * pixelH";
			sizeEx="24 * pixelH";
			text="<t size='1' font='RobotoCondensed' align='right'>999999 <img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x="26 * (0.03) + (-0.25)";
			y="(27.5 + 0.25) * (0.04) + (-0.25)";
			w="6.5 * (0.03)";
			h="(1.5 - 0.25) * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class ExileTakePopTabsInput: RscEdit
		{
			idc=25002;
			text="";
			x="14 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="3.5 * (0.03)";
			h="1.5 * (0.04)";
			style=2;
			onKeyUp="_this call ExileClient_gui_inventory_event_onTakePopTabsInputKeyUp";
		};
		class ExileTakePopTabsButton: RscButton
		{
			idc=25003;
			text=">";
			x="17.5 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			onMouseButtonClick="_this call ExileClient_gui_inventory_event_onTakePopTabsButtonClick";
		};
		class ExilePutPopTabsButton: RscButton
		{
			idc=25004;
			text="<";
			x="20.5 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			onMouseButtonClick="_this call ExileClient_gui_inventory_event_onPutPopTabsButtonClick";
		};
		class ExilePutPopTabsInput: RscEdit
		{
			idc=25005;
			text="";
			x="22 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="3.5 * (0.03)";
			h="1.5 * (0.04)";
			style=2;
			onKeyUp="_this call ExileClient_gui_inventory_event_onPutPopTabsInputKeyUp";
		};
		class ContainerCaptionBackground: RscText
		{
			idc=1020;
			text="Container";
			x="6.5 * (0.03) + (-0.25)";
			y="6.4 * (0.04) + (-0.25)";
			w="13 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
	};
};
class RscDisplayMain
{
	class controlsBackground
	{
		delete TileGroup;
	};
};
class RscExileMapCreateMenu: RscControlsGroupNoScrollbars
{
	onLoad="uiNamespace setVariable ['RscExileMapCreateMenu', _this select 0]";
	onUnload="uiNamespace setVariable ['RscExileMapCreateMenu', controlNull]";
	x=0;
	y=0;
	w="21.5 * (0.025)";
	h="13.5 * (0.04)";
	class controls
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="1.1 * (0.04) + (0)";
			w="21.5 * (0.025)";
			h="9.9 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCaption: RscText
		{
			idc=-1;
			text="Add Family Marker";
			x="0 * (0.025) + (0)";
			y="0 * (0.04) + (0)";
			w="21.5 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc=-1;
			text="Name:";
			x="0.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1.5 * (0.04)";
		};
		class NameInput: RscEdit
		{
			idc=4000;
			x="6.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="14.5 * (0.025)";
			h="1.5 * (0.04)";
			autocomplete="";
			font="EtelkaMonospacePro";
			colorText[]={0.94999999,0.94999999,0.94999999,1};
			style=16;
			sizeEx="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ColorLabel: RscText
		{
			idc=-1;
			text="Color:";
			x="0.5 * (0.025) + (0)";
			y="3.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ColorDropDown: RscCombo
		{
			idc=4002;
			x="6.5 * (0.025) + (0)";
			y="3.5 * (0.04) + (0)";
			w="14.5 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call ExileClient_gui_clan_markerAddMenu_event_onColorLbSelectionChanged;";
		};
		class IconLabel: RscText
		{
			idc=-1;
			text="Icon:";
			x="0.5 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class IconDropDown: RscCombo
		{
			idc=4001;
			x="6.5 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="14.5 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call ExileClient_gui_clan_markerAddMenu_event_onIconLbSelectionChanged;";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			x="14 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="7 * (0.025)";
			h="1 * (0.04)";
			action="call ExileClient_gui_clan_markerAddMenu_event_onUnload;";
		};
		class AddButton: RscButtonMenuOK
		{
			idc=-1;
			text="ADD";
			x="6.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="7 * (0.025)";
			h="1 * (0.04)";
			action="call ExileClient_gui_clan_markerAddMenu_event_onAddButtonClick;";
		};
		class IconSizeLabel: RscText
		{
			idc=-1;
			text="Icon size:";
			x="0.5 * (0.025) + (0)";
			y="6.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class TextSizeLabel: RscText
		{
			idc=-1;
			text="Text size:";
			x="0.5 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class IconSizeSlider: RscXSliderH
		{
			idc=4004;
			x="6.5 * (0.025) + (0)";
			y="6.5 * (0.04) + (0)";
			w="14.5 * (0.025)";
			h="1 * (0.04)";
			sliderPosition=30;
			sliderRange[]={20,50};
			onSliderPosChanged="_this call ExileClient_gui_clan_markerAddMenu_event_onIconResize; false";
			color[]=
			{
				"63/255",
				"212/255",
				"252/255",
				1
			};
			colorActive[]=
			{
				"63/255",
				"212/255",
				"252/255",
				1
			};
		};
		class TextSizeSlider: RscXSliderH
		{
			idc=4005;
			x="6.5 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="14.5 * (0.025)";
			h="1 * (0.04)";
			sliderPosition=0.059999999;
			sliderRange[]={0.02,0.2};
			onSliderPosChanged="call ExileClient_gui_clan_markerAddMenu_event_onTextResize; false";
			color[]=
			{
				"63/255",
				"212/255",
				"252/255",
				1
			};
			colorActive[]=
			{
				"63/255",
				"212/255",
				"252/255",
				1
			};
		};
	};
};
class RscExileMapCreatePoly: RscControlsGroupNoScrollbars
{
	onLoad="uiNamespace setVariable ['RscExileMapCreatePoly', _this select 0]";
	onUnload="uiNamespace setVariable ['RscExileMapCreatePoly', controlNull]";
	x="0 * (0.025) + (0)";
	y="0 * (0.04) + (0)";
	w="15 * (0.025)";
	h="7.5 * (0.04)";
	class controls
	{
		class DialogCaption: RscText
		{
			idc=-1;
			text="Add Family Polygon";
			x="0 * (0.025) + (0)";
			y="0 * (0.04) + (0)";
			w="15 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class DialogBackground: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="1.2 * (0.04) + (0)";
			w="15 * (0.025)";
			h="6 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class ColorLabel: RscText
		{
			idc=-1;
			text="Color:";
			x="0 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="3.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ColorDropDown: RscCombo
		{
			idc=4000;
			x="3.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class LinkedLabel: RscText
		{
			idc=-1;
			text="Linked:";
			x="0 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="3.5 * (0.025)";
			h="1 * (0.04)";
		};
		class LinkedStatus: RscStructuredText
		{
			idc=4001;
			x="3.5 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class AddButton: RscButtonMenuOK
		{
			idc=4002;
			text="ADD";
			x="4 * (0.025) + (0)";
			y="6 * (0.04) + (0)";
			w="5 * (0.025)";
			h="1 * (0.04)";
			default=0;
			action="call ExileClient_gui_clan_polyAddMenu_event_onAddButtonClick;";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			x="9.5 * (0.025) + (0)";
			y="6 * (0.04) + (0)";
			w="5 * (0.025)";
			h="1 * (0.04)";
			action="call ExileClient_gui_clan_polyAddMenu_event_onUnload;";
		};
		class LinesStatus: RscProgress
		{
			idc=4003;
			x="3.5 * (0.025) + (0)";
			y="4.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBar[]={0,0.77999997,0.93000001,0.60000002};
		};
		class LinesLabel: RscText
		{
			idc=4004;
			text="Lines:";
			x="0 * (0.025) + (0)";
			y="4.5 * (0.04) + (0)";
			w="3.5 * (0.025)";
			h="1 * (0.04)";
		};
	};
};
class RscDisplayMainMap
{
	class controls
	{
		class ExileMarkerMenu: RscExileMapCreateMenu
		{
			show=0;
		};
		class ExilePolyMenu: RscExileMapCreatePoly
		{
			show=0;
		};
	};
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			onDraw="_this call ExileClient_gui_map_event_onDraw;	_this call ExileClient_gui_clan_renderLines; _this call ExileClient_gui_clan_renderIcons; _this call ExileClient_gui_clan_renderPolys; call ExileClient_gui_toaster_thread; ";
			onMouseButtonUp="_this call ExileClient_gui_map_event_onMouseButtonUp";
			onMouseButtonDown="_this call ExileClient_gui_map_event_onMouseButtonDown";
		};
	};
};
class RscDisplayMPInterrupt: RscStandardDisplay
{
	onLoad="[""onLoad"",_this,""RscDisplayMPInterrupt"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); [] spawn ExileClient_gui_escape_abort;";
};
class RscDisplayVoiceChat
{
	onLoad="uiNamespace setVariable ['ExileIsUsingVON', true];";
	onUnload="uiNamespace setVariable ['ExileIsUsingVON', false];";
	class controls
	{
		class Background: RscText
		{
			idc=-1;
			x=-1;
			y=-1;
			w=0;
			h=0;
		};
		class Picture: RscText
		{
			idc=101;
			x=-1;
			y=-1;
			w=0;
			h=0;
		};
		class ExilePicture: RscPicture
		{
			idc=-1;
			x="(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
			y="(safeZoneY + safeZoneH) - 185 * pixelH - 64 * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="\exile_assets\texture\hud\hud_icon_voice_ca.paa";
			colorText[]={1,1,1,1};
			shadow=0;
		};
	};
};
class RscExileBaguette: RscControlsGroupNoScrollbars
{
	idc=-1;
	x="safezoneX + safezoneW * 0.5 - ((60 + 5 + 400) * 0.5) * pixelW";
	y="safezoneY + 60 * pixelH";
	w="(60 + 5 + 400) * pixelW";
	h="60 * pixelH";
	class controls
	{
		class TextGroup: RscControlsGroupNoScrollbars
		{
			idc=5001;
			x="(60 + 5) * pixelW";
			y=0;
			w="400 * pixelW";
			h="60 * pixelH";
			fade=0;
			class controls
			{
				class TextBackground: RscText
				{
					idc=-1;
					x=0;
					y=0;
					w="400 * pixelW";
					h="60 * pixelH";
					colorBackground[]=
					{
						"19/255",
						"22/255",
						"27/255",
						0.80000001
					};
				};
				class Text: RscText
				{
					idc=5002;
					x="5 * pixelW";
					y=0;
					w="(400 - 5) * pixelW";
					h="60 * pixelH";
					colorText[]={1,1,1,1};
					font="PuristaSemibold";
					sizeEx="29 * pixelH";
					shadow=0;
				};
			};
		};
		class IconGroup: RscControlsGroupNoScrollbars
		{
			idc=5000;
			x=0;
			y=0;
			w="60 * pixelW";
			h="60 * pixelH";
			fade=0;
			class controls
			{
				class IconBackground: RscText
				{
					idc=-1;
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
					colorBackground[]=
					{
						"19/255",
						"22/255",
						"27/255",
						0.80000001
					};
				};
				class Icon: RscPictureKeepAspect
				{
					idc=-1;
					text="exile_assets\texture\mod\icon.paa";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
				};
			};
		};
	};
};
class RscExileCameraView
{
	idd=20023;
	onLoad="uiNamespace setVariable ['RscExileCameraView', _this select 0];	(_this call ExileClient_gui_baseCamera_event_onLoad) lbSetCurSel 0";
	onUnload="uiNamespace setVariable ['RscExileCameraView', displayNull];	_this call ExileClient_gui_baseCamera_event_onUnLoad";
	hideControls[]=
	{
		"HideMiddle",
		"HideRight",
		"HideLeft",
		"HideInfo"
	};
	class controlsBackground
	{
		class StyleHeader: RscText
		{
			x="-0.00416666 * safezoneW + safezoneX";
			y="-0.00599999 * safezoneH + safezoneY";
			w="1.00833 * safezoneW";
			h="0.1144 * safezoneH";
			colorBackground[]={0.101961,0.101961,0.101961,1};
		};
		class StyleHeaderLogo: RscPicture
		{
			x="-0.015625 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.200521 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.235294,0.27058801,0.29803899,1};
			text="\exile_assets\texture\ui\cameraView\masheen_logo.paa";
		};
		class StyleHeaderUserInfo: RscText
		{
			x="0.184896 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.120313 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class StyleHeaderMiddle: RscText
		{
			x="0.305208 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.389583 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.235294,0.27058801,0.29803899,1};
		};
		class StyleTimeDate: RscText
		{
			x="0.694792 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.120313 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class StyleWeather: RscText
		{
			x="0.815104 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.0630208 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.235294,0.27058801,0.29803899,1};
		};
		class StyleWifi: RscText
		{
			x="0.878125 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0293333 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class StyleNV: RscText
		{
			x="0.878125 * safezoneW + safezoneX";
			y="0.0754 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0293333 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class StyleHD: RscText
		{
			x="0.878125 * safezoneW + safezoneX";
			y="0.0446 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0315333 * safezoneH";
			colorBackground[]={0.203922,0.231373,0.25097999,1};
		};
		class StyleUserInfoPicture: RscPictureKeepAspect
		{
			x="0.196354 * safezoneW + safezoneX";
			y="0.038 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.044 * safezoneH";
			text="\exile_assets\texture\ui\cameraView\superUser.paa";
		};
		class StyleWlanPicture: RscPictureKeepAspect
		{
			x="0.880417 * safezoneW + safezoneX";
			y="0.0182 * safezoneH + safezoneY";
			w="0.0126041 * safezoneW";
			h="0.0242 * safezoneH";
			text="\exile_assets\texture\ui\cameraView\wlan.paa";
		};
		class StyleNVPicture: RscPictureKeepAspect
		{
			x="0.880417 * safezoneW + safezoneX";
			y="0.0798 * safezoneH + safezoneY";
			w="0.0126041 * safezoneW";
			h="0.022 * safezoneH";
			text="\exile_assets\texture\ui\cameraView\nv.paa";
		};
		class StyleHDDPicture: RscPictureKeepAspect
		{
			x="0.880416 * safezoneW + safezoneX";
			y="0.049 * safezoneH + safezoneY";
			w="0.0126041 * safezoneW";
			h="0.0242 * safezoneH";
			text="\exile_assets\texture\ui\cameraView\hdd.paa";
		};
		class StyleFooter: RscText
		{
			x="-0.00416666 * safezoneW + safezoneX";
			y="0.9444 * safezoneH + safezoneY";
			w="1.0049 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.101961,0.101961,0.101961,1};
		};
		class StyleFooterOver: RscText
		{
			x="-0.000729111 * safezoneW + safezoneX";
			y="0.951 * safezoneH + safezoneY";
			w="1.00034 * safezoneW";
			h="0.0528 * safezoneH";
			colorBackground[]={0.235294,0.27058801,0.29803899,1};
		};
		class StyleFooterInfo: RscPictureKeepAspect
		{
			x="0.00729166 * safezoneW + safezoneX";
			y="0.962 * safezoneH + safezoneY";
			w="0.435417 * safezoneW";
			h="0.033 * safezoneH";
			text="\exile_assets\texture\ui\cameraView\footer.paa";
		};
	};
	class controls
	{
		class HideMiddle: RscText
		{
			idc=4001;
			x="0.305208 * safezoneW + safezoneX";
			y="0.1084 * safezoneH + safezoneY";
			w="0.389583 * safezoneW";
			h="0.836 * safezoneH";
			colorBackground[]={0.235294,0.27058801,0.29803899,1};
		};
		class HideRight: RscText
		{
			idc=4002;
			x="0.694792 * safezoneW + safezoneX";
			y="0.1084 * safezoneH + safezoneY";
			w="0.309375 * safezoneW";
			h="0.836 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class HideLeft: RscText
		{
			idc=4003;
			x="-0.00416666 * safezoneW + safezoneX";
			y="0.1084 * safezoneH + safezoneY";
			w="0.309375 * safezoneW";
			h="0.836 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class HideInfo: RscStructuredText
		{
			idc=4004;
			x="0.3625 * safezoneW + safezoneX";
			y="0.456 * safezoneH + safezoneY";
			w="0.275 * safezoneW";
			h="0.11 * safezoneH";
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,0.80000001};
			onLoad="_this call ExileClient_gui_baseCamera_event_info_onLoadInfo";
		};
		class MainCaptureArea: RscListBox
		{
			idc=4009;
			access=0;
			colorBackground[]={0,0,0,0};
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="1 * safezoneH";
			onMouseMoving="_this call ExileClient_gui_baseCamera_event_main_onMouseMoving";
			onMouseButtonDown="_this call ExileClient_gui_baseCamera_event_main_onMouseButtonDown";
			onMouseButtonUp="_this call ExileClient_gui_baseCamera_event_main_onMouseButtonUp";
			onMouseZChanged="_this call ExileClient_gui_baseCamera_event_main_onMouseZChanged";
			onLoad="						['RscExileCameraView','MainCaptureArea']						call ExileClient_util_display_mouseControl_buildLimits;						ExileClientDisplayResetFocus = true						";
			onUnLoad="ExileBaseManagementLimits = []";
			class CaptureArea
			{
				x="0 * safezoneW + safezoneX";
				y="0.1084 * safezoneH + safezoneY";
				w="1 * safezoneW";
				h="0.836 * safezoneH";
			};
		};
		class StyleBigRedButton: RscButton
		{
			idc=4000;
			style=48;
			x="0.895313 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.105417 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.56078398,0,0.113725,1};
			text="\exile_assets\texture\ui\cameraView\button_off.paa";
			action="closeDialog 0;";
			onMouseMoving="[_this,'RscExileCameraView','StyleBigRedButton'] call ExileClient_gui_handle_animButton_onMouseMoving";
			onButtonDown="[_this,'RscExileCameraView','StyleBigRedButton'] call ExileClient_gui_handle_animButton_onButtonDown";
			onButtonUp="[_this,'RscExileCameraView','StyleBigRedButton'] call ExileClient_gui_handle_animButton_onButtonUp";
			onLoad="ExileGuiControlClick = false";
			class buttonPictures
			{
				none="\exile_assets\texture\ui\cameraView\button_off.paa";
				hover="\exile_assets\texture\ui\cameraView\button_hover.paa";
				click="\exile_assets\texture\ui\cameraView\button_click.paa";
			};
		};
		class ComboMiddleCameraSelect: RscCombo
		{
			idc=4005;
			style=2;
			x="0.328125 * safezoneW + safezoneX";
			y="0.049 * safezoneH + safezoneY";
			w="0.349479 * safezoneW";
			h="0.022 * safezoneH";
			onLBSelChanged="_this call ExileClient_gui_baseCamera_event_main_onCameraDropDownChanged";
			onMouseButtonClick="_this call ExileClient_gui_baseCamera_event_onLoad";
		};
		class StyleTime: RscStructuredText
		{
			idc=4006;
			x="0.70625 * safezoneW + safezoneX";
			y="0.038 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.044 * safezoneH";
			onLoad="_this call ExileClient_gui_baseCamera_event_info_onLoadTime";
		};
		class StyleDate: RscStructuredText
		{
			idc=4007;
			x="0.763542 * safezoneW + safezoneX";
			y="0.049 * safezoneH + safezoneY";
			w="0.0458333 * safezoneW";
			h="0.0242 * safezoneH";
			onLoad="_this call ExileClient_gui_baseCamera_event_info_onLoadDate";
		};
		class StyleUserInfoText: RscStructuredText
		{
			idc=4008;
			x="0.227291 * safezoneW + safezoneX";
			y="0.038 * safezoneH + safezoneY";
			w="0.0630208 * safezoneW";
			h="0.044 * safezoneH";
			onLoad="_this call ExileClient_gui_baseCamera_event_info_onLoadPlayerInfo";
		};
		class StyleWeatherPicture: RscPictureKeepAspect
		{
			x="0.820833 * safezoneW + safezoneX";
			y="0.027 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.066 * safezoneH";
			onLoad="_this call ExileClient_gui_baseCamera_event_info_onLoadWeather";
		};
	};
};
class RscExileCraftItemDialog
{
	idd=24005;
	onLoad="uiNamespace setVariable ['RscExileCraftItemDialog', _this select 0]";
	onUnload="uiNamespace setVariable ['RscExileCraftItemDialog', displayNull]";
	class controlsBackground
	{
		class BackgroundLeft: RscText
		{
			idc=100;
			x="0 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="12 * (0.025)";
			h="21 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class TopLeftCaption: RscText
		{
			idc=101;
			text="ITEM";
			x="0 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="12 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class BackgroundBottom: RscText
		{
			idc=102;
			x="0 * (0.025) + (0)";
			y="23 * (0.04) + (0)";
			w="40 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class BackgroundRight: RscText
		{
			idc=103;
			x="12.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="27.5 * (0.025)";
			h="21 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class TopRightCaption: RscText
		{
			idc=104;
			text="COMPONENTS";
			x="12.5 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="27.5 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class ButtonCloseCross: RscActiveText
		{
			idc=105;
			style=2096;
			color[]={1,1,1,0.69999999};
			action="closeDialog 0;";
			text="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x="39 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="1 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.69999999};
			colorActive[]={1,1,1,1};
			tooltip="Close";
		};
	};
	class controls
	{
		class ItemPicture: RscPictureKeepAspect
		{
			idc=5000;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="0.5 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="11 * (0.025)";
			h="9 * (0.04)";
		};
		class ButtonCraft: RscButton
		{
			idc=5001;
			text="CRAFT";
			x="0.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
			action="[uiNamespace getVariable 'RscExileCraftItemRecipeClassName', (lbCurSel 5002) + 1] call ExileClient_object_item_craft; closeDialog 0;";
		};
		class DropdownQuantity: RscCombo
		{
			idc=5002;
			x="6.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x="34 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Description: RscStructuredText
		{
			idc=5003;
			x="13 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="26.5 * (0.025)";
			h="20 * (0.04)";
		};
	};
};
class RscExileItemDetailsDialog
{
	idd=24004;
	onLoad="uiNamespace setVariable ['RscExileItemDetailsDialog', _this select 0]";
	onUnload="uiNamespace setVariable ['RscExileItemDetailsDialog', displayNull]";
	class controlsBackground
	{
		class BackgroundLeft: RscText
		{
			idc=1000;
			x="0 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="12 * (0.025)";
			h="21 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class BackgroundBottom: RscText
		{
			idc=1005;
			x="0 * (0.025) + (0)";
			y="23 * (0.04) + (0)";
			w="40 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class BackgroundRight: RscText
		{
			idc=1006;
			x="12.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="27.5 * (0.025)";
			h="21 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class TopLeftCaption: RscText
		{
			idc=1001;
			text="ITEM";
			x="0 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="12 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class TopRightCaption: RscText
		{
			idc=1002;
			text="";
			x="12.5 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="27.5 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class ButtonCloseCross: RscActiveText
		{
			idc=100;
			style=2096;
			color[]={1,1,1,0.69999999};
			action="closeDialog 0;";
			text="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x="39 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="1 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.69999999};
			colorActive[]={1,1,1,1};
			tooltip="Close";
		};
	};
	class controls
	{
		class ItemPicture: RscPictureKeepAspect
		{
			idc=5000;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="0.5 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="11 * (0.025)";
			h="9 * (0.04)";
		};
		class TabButtonDetails: RscButton
		{
			idc=1603;
			text="DETAILS";
			x="13 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
			action="'DETAILS' call ExileClient_gui_itemDetails_event_onTabButtonClicked;";
		};
		class TabButtonRecipes: RscButton
		{
			idc=1604;
			text="RECIPES";
			x="19 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
			action="'RECIPES' call ExileClient_gui_itemDetails_event_onTabButtonClicked;";
		};
		class ButtonConsume: RscButton
		{
			idc=1300;
			action="closeDialog 0; [ExileClientSelectedInventoryItem select 0] call ExileClient_object_item_consume;";
			text="CONSUME";
			x="0.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ButtonUse: RscButton
		{
			idc=1301;
			action="closeDialog 0; [ExileClientSelectedInventoryItem select 0] call ExileClient_object_item_use;";
			text="USE";
			x="12.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ButtonConstruct: RscButton
		{
			idc=1303;
			action="closeDialog 0; [ExileClientSelectedInventoryItem select 0] call ExileClient_object_item_construct;";
			text="CONSTRUCT";
			x="6.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x="34 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class TabDetails: RscControlsGroup
		{
			idc=5003;
			x="13 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="26.5 * (0.025)";
			h="20 * (0.04)";
			class controls
			{
				class TextItemName: RscStructuredText
				{
					idc=5001;
					text="Item Name";
					x=0;
					y=0;
					w="26.5 * (0.025)";
					h="1.5 * (0.04)";
				};
				class TextItemLevel: RscStructuredText
				{
					idc=5002;
					text="Item Level 1";
					x=0;
					y="1.5 * (0.04)";
					w="26.5 * (0.025)";
					h="1 * (0.04)";
				};
				class ItemDescription: RscStructuredText
				{
					idc=1100;
					x=0;
					y="3 * (0.04)";
					w="26.5 * (0.025)";
					h="17 * (0.04)";
				};
			};
		};
		class TabRecipes: RscControlsGroup
		{
			idc=5004;
			x="13 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="26.5 * (0.025)";
			h="20 * (0.04)";
			show="false";
			class controls
			{
				class CraftingListBox: RscListBox
				{
					idc=1400;
					x=0;
					y=0;
					w="26.5 * (0.025)";
					h="20 * (0.04)";
					sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx2="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					rowHeight="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					canDrag=0;
					colorText[]={1,1,1,1};
					colorBackground[]={0,0,0,0};
					itemBackground[]={1,1,1,0.1};
					itemSpacing=0.001;
					onLBDblClick="closeDialog 0; _this call ExileClient_gui_itemDetails_event_onCraftingRecipeDoubleClick";
				};
			};
		};
		class Stat01Background: RscText
		{
			idc=6000;
			x="0.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc=6001;
			x="0.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc=6002;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat01Value: RscStructuredText
		{
			idc=6003;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat02Background: RscText
		{
			idc=6004;
			x="0.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc=6005;
			x="0.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc=6006;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat02Value: RscStructuredText
		{
			idc=6007;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat03Background: RscText
		{
			idc=6008;
			x="0.5 * (0.025) + (0)";
			y="15 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc=6009;
			x="0.5 * (0.025) + (0)";
			y="15 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc=6010;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="15 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat03Value: RscStructuredText
		{
			idc=6011;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="15 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat04Background: RscText
		{
			idc=6012;
			x="0.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc=6013;
			x="0.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc=6014;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat04Value: RscStructuredText
		{
			idc=6015;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat05Background: RscText
		{
			idc=6016;
			x="0.5 * (0.025) + (0)";
			y="18 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat05Progress: RscProgress
		{
			idc=6017;
			x="0.5 * (0.025) + (0)";
			y="18 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat05Label: RscText
		{
			idc=6018;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="18 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat05Value: RscStructuredText
		{
			idc=6019;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="18 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat06Background: RscText
		{
			idc=6020;
			x="0.5 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat06Progress: RscProgress
		{
			idc=6021;
			x="0.5 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat06Label: RscText
		{
			idc=6022;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat06Value: RscStructuredText
		{
			idc=6023;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat07Background: RscText
		{
			idc=6024;
			x="0.5 * (0.025) + (0)";
			y="21 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat07Progress: RscProgress
		{
			idc=6025;
			x="0.5 * (0.025) + (0)";
			y="21 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat07Label: RscText
		{
			idc=6026;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="21 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat07Value: RscStructuredText
		{
			idc=6027;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="21 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
	};
};
class RscExileJoinRussianRouletteDialog
{
	idd=24030;
	onLoad="uiNamespace setVariable ['RscExileJoinRussianRouletteDialog', _this select 0]";
	onUnload="call ExileClient_gui_joinRussianRouletteDialog_event_onUnload; uiNamespace setVariable ['RscExileJoinRussianRouletteDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="8.5 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Russian Roulette";
			x="10 * (0.025) + (0)";
			y="7.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class BuyInLabel: RscText
		{
			idc=-1;
			text="Buy-In:";
			x="10.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class GameStatusLabel: RscText
		{
			idc=-1;
			text="Game Status:";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class BuyInValue: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>0<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x="10.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class GameStatusValue: RscStructuredText
		{
			idc=4001;
			text="<t size='1.4' color='#b2ec00'>Waiting for players</t>";
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="16 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class JoinButton: RscButtonMenuOK
		{
			idc=4002;
			onMouseButtonClick="_this call ExileClient_gui_joinRussianRouletteDialog_event_onJoinButtonClick";
			text="Join";
			x="10.5 * (0.025) + (0)";
			y="16 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
	};
};
class RscExileKeypad
{
	idd=24010;
	onLoad="uiNamespace setVariable ['RscExileKeypad', _this select 0]";
	onUnload="uiNamespace setVariable ['RscExileKeypad', displayNull]";
	onKeyUp="_this call ExileClient_gui_keypadDialog_event_onKeyUp";
	class controlsBackground
	{
		class bacground: RscPicture
		{
			text="\exile_assets\texture\ui\codeLock\code_background.paa";
			x="0.322396 * safezoneW + safezoneX";
			y="0.225 * safezoneH + safezoneY";
			w="0.355208 * safezoneW";
			h="0.55 * safezoneH";
		};
	};
	class controls
	{
		class buttonFake: RscButton
		{
			idc=4013;
			x="1 * safezoneW + safezoneX";
			y="1 * safezoneH + safezoneY";
			w="0 * safezoneW";
			h="0 * safezoneH";
		};
		class button0: RscButton
		{
			idc=4003;
			x="0.399167 * safezoneW + safezoneX";
			y="0.6694 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="0 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button1: RscButton
		{
			idc=4004;
			x="0.351042 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="1 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button2: RscButton
		{
			idc=4005;
			x="0.399167 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="2 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button3: RscButton
		{
			idc=4006;
			x="0.447291 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="3 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button4: RscButton
		{
			idc=4007;
			x="0.351042 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="4 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button5: RscButton
		{
			idc=4008;
			x="0.399167 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="5 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button6: RscButton
		{
			idc=4009;
			x="0.446145 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="6 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button7: RscButton
		{
			idc=4010;
			x="0.351042 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="7 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button8: RscButton
		{
			idc=4011;
			x="0.399167 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="8 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button9: RscButton
		{
			idc=4012;
			x="0.446145 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="9 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonOK: RscButton
		{
			idc=4000;
			x="0.351042 * safezoneW + safezoneX";
			y="0.6694 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			colorDisabled[]={1,1,1,0.40000001};
			onMouseButtonClick="_this call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonCancel: RscButton
		{
			idc=4002;
			x="0.446145 * safezoneW + safezoneX";
			y="0.6694 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="_this call ExileClient_gui_keypadDialog_event_onAbortButtonClick";
		};
		class editBox: RscText
		{
			idc=4001;
			text="";
			colorText[]={0.070588201,0.133333,0.094117597,0.80000001};
			font="PressStart2P";
			style=2;
			x="0 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="40 * (0.025)";
			h="6 * (0.04)";
			sizeEx="2 * (0.04)";
			shadow=0;
		};
	};
};
class RscExileKeypadCar
{
	idd=24010;
	onLoad="uiNamespace setVariable ['RscExileKeypad', _this select 0]";
	onUnload="uiNamespace setVariable ['RscExileKeypad', displayNull]";
	onKeyUp="_this call ExileClient_gui_keypadDialog_event_onKeyUp";
	class controlsBackground
	{
		class bacground: RscPicture
		{
			text="\exile_assets\texture\ui\codeLock\code_background_car.paa";
			x="0.385417 * safezoneW + safezoneX";
			y="0.225 * safezoneH + safezoneY";
			w="0.217708 * safezoneW";
			h="0.616 * safezoneH";
		};
	};
	class controls
	{
		class buttonFake: RscButton
		{
			idc=4013;
			x="1 * safezoneW + safezoneX";
			y="1 * safezoneH + safezoneY";
			w="0 * safezoneW";
			h="0 * safezoneH";
		};
		class button0: RscButton
		{
			idc=4003;
			x="0.474792 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0389584 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="0 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button1: RscButton
		{
			idc=4004;
			x="0.422083 * safezoneW + safezoneX";
			y="0.3812 * safezoneH + safezoneY";
			w="0.0401043 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="1 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button2: RscButton
		{
			idc=4005;
			x="0.474791 * safezoneW + safezoneX";
			y="0.379 * safezoneH + safezoneY";
			w="0.0389584 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="2 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button3: RscButton
		{
			idc=4006;
			x="0.526354 * safezoneW + safezoneX";
			y="0.379 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="3 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button4: RscButton
		{
			idc=4007;
			x="0.423229 * safezoneW + safezoneX";
			y="0.456 * safezoneH + safezoneY";
			w="0.0389584 * safezoneW";
			h="0.0528 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="4 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button5: RscButton
		{
			idc=4008;
			x="0.474791 * safezoneW + safezoneX";
			y="0.4538 * safezoneH + safezoneY";
			w="0.0389584 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="5 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button6: RscButton
		{
			idc=4009;
			x="0.526355 * safezoneW + safezoneX";
			y="0.4516 * safezoneH + safezoneY";
			w="0.0389584 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="6 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button7: RscButton
		{
			idc=4010;
			x="0.42323 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0389584 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="7 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button8: RscButton
		{
			idc=4011;
			x="0.474792 * safezoneW + safezoneX";
			y="0.522 * safezoneH + safezoneY";
			w="0.0389584 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="8 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button9: RscButton
		{
			idc=4012;
			x="0.526354 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0389584 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="9 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonOK: RscButton
		{
			idc=4000;
			x="0.42323 * safezoneW + safezoneX";
			y="0.5946 * safezoneH + safezoneY";
			w="0.0389584 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			colorDisabled[]={1,1,1,0.40000001};
			onMouseButtonClick="_this call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonCancel: RscButton
		{
			idc=4002;
			x="0.526355 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0389584 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
			onMouseButtonClick="_this call ExileClient_gui_keypadDialog_event_onAbortButtonClick";
		};
		class editBox: RscText
		{
			idc=4001;
			text="";
			colorText[]={0,0,0,0.80000001};
			font="PressStart2P";
			style=2;
			x="0.316667 * safezoneW + safezoneX";
			y="0.2646 * safezoneH + safezoneY";
			w="0.352917 * safezoneW";
			h="0.0726 * safezoneH";
			sizeEx="1.2 * (0.04)";
			shadow=0;
		};
	};
};
class RscExileKeypadScanDialog
{
	idd=24025;
	onLoad="uiNamespace setVariable ['RscExileKeypadScanDialog', _this select 0]";
	onUnload="call ExileClient_gui_keypadScanDialog_event_onUnload; uiNamespace setVariable ['RscExileKeypadScanDialog', displayNull]";
	class controlsBackground
	{
	};
	class controls
	{
		class backgroundCold: RscPicture
		{
			idc=4000;
			text="\exile_assets\texture\ui\codeLock\background_cold_co.paa";
			x="0.322396 * safezoneW + safezoneX";
			y="0.225 * safezoneH + safezoneY";
			w="0.355208 * safezoneW";
			h="0.55 * safezoneH";
		};
		class backgroundHot: RscPicture
		{
			idc=4001;
			text="\exile_assets\texture\ui\codeLock\background_hot_co.paa";
			x="0.322396 * safezoneW + safezoneX";
			y="0.225 * safezoneH + safezoneY";
			w="0.355208 * safezoneW";
			h="0.55 * safezoneH";
		};
		class finger0: RscPictureKeepAspect
		{
			idc=4011;
			text="\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x="0.399167 * safezoneW + safezoneX";
			y="0.6694 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger1: RscPictureKeepAspect
		{
			idc=4002;
			text="\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x="0.351042 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger2: RscPictureKeepAspect
		{
			idc=4003;
			text="\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x="0.399167 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger3: RscPictureKeepAspect
		{
			idc=4004;
			text="\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x="0.447291 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger4: RscPictureKeepAspect
		{
			idc=4005;
			text="\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x="0.351042 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger5: RscPictureKeepAspect
		{
			idc=4006;
			text="\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x="0.399167 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger6: RscPictureKeepAspect
		{
			idc=4007;
			text="\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x="0.446145 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger7: RscPictureKeepAspect
		{
			idc=4008;
			text="\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x="0.351042 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger8: RscPictureKeepAspect
		{
			idc=4009;
			text="\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x="0.399167 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger9: RscPictureKeepAspect
		{
			idc=4010;
			text="\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x="0.446145 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
	};
};
class RscExileLockerDialog
{
	idd=24029;
	onLoad="uiNamespace setVariable ['RscExileLockerDialog', _this select 0]";
	onUnload="call ExileClient_gui_lockerDialog_event_onUnload; uiNamespace setVariable ['RscExileLockerDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=1000;
			x="5.5 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="30 * (0.025)";
			h="10 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=1001;
			text="Locker";
			x="5.5 * (0.025) + (0)";
			y="7 * (0.04) + (0)";
			w="30 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class BalanceLabel: RscText
		{
			idc=1002;
			text="Balance:";
			x="6.5 * (0.025) + (0)";
			y="8.5 * (0.04) + (0)";
			w="14 * (0.025)";
			h="1 * (0.04)";
		};
		class WithdrawLabel: RscText
		{
			idc=1003;
			text="Amount to withdraw:";
			x="6.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="10 * (0.025)";
			h="1 * (0.04)";
		};
		class DepositLabel: RscText
		{
			idc=1004;
			text="Amount to deposit:";
			x="24.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="10 * (0.025)";
			h="1 * (0.04)";
		};
		class InventoryLabel: RscText
		{
			idc=1005;
			text="Inventory:";
			x="24.5 * (0.025) + (0)";
			y="8.5 * (0.04) + (0)";
			w="10 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class Balance: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>0</t>";
			x="6.5 * (0.025) + (0)";
			y="10 * (0.04) + (0)";
			w="14 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class Inventory: RscStructuredText
		{
			idc=4001;
			text="<t size='1.4'>0</t>";
			x="24.5 * (0.025) + (0)";
			y="10 * (0.04) + (0)";
			w="10 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc=4002;
			action="closeDialog 0";
			x="28 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class ButtonDeposit: RscButton
		{
			idc=4003;
			text="<";
			x="22 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="2 * (0.025)";
			h="2 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			sizeEx="1.5 * (0.04)";
			onMouseButtonClick="_this call  ExileClient_gui_lockerDialog_event_onDepositButtonClick";
		};
		class ButtonWithdraw: RscButton
		{
			idc=4004;
			text=">";
			x="17 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="2 * (0.025)";
			h="2 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			sizeEx="1.5 * (0.04)";
			onMouseButtonClick="_this call  ExileClient_gui_lockerDialog_event_onWithdrawButtonClick";
		};
		class WithdrawInput: RscEdit
		{
			idc=4005;
			text="";
			x="6.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="10 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class DepositInput: RscEdit
		{
			idc=4006;
			text="";
			x="24.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="10 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
	};
};
class RscExileMapContextMenu: ctrlMenu
{
	colorBackground[]={0.1,0.1,0.1,1};
	class Items
	{
		items[]=
		{
			"CMInsert",
			"CMRemove"
		};
		class CMRemove
		{
			action="_this call ExileClient_gui_clan_context_event_onRemoveButtonClick;";
			text="Remove";
			picture="\a3\3den\Data\Cfg3DEN\History\deleteItems_ca.paa";
		};
		class CMInsert
		{
			items[]=
			{
				"CMInsertMarker",
				"CMInsertPoly"
			};
			text="Add";
			picture="\a3\3den\Data\Cfg3DEN\History\create_ca.paa";
		};
		class CMInsertMarker
		{
			action="_this call ExileClient_gui_clan_context_event_onMarkerAddButtonClick;";
			text="Marker";
			picture="\a3\3den\Data\Cfg3DEN\History\create_ca.paa";
		};
		class CMInsertPoly
		{
			action="_this call ExileClient_gui_clan_context_event_onPolyAddButtonClick;";
			text="Polygon";
			picture="\a3\3den\Data\Cfg3DEN\History\create_ca.paa";
		};
		class Default
		{
			enable=0;
			text="Empty";
			data="Empty";
		};
	};
};
class RscExilePayFlagRansomDialog
{
	idd=24028;
	onLoad="uiNamespace setVariable ['RscExilePayFlagRansomDialog', _this select 0]";
	onUnload="call ExileClient_gui_payFlagRansomDialog_event_onUnload; uiNamespace setVariable ['RscExilePayFlagRansomDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="8 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Pay Territory Flag Ransom";
			x="10 * (0.025) + (0)";
			y="7.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class TerritoryLabel: RscText
		{
			idc=-1;
			text="Choose the territory to pay for:";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class CurrencyLabel: RscText
		{
			idc=-1;
			text="Cost:";
			x="10.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class TerritoryDropDown: RscCombo
		{
			idc=4000;
			onLBSelChanged="_this call ExileClient_gui_payFlagRansomDialog_event_onTerritoryDropDownSelectionChanged";
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class PayButton: RscButtonMenuOK
		{
			idc=4001;
			onMouseButtonClick="_this call ExileClient_gui_payFlagRansomDialog_event_onButtonClick";
			text="Pay Now";
			x="10.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Cost: RscStructuredText
		{
			idc=4002;
			text="<t size='1.4'></t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
		};
	};
};
class RscExilePayTerritoryProtectionMoneyDialog
{
	idd=20021;
	onLoad="uiNamespace setVariable ['RscExilePayTerritoryProtectionMoneyDialog', _this select 0]";
	onUnload="call ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onUnload; uiNamespace setVariable ['RscExilePayTerritoryProtectionMoneyDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="8 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Pay Territory Protection Money";
			x="10 * (0.025) + (0)";
			y="7.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class TerritoryLabel: RscText
		{
			idc=-1;
			text="Choose the territory to pay for:";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class CurrencyLabel: RscText
		{
			idc=-1;
			text="Cost:";
			x="10.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class TerritoryDropDown: RscCombo
		{
			idc=4001;
			onLBSelChanged="_this call ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onTerritoryDropDownSelectionChanged";
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class PayButton: RscButtonMenuOK
		{
			idc=4002;
			onMouseButtonClick="_this call ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onPayButtonClick";
			text="Pay Now";
			x="10.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Cost: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>0</t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
		};
	};
};
class RscExilePurchaseTerritoryDialog
{
	idd=20017;
	onLoad="uiNamespace setVariable ['RscExilePurchaseTerritoryDialog', _this select 0]";
	onUnload="call ExileClient_gui_purchaseTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExilePurchaseTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="20 * (0.025)";
			h="10 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Purchase Territory";
			x="10 * (0.025) + (0)";
			y="6.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class PriceLabel: RscText
		{
			idc=-1;
			text="Price:";
			x="10.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class RadiusLabel: RscText
		{
			idc=-1;
			text="Radius:";
			x="10.5 * (0.025) + (0)";
			y="8.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class RegistrationFeeValue: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>50,000<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class PurchaseButton: RscButtonMenuOK
		{
			idc=4001;
			onMouseButtonClick="_this call ExileClient_gui_purchaseTerritoryDialog_event_onPurchaseButtonClick";
			text="Purchase";
			x="10.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Radius: RscStructuredText
		{
			idc=4002;
			text="<t size='1.4'>15m</t>";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
	};
};
class RscExileRegisterClan
{
	idd=24012;
	onLoad="uiNamespace setVariable ['RscExileRegisterClan', _this select 0]";
	onUnload="call ExileClient_gui_registerClanDialog_event_onUnload; uiNamespace setVariable ['RscExileRegisterClan', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=1000;
			x="10 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="20 * (0.025)";
			h="10 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=1001;
			text="Register Family";
			x="10 * (0.025) + (0)";
			y="6.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc=1002;
			text="Choose a name:";
			x="10.5 * (0.025) + (0)";
			y="8.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class PriceLabel: RscText
		{
			idc=1003;
			text="Registration Fee:";
			x="10.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class RegistrationFeeValue: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>50,000<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc=4001;
			x="23.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			action="closeDialog 0";
		};
		class ButtonRegister: RscButtonMenuOK
		{
			idc=4002;
			text="Register";
			x="10.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			onMouseButtonClick="_this call ExileClient_gui_registerClanDialog_event_onRegisterButtonClick";
		};
		class NameInput: RscEdit
		{
			idc=4003;
			text="WWWWWWWWWWWWWWWWWWWW";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
	};
};
class RscExileRekeyVehicleDialog
{
	idd=24027;
	onLoad="uiNamespace setVariable ['RscExileRekeyVehicleDialog', _this select 0]";
	onUnload="call ExileClient_gui_vehicleRekeyDialog_event_onUnload; uiNamespace setVariable ['RscExileRekeyVehicleDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="20 * (0.025)";
			h="13 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Change Pin Code";
			x="10 * (0.025) + (0)";
			y="4 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class ResetCodeCostLabel: RscText
		{
			idc=-1;
			text="Cost to change if pin is unknown:";
			x="10.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class VehicleLabel: RscText
		{
			idc=-1;
			text="Select vehicle to change pin:";
			x="10 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
		};
		class ResetCodeFreeLabel: RscText
		{
			idc=-1;
			text="If pin is known you can change it for free.";
			x="10.5 * (0.025) + (0)";
			y="8.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class VehicleDropDown: RscCombo
		{
			idc=4002;
			x="10.5 * (0.025) + (0)";
			y="6.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call ExileClient_gui_vehicleRekeyDialog_event_onDropDownSelectionChanged";
		};
		class Cost: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>0<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x="10.5 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="16 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
		};
		class PurchaseButton: RscButtonMenuOK
		{
			idc=4001;
			onMouseButtonClick="_this call ExileClient_gui_vehicleRekeyDialog_event_onPurchaseButtonClick";
			text="Reset";
			x="10.5 * (0.025) + (0)";
			y="16 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
		};
		class ResetButton: RscButtonMenuOK
		{
			idc=4003;
			onMouseButtonClick="_this call ExileClient_gui_vehicleRekeyDialog_event_onResetButtonClick";
			text="Reset Free";
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
		};
	};
};
class RscExileSandbox
{
	idd=20019;
	onLoad="uiNamespace setVariable ['RscExileSandbox', _this select 0];";
	onUnload="uiNamespace setVariable ['RscExileSandbox', displayNull]";
	duration=-1;
};
class RscExileSetupTerritoryDialog
{
	idd=20016;
	onLoad="uiNamespace setVariable ['RscExileSetupTerritoryDialog', _this select 0]";
	onUnload="call ExileClient_gui_setupTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExileSetupTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="20 * (0.025)";
			h="16 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Setup Territory";
			x="10 * (0.025) + (0)";
			y="3.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc=-1;
			text="Name:";
			x="10.5 * (0.025) + (0)";
			y="5.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class FlagLabel: RscText
		{
			idc=-1;
			text="Flag Texture:";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class PlaceButton: RscButtonMenuOK
		{
			idc=4002;
			onMouseButtonClick="_this call ExileClient_gui_setupTerritoryDialog_event_onPlaceButtonClick";
			text="Setup";
			x="10.5 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class NameInput: RscEdit
		{
			idc=4000;
			text="";
			x="10.5 * (0.025) + (0)";
			y="6.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class FlagListBox: RscListBox
		{
			idc=4001;
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="8 * (0.04)";
		};
	};
};
class RscExileToast: RscControlsGroupNoScrollbars
{
	idc=-1;
	x=0;
	y=0;
	w="240 * pixelW";
	h="60 * pixelH";
	fade=1;
	class controls
	{
		class Background: RscText
		{
			idc=100;
			x=0;
			y=0;
			w="240 * pixelW";
			h="60 * pixelH";
			colorBackground[]=
			{
				"19/255",
				"22/255",
				"27/255",
				0.80000001
			};
		};
		class Stripe: RscText
		{
			idc=101;
			x=0;
			y=0;
			w="5 * pixelW";
			h="60 * pixelH";
			colorBackground[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class Text: RscStructuredText
		{
			idc=102;
			text="<t size='22' font='PuristaMedium'>Building disallowed!</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>Concrete mixer is nearby.</t>";
			x="10 * pixelW";
			y=0;
			w="(240 - 10) * pixelW";
			h="60 * pixelH";
			size="1 * pixelH";
			shadow=0;
			colorBackground[]={0,0,0,0};
			class Attributes
			{
				shadow=0;
			};
		};
	};
};
class RscExileTraderDialog
{
	idd=24007;
	onLoad="uiNamespace setVariable ['RscExileTraderDialog', _this select 0]";
	onUnload="call ExileClient_gui_traderDialog_event_onUnload; uiNamespace setVariable ['RscExileTraderDialog', displayNull]";
	class controlsBackground
	{
		class DialogCaptionLeft: RscText
		{
			idc=4000;
			text="Eichi";
			x="-4 * (0.025) + (0)";
			y="-0.1 * (0.04) + (0)";
			w="17.5 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class DialogBackgroundLeft: RscText
		{
			idc=2000;
			x="-4 * (0.025) + (0)";
			y="1 * (0.04) + (0)";
			w="17.5 * (0.025)";
			h="24 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogBackgroundMiddle: RscText
		{
			idc=2001;
			x="14 * (0.025) + (0)";
			y="1 * (0.04) + (0)";
			w="17.5 * (0.025)";
			h="24 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCaptionMiddle: RscText
		{
			idc=4001;
			text="STORE";
			x="14 * (0.025) + (0)";
			y="-0.1 * (0.04) + (0)";
			w="17.5 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class DialogBackgroundRight: RscText
		{
			idc=2002;
			x="32 * (0.025) + (0)";
			y="1 * (0.04) + (0)";
			w="12 * (0.025)";
			h="24 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCaptionRight: RscText
		{
			idc=2003;
			text="STATS";
			x="32 * (0.025) + (0)";
			y="-0.1 * (0.04) + (0)";
			w="12 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
	};
	class controls
	{
		class TextPlayerMoney: RscStructuredText
		{
			idc=4002;
			text="0";
			x="5.5 * (0.025) + (0)";
			y="-0.1 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
		};
		class CloseCross: RscActiveText
		{
			idc=1032;
			x="42.8 * (0.025) + (0)";
			y="0.2 * (0.04) + (0)";
			w="1 * (0.025)";
			h="0.5 * (0.04)";
			action="closeDialog 0;";
			style=2096;
			color[]={1,1,1,0.69999999};
			colorText[]={1,1,1,0.69999999};
			colorActive[]={1,1,1,1};
			tooltip="Close";
			text="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
		class ItemPicture: RscPictureKeepAspect
		{
			idc=4003;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="32.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="9 * (0.04)";
		};
		class InventoryDropDown: RscCombo
		{
			idc=4004;
			x="-3.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="16.5 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call ExileClient_gui_traderDialog_event_onPlayerInventoryDropDownSelectionChanged";
		};
		class InventoryListBox: RscExileItemListBox
		{
			idc=4005;
			x="-3.5 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="16.5 * (0.025)";
			h="20 * (0.04)";
			colorBackground[]={1,1,1,0.1};
			onLBSelChanged="_this call ExileClient_gui_traderDialog_event_onPlayerInventoryListBoxSelectionChanged";
		};
		class CancelButton: RscButtonMenu
		{
			idc=4006;
			x="32.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			action="closeDialog 0;";
			text="Cancel";
		};
		class SellButton: RscButtonMenu
		{
			idc=4007;
			text="Sell";
			x="-3.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			onMouseButtonClick="_this call ExileClient_gui_traderDialog_event_onSellButtonClick";
		};
		class StoreDropDown: RscCombo
		{
			idc=4008;
			x="14.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="16.5 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged";
		};
		class StoreListBox: RscExileItemListBox
		{
			idc=4009;
			x="14.5 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="16.5 * (0.025)";
			h="20 * (0.04)";
			colorBackground[]={1,1,1,0.1};
			onLBSelChanged="_this call ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged";
			onLBDblClick="_this call ExileClient_gui_traderDialog_event_onStoreListBoxItemDoubleClick";
		};
		class PurchaseButton: RscButtonMenu
		{
			idc=4010;
			text="Purchase";
			x="14.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			onMouseButtonClick="_this call ExileClient_gui_traderDialog_event_onPurchaseButtonClick";
		};
		class QuantityDropDown: RscCombo
		{
			idc=4011;
			x="23 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
			show="false";
		};
		class PlayerLoadBackground: RscText
		{
			idc=4043;
			x="5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class PlayerLoadProgress: RscProgress
		{
			idc=4012;
			x="5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class PlayerLoadLabel: RscText
		{
			idc=4013;
			text="LOAD";
			x="5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
		};
		class PlayerLoadValue: RscStructuredText
		{
			idc=4014;
			text="100%";
			x="5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
		};
		class PrimaryWeaponFilter: RscCheckBox
		{
			idc=4044;
			x="28.2 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="1.2 * (0.025)";
			h="1 * (0.04)";
			tooltip="Show only items that are compatible with your primary weapon.";
			color[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.25};
			colorFocused[]={1,1,1,1};
			colorHover[]={0,0,0,1};
			colorPressed[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			colorBackgroundDisabled[]={0,0,0,0.80000001};
			colorBackgroundFocused[]={0,0,0,0.80000001};
			colorBackgroundHover[]={1,1,1,1};
			colorBackgroundPressed[]={0,0,0,0.80000001};
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
				0.090000004,
				1
			};
			textureChecked="exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureDisabledChecked="exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureFocusedChecked="exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureHoverChecked="exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			texturePressedChecked="exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureDisabledUnchecked="exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureHoverUnchecked="exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureFocusedUnchecked="exile_assets\texture\arsenal\primaryweapon_ca.paa";
			texturePressedUnchecked="exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureUnchecked="exile_assets\texture\arsenal\primaryweapon_ca.paa";
			onCheckedChanged="_this call ExileClient_gui_traderDialog_event_onFilterCheckboxStateChanged";
			show="false";
		};
		class HandgunWeaponFilter: PrimaryWeaponFilter
		{
			idc=4045;
			x="29.8 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="1.2 * (0.025)";
			h="1 * (0.04)";
			tooltip="Show only items that are compatible with your handgun.";
			textureChecked="exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureDisabledChecked="exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureFocusedChecked="exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureHoverChecked="exile_assets\texture\arsenal\handgun_green_ca.paa";
			texturePressedChecked="exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureDisabledUnchecked="exile_assets\texture\arsenal\handgun_ca.paa";
			textureHoverUnchecked="exile_assets\texture\arsenal\handgun_ca.paa";
			textureFocusedUnchecked="exile_assets\texture\arsenal\handgun_ca.paa";
			texturePressedUnchecked="exile_assets\texture\arsenal\handgun_ca.paa";
			textureUnchecked="exile_assets\texture\arsenal\handgun_ca.paa";
		};
		class Stat01Background: RscText
		{
			idc=4015;
			x="32.5 * (0.025) + (0)";
			y="11 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc=4016;
			x="32.5 * (0.025) + (0)";
			y="11 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc=4017;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="11 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat01Value: RscStructuredText
		{
			idc=4018;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="11 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat02Background: RscText
		{
			idc=4019;
			x="32.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc=4020;
			x="32.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc=4021;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat02Value: RscStructuredText
		{
			idc=4022;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat03Background: RscText
		{
			idc=4023;
			x="32.5 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc=4024;
			x="32.5 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc=4025;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat03Value: RscStructuredText
		{
			idc=4026;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat04Background: RscText
		{
			idc=4027;
			x="32.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc=4028;
			x="32.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc=4029;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat04Value: RscStructuredText
		{
			idc=4030;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat05Background: RscText
		{
			idc=4031;
			x="32.5 * (0.025) + (0)";
			y="17 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat05Progress: RscProgress
		{
			idc=4032;
			x="32.5 * (0.025) + (0)";
			y="17 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat05Label: RscText
		{
			idc=4033;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="17 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat05Value: RscStructuredText
		{
			idc=4034;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="17 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat06Background: RscText
		{
			idc=4035;
			x="32.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat06Progress: RscProgress
		{
			idc=4036;
			x="32.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat06Label: RscText
		{
			idc=4037;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat06Value: RscStructuredText
		{
			idc=4038;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat07Background: RscText
		{
			idc=4039;
			x="32.5 * (0.025) + (0)";
			y="20 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat07Progress: RscProgress
		{
			idc=4040;
			x="32.5 * (0.025) + (0)";
			y="20 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat07Label: RscText
		{
			idc=4041;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="20 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat07Value: RscStructuredText
		{
			idc=4042;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="20 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
	};
};
class RscExileTwinkleTwisterButton: RscButtonMenu
{
	colorBackground[]={0,0,0,0.1};
	font="PressStart2P";
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
		0.090000004,
		1
	};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
		0.090000004,
		1
	};
	style=2;
	class Attributes
	{
		align="center";
		color="#FFFFFF";
		font="PressStart2P";
		shadow="false";
	};
};
class RscExileTwinkleTwister
{
	idd=20024;
	onLoad="uiNamespace setVariable ['RscExileTwinkleTwister', _this select 0]";
	onUnload="call ExileClient_gui_twinkleTwister_event_onUnload; uiNamespace setVariable ['RscExileTwinkleTwister', displayNull]";
	class controlsBackground
	{
		class Background: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="0 * (0.04) + (0)";
			w="40 * (0.025)";
			h="25 * (0.04)";
			colorBackground[]={0.301961,0.66666698,0.99215698,1};
		};
		class RscText_1002: RscText
		{
			idc=-1;
			x="1.5 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="8 * (0.025)";
			h="3 * (0.04)";
			colorBackground[]={0.71372598,0.85097998,0.99607801,1};
		};
		class RscText_1004: RscText
		{
			idc=-1;
			x="33.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="3 * (0.025)";
			h="3 * (0.04)";
			colorBackground[]={0.71372598,0.85097998,0.99607801,1};
		};
		class RscText_1007: RscText
		{
			idc=-1;
			x="2.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="4.5 * (0.025)";
			h="5 * (0.04)";
			colorBackground[]={0.71372598,0.85097998,0.99607801,1};
		};
		class RscText_1009: RscText
		{
			idc=-1;
			x="32 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="6.5 * (0.025)";
			h="2.5 * (0.04)";
			colorBackground[]={0.71372598,0.85097998,0.99607801,1};
		};
		class RscText_1010: RscText
		{
			idc=-1;
			x="33 * (0.025) + (0)";
			y="2.5 * (0.04) + (0)";
			w="4.5 * (0.025)";
			h="3.5 * (0.04)";
			colorBackground[]={0.71372598,0.85097998,0.99607801,1};
		};
		class RscText_1001: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="20.5 * (0.04) + (0)";
			w="40 * (0.025)";
			h="4.5 * (0.04)";
			colorBackground[]={0,0.66666698,0.062745102,1};
		};
		class RscText_1003: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="19 * (0.04) + (0)";
			w="40 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0.50588202,0.82352901,0.12548999,1};
		};
		class RscText_1005: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="22 * (0.04) + (0)";
			w="40 * (0.025)";
			h="3 * (0.04)";
			colorBackground[]={0.82352901,0.55686301,0.098039202,1};
		};
	};
	class controls
	{
		class Caption: RscStructuredText
		{
			idc=4001;
			text="<t font='PressStart2P' size='2' align='center' shadow='0'>TWINKLE<br/>TWISTER<br/>2000</t>";
			x="0 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="40 * (0.025)";
			h="6.5 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class StartButton: RscExileTwinkleTwisterButton
		{
			idc=4002;
			text="Start Game";
			x="8 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="24 * (0.025)";
			h="3 * (0.04)";
			onMouseButtonClick="_this spawn ExileClient_gui_twinkleTwister_event_onStartButtonClick";
			soundClick[]=
			{
				"\exile_assets\sound\twinkle_twister_button_01",
				0.5,
				1
			};
		};
		class QuitButton: RscExileTwinkleTwisterButton
		{
			idc=4003;
			text="Quit";
			x="8 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="24 * (0.025)";
			h="3 * (0.04)";
			onMouseButtonClick="_this call ExileClient_gui_twinkleTwister_event_onQuitButtonClick";
			soundClick[]=
			{
				"\exile_assets\sound\twinkle_twister_button_02",
				0.5,
				1
			};
		};
		class InfoText: RscStructuredText
		{
			idc=4004;
			text="<t font='PressStart2P' size='0.75' align='center' shadow='0'>100 Pop Tabs per Game</t>";
			x="0 * (0.025) + (0)";
			y="23 * (0.04) + (0)";
			w="40 * (0.025)";
			h="1 * (0.04)";
			colorText[]={0.47451001,0.36862701,0.192157,1};
			colorBackground[]={0,0,0,0};
		};
		class GameText: RscStructuredText
		{
			idc=4005;
			x="0.29375 * safezoneW + safezoneX";
			y="0.291 * safezoneH + safezoneY";
			w="0.4125 * safezoneW";
			h="0.341 * safezoneH";
			colorBackground[]={0,0,0,0};
		};
	};
};
class RscExileUpgradeTerritoryDialog
{
	idd=20018;
	onLoad="uiNamespace setVariable ['RscExileUpgradeTerritoryDialog', _this select 0]";
	onUnload="call ExileClient_gui_upgradeTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExileUpgradeTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="6 * (0.04) + (0)";
			w="20 * (0.025)";
			h="14 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Upgrade Territory";
			x="10 * (0.025) + (0)";
			y="4.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class RadiusLabel: RscText
		{
			idc=-1;
			text="New Radius:";
			x="10.5 * (0.025) + (0)";
			y="11.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class RespectFeeLabel: RscText
		{
			idc=-1;
			text="Cost:";
			x="10.5 * (0.025) + (0)";
			y="15 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class LevelLabel: RscText
		{
			idc=-1;
			text="New Level:";
			x="10.5 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class TerritoryDropDown: RscCombo
		{
			idc=4000;
			onLBSelChanged="_this call ExileClient_gui_upgradeTerritoryDialog_event_onTerritoryDropDownSelectionChanged";
			x="10.5 * (0.025) + (0)";
			y="6.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class UpgradeButton: RscButtonMenuOK
		{
			idc=4001;
			onMouseButtonClick="_this call ExileClient_gui_upgradeTerritoryDialog_event_onUpgradeButtonClick";
			text="Upgrade";
			x="10.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Cost: RscStructuredText
		{
			idc=4002;
			text="<t size='1.4'>0</t>";
			x="10.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class Radius: RscStructuredText
		{
			idc=4003;
			text="<t size='1.4'>30m</t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class Level: RscStructuredText
		{
			idc=4004;
			text="<t size='1.4'>2/10</t>";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
	};
};
class RscExileVehicleCustomsDialog
{
	idd=24008;
	onLoad="uiNamespace setVariable ['RscExileVehicleCustomsDialog', _this select 0]";
	onUnload="call ExileClient_gui_vehicleCustomsDialog_event_onUnload; uiNamespace setVariable ['RscExileVehicleCustomsDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=1000;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="0.5 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="11.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogTitle: RscText
		{
			idc=1001;
			text="Purchase Paintjob";
			x="1 * safezoneW / 40 + safezoneX";
			y="1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc=1002;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="23 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
	};
	class controls
	{
		class VehicleDropDown: RscCombo
		{
			idc=4000;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			onLBSelChanged="_this call ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged";
		};
		class SkinsListBox: RscExileItemListBox
		{
			idc=4001;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="7 * safezoneH / 25";
			onLBSelChanged="_this call ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged";
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc=4002;
			text="Purchase now";
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="0.75 * safezoneH / 25";
			onMouseButtonClick="_this call ExileClient_gui_vehicleCustomsDialog_event_onPurchaseButtonClick";
			class Attributes: Attributes
			{
				align="center";
				valign="middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=4003;
			x="1 * safezoneW / 40 + safezoneX";
			y="23.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.5 * safezoneH / 25";
			action="closeDialog 0";
			class Attributes: Attributes
			{
				align="center";
			};
		};
	};
};
class RscExileVehicleTraderDialog
{
	idd=24008;
	onLoad="uiNamespace setVariable ['RscExileVehicleTraderDialog', _this select 0]";
	onUnload="call ExileClient_gui_vehicleTraderDialog_event_onUnload; uiNamespace setVariable ['RscExileVehicleTraderDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=1000;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="0.5 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="16.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogTitle: RscText
		{
			idc=1001;
			text="Purchase Vehicle";
			x="1 * safezoneW / 40 + safezoneX";
			y="1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc=1006;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="23 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
	};
	class controls
	{
		class CategoryDropDown: RscCombo
		{
			idc=4000;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			onLBSelChanged="_this call ExileClient_gui_vehicleTraderDialog_event_onCategoryDropDownSelectionChanged";
		};
		class VehiclesListBox: RscExileItemListBox
		{
			idc=4001;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="7 * safezoneH / 25";
			onLBSelChanged="_this call ExileClient_gui_vehicleTraderDialog_event_onVehicleListBoxSelectionChanged";
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc=4002;
			text="Purchase now";
			x="1 * safezoneW / 40 + safezoneX";
			y="15.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="0.75 * safezoneH / 25";
			onMouseButtonClick="_this call ExileClient_gui_vehicleTraderDialog_event_onPurchaseButtonClick";
			class Attributes: Attributes
			{
				align="center";
				valign="middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=4006;
			x="1 * safezoneW / 40 + safezoneX";
			y="23.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.5 * safezoneH / 25";
			action="closeDialog 0";
			class Attributes: Attributes
			{
				align="center";
			};
		};
		class PinBox: RscEdit
		{
			idc=4008;
			x="1 * safezoneW / 40 + safezoneX";
			y="14.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.9 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
			onChar="_this spawn ExileClient_gui_vehicleTraderDialog_event_onInputBoxChars";
		};
		class PinText: RscStructuredText
		{
			text="Pin Code:";
			x="1 * safezoneW / 40 + safezoneX";
			y="13.8 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.8 * safezoneH / 25";
		};
		class Stat01Background: RscText
		{
			idc=6000;
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc=6001;
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc=6002;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat01Value: RscStructuredText
		{
			idc=6003;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
		class Stat02Background: RscText
		{
			idc=6004;
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc=6005;
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc=6006;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat02Value: RscStructuredText
		{
			idc=6007;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
		class Stat03Background: RscText
		{
			idc=6008;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc=6009;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc=6010;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat03Value: RscStructuredText
		{
			idc=6011;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
		class Stat04Background: RscText
		{
			idc=6012;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc=6013;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc=6014;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat04Value: RscStructuredText
		{
			idc=6015;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
	};
};
class RscExileWasteDumpDialog
{
	idd=24011;
	onLoad="uiNamespace setVariable ['RscExileWasteDumpDialog', _this select 0]";
	onUnload="call ExileClient_gui_wasteDumpDialog_event_onUnload; uiNamespace setVariable ['RscExileWasteDumpDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="8 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Waste Dump";
			x="10 * (0.025) + (0)";
			y="7.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class RevenueLabel: RscText
		{
			idc=-1;
			text="Revenue:";
			x="10.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class ModeLabel: RscText
		{
			idc=-1;
			text="What would you like to throw away?";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class ModeDropDown: RscCombo
		{
			idc=4002;
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call ExileClient_gui_wasteDumpDialog_event_onModeDropDownSelectionChanged";
		};
		class RevenueValue: RscStructuredText
		{
			idc=4001;
			text="<t size='1.4'>0<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
		};
		class SellButton: RscButtonMenuOK
		{
			idc=4000;
			onMouseButtonClick="_this call ExileClient_gui_wasteDumpDialog_event_onSellButtonClick";
			text="Adios!";
			x="10.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
		};
	};
};
class RscExileXM8Slide
{
	deletable=0;
	fade=0;
	shadow=0;
	style=16;
	type=15;
	x="0 * (0.025)";
	y="0 * (0.04)";
	w="34 * (0.025)";
	h="19 * (0.04)";
	show="false";
	class Controls
	{
	};
	class HScrollbar: Scrollbar
	{
		show="false";
	};
	class VScrollbar: Scrollbar
	{
		show="false";
	};
};
class RscExileXM8Frame: RscText
{
	colorBackground[]={255,255,255,0.1};
};
class RscExileXM8AppButton: RscButtonMenu
{
	type=16;
	style="0x02";
	period=1.2;
	periodFocus=1.2;
	periodOver=1.2;
	shadow=0;
	shortcuts[]={};
	textureNoShortcut="\A3\Ui_f\data\GUI\RscCommon\RscButtonMenuSteam\steam_ca.paa";
	animTextureDefault="#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled="#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused="#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal="#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver="#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed="#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[]={255,255,255,0.050000001};
	colorBackground2[]={255,255,255,0.050000001};
	colorBackgroundFocused[]={255,255,255,0.1};
	colorDisabled[]={1,1,1,0.25};
	colorDisabledSecondary[]={1,1,1,0.25};
	colorFocused[]=
	{
		"225/255",
		"65/255",
		"65/255",
		1
	};
	colorFocusedSecondary[]=
	{
		"225/255",
		"65/255",
		"65/255",
		1
	};
	colorText[]={1,1,1,1};
	color[]={1,1,1,1};
	color2[]=
	{
		"225/255",
		"65/255",
		"65/255",
		1
	};
	font="PuristaMedium";
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text="Text";
	colorSecondary[]={1,1,1,1};
	color2Secondary[]={0,0,0,1};
	fontSecondary="PuristaLight";
	sizeExSecondary="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	textSecondary="";
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
		0.090000004,
		1
	};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
		0.090000004,
		1
	};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	tooltipColorText[]={1,1,1,1};
	class Attributes
	{
		align="center";
	};
	class AttributesImage
	{
		align="center";
		color="#E5E5E5";
		font="PuristaMedium";
	};
	class ShortcutPos
	{
		left=0;
		top=0;
		h=1;
		w=1;
	};
};
class RscExileXM8AppButton1x1: RscExileXM8AppButton
{
	w="6 * (0.025)";
	h="5 * (0.04)";
	textureNoShortcut="";
	text="";
	class ShortcutPos
	{
		left="(6 * (0.025)) * 0.25";
		top="(5 * (0.04)) * 0.15";
		w="(6 * (0.025)) * 0.5";
		h="(5 * (0.04)) * 0.5";
	};
	class TextPos
	{
		bottom=0;
		left=0;
		right=0;
		top="(5 * (0.04)) * 0.65";
	};
};
class RscExileXM8AppButton2x1: RscExileXM8AppButton1x1
{
	w="12.5 * (0.025)";
	class ShortcutPos
	{
		left="(12.5 * (0.025)) * 0.5 - (6 * (0.025)) * 0.25";
		top="(5 * (0.04)) * 0.15";
		w="(6 * (0.025)) * 0.5";
		h="(5 * (0.04)) * 0.5";
	};
};
class RscExileXM8Edit: RscEdit
{
	colorBackground[]={255,255,255,0.1};
	colorDisabled[]={255,255,255,0.1};
	colorSelection[]=
	{
		"0/255",
		"178/255",
		"205/255",
		1
	};
	colorText[]=
	{
		"252/255",
		"253/255",
		"255/255",
		1
	};
	shadow=2;
	style="0x00 + 0x50";
	type=2;
	onSetFocus="_this call ExileClient_gui_xm8_event_onInputBoxFocus";
	onKillFocus="_this call ExileClient_gui_xm8_event_onInputBoxKillFocus";
};
class RscExileXM8Button: RscExileXM8AppButton1x1
{
	height="2 * (0.04)";
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	class Attributes
	{
		align="center";
	};
	class AttributesImage
	{
		align="center";
		color="#E5E5E5";
		font="PuristaMedium";
	};
	class TextPos
	{
		bottom=0;
		left=0;
		right=0;
		top="(1 * (0.04)) * 0.5";
	};
};
class RscExileXM8ButtonMenu: RscExileXM8Button
{
	height="1 * (0.04)";
	class TextPos
	{
		bottom=0;
		left=0;
		right=0;
		top=0;
	};
};
class RscExileXM8BackButton: RscExileXM8AppButton1x1
{
	textureNoShortcut="\exile_assets\texture\ui\xm8_back_ca.paa";
	w="3 * (0.025)";
	h="2.5 * (0.04)";
	class ShortcutPos
	{
		left=0;
		top=0;
		w="3 * (0.025)";
		h="2.5 * (0.04)";
	};
};
class RscExileXM8ListBox: RscListBox
{
};
class RscExileXM8
{
	idd=24015;
	onLoad="uiNamespace setVariable ['RscExileXM8', _this select 0]";
	onUnload="call ExileClient_gui_xm8_event_onUnload; uiNamespace setVariable ['RscExileXM8', displayNull]";
	onKeyUp="_this call ExileClient_gui_xm8_event_onKeyUp";
	onKeyDown="_this call ExileClient_gui_xm8_event_onKeyDown";
	class ControlsBackground
	{
		class BackgroundOff: RscPictureKeepAspect
		{
			idc=4000;
			text="\exile_assets\texture\ui\xm8_off_ca.paa";
			x="0 * (0.025) + (0)";
			y="-4 * (0.04) + (0)";
			w="40 * (0.025)";
			h="33.3333 * (0.04)";
		};
		class BackgroundOn: RscPictureKeepAspect
		{
			idc=4001;
			text="\exile_assets\texture\ui\xm8_on_ca.paa";
			x="0 * (0.025) + (0)";
			y="-4 * (0.04) + (0)";
			w="40 * (0.025)";
			h="33.3333 * (0.04)";
		};
	};
	class Controls
	{
		class Slides: RscExileXM8Slide
		{
			idc=4007;
			x="3 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			show="true";
			class Controls
			{
				class SlideApps: RscExileXM8Slide
				{
					idc=4040;
					show="true";
					class Controls
					{
						class KillDeathRatio: RscStructuredText
						{
							idc=4057;
							text="<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Health</t>";
							x="(4 - 3) * (0.025)";
							y="(4 - 2) * (0.04)";
							w="6 * (0.025)";
							h="5 * (0.04)";
							colorBackground[]={255,255,255,0.050000001};
							size="10 * pixelH";
						};
						class PopTabs: RscStructuredText
						{
							idc=4058;
							text="<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Pop Tabs</t>";
							x="(4 - 3) * (0.025)";
							y="(9.5 - 2) * (0.04)";
							w="6 * (0.025)";
							h="5 * (0.04)";
							colorBackground[]={255,255,255,0.050000001};
							size="10 * pixelH";
						};
						class Respect: RscStructuredText
						{
							idc=4059;
							text="<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Respect</t>";
							x="(4 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							w="6 * (0.025)";
							h="5 * (0.04)";
							colorBackground[]={255,255,255,0.050000001};
							size="10 * pixelH";
						};
						class App01: RscExileXM8AppButton
						{
							idc=1111;
							x="(10.5 - 3) * (0.025)";
							y="(4 - 2) * (0.04)";
							w="12.5 * (0.025)";
							h="10.5 * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_network_ca.paa";
							text="8G Network";
							onButtonClick="['players', 0] call ExileClient_gui_xm8_slide";
							class ShortcutPos
							{
								left="(12.5 * (0.025)) * 0.25";
								top="(10.5 * (0.04)) * 0.25";
								w="(12.5 * (0.025)) * 0.5";
								h="(10.5 * (0.04)) * 0.5";
							};
							class TextPos
							{
								bottom=0;
								left=0;
								right=0;
								top="(10.5 * (0.04)) * 0.75";
							};
						};
						class App02: RscExileXM8AppButton1x1
						{
							idc=1106;
							x="(23.5 - 3) * (0.025)";
							y="(4 - 2) * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_party_ca.paa";
							text="Party";
							onButtonClick="[] spawn ExileClient_gui_xm8_showPartySlides";
						};
						class App03: RscExileXM8AppButton1x1
						{
							idc=1105;
							x="(30 - 3) * (0.025)";
							y="(4 - 2) * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_clan_ca.paa";
							text="Family";
							onButtonClick="[] spawn ExileClient_gui_xm8_showClanSlide";
						};
						class App04: RscExileXM8AppButton2x1
						{
							idc=1113;
							x="(23.5 - 3) * (0.025)";
							y="(9.5 - 2) * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_territory_ca.paa";
							text="Territory";
							onButtonClick="call ExileClient_gui_xm8_showTerritorySlide";
						};
						class App05: RscExileXM8AppButton1x1
						{
							idc=1104;
							x="(10.5 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_mobile_xm8_ca.paa";
							text="Mobile XM8";
							onButtonClick="														if((getText(missionConfigFile >> 'CfgExileMobileXM8' >> 'code')) isEqualTo '')then 							{								['This server does not support the mobile XM8 app yet.<br/>Contact server admin for support.', 'Okay'] call ExileClient_gui_xm8_showWarning;							}							else							{									['mobileXm8', 0] call ExileClient_gui_xm8_slide;							};";
						};
						class App06: RscExileXM8AppButton1x1
						{
							idc=1103;
							x="(17 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_slothMachine_ca.paa";
							text="Sloth Machine";
							onButtonClick="['slothMachine', 0] call ExileClient_gui_xm8_slide";
						};
						class App07: RscExileXM8AppButton1x1
						{
							idc=1107;
							x="(23.5 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_settings_ca.paa";
							text="Server Rules";
							onButtonClick="['server', 0] call ExileClient_gui_xm8_slide";
						};
						class App08: RscExileXM8AppButton1x1
						{
							idc=1117;
							x="(30 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_extra_apps_ca.paa";
							text="More";
							onButtonClick="['extraApps', 0] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideExtraApps: RscExileXM8Slide
				{
					idc=5000;
					show="false";
					class Controls
					{
						class App11: RscExileXM8AppButton1x1
						{
							idc=5001;
							x="(4 - 3) * (0.025)";
							y="(4 - 2) * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_settings_ca.paa";
							text="Settings";
							onButtonClick="['settings', 0] call ExileClient_gui_xm8_slide";
						};
						class App12: RscExileXM8AppButton1x1
						{
							idc=5002;
							x="(10.5 - 3) * (0.025)";
							y="(4 - 2) * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_health_scanner_ca.paa";
							text="Health Scanner";
							onButtonClick="['healthScanner', 0] call ExileClient_gui_xm8_slide";
						};
						class App13: RscExileXM8AppButton1x1
						{
							idc=5003;
							x="(17 - 3) * (0.025)";
							y="(4 - 2) * (0.04)";
							textureNoShortcut="\exile_assets\texture\ui\xm8_app_boom_ca.paa";
							text="BOOM!";
							onButtonClick="call ExileClient_system_breaching_detonate";
						};
						class App14: RscExileXM8AppButton1x1
						{
							idc=5004;
							x="(23.5 - 3) * (0.025)";
							y="(4 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class App15: RscExileXM8AppButton1x1
						{
							idc=5005;
							x="(30 - 3) * (0.025)";
							y="(4 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class App21: RscExileXM8AppButton1x1
						{
							idc=5006;
							x="(4 - 3) * (0.025)";
							y="(9.5 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class App22: RscExileXM8AppButton1x1
						{
							idc=5007;
							x="(10.5 - 3) * (0.025)";
							y="(9.5 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class App23: RscExileXM8AppButton1x1
						{
							idc=5008;
							x="(17 - 3) * (0.025)";
							y="(9.5 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class App24: RscExileXM8AppButton1x1
						{
							idc=5009;
							x="(23.5 - 3) * (0.025)";
							y="(9.5 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class App25: RscExileXM8AppButton1x1
						{
							idc=5010;
							x="(30 - 3) * (0.025)";
							y="(9.5 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class App31: RscExileXM8AppButton1x1
						{
							idc=5011;
							x="(4 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class App32: RscExileXM8AppButton1x1
						{
							idc=5012;
							x="(10.5 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class App33: RscExileXM8AppButton1x1
						{
							idc=5013;
							x="(17 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class App34: RscExileXM8AppButton1x1
						{
							idc=5014;
							x="(23.5 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							textureNoShortcut="";
							text="";
							onButtonClick="";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc=-1;
							text="GO BACK";
							x="(30 - 3) * (0.025)";
							y="(19 - 2) * (0.04)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideMobileXm8: RscExileXM8Slide
				{
					idc=4200;
					show="false";
					class Controls
					{
						class Description: RscStructuredText
						{
							idc=-1;
							x="11.5 * (0.025)";
							y="3 * (0.04)";
							w="20.5 * (0.025)";
							h="12 * (0.04)";
							colorBackground[]={0,0,0,0.25};
							text="<t size='1.5'>Never miss a base raid!<br/><br/></t>Use the code to the left to link your smartphone with your in-game character. You will then receive notifications about base raids, protection money reminders and more!<br/><br/><a href='https://xm8.exilemod.com/'>Read more</a>";
							size="24 * pixelH";
							class Attributes
							{
								align="left";
								color="#ffffff";
								colorLink="#00b2cd";
								font="PuristaMedium";
								shadow=0;
							};
						};
						class CodeLabel: RscStructuredText
						{
							idc=4201;
							text="<t color='#00b2cd' font='OrbitronLight' size='1.6' valign='middle' align='center' shadow='0'><br/><br/><br/><t font='OrbitronMedium' size='3.5' color='#ffffff'>ABCD</t><br/>SERVER CODE</t>";
							x="2 * (0.025)";
							y="3 * (0.04)";
							w="9 * (0.025)";
							h="12 * (0.04)";
							colorBackground[]={255,255,255,0.050000001};
							size="10 * pixelH";
						};
						class PlayStoreImage: RscStructuredText
						{
							idc=-1;
							text="<t valign='middle' align='center' shadow='0'><a href='https://xm8.exilemod.com/redirect/playstore'><img image='exile_assets\texture\ui\google_play_ca.paa'></a></t>";
							x="2 * (0.025)";
							y="9 * (0.04)";
							w="9 * (0.025)";
							h="3 * (0.04)";
							colorBackground[]={0,0,0,0};
							size="64 * pixelH";
						};
						class AppStoreImage: RscStructuredText
						{
							idc=-1;
							text="<t valign='middle' align='center' shadow='0'><img color='#40FFFFFF' image='exile_assets\texture\ui\app_store_ca.paa'></t>";
							x="2 * (0.025)";
							y="11 * (0.04)";
							w="9 * (0.025)";
							h="3 * (0.04)";
							colorBackground[]={0,0,0,0};
							size="64 * pixelH";
							tooltip="Not available yet";
						};
						class GoogleLegalHint: RscText
						{
							idc=-1;
							text="Google Play and the Google Play logo are trademarks of Google Inc.";
							colorText[]={1,1,1,0.5};
							x="2 * (0.025)";
							y="16 * (0.04)";
							w="30 * (0.025)";
							h="1 * (0.04)";
							sizeEx="14 * pixelH";
						};
						class AppleShitLegalHint: RscText
						{
							idc=-1;
							text="Apple and the Apple logo are trademarks of Apple Inc. - App Store is a service mark of Apple Inc.";
							colorText[]={1,1,1,0.5};
							x="2 * (0.025)";
							y="17 * (0.04)";
							w="30 * (0.025)";
							h="1 * (0.04)";
							sizeEx="14 * pixelH";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc=-1;
							text="GO BACK";
							x="26 * (0.025)";
							y="16 * (0.04)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideHealthScanner: RscExileXM8Slide
				{
					idc=4120;
					show="false";
					class Controls
					{
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc=4122;
							text="GO BACK";
							x="(29 - 3) * (0.025)";
							y="(18 - 2) * (0.04)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="['extraApps', 1] call ExileClient_gui_xm8_slide";
						};
						class HealthInfoControlGroup: RscControlsGroupNoHScrollbars
						{
							idc=-1;
							x="(5 - 3) * (0.025)";
							y="(5 - 2) * (0.04)";
							w="30 * (0.025)";
							h="12 * (0.04)";
							colorBackground[]={0,0,0,0.25};
							class controls
							{
								class HealthInfo: RscStructuredText
								{
									idc=4121;
									x=0;
									y=0;
									w="29 * (0.025)";
									h="12 * (0.04)";
								};
							};
						};
					};
				};
				class SlideHostParty: RscExileXM8Slide
				{
					idc=4080;
					show="false";
					class Controls
					{
						class PartyButton: RscExileXM8Button
						{
							idc=4081;
							text="Host Party";
							x="(10.5 - 3) * (0.025)";
							y="(12 - 2) * (0.04)";
							w="19 * (0.025)";
							h="2 * (0.04)";
							onButtonClick="_this call ExileClient_gui_xm8_slide_hostParty_event_onOkayButtonClick";
						};
						class NameInput: RscExileXM8Edit
						{
							idc=4082;
							text="Eichi's Party";
							x="(10.5 - 3) * (0.025)";
							y="(9 - 2) * (0.04)";
							w="19 * (0.025)";
							h="2 * (0.04)";
							tooltip="Name for your party";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc=-1;
							text="GO BACK";
							x="(29 - 3) * (0.025)";
							y="(18 - 2) * (0.04)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideSettings: RscExileXM8Slide
				{
					idc=4070;
					show="false";
					class Controls
					{
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc=4071;
							text="GO BACK";
							x="(29 - 3) * (0.025)";
							y="(18 - 2) * (0.04)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="['extraApps', 1] call ExileClient_gui_xm8_slide";
						};
						class 8GDropDown: RscCombo
						{
							idc=4072;
							x="(5 - 3) * (0.025)";
							y="(5 - 2) * (0.04)";
							w="7 * (0.025)";
							h="1 * (0.04)";
							onLBSelChanged="_this call ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged";
						};
						class 8GLabel: RscText
						{
							idc=-1;
							text="Show my device in global 8G network.";
							x="(13 - 3) * (0.025)";
							y="(5 - 2) * (0.04)";
							w="22 * (0.025)";
							h="1 * (0.04)";
							shadow=0;
						};
						class SoundDropDown: RscCombo
						{
							idc=4075;
							x="(5 - 3) * (0.025)";
							y="(7 - 2) * (0.04)";
							w="7 * (0.025)";
							h="1 * (0.04)";
							onLBSelChanged="_this call ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged";
						};
						class SoundLabel: RscText
						{
							idc=-1;
							text="Play a beep sound on notifications.";
							x="(13 - 3) * (0.025)";
							y="(7 - 2) * (0.04)";
							w="22 * (0.025)";
							h="1 * (0.04)";
							shadow=0;
						};
						class PartyEspDropDown: RscCombo
						{
							idc=4076;
							x="(5 - 3) * (0.025)";
							y="(9 - 2) * (0.04)";
							w="7 * (0.025)";
							h="1 * (0.04)";
							onLBSelChanged="_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged";
						};
						class PartyEspLabel: RscText
						{
							idc=-1;
							text="Color of 3D party icons and name tags.";
							x="(13 - 3) * (0.025)";
							y="(9 - 2) * (0.04)";
							w="22 * (0.025)";
							h="1 * (0.04)";
							shadow=0;
						};
						class PartyEspSlider: RscXSliderH
						{
							idc=4078;
							x="(5 - 3) * (0.025)";
							y="(11 - 2) * (0.04)";
							w="7 * (0.025)";
							h="1 * (0.04)";
							onSliderPosChanged="_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSliderChanged";
						};
						class PartyEspSliderLabel: RscText
						{
							idc=-1;
							text="Opacity of 3D party icons and name tags.";
							x="(13 - 3) * (0.025)";
							y="(11 - 2) * (0.04)";
							w="22 * (0.025)";
							h="1 * (0.04)";
							shadow=0;
						};
						class PartyMarkerSlider: RscXSliderH
						{
							idc=4079;
							x="(5 - 3) * (0.025)";
							y="(13 - 2) * (0.04)";
							w="7 * (0.025)";
							h="1 * (0.04)";
							onSliderPosChanged="_this call ExileClient_gui_xm8_slide_settings_event_onPartyMarkerSliderChanged";
						};
						class PartyMarkerSliderLabel: RscText
						{
							idc=-1;
							text="Opacity of 3D party markers.";
							x="(13 - 3) * (0.025)";
							y="(13 - 2) * (0.04)";
							w="22 * (0.025)";
							h="1 * (0.04)";
							shadow=0;
						};
						class StreamModeDropDown: RscCombo
						{
							idc=4077;
							x="(5 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							w="7 * (0.025)";
							h="1 * (0.04)";
							onLBSelChanged="_this call ExileClient_gui_xm8_slide_settings_event_onStreamModeSelectionChanged";
						};
						class StreamModeLabel: RscText
						{
							idc=-1;
							text="Masquerade PIN codes. Perfect for streamers.";
							x="(13 - 3) * (0.025)";
							y="(15 - 2) * (0.04)";
							w="22 * (0.025)";
							h="1 * (0.04)";
							shadow=0;
						};
					};
				};
				class SlideServer: RscExileXM8Slide
				{
					idc=4090;
					show="false";
					class Controls
					{
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc=4091;
							text="GO BACK";
							x="(29 - 3) * (0.025)";
							y="(18 - 2) * (0.04)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class InfoHTML: RscHTML
						{
							idc=4092;
							x="(5 - 3) * (0.025)";
							y="(5 - 2) * (0.04)";
							w="30 * (0.025)";
							h="12 * (0.04)";
							colorBackground[]={0,0,0,0.25};
						};
					};
				};
				class SlideClan: RscExileXM8Slide
				{
					idc=4060;
					show="false";
					class Controls
					{
						class MembersListBox: RscExileXM8ListBox
						{
							idc=4061;
							x="2 * (0.025) + (0)";
							y="3 * (0.04) + (0)";
							w="23 * (0.025)";
							h="14 * (0.04)";
							onLBSelChanged="_this call ExileClient_gui_xm8_slide_clan_event_onMemberLBSelChanged";
						};
						class KickButton: RscExileXM8ButtonMenu
						{
							idc=4062;
							text="KICK";
							x="26 * (0.025) + (0)";
							y="6 * (0.04) + (0)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this spawn ExileClient_gui_xm8_slide_clan_event_onClanKickButtonClick";
						};
						class LeaveButton: RscExileXM8ButtonMenu
						{
							idc=4063;
							text="Leave";
							x="26 * (0.025) + (0)";
							y="3 * (0.04) + (0)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this spawn ExileClient_gui_xm8_slide_clan_event_onClanLeaveButtonClick";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							onButtonClick="['apps', 1] call ExileClient_gui_xm8_slide";
							idc=-1;
							text="GO BACK";
							x="26 * (0.025) + (0)";
							y="16 * (0.04) + (0)";
							w="6 * (0.025)";
							h="1 * (0.04)";
						};
					};
				};
				class SlideParty: RscExileXM8Slide
				{
					idc=4100;
					show="false";
					class Controls
					{
						class MembersListBox: RscExileXM8ListBox
						{
							idc=4102;
							x="(5 - 3) * (0.025)";
							y="(5 - 2) * (0.04)";
							w="22 * (0.025)";
							h="14 * (0.04)";
							onLBSelChanged="_this call ExileClient_gui_xm8_slide_party_event_onMemberListBoxSelectionChanged";
						};
						class KickButton: RscExileXM8ButtonMenu
						{
							idc=4104;
							text="KICK";
							x="(29 - 3) * (0.025)";
							y="(10 - 2) * (0.04)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this spawn ExileClient_gui_xm8_slide_party_event_onKickButtonClick";
						};
						class LeaveButton: RscExileXM8ButtonMenu
						{
							idc=4105;
							text="LEAVE";
							x="(29 - 3) * (0.025)";
							y="(5 - 2) * (0.04)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this spawn ExileClient_gui_xm8_slide_party_event_onLeaveButtonClick";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc=-1;
							text="GO BACK";
							x="(29 - 3) * (0.025)";
							y="(18 - 2) * (0.04)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlidePlayers: RscExileXM8Slide
				{
					idc=4110;
					show="false";
					class Controls
					{
						class PlayersListBox: RscExileXM8ListBox
						{
							idc=4111;
							x="(5 - 3) * (0.025) + (0)";
							y="(5 - 2) * (0.04) + (0)";
							w="19 * (0.025)";
							h="14 * (0.04)";
							onLBSelChanged="_this call ExileClient_gui_xm8_slide_players_event_onPlayerListBoxSelectionChanged";
						};
						class PartyButton: RscExileXM8ButtonMenu
						{
							idc=4112;
							text="INVITE TO PARTY";
							x="(26 - 3) * (0.025) + (0)";
							y="(5 - 2) * (0.04) + (0)";
							w="9 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this call ExileClient_gui_xm8_slide_players_event_onPartyButtonClick";
						};
						class ClanButton: RscExileXM8ButtonMenu
						{
							idc=4116;
							text="INVITE TO FAMILY";
							x="23 * (0.025) + (0)";
							y="5 * (0.04) + (0)";
							w="9 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this call ExileClient_gui_xm8_slide_players_event_onClanButtonClick";
						};
						class TerritoryGroup: RscExileXM8Frame
						{
							idc=-1;
							x="23 * (0.025) + (0)";
							y="7 * (0.04) + (0)";
							w="9 * (0.025)";
							h="4 * (0.04)";
						};
						class TerritoryGroupCaption: RscText
						{
							idc=-1;
							text="TERRITORY";
							sizeEx="11 * pixelH";
							font="OrbitronLight";
							colorText[]=
							{
								"252/255",
								"253/255",
								"255/255",
								1
							};
							x="23 * (0.025) + (0)";
							y="7 * (0.04) + (0)";
							w="9 * (0.025)";
							h="1 * (0.04)";
							style=2;
						};
						class TerritoryDropdown: RscCombo
						{
							idc=4114;
							x="23.5 * (0.025) + (0)";
							y="8 * (0.04) + (0)";
							w="8 * (0.025)";
							h="1 * (0.04)";
						};
						class GrantTerritoryBuildRightsButton: RscExileXM8ButtonMenu
						{
							idc=4115;
							text="GRANT RIGHTS";
							x="23.5 * (0.025) + (0)";
							y="9.5 * (0.04) + (0)";
							w="8 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this spawn ExileClient_gui_xm8_slide_players_event_onGrantTerritoryButtonClick";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc=4113;
							text="GO BACK";
							x="(26 - 3) * (0.025) + (0)";
							y="(18 - 2) * (0.04) + (0)";
							w="9 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideTerritory: RscExileXM8Slide
				{
					idc=4130;
					show="false";
					class Controls
					{
						class TerritoryDropdown: RscCombo
						{
							idc=4132;
							x="(5 - 3) * (0.025) + (0)";
							y="(5 - 2) * (0.04) + (0)";
							w="22 * (0.025)";
							h="1 * (0.04)";
							onLBSelChanged="_this call ExileClient_gui_xm8_slide_territory_event_onTerritoryDropdownSelectionChanged";
						};
						class PlayersListBox: RscListBox
						{
							idc=4131;
							x="(5 - 3) * (0.025) + (0)";
							y="(6.5 - 2) * (0.04) + (0)";
							w="22 * (0.025)";
							h="11.5 * (0.04)";
							onLBSelChanged="_this call ExileClient_gui_xm8_slide_territory_event_onPlayerListBoxSelectionChanged";
						};
						class InfoText: RscText
						{
							idc=4133;
							text="";
							x="(5 - 3) * (0.025) + (0)";
							y="(18 - 2) * (0.04) + (0)";
							w="22 * (0.025)";
							h="1 * (0.04)";
							colorBackground[]={0,0,0,0.80000001};
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc=-1;
							text="GO BACK";
							x="(29 - 3) * (0.025)";
							y="(18 - 2) * (0.04)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class KickButton: RscExileXM8ButtonMenu
						{
							idc=4134;
							text="KICK";
							x="(29 - 3) * (0.025) + (0)";
							y="(6.5 - 2) * (0.04) + (0)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this spawn ExileClient_gui_xm8_slide_territory_event_onKickButtonClick";
						};
						class LeaveButton: RscExileXM8ButtonMenu
						{
							idc=4135;
							text="LEAVE";
							x="(29 - 3) * (0.025) + (0)";
							y="(5 - 2) * (0.04) + (0)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this spawn ExileClient_gui_xm8_slide_territory_event_onLeaveButtonClick";
						};
						class PromoteButton: RscExileXM8ButtonMenu
						{
							idc=4136;
							text="PROMOTE";
							x="(29 - 3) * (0.025) + (0)";
							y="(8 - 2) * (0.04) + (0)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this spawn ExileClient_gui_xm8_slide_territory_event_onPromoteButtonClick";
						};
						class DemoteButton: RscExileXM8ButtonMenu
						{
							idc=4137;
							text="DEMOTE";
							x="(29 - 3) * (0.025) + (0)";
							y="(9.5 - 2) * (0.04) + (0)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this spawn ExileClient_gui_xm8_slide_territory_event_onDemoteButtonClick";
						};
						class RadiusButton: RscExileXM8ButtonMenu
						{
							idc=4138;
							text="RADIUS";
							x="(29 - 3) * (0.025) + (0)";
							y="(11 - 2) * (0.04) + (0)";
							w="6 * (0.025)";
							h="1 * (0.04)";
							onButtonClick="_this spawn ExileClient_gui_xm8_slide_territory_event_onRadiusButtonClick";
						};
					};
				};
				class SlideSlothMachine: RscExileXM8Slide
				{
					idc=4140;
					show="false";
					class Controls
					{
						class Background: RscPictureKeepAspect
						{
							idc=-1;
							text="\exile_assets\texture\ui\slothMachine\xm8_slothMachineBackground.paa";
							x="-3.1 * (0.025) + (0)";
							y="-6 * (0.04) + (0)";
							w="40 * (0.025)";
							h="33 * (0.04)";
						};
						class XM8SlothMachineSpinButton: RscPictureButton
						{
							idc=4141;
							style=48;
							x="14.3 * (0.025) + (0)";
							y="15.9 * (0.04) + (0)";
							w="5.7 * (0.025)";
							h="2 * (0.04)";
							text="\exile_assets\texture\ui\slothMachine\button_off_ca.paa";
							action="[] call ExileClient_gui_xm8_slide_slothMachine_event_onSpinButtonClick;";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc=4148;
							text="GO BACK";
							x="29.25 * (0.025) + (0)";
							y="17.5 * (0.04) + (0)";
							w="4.5 * (0.025)";
							h="1 * (0.04)";
							sizeEx=".9 * (0.04)";
							onButtonClick="['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class PopTabsLabel: RscStructuredText
						{
							idc=4142;
							text="<t align='center'><t color='#e14141'><img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
							x="6.5 * (0.025) + (0)";
							y="13 * (0.04) + (0)";
							w="6 * (0.025)";
							h="2 * (0.04)";
						};
						class JackpotLabel: RscStructuredText
						{
							idc=4143;
							text="<t align='center'><t color='#e14141'></t>";
							x="14 * (0.025) + (0)";
							y="13 * (0.04) + (0)";
							w="6 * (0.025)";
							h="2 * (0.04)";
						};
						class WinningsLabel: RscStructuredText
						{
							idc=4144;
							text="<t align='center'><t color='#e14141'>0</t>";
							x="21.5 * (0.025) + (0)";
							y="13 * (0.04) + (0)";
							w="6 * (0.025)";
							h="2 * (0.04)";
						};
						class Symbol01: RscPictureKeepAspect
						{
							idc=4145;
							text="";
							x="6.55 * (0.025) + (0)";
							y="4 * (0.04) + (0)";
							w="5.83 * (0.025)";
							h="5 * (0.04)";
						};
						class Symbol02: RscPictureKeepAspect
						{
							idc=4146;
							text="";
							x="14.1 * (0.025) + (0)";
							y="4 * (0.04) + (0)";
							w="5.83 * (0.025)";
							h="5 * (0.04)";
						};
						class Symbol03: RscPictureKeepAspect
						{
							idc=4147;
							text="";
							x="21.6 * (0.025) + (0)";
							y="4 * (0.04) + (0)";
							w="5.83 * (0.025)";
							h="5 * (0.04)";
						};
					};
				};
			};
		};
		class Warning: RscExileXM8Slide
		{
			idc=4030;
			show="false";
			x="3 * (0.025) + (0)";
			y="(2 + 1.5) * (0.04) + (0)";
			h="(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc=-1;
					x=0;
					y=0;
					w="34 * (0.025)";
					h="19 * (0.04)";
					colorBackground[]=
					{
						"41/255",
						"39/255",
						"46/255",
						0.94999999
					};
				};
				class OkayButton: RscExileXM8Button
				{
					idc=4031;
					text="Meh... Okay";
					x="(16.5 - 3) * (0.025)";
					y="(12 - 2) * (0.04)";
					w="7 * (0.025)";
					h="2 * (0.04)";
					onButtonClick="call ExileClient_gui_xm8_hideWarning";
				};
				class Message: RscStructuredText
				{
					idc=4032;
					text="<t align='center'><t color='#e14141'>Whoops</t><br/><t color='#fcfdff' size='1.4'>Computer says no.</t></t>";
					x="(4 - 3) * (0.025)";
					y="(7 - 2) * (0.04)";
					w="32 * (0.025)";
					h="3.5 * (0.04)";
					colorBackground[]={0,0,0,0};
				};
			};
		};
		class Message: RscExileXM8Slide
		{
			idc=4010;
			show="false";
			x="3 * (0.025) + (0)";
			y="(2 + 1.5) * (0.04) + (0)";
			h="(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc=-1;
					x=0;
					y=0;
					w="34 * (0.025)";
					h="19 * (0.04)";
					colorBackground[]=
					{
						"41/255",
						"39/255",
						"46/255",
						0.94999999
					};
				};
				class OkayButton: RscExileXM8Button
				{
					idc=4011;
					text="Okay";
					x="(16.5 - 3) * (0.025)";
					y="(12 - 2) * (0.04)";
					w="7 * (0.025)";
					h="2 * (0.04)";
					onButtonClick="call ExileClient_gui_xm8_hideMessage";
				};
				class Question: RscStructuredText
				{
					idc=4012;
					text="<t align='center'><t color='#a0df3b'>Yay!</t><br/><t color='#fcfdff' size='1.4'>You have done something cool!</t></t>";
					x="(4 - 3) * (0.025)";
					y="(7 - 2) * (0.04)";
					w="32 * (0.025)";
					h="3.5 * (0.04)";
					colorBackground[]={0,0,0,0};
				};
			};
		};
		class Confirm: RscExileXM8Slide
		{
			idc=4020;
			show="false";
			x="3 * (0.025) + (0)";
			y="(2 + 1.5) * (0.04) + (0)";
			h="(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc=-1;
					x=0;
					y=0;
					w="34 * (0.025)";
					h="19 * (0.04)";
					colorBackground[]=
					{
						"41/255",
						"39/255",
						"46/255",
						0.94999999
					};
				};
				class Question: RscStructuredText
				{
					idc=4021;
					text="<t align='center'><t color='#00b2cd'>Confirm</t><br/><t color='#fcfdff' size='1.4'>Kick Eichi?</t></t>";
					x="(4 - 3) * (0.025)";
					y="(7 - 2) * (0.04)";
					w="32 * (0.025)";
					h="3.5 * (0.04)";
					colorBackground[]={0,0,0,0};
				};
				class YesButton: RscExileXM8Button
				{
					idc=4022;
					text="Kick";
					x="(12.5 - 3) * (0.025)";
					y="(12 - 2) * (0.04)";
					w="7 * (0.025)";
					h="2 * (0.04)";
					onButtonClick="true call ExileClient_gui_xm8_hideConfirm";
				};
				class NoButton: RscExileXM8Button
				{
					idc=4023;
					text="Don't kick";
					x="(20.5 - 3) * (0.025)";
					y="(12 - 2) * (0.04)";
					w="7 * (0.025)";
					h="2 * (0.04)";
					onButtonClick="false call ExileClient_gui_xm8_hideConfirm";
				};
			};
		};
		class LeftHeader: RscStructuredText
		{
			idc=4003;
			text="<t align='left' font='RobotoRegular' shadow='0'>147257</t>";
			x="3 * (0.025) + (0)";
			y="2.2 * (0.04) + (0)";
			w="17 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class RightHeader: RscStructuredText
		{
			idc=4005;
			text="<t align='right' font='RobotoRegular' shadow='0'><img image='\exile_assets\texture\ui\xm8_signal_0_ca.paa' shadow='0'/> 21:45</t>";
			x="20 * (0.025) + (0)";
			y="2.2 * (0.04) + (0)";
			w="17 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class CenterHeader: RscStructuredText
		{
			idc=4004;
			text="<t align='center' font='RobotoMedium' shadow='0'>XM8</t>";
			x="9 * (0.025) + (0)";
			y="2.2 * (0.04) + (0)";
			w="22 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class PowerButton: RscButton
		{
			idc=4006;
			x="19 * (0.025) + (0)";
			y="21 * (0.04) + (0)";
			w="2 * (0.025)";
			h="2 * (0.04)";
			tooltip="On/Off";
			onButtonClick="[] spawn ExileClient_gui_xm8_togglePower";
			colorBackground[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorBorder[]={0,0,0,0};
			colorDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			colorShadow[]={0,0,0,0};
			colorText[]={0,0,0,0};
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
		};
		class BackgroundSplash: RscPictureKeepAspect
		{
			idc=4002;
			text="\exile_assets\texture\ui\xm8_splash_ca.paa";
			x="0 * (0.025) + (0)";
			y="-4 * (0.04) + (0)";
			w="40 * (0.025)";
			h="33.3333 * (0.04)";
		};
	};
};
class RscGearTemplates
{
	class EmbossIcons
	{
		uniformTab="exile_assets\texture\ui\inventory\uniform_ca.paa";
		vestTab="exile_assets\texture\ui\inventory\vest_ca.paa";
		backpackTab="exile_assets\texture\ui\inventory\backpack_ca.paa";
		headGearSlot="exile_assets\texture\ui\inventory\headgear_ca.paa";
		gogglesSlot="exile_assets\texture\ui\inventory\goggles_ca.paa";
		hmdSlot="exile_assets\texture\ui\inventory\nvgs_ca.paa";
		binocSlot="exile_assets\texture\ui\inventory\binoculars_ca.paa";
		primarySlot="exile_assets\texture\ui\inventory\primaryweapon_ca.paa";
		secondarySlot="exile_assets\texture\ui\inventory\secondaryweapon_ca.paa";
		handgunSlot="exile_assets\texture\ui\inventory\handgun_ca.paa";
		muzzleSlot="exile_assets\texture\ui\inventory\itemmuzzle_ca.paa";
		opticsSlot="exile_assets\texture\ui\inventory\itemoptic_ca.paa";
		flashlightSlot="exile_assets\texture\ui\inventory\itemacc_ca.paa";
		magazineSlot="exile_assets\texture\ui\inventory\cargomag_ca.paa";
		magazineGLSlot="exile_assets\texture\ui\inventory\cargoput_ca.paa";
		underBarrelSlot="exile_assets\texture\ui\inventory\itembipod_ca.paa";
		mapSlot="exile_assets\texture\ui\inventory\map_ca.paa";
		compassSlot="exile_assets\texture\ui\inventory\compass_ca.paa";
		watchSlot="exile_assets\texture\ui\inventory\watch_ca.paa";
		radioSlot="exile_assets\texture\ui\inventory\radio_ca.paa";
		gpsSlot="exile_assets\texture\ui\inventory\gps_ca.paa";
	};
};
class RscInGameUI
{
	class RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft: RscControlsGroup
		{
			show=0;
			y=-1;
		};
		class WeaponInfoControlsGroupRight: RscControlsGroup
		{
			show=0;
			y=-1;
		};
		class CA_BackgroundVehicle: RscPicture
		{
			show=0;
			y=-1;
		};
		class CA_BackgroundVehicleTitle: RscText
		{
			show=0;
			y=-1;
		};
		class CA_BackgroundVehicleTitleDark: RscText
		{
			show=0;
			y=-1;
		};
		class CA_BackgroundFuel: RscPicture
		{
			show=0;
			y=-1;
		};
		class CA_Vehicle: RscText
		{
			show=0;
			y=-1;
		};
		class CA_VehicleRole: RscPicture
		{
			show=0;
			y=-1;
		};
		class CA_ValueFuel: RscProgress
		{
			show=0;
			y=-1;
		};
		class CA_SpeedBackground: RscText
		{
			show=0;
			y=-1;
		};
		class CA_Speed: RscText
		{
			show=0;
			y=-1;
		};
		class CA_SpeedUnits: RscText
		{
			show=0;
			y=-1;
		};
		class CA_AltBackground: RscText
		{
			show=0;
			y=-1;
		};
		class CA_Alt: RscText
		{
			show=0;
			y=-1;
		};
		class CA_AltUnits: RscText
		{
			show=0;
			y=-1;
		};
		class CA_Depth: RscText
		{
			show=0;
			y=-1;
		};
		class CA_HitZones: RscHitZones
		{
			show=0;
			y=-1;
		};
		class CA_VehicleTogglesBackground: RscText
		{
			show=0;
			y=-1;
		};
		class CA_VehicleToggles: RscVehicleToggles
		{
			show=0;
			y=-1;
		};
		class CA_Zeroing: RscText
		{
			show=0;
			y=-1;
		};
		class CA_TextFlaresMode: RscIGUIText
		{
			show=0;
			y=-1;
		};
		class CA_TextFlares: RscIGUIValue
		{
			show=0;
			y=-1;
		};
		class CA_Throttle: RscText
		{
			show=0;
			y=-1;
		};
	};
	class RscStanceInfo
	{
		show=0;
		y=-1;
		class StanceIndicatorBackground: RscPicture
		{
			show=0;
			y=-1;
		};
		class StanceIndicator: RscPictureKeepAspect
		{
			show=0;
			y=-1;
		};
	};
	class RscWeaponZeroing: RscUnitInfo
	{
		class CA_Zeroing: RscText
		{
			show=0;
			y=-1;
		};
	};
	class RscWeaponRangeZeroing: RscUnitInfo
	{
		class CA_DistanceText: RscOpticsText
		{
			show=0;
			y=-1;
		};
		class CA_Distance: RscOpticsValue
		{
			show=0;
			y=-1;
		};
	};
	class RscHint
	{
		idd=301;
		movingEnable=0;
		controls[]=
		{
			"Background",
			"Hint"
		};
		class Background: RscText
		{
			idc=101;
			style=128;
			x="safeZoneX + safeZoneW * 0.5 - safeZoneW * 0.1";
			y="(safeZoneY + safeZoneH) - 60 * pixelH - 60 * pixelH";
			w="safeZoneW * 0.2";
			h="50 * pixelH";
			text="";
			colorBackground[]=
			{
				"19/255",
				"22/255",
				"27/255",
				0.80000001
			};
			shadow=0;
		};
		class Hint: RscStructuredText
		{
			idc=102;
			x="safeZoneX + safeZoneW * 0.5 - safeZoneW * 0.1 + 10 * pixelW";
			h="40 * pixelH";
			{