#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 4;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<318> Var0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_31 = joaat("W_BINOCULAR_INNER01");
	bLocal_32 = true;
	Var0.f_8 = 2;
	Var0.f_8.f_1.f_11 = 2;
	Var0.f_8.f_1.f_18 = 2;
	Var0.f_8.f_1.f_39 = -1;
	Var0.f_8.f_1.f_40.f_11 = 2;
	Var0.f_8.f_1.f_40.f_18 = 2;
	Var0.f_8.f_1.f_40.f_39 = -1;
	Var0.f_89 = 4;
	Var0.f_89.f_1.f_8 = -1;
	Var0.f_89.f_1.f_11 = -1;
	Var0.f_89.f_1.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_11 = -1;
	Var0.f_89.f_1.f_15.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_15.f_11 = -1;
	Var0.f_89.f_1.f_15.f_15.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_15.f_15.f_11 = -1;
	Var0.f_150 = 6;
	Var0.f_150.f_1.f_9 = -1;
	Var0.f_150.f_1.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_229 = 2;
	Var0.f_229.f_1.f_1 = 4;
	Var0.f_229.f_1.f_1.f_1.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1 = 4;
	Var0.f_229.f_1.f_27.f_1.f_1.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_287 = -1;
	Var0.f_287.f_1 = -1;
	Var0.f_307 = -1;
	Var0.f_317 = -1;
	Var0.f_304 = ScriptParam_0;
	Var0 = ScriptParam_0.f_1;
	func_1();
	func_2(&Var0);
	while (bLocal_32)
	{
		bLocal_32 = !func_3(&Var0);
		if (func_4(&Var0))
		{
			bLocal_32 = false;
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Var0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

void func_2(var uParam0)
{
}

int func_3(var uParam0)
{
	if (func_6(1, 1))
	{
		return 1;
	}
	if (func_8(func_7(), 256, 0))
	{
		return 1;
	}
	if (!func_9(*uParam0))
	{
		if (func_11(func_10()))
		{
			return 1;
		}
		if (func_12())
		{
			return 1;
		}
	}
	if (func_13(uParam0))
	{
		func_14(0);
		return 1;
	}
	if (func_15() >= 13)
	{
		return 1;
	}
	if (func_16(uParam0) != 3 && func_16(uParam0) != 4)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_17() == 9)
	{
		return 1;
	}
	if (func_11(func_18(0)))
	{
		return 1;
	}
	return 0;
}

int func_4(var uParam0)
{
	func_19(uParam0);
	switch (func_16(uParam0))
	{
		case 0:
			func_20(uParam0);
			break;
		case 1:
			if (!func_21(&(uParam0->f_1)))
			{
				func_22(uParam0);
			}
			func_23(uParam0);
			if (!func_24(&(uParam0->f_1)))
			{
				func_25(uParam0);
			}
			break;
		case 2:
			if (!func_21(&(uParam0->f_1)))
			{
				func_26(uParam0);
			}
			func_27(uParam0);
			if (!func_24(&(uParam0->f_1)))
			{
				func_28(uParam0);
			}
			break;
		case 3:
			if (!func_21(&(uParam0->f_1)))
			{
				func_29(uParam0);
			}
			func_30(uParam0);
			if (!func_24(&(uParam0->f_1)))
			{
				func_31(uParam0);
			}
			break;
		case 4:
			if (!func_21(&(uParam0->f_1)))
			{
				func_32(uParam0);
			}
			func_33(uParam0);
			if (!func_24(&(uParam0->f_1)))
			{
				func_34(uParam0);
			}
			break;
		case 5:
			if (!func_21(&(uParam0->f_1)))
			{
				func_35(uParam0);
			}
			func_36(uParam0);
			if (!func_24(&(uParam0->f_1)))
			{
				func_37(uParam0);
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

void func_5(var uParam0)
{
	int iVar0;

	if (func_16(uParam0) != 6)
	{
		func_38(uParam0);
	}
	if (Global_13)
	{
		Global_13 = 0;
	}
	if ((((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_14)
	{
		(((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_14 = 0;
	}
	if ((((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15)
	{
		(((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15 = 0;
	}
	if (uParam0->f_308)
	{
		func_39(uParam0, 0);
	}
	if (func_40(uParam0))
	{
		func_41(uParam0);
	}
	if (6 == *uParam0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_8)
		{
			if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 6))
			{
				func_42();
			}
			iVar0++;
		}
	}
}

int func_6(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_7()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_8(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_11(*Global_1051163) && !func_43(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_44(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_45(iParam3, 255))
	{
		Global_1070356->f_26837 = 4;
		return 1;
	}
	if (Global_262996[&Global_1275573 /*70*/] > 2)
	{
		Global_1070356->f_26837 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1070356->f_26837 = 6;
		return 1;
	}
	if (func_12())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_11(*Global_1051163))
		{
			Global_1070356->f_26837 = 8;
			return 1;
		}
	}
	if (Global_265331->f_124602 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265331->f_124602))
	{
		Global_1070356->f_26837 = 9;
		return 1;
	}
	Global_1070356->f_26837 = 0;
	return 0;
}

int func_9(var uParam0)
{
	return 0;
}

struct<2> func_10()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_18(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_18(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

int func_11(struct<2> Param0)
{
	if (!func_46(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_47(Param0))
	{
		return 0;
	}
	return 1;
}

int func_12()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_11(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_13(var uParam0)
{
	switch (func_48())
	{
		case 1:
			if (MISC::IS_BIT_SET(uParam0->f_305, 5))
			{
				return 1;
			}
			break;
		case 2:
			if (MISC::IS_BIT_SET(uParam0->f_305, 4))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_14(int iParam0)
{
	Global_1272159->f_8 = iParam0;
}

int func_15()
{
	return Global_1572887->f_248;
}

int func_16(var uParam0)
{
	return uParam0->f_1;
}

int func_17()
{
	return Global_1915180->f_19742;
}

struct<2> func_18(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

void func_19(var uParam0)
{
	if (uParam0->f_306 >= 3)
	{
		uParam0->f_306 = 0;
		return;
	}
	uParam0->f_306++;
}

void func_20(var uParam0)
{
	func_49(uParam0);
}

bool func_21(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_4, *uParam0);
}

void func_22(var uParam0)
{
	func_50(&(uParam0->f_1));
	func_51(uParam0, *uParam0);
	func_52(*uParam0);
	if (*uParam0 != 5)
	{
		func_53(uParam0);
	}
	func_54(uParam0);
}

void func_23(var uParam0)
{
	if (*uParam0 == 5)
	{
		func_53(uParam0);
	}
	if (!func_55(uParam0))
	{
		return;
	}
	func_49(uParam0);
}

bool func_24(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_5, *uParam0);
}

void func_25(var uParam0)
{
	func_56(&(uParam0->f_1));
}

void func_26(var uParam0)
{
	func_50(&(uParam0->f_1));
}

void func_27(var uParam0)
{
	func_57(uParam0);
	func_58(uParam0);
	if (!func_59(uParam0))
	{
		return;
	}
	func_60(0);
	if (!func_61(uParam0))
	{
		return;
	}
	if (!func_62(uParam0))
	{
		return;
	}
	if (!func_63(uParam0))
	{
		return;
	}
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (CAM::_0xA2B1C7EF759A63CE() < 1f)
	{
		return;
	}
	func_49(uParam0);
}

void func_28(var uParam0)
{
	func_56(&(uParam0->f_1));
}

void func_29(var uParam0)
{
	func_50(&(uParam0->f_1));
	func_64(*uParam0);
	func_65(uParam0, 0);
	if (MISC::IS_BIT_SET(uParam0->f_305, 6))
	{
		func_66(uParam0);
	}
}

void func_30(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_305, 2))
	{
		func_67(uParam0);
		if (MISC::IS_BIT_SET(uParam0->f_305, 2))
		{
			if (!uParam0->f_308)
			{
				func_39(uParam0, 1);
				func_68(uParam0);
			}
		}
		return;
	}
	func_69(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_305, 7))
	{
		func_70(uParam0);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 3))
	{
		func_71(uParam0);
	}
	func_72(uParam0);
	if (func_40(uParam0))
	{
		func_41(uParam0);
	}
	func_73(0, 0, 1);
	if (!func_74(uParam0) && !func_75(uParam0))
	{
		return;
	}
	func_49(uParam0);
}

void func_31(var uParam0)
{
	func_56(&(uParam0->f_1));
	func_39(uParam0, 0);
	func_76(&(uParam0->f_311));
	func_65(uParam0, 1);
	if (func_77(uParam0->f_310))
	{
		func_78(&(uParam0->f_310), 1, 1);
	}
	if (func_77(uParam0->f_315))
	{
		func_78(&(uParam0->f_315), 1, 1);
	}
	if (func_77(uParam0->f_316))
	{
		func_78(&(uParam0->f_316), 1, 1);
	}
	func_79(uParam0, 1);
}

void func_32(var uParam0)
{
	func_50(&(uParam0->f_1));
	func_80(uParam0);
}

void func_33(var uParam0)
{
	func_73(0, 0, 1);
	if (!func_81(uParam0))
	{
		return;
	}
	func_49(uParam0);
}

void func_34(var uParam0)
{
	func_56(&(uParam0->f_1));
	func_82(uParam0);
}

void func_35(var uParam0)
{
	func_50(&(uParam0->f_1));
	func_52(*uParam0);
	if (!MISC::IS_BIT_SET(uParam0->f_305, 11))
	{
		func_79(uParam0, 0);
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_305, 10))
	{
		func_79(uParam0, 0);
	}
	else
	{
		func_83(1);
		Global_1272159->f_9 = 1;
	}
	if (MISC::IS_BIT_SET(uParam0->f_305, 18))
	{
		PED::_0xCB9401F918CB0F75(Global_34, "FreeRoamSpawn", 1, 20);
	}
}

void func_36(var uParam0)
{
	bool bVar0;

	func_73(0, 0, 1);
	bVar0 = true;
	if (!func_38(uParam0))
	{
		bVar0 = false;
	}
	if (!func_84(*uParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_85(*uParam0, 0);
		func_86(*uParam0, 1);
		func_87(uParam0);
		func_88(uParam0);
		func_49(uParam0);
	}
}

void func_37(var uParam0)
{
	func_56(&(uParam0->f_1));
}

int func_38(var uParam0)
{
	if (!func_89(uParam0))
	{
		return 0;
	}
	if (!func_90(uParam0))
	{
		return 0;
	}
	func_91(uParam0);
	func_92(uParam0);
	return 1;
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_93(1);
		WEAPON::_0xFCCC886EDE3C63EC(Global_1275573->f_8, 2, 1);
		PAD::_0xF239400E16C23E08(0, 0);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1275573->f_8, false, true);
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
		if (func_94())
		{
			func_42();
		}
		func_95();
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		if (func_96() || PED::_0x50F124E6EF188B22(Global_1275573->f_8))
		{
			func_97(1);
			func_98();
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		func_99();
		Global_13 = 1;
		func_100(Global_1275573->f_8);
		if (func_101(Global_1275573->f_8))
		{
			uParam0->f_314 = func_102(Global_1275573->f_8);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1275573->f_8, true, true);
		}
		func_103(0);
		uParam0->f_308 = 1;
		HUD::_HIDE_HUD_COMPONENT(-1319249689);
		NETWORK::_0x4B05B97BA46F419D(0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
		func_104(0, 28);
	}
	else
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_1275573->f_8, true);
		PAD::_0xA0CEFCEA390AAB9B(0);
		func_93(0);
		func_105();
		Global_13 = 0;
		func_103(1);
		uParam0->f_308 = 0;
		HUD::_DISPLAY_HUD_COMPONENT(-1319249689);
		NETWORK::_0x4B05B97BA46F419D(1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		func_104(1, 2);
	}
}

bool func_40(var uParam0)
{
	return uParam0->f_284 != 0;
}

void func_41(var uParam0)
{
	if (uParam0->f_284 == 0)
	{
		return;
	}
	_NAMESPACE76::_0x00A15B94CBA4F76F(uParam0->f_284);
	uParam0->f_284 = 0;
}

void func_42()
{
	func_106(0);
}

bool func_43(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_44(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_45(int iParam0, int iParam1)
{
	if (!Global_1070356->f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1185577[iParam1 /*12*/] && iParam0) != 0;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070356->f_634.f_601;
		case 3:
			return Global_1070356->f_634.f_2103;
		case 4:
			return Global_1070356->f_634.f_12605;
		case 5:
			return Global_1070356->f_634.f_12907;
		case 6:
			return Global_1070356->f_634.f_15909;
		case 7:
			return Global_1070356->f_634.f_15980;
		case 8:
			return Global_1070356->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

int func_48()
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1275573->f_16);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (func_107(Global_1275573->f_16))
	{
		return 1;
	}
	return 2;
}

void func_49(var uParam0)
{
	int iVar0;

	uParam0->f_1.f_1 = uParam0->f_1;
	MISC::SET_BIT(&(uParam0->f_1.f_5), uParam0->f_1.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_1.f_4), uParam0->f_1.f_1);
	iVar0 = uParam0->f_1;
	iVar0++;
	uParam0->f_1 = iVar0;
	if (uParam0->f_1 == 7)
	{
		uParam0->f_1 = 6;
	}
	((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/] = uParam0->f_1;
}

void func_50(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_4), *uParam0);
}

int func_51(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
		default:
			return 0;
			uParam0->f_298 = { -870.1846f, -1276.62f, 42.2367f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(-871.3538f, -1273.499f, 42.87627f, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@mpgvo_int1", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "1-Male", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "2-Female", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { -874.35f, -1335.12f, 42.38f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			return 1;
		case 2:
			uParam0->f_298 = { -870.1846f, -1276.62f, 42.2367f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(-871.3538f, -1273.499f, 42.87627f, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@mpgvo_int2a", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "1-Male", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "2-Female", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { -874.35f, -1335.12f, 42.38f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 3);
			StringCopy(&((uParam0->f_8[1 /*40*/])->f_3), "cutscene@mpgvo_int2b", 64);
			StringCopy((uParam0->f_8[1 /*40*/])->f_11[0 /*3*/], "1-Male", 24);
			StringCopy((uParam0->f_8[1 /*40*/])->f_11[1 /*3*/], "2-Female", 24);
			(uParam0->f_8[1 /*40*/])->f_33 = { -874.35f, -1335.12f, 42.38f };
			(uParam0->f_8[1 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[1 /*40*/])->f_2 = 256;
			MISC::SET_BIT(&((uParam0->f_8[1 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[1 /*40*/])->f_1), 4);
			return 1;
		case 3:
			uParam0->f_298 = { 1352.95f, -1306.359f, 75.9113f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_298, 0f, 0f, 0f, 5f, 5f, 5f);
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@BHINT_INT", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { 1359.71f, -1305.96f, 76.768f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "BHINT_INT_P3_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/])->f_4), "payLater", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "BHINT_INT_P3_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/])->f_4), "payNow", 24);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			uParam0->f_319 = 15000;
			return 1;
		case 4:
			uParam0->f_298 = { 0f, 0f, 0f };
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@TRINT_INT", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/])->f_4), "payLater", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/])->f_4), "payNow", 24);
			uParam0->f_89[0 /*15*/] = joaat("CS_MP_CRIPPS");
			(uParam0->f_89[0 /*15*/])->f_8 = func_108();
			(uParam0->f_89[0 /*15*/])->f_2 = { -319.241f, 797.036f, 116.886f };
			(uParam0->f_89[0 /*15*/])->f_11 = 0;
			StringCopy(&((uParam0->f_89[0 /*15*/])->f_11.f_1), "JB_Cripps", 24);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 9);
			MISC::SET_BIT(&(uParam0->f_305), 11);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			uParam0->f_319 = 15000;
			return 1;
		case 5:
			uParam0->f_298 = { 0f, 0f, 0f };
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@COINT_INT", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "COINT_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/])->f_4), "payLater", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "COINT_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/])->f_4), "payNow", 24);
			switch (func_109())
			{
				case 135:
					(uParam0->f_8[0 /*40*/])->f_39 = 0;
					break;
				case 136:
					(uParam0->f_8[0 /*40*/])->f_39 = 1;
					break;
				case 137:
					(uParam0->f_8[0 /*40*/])->f_39 = 2;
					break;
				case 138:
					(uParam0->f_8[0 /*40*/])->f_39 = 3;
					break;
				case 139:
					(uParam0->f_8[0 /*40*/])->f_39 = 4;
					break;
				case 140:
					(uParam0->f_8[0 /*40*/])->f_39 = 5;
					break;
				case 141:
					(uParam0->f_8[0 /*40*/])->f_39 = 6;
					break;
				case 142:
					(uParam0->f_8[0 /*40*/])->f_39 = 7;
					break;
				case 143:
					(uParam0->f_8[0 /*40*/])->f_39 = 8;
					break;
				case 144:
					(uParam0->f_8[0 /*40*/])->f_39 = 9;
					break;
				case 145:
					(uParam0->f_8[0 /*40*/])->f_39 = 10;
					break;
				case 146:
					(uParam0->f_8[0 /*40*/])->f_39 = 11;
					break;
			}
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 9);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			(uParam0->f_150[0 /*13*/])->f_1 = joaat("MP005_P_MP_SHADYBIRDCAGE01X");
			StringCopy(&((uParam0->f_150[0 /*13*/])->f_9.f_1), "Pigeoncage", 24);
			(uParam0->f_150[0 /*13*/])->f_2 = { -2.8f, 0.86f, 1.7f };
			(uParam0->f_150[1 /*13*/])->f_1 = joaat("P_CHAIR20X");
			StringCopy(&((uParam0->f_150[1 /*13*/])->f_9.f_1), "Nazar_Chair", 24);
			(uParam0->f_150[1 /*13*/])->f_2 = { -0.66f, -4.02f, -0.07f };
			(uParam0->f_150[2 /*13*/])->f_1 = joaat("MP005_P_MP_COLLECTORBOX01X");
			StringCopy(&((uParam0->f_150[2 /*13*/])->f_9.f_1), "CollectorBox", 24);
			(uParam0->f_150[2 /*13*/])->f_2 = { 0.26f, -1.98f, 1.04f };
			(uParam0->f_150[3 /*13*/])->f_1 = joaat("MP005_P_COLLECTORWAGON01_DRAW2");
			StringCopy(&((uParam0->f_150[3 /*13*/])->f_9.f_1), "Collector_Drawer_2", 24);
			(uParam0->f_150[3 /*13*/])->f_2 = { -0.5f, -0.25f, 1.71f };
			uParam0->f_319 = 20000;
			return 1;
		case 6:
			uParam0->f_298 = { 1446.741f, 374.882f, 88.88737f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_298, 0f, 0f, 0f, 13.868f, 15.947f, 8.828f);
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@moon_int", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { 1447.91f, 371.75f, 88.933f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "MOON_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/])->f_4), "refuse", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "MOON_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/])->f_4), "ACCEPT", 24);
			uParam0->f_89[0 /*15*/] = joaat("CS_MP_CRIPPS");
			(uParam0->f_89[0 /*15*/])->f_11 = 0;
			StringCopy(&((uParam0->f_89[0 /*15*/])->f_11.f_1), "JB_Cripps", 24);
			(uParam0->f_89[0 /*15*/])->f_8 = func_108();
			(uParam0->f_89[0 /*15*/])->f_9 = joaat("WEAPON_REVOLVER_CATTLEMAN");
			uParam0->f_89[1 /*15*/] = joaat("CS_MP_MAGGIE");
			(uParam0->f_89[1 /*15*/])->f_11 = 0;
			StringCopy(&((uParam0->f_89[1 /*15*/])->f_11.f_1), "MAGGIE", 24);
			(uParam0->f_89[1 /*15*/])->f_8 = joaat("META_OUTFIT_DEFAULT");
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			MISC::SET_BIT(&(uParam0->f_305), 17);
			uParam0->f_319 = 15000;
			return 1;
		}

void func_52(int iParam0)
{
	if (!func_110(iParam0))
	{
		return;
	}
	if ((((*Global_1055966)[&Global_1275573 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2 != -1)
	{
		(((*Global_1055966)[&Global_1275573 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2 = -1;
	}
}

int func_53(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (MISC::IS_BIT_SET(uParam0->f_305, 9) && func_111(uParam0->f_298))
	{
		if (!func_112(*uParam0, &vVar0, &vVar3, 1))
		{
		}
		else
		{
			if (func_113(uParam0->f_298, vVar0))
			{
				return 0;
			}
			uParam0->f_298 = { vVar0 };
			uParam0->f_301 = { vVar3 };
			iVar6 = 0;
			while (iVar6 < 2)
			{
				(uParam0->f_8[iVar6 /*40*/])->f_33 = { vVar0 };
				(uParam0->f_8[iVar6 /*40*/])->f_36 = { vVar3 };
				iVar6++;
			}
			return 1;
		}
	}
	else if (func_111(uParam0->f_298))
	{
	}
	return 0;
}

void func_54(var uParam0)
{
	vector3 vVar0;

	switch (*uParam0)
	{
		case 4:
		default:
			break;
	}
	return;
	vVar0 = { func_114(&Global_1275573) };
	switch (vVar0.y)
	{
		case joaat("CUMBERLAND_FOREST_CAMP"):
		case joaat("GRIZZLIES_CAMP"):
		case joaat("HEARTLAND_CAMP"):
		case joaat("BIG_VALLEY_CAMP"):
		default:
			return;
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@TRINT_INT", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "TRINT_INT_P4_T01_Shot_1", 32);
			(uParam0->f_89[0 /*15*/])->f_2 = { -319.241f, 797.036f, 116.886f };
		case joaat("HENNIGANS_STEAD_CAMP"):
		case joaat("RIO_BRAVO_CAMP"):
		case joaat("GREAT_PLAINS_CAMP"):
		case joaat("TALL_TREES_CAMP"):
		case joaat("CHOLLA_SPRINGS_CAMP"):
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@TRINT_INTB", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "TRINT_INT_P4B1_T01_Shot_1", 32);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "TRINT_INT_P4B1_T01_Shot_1", 32);
			(uParam0->f_89[0 /*15*/])->f_2 = { -3682.435f, -2622.561f, -14.402f };
			break;
		case joaat("ROANOKE_RIDGE_CAMP"):
		case joaat("BAYOU_NAWAS_CAMP"):
		case joaat("SCARLETT_MEADOWS_CAMP"):
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@TRINT_INTC", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "TRINT_INT_P4C1_T01_Shot_1", 32);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "TRINT_INT_P4C1_T01_Shot_1", 32);
			(uParam0->f_89[0 /*15*/])->f_2 = { 2823.36f, -1314.97f, 45.76f };
			break;
	}
}

int func_55(var uParam0)
{
	switch (func_115(uParam0))
	{
		case 0:
			func_116(uParam0, 1);
			break;
		case 1:
			if (func_117(uParam0))
			{
				func_116(uParam0, 2);
			}
			break;
		case 2:
			if (func_118(uParam0))
			{
				func_116(uParam0, 3);
			}
			break;
		case 3:
			func_119(uParam0);
			func_116(uParam0, 4);
			break;
		case 4:
			func_116(uParam0, 5);
			break;
		case 5:
			return 1;
	}
	return 0;
}

void func_56(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_5), *uParam0);
}

void func_57(var uParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (MISC::IS_BIT_SET((uParam0->f_8[iVar1 /*40*/])->f_1, 3) || MISC::IS_BIT_SET((uParam0->f_8[iVar1 /*40*/])->f_1, 4))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_305, 4) && !MISC::IS_BIT_SET(uParam0->f_305, 5))
		{
			switch (func_48())
			{
				case 2:
					MISC::SET_BIT(&(uParam0->f_305), 5);
					break;
				case 1:
					MISC::SET_BIT(&(uParam0->f_305), 4);
					break;
			}
		}
	}
}

void func_58(var uParam0)
{
	struct<19> Var0;
	char* sVar19;
	char* sVar20;
	int iVar21;
	int iVar22;

	switch (func_120(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_121(uParam0) == 0)
			{
				func_122(uParam0, 0);
				return;
			}
			switch (func_121(uParam0))
			{
				case 1:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_LEADER";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_LEADER";
					break;
				case 3:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_WANTED";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_WANTED";
					break;
				case 2:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_IN_PROGRESS";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_IN_PROGRESS";
					break;
			}
			Var0.f_7.f_3 = 1;
			Var0.f_7 = joaat("IB_EXIT");
			func_123(uParam0, Var0, sVar19, sVar20);
			func_122(uParam0, 2);
			break;
		case 2:
			if (!func_40(uParam0))
			{
				return;
			}
			iVar21 = func_124();
			if (iVar21 != -1577439368)
			{
				iVar22 = PED::GET_MOUNT(Global_1275573->f_8);
				if (ENTITY::DOES_ENTITY_EXIST(iVar22))
				{
					func_125(iVar22, 1, 1);
				}
				func_126(Global_1275573->f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
				func_41(uParam0);
				func_122(uParam0, 3);
			}
			break;
		case 3:
			if (func_127(255) == 1)
			{
				func_122(uParam0, 0);
				func_128(uParam0, 0);
			}
			break;
	}
}

int func_59(var uParam0)
{
	int iVar0;

	if (!func_129(*uParam0))
	{
		iVar0 = 1;
		if (func_130(*uParam0))
		{
			if (Global_1275573->f_16 != &Global_1275573)
			{
				iVar0 = 0;
			}
		}
		if (func_131(uParam0) && iVar0)
		{
			if (func_132())
			{
				return 1;
			}
		}
		return 0;
	}
	if (Global_1275573->f_16 == &Global_1275573 || !_NAMESPACE26::_0x0F99F6436528A089(Global_1275573->f_15))
	{
		if (func_133(*uParam0) || func_131(uParam0))
		{
			if (func_132())
			{
				return 1;
			}
		}
	}
	else if (_NAMESPACE26::_0x0F99F6436528A089(Global_1275573->f_15))
	{
		if (Global_1275573->f_16 >= 32 || Global_1275573->f_16 < 0)
		{
			return 0;
		}
		if (func_134(*uParam0, PLAYER::INT_TO_PLAYERINDEX(Global_1275573->f_16)) == 3)
		{
			if (!func_135(*uParam0))
			{
				return 1;
			}
			else if (func_131(uParam0))
			{
				func_136(uParam0, 2);
			}
		}
		else if (func_131(uParam0))
		{
			if (!func_137())
			{
				if (!PED::_0x3AA24CCC0D451379(Global_1275573->f_8))
				{
					func_136(uParam0, 1);
				}
			}
		}
	}
	return 0;
}

void func_60(bool bParam0)
{
	if (func_138(bParam0))
	{
		func_139(func_17(), 0);
	}
}

int func_61(var uParam0)
{
	if (!&Global_1275573->f_22[&Global_1275573])
	{
		return 0;
	}
	if (!func_140(255))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Global_1275573->f_8))
	{
		return 0;
	}
	if (PED::_0x3AA24CCC0D451379(Global_1275573->f_8))
	{
		TASK::_0x79559BAD83CCD038(Global_1275573->f_8, 3, 0, 0, 0, 1090519040);
		return 0;
	}
	if (func_141(Global_1275573->f_10, 1, 0, 1))
	{
		if (Global_1275573->f_16 == &Global_1275573)
		{
			func_136(uParam0, 3);
		}
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1275573->f_8, true))
	{
		return 0;
	}
	if (Global_1102099->f_935.f_27 == 6)
	{
		return 0;
	}
	if (func_138(0))
	{
		return 0;
	}
	if (func_127(255) != 1)
	{
		return 0;
	}
	return 1;
}

int func_62(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[2];
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	switch (func_142(uParam0))
	{
		case 0:
			func_143(uParam0);
			func_144(uParam0, 1);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!func_145(uParam0, iVar0))
				{
				}
				else
				{
					if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
					{
						switch (func_48())
						{
							case 2:
								Jump @353; //curOff = 144
								Jump @154; //curOff = 147
								return 0;
							}
							else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
							{
								switch (func_48())
								{
									case 1:
										Jump @353; //curOff = 197
										Jump @207; //curOff = 200
										return 0;
									}
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_89[iVar2 /*15*/])->f_1))
										{
										}
										else if ((uParam0->f_89[iVar2 /*15*/])->f_11 == -1)
										{
										}
										else if ((uParam0->f_89[iVar2 /*15*/])->f_11 != iVar0)
										{
										}
										else if (MISC::_0x375F5870A7B8BEC1(&((uParam0->f_89[iVar2 /*15*/])->f_11.f_1)))
										{
										}
										else
										{
											ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_89[iVar2 /*15*/])->f_1, false);
											ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam0->f_8[iVar0 /*40*/]), &((uParam0->f_89[iVar2 /*15*/])->f_11.f_1), (uParam0->f_89[iVar2 /*15*/])->f_1, 0);
										}
										iVar2++;
									}
								}
								iVar0++;
							}
							func_144(uParam0, 2);
							break;
						case 2:
							iVar0 = 0;
							while (iVar0 < 2)
							{
								if (!func_145(uParam0, iVar0))
								{
								}
								else
								{
									if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
									{
										switch (func_48())
										{
											case 2:
												Jump @579; //curOff = 436
												Jump @446; //curOff = 439
												return 0;
											}
											else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
											{
												switch (func_48())
												{
													case 1:
														Jump @579; //curOff = 489
														Jump @499; //curOff = 492
														return 0;
													}
													if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 1))
													{
													}
													else if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 2))
													{
													}
													else
													{
														uParam0->f_229[iVar0 /*27*/] = func_146(*uParam0, iVar0);
														if (!SCRIPTS::_0x179A6F0EE2E79026(uParam0->f_229[iVar0 /*27*/]))
														{
														}
														else
														{
															iVar0++;
															iVar0 = 0;
															while (iVar0 < 2)
															{
																if (!func_145(uParam0, iVar0))
																{
																}
																else
																{
																	iVar1 = 0;
																	while (iVar1 < 32)
																	{
																		if (!SCRIPTS::_0x72B2E00C9BAC6789(uParam0->f_229[iVar0 /*27*/], iVar1))
																		{
																		}
																		else
																		{
																			iVar3++;
																		}
																		iVar1++;
																	}
																	(uParam0->f_229[iVar0 /*27*/])->f_26 = iVar3;
																	iVar3 = 0;
																}
																iVar0++;
															}
															func_144(uParam0, 3);
															Jump @1784; //curOff = 689
															iVar0 = 0;
															while (iVar0 < 2)
															{
																if (!func_145(uParam0, iVar0))
																{
																	iVar5[iVar0] = 1;
																}
																else if (!func_129(*uParam0))
																{
																	iVar8 = PLAYER::INT_TO_PLAYERINDEX(&Global_1275573);
																	if (SCRIPTS::_0x72B2E00C9BAC6789(uParam0->f_229[iVar0 /*27*/], iVar1))
																	{
																		if (func_147(uParam0, iVar8, iVar0, 0))
																		{
																			SCRIPTS::_0xD426E2E3288469D6(uParam0->f_229[iVar0 /*27*/], iVar1);
																		}
																		else
																		{
																			Jump @802; //curOff = 792
																			iVar5[iVar0] = 1;
																			Jump @1301; //curOff = 802
																			if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
																			{
																				switch (func_48())
																				{
																					case 2:
																						iVar5[iVar0] = 1;
																						Jump @1301; //curOff = 852
																						Jump @862; //curOff = 855
																						return 0;
																					}
																					else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
																					{
																						switch (func_48())
																						{
																							case 1:
																								iVar5[iVar0] = 1;
																								Jump @1301; //curOff = 912
																								Jump @922; //curOff = 915
																								return 0;
																							}
																							iVar2 = 0;
																							iVar1 = 0;
																							while (iVar1 < 4)
																							{
																								if (func_148(uParam0, iVar0, iVar1, 0))
																								{
																									if (func_149(uParam0, iVar0, iVar1))
																									{
																										if (!((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_1)
																										{
																											PED::_SET_PED_COMPONENT_DISABLED(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]), joaat("HOLSTERS_LEFT"), 1);
																											PED::_UPDATE_PED_VARIATION(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]), false, true, true, true, false);
																											((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_1 = 1;
																										}
																										else
																										{
																											iVar2++;
																											Jump @1060; //curOff = 1054
																											Jump @1067; //curOff = 1057
																											iVar5[iVar0] = 1;
																										}
																										iVar1++;
																										if (iVar2 != (uParam0->f_229[iVar0 /*27*/])->f_26)
																										{
																											iVar5[iVar0] = 0;
																										}
																										else
																										{
																											iVar5[iVar0] = 1;
																										}
																										else
																										{
																											iVar1 = 0;
																											while (iVar1 < 32)
																											{
																												if (!SCRIPTS::_0x72B2E00C9BAC6789(uParam0->f_229[iVar0 /*27*/], iVar1))
																												{
																												}
																												else
																												{
																													iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
																													if (!NETWORK::_0x255A5EF65EDA9167(iVar8))
																													{
																													}
																													else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8))
																													{
																													}
																													else
																													{
																														iVar10 = -1;
																														if (!func_129(*uParam0))
																														{
																															iVar10 = 0;
																														}
																														else
																														{
																															iVar9 = 0;
																															while (iVar9 < 7)
																															{
																																if (&(((*Global_1055966)[Global_1275573->f_16 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_3[iVar9] == iVar8)
																																{
																																	iVar10 = iVar9;
																																}
																																iVar9++;
																															}
																														}
																														if (iVar10 != -1)
																														{
																															if (func_147(uParam0, iVar8, iVar0, iVar10))
																															{
																																SCRIPTS::_0xD426E2E3288469D6(uParam0->f_229[iVar0 /*27*/], iVar1);
																															}
																															else
																															{
																																iVar1++;
																																iVar0++;
																																iVar0 = 0;
																																while (iVar0 < 2)
																																{
																																	if (!&iVar5[iVar0])
																																	{
																																		bVar11 = true;
																																	}
																																	iVar0++;
																																}
																																if (!bVar11)
																																{
																																	func_144(uParam0, 4);
																																}
																																Jump @1784; //curOff = 1354
																																iVar0 = 0;
																																while (iVar0 < 2)
																																{
																																	if (!func_145(uParam0, iVar0))
																																	{
																																	}
																																	else
																																	{
																																		if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
																																		{
																																			switch (func_48())
																																			{
																																				case 2:
																																					Jump @1650; //curOff = 1421
																																					Jump @1431; //curOff = 1424
																																					return 0;
																																				}
																																				else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
																																				{
																																					switch (func_48())
																																					{
																																						case 1:
																																							Jump @1650; //curOff = 1474
																																							Jump @1484; //curOff = 1477
																																							return 0;
																																						}
																																						iVar1 = 0;
																																						while (iVar1 < 4)
																																						{
																																							if (!func_148(uParam0, iVar0, iVar1, 1))
																																							{
																																							}
																																							else if (((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_2 != &uParam0->f_8[iVar0 /*40*/])
																																							{
																																							}
																																							else if (MISC::_0x375F5870A7B8BEC1(&(((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_2.f_1)))
																																							{
																																							}
																																							else
																																							{
																																								ENTITY::FREEZE_ENTITY_POSITION(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]), false);
																																								ANIMSCENE::SET_ANIM_SCENE_ENTITY(((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_2, &(((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_2.f_1), &((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]), 0);
																																							}
																																							iVar1++;
																																						}
																																					}
																																					iVar0++;
																																				}
																																				if (*uParam0 == 5)
																																				{
																																					func_144(uParam0, 5);
																																				}
																																				else
																																				{
																																					func_144(uParam0, 6);
																																				}
																																				Jump @1784; //curOff = 1683
																																				iVar4 = 0;
																																				while (iVar4 <= 5)
																																				{
																																					if (!func_150(uParam0, iVar4))
																																					{
																																					}
																																					else if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_150[iVar4 /*13*/])))
																																					{
																																					}
																																					else
																																					{
																																						ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam0->f_8[0 /*40*/]), &((uParam0->f_150[iVar4 /*13*/])->f_9.f_1), &(uParam0->f_150[iVar4 /*13*/]), 0);
																																					}
																																					iVar4++;
																																				}
																																				func_144(uParam0, 6);
																																				Jump @1784; //curOff = 1777
																																				return 1;
																																			}
																																			return 0;
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}

int func_63(var uParam0)
{
	var uVar0;

	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
		case 6:
			if (PED::IS_PED_ON_MOUNT(Global_1275573->f_8))
			{
				func_151(&uVar0, 2);
				func_151(&uVar0, 256);
				if (func_152(Global_1275573->f_8, &uVar0, 32, 0, 0, 3f, 100, 0, 0))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			return 0;
	}
	return 1;
}

void func_64(int iParam0)
{
	if (!func_110(iParam0))
	{
		return;
	}
	if (Global_1275573->f_16 == &Global_1275573 && (((*Global_1055966)[&Global_1275573 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2 == -1)
	{
		(((*Global_1055966)[&Global_1275573 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_65(var uParam0, int iParam1)
{
}

void func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;

	iVar1 = 0;
	if (!func_153(*uParam0, &iVar0, &iVar1))
	{
		return;
	}
	iVar2 = func_154(iVar0, 0, 1, -1, 1);
	if (!func_155(iVar0, iVar2, 1))
	{
		return;
	}
	if (func_156(&(uParam0->f_287), iVar0, iVar1, 1, iVar2, -1))
	{
		Var3.f_7 = -142743235;
		Var3.f_6 = 1;
		func_157(uParam0->f_287.f_1, Var3);
		MISC::SET_BIT(&(uParam0->f_305), 10);
	}
}

void func_67(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_145(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
			{
				if (func_48() != 1)
				{
				}
				else
				{
					Jump @90; //curOff = 58
					if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
					{
						if (func_48() != 2)
						{
						}
						else if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 1))
						{
						}
						else if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(&(uParam0->f_8[iVar0 /*40*/]), 0))
						{
							func_158(uParam0, iVar0);
							ANIMSCENE::START_ANIM_SCENE(&(uParam0->f_8[iVar0 /*40*/]));
							return;
						}
						else
						{
							bVar1 = true;
							if (MISC::IS_BIT_SET(uParam0->f_305, 15))
							{
								func_79(uParam0, 0);
							}
						}
						iVar0++;
						if (bVar1)
						{
							MISC::SET_BIT(&(uParam0->f_305), 2);
						}
					}
				}
			}
		}
	}

void func_68(var uParam0)
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	func_159();
	vVar0 = { func_160(*uParam0) };
	if (func_161(vVar0))
	{
		func_162(vVar0, 0);
	}
}

void func_69(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_145(uParam0, iVar0))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_305, 7))
		{
			if (6 == *uParam0)
			{
				func_163(uParam0, iVar0);
			}
			else
			{
				func_164(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_70(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_153(*uParam0, &uVar0, &iVar1))
	{
		return;
	}
	if (uParam0->f_287.f_1 == -1)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 10))
	{
		return;
	}
	iVar2 = func_165(&(uParam0->f_287));
	switch (iVar2)
	{
		case 1:
		case 5:
			break;
		case 2:
		case 4:
			uParam0->f_287.f_1 = -1;
			break;
		case 3:
			uParam0->f_287.f_1 = -1;
			func_166(1);
			break;
	}
}

void func_71(var uParam0)
{
	func_167(uParam0);
	func_168(uParam0);
	func_72(uParam0);
	MISC::SET_BIT(&(uParam0->f_305), 3);
}

void func_72(var uParam0)
{
	int iVar0;

	if (*uParam0 != 5)
	{
		return;
	}
	if (MISC::IS_BIT_SET(uParam0->f_305, 13))
	{
		return;
	}
	if (!func_169(38, &iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_170(func_109(), 1);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
	MISC::SET_BIT(&(uParam0->f_305), 13);
}

void func_73(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1070356->f_7 = 1;
	if ((Global_1275573->f_21 - Global_1070356->f_9) > 2)
	{
		if (bParam2)
		{
			func_171(20f);
		}
	}
	Global_1070356->f_9 = Global_1275573->f_21;
	if (bParam0)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_172())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::_0x634F4A0562CF19B8();
	func_173();
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

int func_74(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_145(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
			{
				switch (func_48())
				{
					case 2:
						Jump @306; //curOff = 69
						Jump @79; //curOff = 72
						return 0;
					}
					else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
					{
						switch (func_48())
						{
							case 1:
								Jump @306; //curOff = 122
								Jump @132; //curOff = 125
								return 0;
							}
							if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 1))
							{
							}
							else if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(uParam0->f_8[iVar0 /*40*/]), 0))
							{
								if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
								{
									if (MISC::IS_BIT_SET(uParam0->f_305, 14))
									{
										if (!ENTITY::HAS_ANIM_EVENT_FIRED(&((uParam0->f_229[iVar0 /*27*/])->f_1[0 /*6*/]), MISC::GET_HASH_KEY("NotFinalPlaylist")) && func_174(uParam0, iVar0))
										{
											fVar1 = ANIMSCENE::_0x49F1D143ADE32656(&(uParam0->f_8[iVar0 /*40*/]));
											fVar2 = ANIMSCENE::_GET_ANIM_SCENE_TIME(&(uParam0->f_8[iVar0 /*40*/]));
											fVar3 = (fVar1 - fVar2);
											if (fVar3 < 1f)
											{
												CAM::DO_SCREEN_FADE_OUT(500);
											}
										}
									}
								}
							}
							else
							{
								func_175(uParam0);
								return 1;
							}
						}
						iVar0++;
					}
					return 0;
				}

bool func_75(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;

	if (MISC::IS_BIT_SET(uParam0->f_305, 12))
	{
		return false;
	}
	if (!func_176(&(uParam0->f_311)))
	{
		func_177(&(uParam0->f_311), 0);
		return false;
	}
	else if (func_178(&(uParam0->f_311)) < 5000)
	{
		return false;
	}
	if (func_129(*uParam0))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar1])))
			{
			}
			else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar1])))
			{
			}
			else
			{
				iVar3 = &Global_1275573->f_154[iVar1];
				if (iVar3 == Global_1275573->f_16 && (((*Global_1055966)[iVar3 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15)
				{
					bVar0 = true;
				}
				if (&((*Global_1055966)[iVar3 /*436*/])->f_39.f_1[*uParam0 /*16*/] == 3 || (((*Global_1055966)[iVar3 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15)
				{
					if ((((*Global_1055966)[iVar3 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_14)
					{
						iVar4++;
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else
	{
		iVar2 = 1;
		bVar0 = (((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15;
	}
	sVar5 = "VOTE_SKIP_CONTEXT";
	if (iVar2 == 1)
	{
		sVar5 = "VOTE_SKIP_CONTEXT_SOLO";
	}
	if (!func_77(uParam0->f_310))
	{
		uParam0->f_310 = func_179(sVar5, joaat("INPUT_SKIP_CUTSCENE"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
		func_180(uParam0->f_310, 6, 1);
		func_181(uParam0->f_310, 19, 1, 1);
		if (iVar2 > 1)
		{
			func_182(uParam0->f_310, sVar5, iVar4, iVar2, 1);
		}
		if (iVar4 == 0)
		{
			func_181(uParam0->f_310, 21, 1, 1);
		}
		func_183(uParam0->f_310, 1, 1, 1);
	}
	else
	{
		if (iVar2 > 1)
		{
			if (bVar0)
			{
				func_182(uParam0->f_310, sVar5, iVar2, iVar2, 1);
			}
			else
			{
				func_182(uParam0->f_310, sVar5, iVar4, iVar2, 1);
			}
		}
		if ((!uParam0->f_309 && iVar4 > 0) && !(((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_14)
		{
			func_78(&(uParam0->f_310), 1, 1);
			uParam0->f_309 = 1;
		}
		if (func_184(uParam0->f_310, 1))
		{
			(((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_14 = 1;
			func_181(uParam0->f_310, 21, 0, 1);
			func_183(uParam0->f_310, 0, 1, 1);
			if (!func_129(*uParam0))
			{
				iVar4 = iVar2;
				bVar0 = true;
			}
		}
	}
	if (iVar4 == iVar2 && !(((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15)
	{
		(((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15 = 1;
	}
	if (bVar0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			iVar7 = 0;
			while (iVar7 < 2)
			{
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(uParam0->f_8[iVar7 /*40*/]), 0))
				{
					ANIMSCENE::ABORT_ANIM_SCENE(&(uParam0->f_8[iVar7 /*40*/]), true);
					bVar6 = true;
				}
				iVar7++;
			}
		}
	}
	return (bVar0 && bVar6);
}

void func_76(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_77(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949759)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3);
}

void func_78(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_77(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_185(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_186(iVar0);
	*uParam0 = 0;
}

void func_79(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	else
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
	}
}

void func_80(var uParam0)
{
	(((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1 = -1;
	uParam0->f_307 = -1;
}

int func_81(var uParam0)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;

	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (uParam0->f_307 != -1)
	{
		if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_307)) >= 2)
		{
			return 1;
		}
		return 0;
	}
	iVar12 = Global_1275573->f_10;
	bVar13 = Global_1275573->f_16 == iVar12;
	if (PED::IS_PED_ON_MOUNT(Global_1275573->f_8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1275573->f_8, true, true);
	}
	if (!func_187(*uParam0, &Var0, iVar9, iVar11))
	{
		return 1;
	}
	if (!func_129(*uParam0))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		iVar11 = 1;
	}
	else
	{
		iVar9 = -1;
	}
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar8])))
		{
		}
		else
		{
			iVar10 = &Global_1275573->f_154[iVar8];
			if (bVar13)
			{
				if (iVar12 != iVar10)
				{
					if ((((*Global_1055966)[iVar12 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1 == -1)
					{
						if (_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[iVar8])))
						{
							if ((((*Global_1055966)[iVar10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1 == iVar9)
							{
								iVar9++;
							}
						}
					}
					if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar8])))
					{
					}
					else
					{
						(((*Global_1055966)[iVar12 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_3[iVar11] = &Global_1275573->f_154[iVar8];
						iVar11++;
						Jump @488; //curOff = 339
						if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar8])))
						{
						}
						else if (Global_1275573->f_16 == iVar10 && (((*Global_1055966)[iVar10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1 != -1)
						{
							iVar15 = 0;
							while (iVar15 < 7)
							{
								if (&(((*Global_1055966)[iVar10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_3[iVar15] == Global_1275573->f_10)
								{
									iVar9 = (((*Global_1055966)[iVar10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1;
									iVar11 = iVar15;
								}
								else
								{
									iVar15++;
								}
							}
						}
					}
					iVar8++;
					if (bVar13)
					{
						iVar11 = 0;
					}
					if (iVar9 >= 0 && iVar9 <= 2)
					{
						iVar16 = ITEMSET::CREATE_ITEMSET(true);
						while (!bVar14)
						{
							if (!func_187(*uParam0, &Var0, iVar9, iVar11))
							{
								func_188(1, 0);
								func_126(Global_1275573->f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
								bVar14 = true;
							}
							else
							{
								if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_314) && PED::_IS_MOUNT_SEAT_FREE(uParam0->f_314, -1)) && PED::_IS_MOUNT_SEAT_FREE(uParam0->f_314, 0))
								{
									if (ENTITY::_0x59B57C4B06531E1E(Var0, 2f, iVar16, 2) == 0)
									{
										ENTITY::SET_ENTITY_COORDS(uParam0->f_314, Var0, true, false, true, true);
										ENTITY::SET_ENTITY_HEADING(uParam0->f_314, Var0.f_6);
									}
								}
								if (ENTITY::_0x59B57C4B06531E1E(Var0.f_3, 2f, iVar16, 2) == 0)
								{
									bVar14 = true;
									ENTITY::SET_ENTITY_COORDS(Global_1275573->f_8, Var0.f_3, true, false, true, true);
									ENTITY::SET_ENTITY_HEADING(Global_1275573->f_8, Var0.f_7);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
									if (iVar9 == 0)
									{
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(Global_1275573->f_10, 1f, 2000, 0f, true, false);
									}
									if (bVar13)
									{
										(((*Global_1055966)[iVar12 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1 = iVar9;
									}
								}
								else
								{
									func_188(1, 0);
									func_126(Global_1275573->f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
									bVar14 = true;
								}
							}
						}
					}
					else if (iVar9 > 2)
					{
						func_188(1, 0);
						func_126(Global_1275573->f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
						bVar14 = true;
					}
					if (uParam0->f_307 == -1)
					{
						if (bVar14)
						{
							uParam0->f_307 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
					}
					return 0;
				}
			}
		}
	}

void func_82(var uParam0)
{
	uParam0->f_307 = -1;
}

void func_83(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1885644->f_1682)
		{
			Global_1885644->f_1682 = 1;
		}
	}
	else if (Global_1885644->f_1682)
	{
		Global_1885644->f_1682 = 0;
	}
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_189(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_190(iParam0))
	{
		iVar1 = func_191(3, iParam0);
		bVar2 = false;
	}
	else
	{
		iVar1 = func_191(1, iParam0);
		bVar2 = true;
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	if (func_193(func_192(iParam0)))
	{
		switch (func_194(func_192(iParam0), 0))
		{
			case 1:
			default:
				return 0;
				return 0;
			case 2:
			}
			if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0) && UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
			{
				if (NETWORK::_0xFBE782B3165AC8EC(iVar1))
				{
					return 0;
				}
				if (!func_193(func_192(iParam0)))
				{
					func_196(iParam0, func_195(iVar1, 0));
				}
				return 0;
			}
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar0) && UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
			{
				if (bVar2)
				{
					if (!NETWORK::_0xFBE782B3165AC8EC(iVar1))
					{
						return 1;
					}
				}
				func_197(iParam0);
				func_196(iParam0, -1);
				func_198();
				return 1;
			}
			return 0;
		}

void func_85(int iParam0, int iParam1)
{
	if (!func_110(iParam0))
	{
		return;
	}
	if (!func_199(iParam0))
	{
		(Global_1272028->f_16[iParam0 /*11*/])->f_7 = 0;
		return;
	}
	(Global_1272028->f_16[iParam0 /*11*/])->f_7 = iParam1;
}

void func_86(int iParam0, int iParam1)
{
	if (!func_110(iParam0))
	{
		return;
	}
	(Global_1272028->f_94[iParam0 /*5*/])->f_4 = iParam1;
}

void func_87(var uParam0)
{
	int iVar0;

	switch (*uParam0)
	{
		case 3:
			if (uParam0->f_318)
			{
				iVar0 = 847375033; /* GXTEntry: "Approach a Bounty Board ~1b~ to choose a poster and hunt down a bounty target." */
			}
			else
			{
				iVar0 = 936352856; /* GXTEntry: "Approach a Bounty Board ~1b~ to purchase a Bounty Hunter Licence." */
			}
			func_201(MISC::_CREATE_VAR_STRING(0, iVar0, func_200(2)), 20000, 0, 0, 0, 1);
			break;
	}
}

void func_88(var uParam0)
{
	func_166(64);
	switch (*uParam0)
	{
		case 5:
			func_202(1);
			break;
		case 6:
			Global_1277020->f_44.f_1 = 1;
			if (func_203(PLAYER::PLAYER_ID(), 1) == -1)
			{
				func_204(877, 0);
			}
			break;
	}
}

int func_89(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_89[iVar0 /*15*/])->f_1))
		{
		}
		else
		{
			PED::DELETE_PED(&((uParam0->f_89[iVar0 /*15*/])->f_1));
			iVar1++;
		}
		iVar0++;
	}
	PED::_0x7D4E70A67A651C71(iVar1);
	return 1;
}

int func_90(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_145(uParam0, iVar0))
		{
		}
		else if (!ANIMSCENE::_0x25557E324489393C(&(uParam0->f_8[iVar0 /*40*/])))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_8[iVar0 /*40*/]));
		}
		iVar0++;
	}
	return 1;
}

void func_91(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])))
			{
			}
			else
			{
				PED::DELETE_PED((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_92(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((uParam0->f_150[iVar0 /*13*/])->f_8)
		{
			if (!func_111((uParam0->f_150[iVar0 /*13*/])->f_5))
			{
				vVar1 = { (uParam0->f_150[iVar0 /*13*/])->f_5 };
			}
			else
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((uParam0->f_8[0 /*40*/])->f_33, (uParam0->f_8[0 /*40*/])->f_36.f_2, (uParam0->f_150[iVar0 /*13*/])->f_2) };
			}
			ENTITY::REMOVE_MODEL_HIDE(vVar1, 1f, (uParam0->f_150[iVar0 /*13*/])->f_1, 0);
		}
		iVar0++;
	}
}

void func_93(int iParam0)
{
	Global_1048585 = iParam0;
}

bool func_94()
{
	return Global_1896726->f_382;
}

void func_95()
{
	if (Global_1896726->f_383)
	{
	}
	Global_1896726->f_383 = 0;
}

bool func_96()
{
	return (func_205() || func_206());
}

void func_97(bool bParam0)
{
	if (bParam0)
	{
		Global_1939008->f_9 = 0f;
	}
	Global_1939008->f_8 = 0f;
	Global_1939008->f_15.f_1 = 0f;
	Global_1939008->f_15 = 0f;
	Global_1939008->f_15.f_9 = 0f;
	Global_1939008->f_15.f_8 = 0f;
	Global_1939008->f_15.f_10 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		PED::_0x06D26A96CA1BCA75(Global_34, 10, 0f, 0);
		AUDIO::SET_PED_IS_DRUNK(Global_34, false);
		PED::_0x406CCF555B04FAD3(Global_34, 0, 0f);
	}
	func_207(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		PED::SET_PED_CONFIG_FLAG(Global_34, 26, false);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_208();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_98()
{
	Global_1939008->f_28 = 0;
	Global_1939008->f_28.f_1 = 0;
	Global_1939008->f_28.f_2 = 0;
	Global_1939008->f_28.f_3 = 0;
	Global_1939008->f_28.f_4 = 0;
	Global_1939008->f_28.f_8 = 0;
}

void func_99()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1140484->f_41657.f_1.f_42)
	{
		if (!func_209(&(Global_1140484->f_41657.f_1[iVar0 /*2*/])))
		{
		}
		iVar0++;
	}
	Global_1140484->f_41657.f_1.f_42 = 0;
}

void func_100(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

bool func_101(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_102(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_103(int iParam0)
{
	struct<15> Var0;

	if (NETWORK::_0xAADED99A6B268A27() != iParam0)
	{
		Var0 = 1;
		Var0.f_1.f_4 = 10;
		Var0[0 /*15*/] = 15;
		NETWORK::_0x63246A24F5747510(iParam0, &Var0);
	}
}

void func_104(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_210(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_211(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_105()
{
	if (!Global_1896726->f_383)
	{
	}
	Global_1896726->f_383 = 1;
}

void func_106(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896726->f_382)
		{
			Global_1896726->f_382 = bParam0;
		}
	}
	else if (Global_1896726->f_382)
	{
		Global_1896726->f_382 = bParam0;
	}
}

int func_107(int iParam0)
{
	int iVar0;

	iVar0 = func_212(iParam0);
	if (iVar0 < 0)
	{
		return 1;
	}
	return func_213(Global_1132968->f_11.f_3216.f_1091[iVar0 /*4*/], 1);
}

int func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15);
	iVar1 = func_214(iVar0);
	if (iVar1 == 0)
	{
		return joaat("META_OUTFIT_DEFAULT");
	}
	iVar2 = func_215(0, iVar1, 0, -1);
	if (iVar2 == 0)
	{
		return joaat("META_OUTFIT_DEFAULT");
	}
	iVar3 = func_216(iVar2);
	if (iVar3 == 0)
	{
		return joaat("META_OUTFIT_DEFAULT");
	}
	return iVar3;
}

int func_109()
{
	int iVar0;
	int iVar5;

	if (STATS::_0xA2E2BEA4E83F6270(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS")) > 0)
	{
		STATS::_0xB5E2EDA2135E0FA1(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS"), 0, &iVar0);
	}
	else
	{
		return -1;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar5 = func_217(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

int func_110(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return 0;
	}
	return 1;
}

int func_111(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	*uParam2 = { func_218() };
	switch (iParam0)
	{
		case 4:
		default:
			return 0;
			*uParam1 = { 0f, 0f, 0f };
			vVar0 = { func_114(&Global_1275573) };
			switch (vVar0.y)
			{
				case joaat("CUMBERLAND_FOREST_CAMP"):
				case joaat("GRIZZLIES_CAMP"):
				case joaat("HEARTLAND_CAMP"):
				case joaat("BIG_VALLEY_CAMP"):
				default:
					return 0;
					*uParam1 = { -319.3981f, 792.6552f, 116.3929f };
					*uParam2 = { 0f, 0f, -60f };
				case joaat("HENNIGANS_STEAD_CAMP"):
				case joaat("RIO_BRAVO_CAMP"):
				case joaat("GREAT_PLAINS_CAMP"):
				case joaat("TALL_TREES_CAMP"):
				case joaat("CHOLLA_SPRINGS_CAMP"):
				case joaat("GAPTOOTH_RIDGE_CAMP"):
					*uParam1 = { -3677.246f, -2618.845f, -14.8654f };
					*uParam2 = { 0f, 0f, -119.15f };
					break;
				case joaat("ROANOKE_RIDGE_CAMP"):
				case joaat("BAYOU_NAWAS_CAMP"):
				case joaat("SCARLETT_MEADOWS_CAMP"):
					*uParam1 = { 2820.121f, -1310.931f, 45.7346f };
					*uParam2 = { 0f, 0f, -72.1f };
					break;
			}
			return 1;
		case 5:
			iVar3 = func_109();
			if (iVar3 == -1)
			{
				return 0;
			}
			if (!func_219(iVar3, uParam1, uParam2))
			{
				return 0;
			}
			if (!bParam3)
			{
				return 1;
			}
			iVar4 = func_220(joaat("MP005_P_COLLECTORWAGON01"), *uParam1, 5f);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				*uParam1 = { 0f, 0f, 0f };
				*uParam2 = { 0f, 0f, 0f };
				return 0;
			}
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iVar4, true, false) };
			*uParam2 = { ENTITY::GET_ENTITY_ROTATION(iVar4, 2) };
			return 1;
		}

bool func_113(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_114(int iParam0)
{
	if (iParam0 == 255)
	{
		return ((*Global_1128435)[func_221() /*83*/])->f_38;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38;
}

int func_115(var uParam0)
{
	return uParam0->f_1.f_2;
}

void func_116(var uParam0, int iParam1)
{
	uParam0->f_1.f_2 = iParam1;
}

int func_117(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 0;
	bVar1 = true;
	if (!MISC::IS_BIT_SET(uParam0->f_305, 0))
	{
		iVar2 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (&uParam0->f_89[iVar0 /*15*/] != 0 && STREAMING::IS_MODEL_VALID(&(uParam0->f_89[iVar0 /*15*/])))
			{
				iVar2++;
			}
			iVar0++;
		}
		PED::_0xED9582B3DA8F02B4(iVar2);
		MISC::SET_BIT(&(uParam0->f_305), 0);
		return 0;
	}
	else if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_89[iVar0 /*15*/])->f_1))
		{
		}
		else
		{
			if (&uParam0->f_89[iVar0 /*15*/] != 0 && STREAMING::IS_MODEL_VALID(&(uParam0->f_89[iVar0 /*15*/])))
			{
				STREAMING::REQUEST_MODEL(&(uParam0->f_89[iVar0 /*15*/]), false);
				if (!STREAMING::HAS_MODEL_LOADED(&(uParam0->f_89[iVar0 /*15*/])))
				{
					bVar1 = false;
				}
				else
				{
					Jump @217; //curOff = 211
					Jump @1053; //curOff = 214
					(uParam0->f_89[iVar0 /*15*/])->f_1 = PED::CREATE_PED(&(uParam0->f_89[iVar0 /*15*/]), (uParam0->f_89[iVar0 /*15*/])->f_2, (uParam0->f_89[iVar0 /*15*/])->f_5.f_2, false, false, false, false);
					if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_89[iVar0 /*15*/])->f_1) || ENTITY::IS_ENTITY_DEAD((uParam0->f_89[iVar0 /*15*/])->f_1))
					{
						bVar1 = false;
					}
					else
					{
						if ((uParam0->f_89[iVar0 /*15*/])->f_8 > -1 && (uParam0->f_89[iVar0 /*15*/])->f_8 < PED::_0x10C70A515BC03707((uParam0->f_89[iVar0 /*15*/])->f_1))
						{
							PED::_SET_PED_OUTFIT_PRESET((uParam0->f_89[iVar0 /*15*/])->f_1, (uParam0->f_89[iVar0 /*15*/])->f_8, 0);
						}
						else if ((uParam0->f_89[iVar0 /*15*/])->f_8 != -1 && PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL((uParam0->f_89[iVar0 /*15*/])->f_8, &(uParam0->f_89[iVar0 /*15*/])))
						{
							PED::_0x0BFA1BD465CDFEFD((uParam0->f_89[iVar0 /*15*/])->f_1);
							PED::_SET_PED_BODY_COMPONENT((uParam0->f_89[iVar0 /*15*/])->f_1, (uParam0->f_89[iVar0 /*15*/])->f_8);
							PED::_UPDATE_PED_VARIATION((uParam0->f_89[iVar0 /*15*/])->f_1, false, true, true, true, false);
						}
						else if ((uParam0->f_89[iVar0 /*15*/])->f_8 == -1)
						{
							PED::_SET_RANDOM_OUTFIT_VARIATION((uParam0->f_89[iVar0 /*15*/])->f_1, true);
						}
						if ((uParam0->f_89[iVar0 /*15*/])->f_9 != 0)
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2((uParam0->f_89[iVar0 /*15*/])->f_1, (uParam0->f_89[iVar0 /*15*/])->f_9, 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
						}
						func_222((uParam0->f_89[iVar0 /*15*/])->f_1, (uParam0->f_89[iVar0 /*15*/])->f_2);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED((uParam0->f_89[iVar0 /*15*/])->f_1, false);
						ENTITY::SET_ENTITY_VISIBLE((uParam0->f_89[iVar0 /*15*/])->f_1, false);
						ENTITY::SET_ENTITY_COLLISION((uParam0->f_89[iVar0 /*15*/])->f_1, false, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((uParam0->f_89[iVar0 /*15*/])->f_1, true);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT((uParam0->f_89[iVar0 /*15*/])->f_1, false);
						PED::SET_PED_CAN_RAGDOLL((uParam0->f_89[iVar0 /*15*/])->f_1, false);
						ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_89[iVar0 /*15*/])->f_1, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 277, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 340, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 137, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 17, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 77, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 77, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 24, false);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 72, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 107, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 150, false);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 47, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 127, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 130, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 315, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 297, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 422, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 148, true);
						PED::_0xAE6004120C18DF97((uParam0->f_89[iVar0 /*15*/])->f_1, 0, 0);
						ENTITY::SET_ENTITY_PROOFS((uParam0->f_89[iVar0 /*15*/])->f_1, 127, false);
						func_223(uParam0->f_89[iVar0 /*15*/], 2);
					}
				}
				iVar0++;
				if (bVar1)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_305, 1))
					{
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (&uParam0->f_89[iVar0 /*15*/] != 0 && STREAMING::IS_MODEL_VALID(&(uParam0->f_89[iVar0 /*15*/])))
							{
								if (STREAMING::HAS_MODEL_LOADED(&(uParam0->f_89[iVar0 /*15*/])))
								{
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(uParam0->f_89[iVar0 /*15*/]));
								}
							}
							iVar0++;
						}
						MISC::SET_BIT(&(uParam0->f_305), 1);
					}
					return 1;
				}
				return 0;
			}
		}
	}

int func_118(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_145(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
			{
				switch (func_48())
				{
					case 2:
						Jump @616; //curOff = 75
						Jump @85; //curOff = 78
						return 0;
					}
					else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
					{
						switch (func_48())
						{
							case 1:
								Jump @616; //curOff = 128
								Jump @138; //curOff = 131
								return 0;
							}
							if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 1))
							{
								Jump @616; //curOff = 156
							}
							else
							{
								iVar1 = 0;
							}
							if (!MISC::_0x375F5870A7B8BEC1((uParam0->f_8[iVar0 /*40*/])->f_11[1 /*3*/]))
							{
								iVar2 = func_224();
							}
							if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 0))
							{
								if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_8[iVar0 /*40*/])))
								{
								}
								else if (MISC::_0x375F5870A7B8BEC1(&((uParam0->f_8[iVar0 /*40*/])->f_3)))
								{
									MISC::SET_BIT(&((uParam0->f_8[iVar0 /*40*/])->f_1), 1);
								}
								else
								{
									uParam0->f_8[iVar0 /*40*/] = ANIMSCENE::_CREATE_ANIM_SCENE(&((uParam0->f_8[iVar0 /*40*/])->f_3), (uParam0->f_8[iVar0 /*40*/])->f_2, (uParam0->f_8[iVar0 /*40*/])->f_11[iVar2 /*3*/], false, false);
									if (!ANIMSCENE::_0x25557E324489393C(&(uParam0->f_8[iVar0 /*40*/])))
									{
									}
									else
									{
										ANIMSCENE::LOAD_ANIM_SCENE(&(uParam0->f_8[iVar0 /*40*/]));
										MISC::SET_BIT(&((uParam0->f_8[iVar0 /*40*/])->f_1), 0);
										Jump @616; //curOff = 358
										if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 1))
										{
											if (!ANIMSCENE::_0x25557E324489393C(&(uParam0->f_8[iVar0 /*40*/])))
											{
											}
											else if (!ANIMSCENE::_0x95531A4A20CCE7BC(&(uParam0->f_8[iVar0 /*40*/]), 0))
											{
											}
											else if (!ANIMSCENE::_0x477122B8D05E7968(&(uParam0->f_8[iVar0 /*40*/]), 0, 0))
											{
											}
											else
											{
												if (*uParam0 != 4)
												{
													if (*uParam0 == 5)
													{
														if (func_111((uParam0->f_8[iVar0 /*40*/])->f_33))
														{
														}
														else
														{
															ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(uParam0->f_8[iVar0 /*40*/]), (uParam0->f_8[iVar0 /*40*/])->f_33, (uParam0->f_8[iVar0 /*40*/])->f_36, 2);
															if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_8[iVar0 /*40*/])->f_11[iVar2 /*3*/]))
															{
																if (!ANIMSCENE::_0x23E33CB9F4A3F547(&(uParam0->f_8[iVar0 /*40*/]), (uParam0->f_8[iVar0 /*40*/])->f_11[iVar2 /*3*/]))
																{
																}
																else
																{
																	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(uParam0->f_8[iVar0 /*40*/]), (uParam0->f_8[iVar0 /*40*/])->f_11[iVar2 /*3*/], true);
																	MISC::SET_BIT(&((uParam0->f_8[iVar0 /*40*/])->f_1), 1);
																}
																iVar0++;
																return iVar1;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}

void func_119(var uParam0)
{
	int iVar0;
	char[] cVar1[8];

	if (func_225(*uParam0, &iVar0, &cVar1))
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(&(uParam0->f_8[0 /*40*/]), &cVar1, iVar0, true);
	}
}

int func_120(var uParam0)
{
	return uParam0->f_284.f_1;
}

int func_121(var uParam0)
{
	return uParam0->f_284.f_2;
}

void func_122(var uParam0, int iParam1)
{
	if (uParam0->f_284.f_1 != iParam1)
	{
		uParam0->f_284.f_1 = iParam1;
	}
}

void func_123(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, char[4] cParam20, char* sParam21)
{
	func_41(uParam0);
	uParam0->f_284 = func_226(&uParam1, cParam20, sParam21, 0, 1);
}

int func_124()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = joaat("STATUS_ALERT_FEED");
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar0))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
					return vVar1.z;
				default:
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
	}
	return -1577439368;
}

void func_125(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_227(67);
		Global_1099294->f_471 = iParam0;
		Global_1099294->f_472 = iParam1;
	}
	else
	{
		func_228(67);
	}
}

void func_126(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_229(&vVar0, &fVar3, 1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_230(vParam0, fParam3, vVar0, fVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

int func_127(int iParam0)
{
	if (iParam0 == 255)
	{
		return &Global_1099294;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return Global_1097610[iParam0 /*51*/];
	}
	return 26;
}

void func_128(var uParam0, int iParam1)
{
	if (uParam0->f_284.f_2 != iParam1)
	{
		uParam0->f_284.f_2 = iParam1;
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 0;
		case 6:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_131(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;

	if (!func_231(uParam0))
	{
		return uParam0->f_1.f_6;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_297))
	{
		vVar0 = { func_232(uParam0) };
		uParam0->f_297 = VOLUME::_CREATE_VOLUME_SPHERE(uParam0->f_298, 0f, 0f, 0f, vVar0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_305, 16))
	{
		vVar4 = { VOLUME::_0x3E2A25B2416DD67E(uParam0->f_297) };
		if (func_233(uParam0->f_298, Global_35) < vVar4.x)
		{
			bVar3 = true;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_1275573->f_8, uParam0->f_297, true, 0))
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (!func_234(uParam0))
		{
			uParam0->f_1.f_6 = 1;
		}
		else
		{
			uParam0->f_1.f_6 = 0;
		}
	}
	else
	{
		uParam0->f_1.f_6 = 0;
	}
	return uParam0->f_1.f_6;
}

int func_132()
{
	bool bVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_1275573->f_8))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1275573->f_8);
		bVar0 = true;
	}
	else if (func_235(&iVar1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
		{
			func_236(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)));
		}
		return 0;
	}
	return 1;
}

int func_133(int iParam0)
{
	if (!func_110(iParam0))
	{
		return 0;
	}
	return (Global_1272028->f_16[iParam0 /*11*/])->f_7;
}

int func_134(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return -1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return -1;
	}
	return &(((*Global_1055966)[iParam1 /*436*/])->f_39.f_1[iParam0 /*16*/]);
}

int func_135(int iParam0)
{
	int iVar0;

	if (!func_110(iParam0))
	{
		return 0;
	}
	if ((Global_1275573->f_16 < 32 && Global_1275573->f_16 > 0) && (((*Global_1055966)[Global_1275573->f_16 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2 != -1)
	{
		iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - (((*Global_1055966)[Global_1275573->f_16 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2));
		if (iVar0 >= 30)
		{
			return 1;
		}
	}
	return 0;
}

void func_136(var uParam0, int iParam1)
{
	if (func_127(255) == 1)
	{
		if (func_120(uParam0) == 0 && func_121(uParam0) == 0)
		{
			func_128(uParam0, iParam1);
			func_122(uParam0, 1);
		}
	}
}

int func_137()
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_MOUNT(Global_1275573->f_8);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = AITRANSPORT::_0xFFEC4B0A1A3ED515(iVar0, -1);
		if (iVar1 == Global_1275573->f_8)
		{
			iVar1 = AITRANSPORT::_0xFFEC4B0A1A3ED515(iVar0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::IS_PED_A_PLAYER(iVar1))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) == Global_1275573->f_16)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_138(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

void func_139(int iParam0, bool bParam1)
{
	if (!func_237(iParam0))
	{
		return;
	}
	if ((bParam1 && func_238(iParam0, 512)) || (!bParam1 && !func_238(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_239(iParam0, 512);
	}
	else
	{
		func_240(iParam0, 512);
	}
	if (func_241(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

int func_140(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1097610)[iParam0 /*51*/])->f_16;
}

int func_141(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_242(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1275573->f_10)
		{
			if (!Global_1275573->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_142(var uParam0)
{
	return uParam0->f_1.f_3;
}

void func_143(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;

	if (!func_129(*uParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&uVar0, &Global_1275573);
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!func_145(uParam0, iVar1))
			{
			}
			else
			{
				(((*Global_1055966)[&Global_1275573 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_11[iVar1] = uVar0;
			}
			iVar1++;
		}
		return;
	}
	if (Global_1275573->f_16 != &Global_1275573)
	{
		return;
	}
	iVar5 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(Global_1275573->f_16));
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!func_145(uParam0, iVar1))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET((uParam0->f_8[iVar1 /*40*/])->f_1, 3))
			{
				if (func_48() != 1)
				{
				}
				else
				{
					Jump @207; //curOff = 175
					if (MISC::IS_BIT_SET((uParam0->f_8[iVar1 /*40*/])->f_1, 4))
					{
						if (func_48() != 2)
						{
						}
						else
						{
							iVar3 = 0;
							while (iVar3 < 32)
							{
								if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
								{
								}
								else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar3])))
								{
								}
								else
								{
									if (iVar2 >= 4)
									{
									}
									else
									{
										if (&Global_1275573->f_154[iVar3] != Global_1275573->f_10)
										{
											iVar6 = PLAYER::GET_PLAYER_PED(&(Global_1275573->f_154[iVar3]));
											if (ENTITY::IS_ENTITY_DEAD(iVar6))
											{
											}
											else
											{
												fVar7 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true, false), ENTITY::GET_ENTITY_COORDS(iVar5, true, false));
												fVar8 = func_243(*uParam0, 0);
												if (fVar7 > (fVar8 * fVar8))
												{
												}
												else
												{
													iVar2++;
													SCRIPTS::_0x31010318BA9897AC(&uVar0, &(Global_1275573->f_154[iVar3]));
													(((*Global_1055966)[Global_1275573->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_3[iVar4] = &Global_1275573->f_154[iVar3];
													iVar4++;
												}
											}
											iVar3++;
											iVar2 = 0;
											(((*Global_1055966)[Global_1275573->f_16 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_11[iVar1] = uVar0;
											iVar1++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

void func_144(var uParam0, int iParam1)
{
	uParam0->f_1.f_3 = iParam1;
}

bool func_145(var uParam0, int iParam1)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	return !MISC::_0x375F5870A7B8BEC1(&((uParam0->f_8[iParam1 /*40*/])->f_3));
}

var func_146(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 >= 7 || iParam0 <= 0)
	{
		return uVar0;
	}
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return uVar0;
	}
	if (Global_1275573->f_16 >= 32 || Global_1275573->f_16 < 0)
	{
		return uVar0;
	}
	if (!func_129(iParam0))
	{
		uVar0 = &(((*Global_1055966)[&Global_1275573 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_11[iParam1];
	}
	else
	{
		uVar0 = &(((*Global_1055966)[Global_1275573->f_16 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_11[iParam1];
	}
	return uVar0;
}

int func_147(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam2 >= 2 || iParam2 < 0)
	{
		return 0;
	}
	if (iParam3 >= 4 || iParam3 < 0)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
	iVar1 = PED::CLONE_PED(iVar0, 0f, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, false);
	func_244(iVar0, iVar1);
	ENTITY::SET_ENTITY_COORDS(iVar1, uParam0->f_298, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
	PED::_0x7E8F9949B7AABBF0(iVar1, 1, 1);
	WEAPON::_0xFCCC886EDE3C63EC(iVar1, 2, 1);
	if (MISC::IS_BIT_SET(uParam0->f_305, 17))
	{
		WEAPON::_0x67E21ACC5C0C970C(iVar1, 16, false);
		WEAPON::_0x67E21ACC5C0C970C(iVar1, 9, false);
		WEAPON::_0x67E21ACC5C0C970C(iVar1, 18, false);
		WEAPON::_0x67E21ACC5C0C970C(iVar1, 10, false);
		WEAPON::_0x67E21ACC5C0C970C(iVar1, 7, false);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
	vVar2 = { func_245(*uParam0, iParam3, PED::IS_PED_MALE(iVar1)) };
	(uParam0->f_229[iParam2 /*27*/])->f_1[iParam3 /*6*/] = iVar1;
	((uParam0->f_229[iParam2 /*27*/])->f_1[iParam3 /*6*/])->f_2.f_1 = { vVar2 };
	((uParam0->f_229[iParam2 /*27*/])->f_1[iParam3 /*6*/])->f_2 = &uParam0->f_8[iParam2 /*40*/];
	return 1;
}

int func_148(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return 0;
	}
	if (iParam2 >= 4 || iParam2 < 0)
	{
		return 0;
	}
	if (!bParam3)
	{
		return ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_229[iParam1 /*27*/])->f_1[iParam2 /*6*/]));
	}
	else if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_229[iParam1 /*27*/])->f_1[iParam2 /*6*/])))
	{
		return !ENTITY::IS_ENTITY_DEAD(&((uParam0->f_229[iParam1 /*27*/])->f_1[iParam2 /*6*/]));
	}
	return 0;
}

bool func_149(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	if (iParam2 >= 4 || iParam2 < 0)
	{
		return false;
	}
	return PED::_0xA0BC8FAED8CFEB3C(&((uParam0->f_229[iParam1 /*27*/])->f_1[iParam2 /*6*/]));
}

bool func_150(var uParam0, int iParam1)
{
	vector3 vVar0;

	if ((uParam0->f_150[iParam1 /*13*/])->f_1 == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_150[iParam1 /*13*/])))
	{
		return true;
	}
	if (!func_111((uParam0->f_150[iParam1 /*13*/])->f_5))
	{
		vVar0 = { (uParam0->f_150[iParam1 /*13*/])->f_5 };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((uParam0->f_8[0 /*40*/])->f_33, (uParam0->f_8[0 /*40*/])->f_36.f_2, (uParam0->f_150[iParam1 /*13*/])->f_2) };
	}
	uParam0->f_150[iParam1 /*13*/] = func_220((uParam0->f_150[iParam1 /*13*/])->f_1, vVar0, 1f);
	if ((uParam0->f_150[iParam1 /*13*/])->f_8)
	{
		ENTITY::CREATE_MODEL_HIDE(vVar0, 1f, (uParam0->f_150[iParam1 /*13*/])->f_1, false);
	}
	return ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_150[iParam1 /*13*/]));
}

void func_151(var uParam0, int iParam1)
{
	func_246(uParam0, iParam1);
}

int func_152(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_247(*uParam1, 128))
	{
		if (!func_248(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_247(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_249(iVar2))
			{
				return 0;
			}
			if (!func_248(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_250(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_247(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_251(bParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			func_151(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_247(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_247(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_249(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_251(bParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_251(bParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_251(bParam2, 16384))
				{
					HUD::_DISPLAY_HUD_COMPONENT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_247(*uParam1, 2336))
		{
			if (!func_249(iVar2))
			{
			}
			if (func_252(iVar2, *uParam1))
			{
				func_253(uParam1, 32);
				func_253(uParam1, 256);
				func_253(uParam1, 2048);
				func_151(uParam1, 512);
				func_151(uParam1, 1024);
				func_151(uParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_247(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_249(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_253(uParam1, 64);
			}
		}
		if (func_251(bParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if ((((TASK::IS_PED_SPRINTING(iVar2) && !func_251(bParam2, 8192)) || (TASK::IS_PED_RUNNING(iVar2) && func_251(bParam2, 1024))) || func_251(bParam2, 8)) && !func_247(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_151(uParam1, 32);
		}
		else if (((TASK::IS_PED_RUNNING(iVar2) || (TASK::IS_PED_SPRINTING(iVar2) && func_251(bParam2, 8192))) && func_251(bParam2, 4096)) && !func_247(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_151(uParam1, 2048);
			func_151(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_251(bParam2, 32)) && !func_247(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_151(uParam1, 256);
			func_151(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_151(uParam1, 64);
		}
		else if (!func_251(bParam2, 1))
		{
			if (!func_251(bParam2, 256))
			{
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_35.f_2;
				if (func_250(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_247(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_151(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_151(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_251(bParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_151(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!func_251(bParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_151(uParam1, 8);
	}
	return 0;
}

int func_153(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 3:
		default:
			*iParam2 = 0;
			return 0;
			*uParam1 = joaat("DOCUMENT_BOUNTY_HUNTER_LICENSE");
			*iParam2 = 1;
			return 1;
		case 4:
			*uParam1 = joaat("UPGRADE_CAMP_BUTCHER_TABLE");
			*iParam2 = 1;
			return 1;
		case 5:
			*uParam1 = joaat("KIT_COLLECTORS_BAG");
			*iParam2 = 1;
			return 1;
		case 6:
			*uParam1 = 1384535894;
			*iParam2 = 1;
			return 1;
		}

bool func_154(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_254(iParam0, 0))
	{
		return false;
	}
	if (func_255(iParam0))
	{
		return func_258(func_256(iParam0, 0), bParam1, bParam2, bParam3, func_257(iParam0));
	}
	if (func_259(iParam0, bParam4) || func_260(iParam0))
	{
		bParam1 = 997808187;
	}
	else if (func_257(iParam0) && (func_261(iParam0, &iVar0) || func_262(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else
	{
		bVar1 = func_263(iParam0, -570078785);
		bVar2 = func_263(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			bParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_264())
			{
				bParam1 = -570078785;
			}
			else
			{
				bParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			bParam1 = -915411861;
		}
		else
		{
			bParam1 = false;
		}
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

int func_155(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	bool bVar3;
	var uVar4;
	var uVar5;
	int iVar7;

	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	if (func_265(iParam0, 1) && !func_266(iParam0, 1))
	{
		return 0;
	}
	if (bParam2 && func_267(iParam0, &iVar0))
	{
		if (func_268(iVar0, 997808187, 0) && !func_269(iVar0, 997808187))
		{
			return 1;
		}
		else if (func_268(iVar0, -570078785, 0))
		{
			return func_270(iVar0, -570078785, &uVar1);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			bVar3 = func_154(iParam0, bVar3, 1, -1, 1);
		}
		else
		{
			bVar3 = iParam1;
		}
		if (bVar3 == 0)
		{
			return 0;
		}
		iVar7 = func_271(iParam0, bVar3, 0, 1, 1);
		if (bVar3 == -570078785)
		{
			return func_272(iVar7);
		}
		else if (bVar3 == -915411861)
		{
			return func_273(iVar7);
		}
		else if (bVar3 == 997808187)
		{
			return 1;
		}
		else
		{
			return func_274(iParam0, 1, bVar3, &uVar5, &uVar4, 0, 0);
		}
	}
	return 0;
}

int func_156(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<5> Var0;
	struct<16> Var5;
	struct<5> Var21;
	int iVar26;

	func_275(&iParam1);
	if (func_255(iParam1))
	{
		return func_276(iParam0, func_256(iParam1, 1), Var0, 1, 1, iParam3, 0, iParam4, iParam5, func_257(iParam1));
	}
	Var5.f_9 = 1;
	Var5.f_11 = -1591664384;
	Var21 = { func_277(iParam1, 1, 1) };
	if (func_267(iParam1, &iVar26))
	{
		return func_276(iParam0, iVar26, Var21, iParam2, 1, iParam3, 0, 0, iParam5, 0);
	}
	if (func_278(iParam1))
	{
		if (!func_279(iParam0, iParam1, Var21, iParam2, &Var5, iParam4, iParam5))
		{
			return 0;
		}
	}
	else if (!func_280(iParam0, iParam1, Var21, Var21.f_4, iParam2, &Var5, iParam3, iParam4, iParam5, 1))
	{
		return 0;
	}
	func_281(Var5);
	return 1;
}

void func_157(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

void func_158(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 5:
			if ((uParam0->f_8[iParam1 /*40*/])->f_39 == -1)
			{
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_INT(&(uParam0->f_8[iParam1 /*40*/]), "location_variation", (uParam0->f_8[iParam1 /*40*/])->f_39, false);
			}
			break;
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), "ifTrader", func_282(11) > 0, false);
			break;
	}
}

void func_159()
{
	if (!func_283())
	{
		return;
	}
	Global_1199507->f_26 = 0;
}

Vector3 func_160(var uParam0)
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.x = 1;
	vVar0.f_2 = uParam0;
	return vVar0;
}

int func_161(vector3 vParam0)
{
	int iVar0;

	if (!func_284(vParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_285((Global_1199507->f_2[iVar0 /*5*/])->f_2, vParam0))
		{
		}
		else
		{
			return (Global_1199507->f_2[iVar0 /*5*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_162(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (!func_284(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_285((Global_1199507->f_2[iVar0 /*5*/])->f_2, vParam0))
		{
		}
		else
		{
			if ((Global_1199507->f_2[iVar0 /*5*/])->f_1 != iParam3)
			{
				Global_1199507->f_24 = 1;
			}
			(Global_1199507->f_2[iVar0 /*5*/])->f_1 = iParam3;
		}
		else
		{
			iVar0++;
		}
	}
}

void func_163(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_TIME(&(uParam0->f_8[iParam1 /*40*/]));
	if ((ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), "MOON_INT_P2A1_T01_Shot_1", 0) || ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), "MOON_INT_P2A1_T01_Shot_2", 0)) || (ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), "MOON_INT_P2_T10_Shot_2", 0) && fVar0 > 27.6f))
	{
		if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 7))
		{
			if (!func_286(uParam0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/])->f_4), true, false);
				return;
			}
			MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 7);
		}
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/])->f_4)) || ANIMSCENE::GET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[1 /*7*/])->f_4)))
		{
			return;
		}
		if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 6))
		{
			func_153(*uParam0, &iVar1, &uVar2);
			iVar3 = func_154(iVar1, 0, 1, -1, 1);
			UIAPPS::_CLOSE_ALL_APPS_IMMEDIATE();
			func_105();
			func_287(3, 1);
			MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 6);
			return;
		}
		if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 8))
		{
			if (func_288(53))
			{
				MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 8);
			}
			return;
		}
		iVar4 = func_203(PLAYER::GET_PLAYER_INDEX(), 1);
		if (iVar4 != -1)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[1 /*7*/])->f_4), true, false);
			uParam0->f_318 = 1;
		}
		else if (!func_288(53))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/])->f_4), true, false);
			uParam0->f_318 = 0;
		}
	}
	else if (MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 6))
	{
		func_42();
		MISC::CLEAR_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 6);
	}
}

void func_164(var uParam0, int iParam1)
{
	var uVar0;
	bool bVar8;
	int iVar9;
	var uVar10;
	bool bVar11;

	if (iParam1 < 0)
	{
		return;
	}
	if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 7))
	{
		if (!func_286(uParam0))
		{
			if (func_289(*uParam0, &uVar0, &bVar8))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &uVar0, bVar8, false);
				MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 7);
				return;
			}
		}
		else if (func_289(*uParam0, &uVar0, &bVar8))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &uVar0, true, false);
			MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 7);
		}
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), (uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/], 0) || ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), (uParam0->f_8[iParam1 /*40*/])->f_18[1 /*7*/], 0))
	{
		if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 6))
		{
			func_153(*uParam0, &iVar9, &uVar10);
			bVar11 = func_154(iVar9, 0, 1, -1, 1);
			if (func_263(iVar9, bVar11))
			{
				uParam0->f_317 = func_290(iVar9, bVar11, 1, 0, 1, 0);
				if (func_291(iVar9, joaat("CURRENCY_GOLD_BAR"), bVar11, 1, 1) > 0)
				{
					uParam0->f_317 = func_292(uParam0->f_317);
				}
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/])->f_4), true, false);
				return;
			}
			uParam0->f_315 = func_179("CUTSCENE_ACTION_PURCHASE", joaat("INPUT_INTERACT_LOCKON_POS"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_180(uParam0->f_315, 6, 1);
			func_181(uParam0->f_315, 19, 0, 1);
			if (func_293(bVar11) || func_294(bVar11))
			{
				func_296(uParam0->f_315, "CUTSCENE_ACTION_PURCHASE_OFFER", func_295(iVar9), uParam0->f_317, 1);
			}
			else
			{
				func_296(uParam0->f_315, "CUTSCENE_ACTION_PURCHASE", func_295(iVar9), uParam0->f_317, 1);
			}
			uParam0->f_316 = func_179("CUTSCENE_ACTION_DONT_PURCHASE", joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 570, uParam0->f_319, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
			func_180(uParam0->f_316, 6, 1);
			func_181(uParam0->f_316, 19, 0, 1);
			MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 6);
		}
		if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 6))
		{
			return;
		}
		if (func_184(uParam0->f_315, 1))
		{
			func_183(uParam0->f_316, 0, 1, 1);
			func_297(uParam0->f_316, 0, 1);
			func_183(uParam0->f_315, 0, 1, 1);
			func_297(uParam0->f_315, 0, 1);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[1 /*7*/])->f_4), true, false);
			uParam0->f_318 = 1;
			func_66(uParam0);
			return;
		}
		if (func_184(uParam0->f_316, 1))
		{
			func_183(uParam0->f_316, 0, 1, 1);
			func_297(uParam0->f_316, 0, 1);
			func_183(uParam0->f_315, 0, 1, 1);
			func_297(uParam0->f_315, 0, 1);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/])->f_4), true, false);
			uParam0->f_318 = 0;
			return;
		}
	}
	else if (MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 6))
	{
		func_183(uParam0->f_316, 0, 1, 1);
		func_297(uParam0->f_316, 0, 1);
		func_183(uParam0->f_315, 0, 1, 1);
		func_297(uParam0->f_315, 0, 1);
		MISC::CLEAR_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 6);
	}
}

int func_165(int* iParam0)
{
	return func_298(iParam0->f_1);
}

void func_166(int iParam0)
{
	func_299(iParam0);
}

void func_167(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]), true);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_168(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_89[iVar0 /*15*/])->f_1))
		{
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE((uParam0->f_89[iVar0 /*15*/])->f_1, true);
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

int func_169(int iParam0, var uParam1)
{
	if (!func_237(iParam0))
	{
		return 0;
	}
	if ((iParam0 == 28 || iParam0 == 29) || iParam0 == 33)
	{
		*uParam1 = 0;
		return 1;
	}
	if (func_300() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051388->f_69[iParam0 /*76*/])->f_21))
		{
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051388->f_69[iParam0 /*76*/])->f_21);
		}
		else
		{
			return 0;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST((Global_1915180->f_3[iParam0 /*447*/])->f_23))
	{
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915180->f_3[iParam0 /*447*/])->f_23);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_170(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_301(iParam0, 33554432);
	}
	else
	{
		func_302(iParam0, 33554432);
	}
}

void func_171(float fParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	MISC::CLEAR_AREA(vVar1, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, fParam0);
}

int func_172()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

void func_173()
{
	Global_1939231->f_1433.f_7962 = 0;
	Global_1939231->f_1433.f_7963 = MISC::GET_GAME_TIMER() + 1000;
}

int func_174(var uParam0, int iParam1)
{
	if (6 == *uParam0)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), "MOON_INT_P2A1_T01_Shot_2", 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_175(var uParam0)
{
	int iVar0;

	if (*uParam0 != 5)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 13))
	{
		return;
	}
	if (!func_169(38, &iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_170(func_109(), 0);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
	MISC::CLEAR_BIT(&(uParam0->f_305), 13);
}

bool func_176(var uParam0)
{
	return func_303(*uParam0, 1);
}

void func_177(var uParam0, bool bParam1)
{
	if (bParam1 || !func_176(uParam0))
	{
		func_304(uParam0);
	}
}

int func_178(var uParam0)
{
	if (!func_176(uParam0))
	{
		return 0;
	}
	if (func_305(uParam0))
	{
		return uParam0->f_2;
	}
	return func_306(uParam0->f_1);
}

int func_179(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_307(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_308(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_180(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_77(iParam0))
	{
		return;
	}
	iVar0 = func_185(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1);
}

void func_181(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_77(iParam0))
	{
		return;
	}
	iVar0 = func_185(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, bParam2);
}

void func_182(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_77(iParam0))
	{
		return;
	}
	iVar0 = func_185(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2, sParam3));
}

void func_183(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_77(iParam0))
	{
		return;
	}
	iVar0 = func_185(iParam0);
	if (bParam1)
	{
		func_309(iParam0, 4);
		if (bParam3)
		{
			func_310(iVar0, 1);
		}
		func_311(iVar0, 1);
	}
	else
	{
		func_312(iParam0, 4);
		func_311(iVar0, 0);
	}
}

bool func_184(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_77(iParam0))
	{
		return false;
	}
	iVar0 = func_185(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949759)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949759)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949759)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949759)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949759)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_185(int iParam0)
{
	return iParam0;
}

void func_186(int iParam0)
{
	if (!func_313(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949759)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949759)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949759)[iParam0 /*23*/] = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_15 = -1f;
}

int func_187(int iParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	struct<25> Var4;

	switch (iParam0)
	{
		case 1:
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -873.1006f, -1261.776f, 42.6244f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.2726f, -1253.967f, 42.6373f };
							uParam1->f_6 = 83.2f;
							break;
						case 1:
							uParam1->f_3 = { -875.3077f, -1258.834f, 42.5703f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.0361f, -1251.312f, 42.6475f };
							uParam1->f_6 = 83.2f;
							break;
						case 2:
							uParam1->f_3 = { -870.6182f, -1259.352f, 42.572f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.5291f, -1246.509f, 42.677f };
							uParam1->f_6 = 83.2f;
							break;
						case 3:
							uParam1->f_3 = { -878.0989f, -1256.599f, 42.6036f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.4508f, -1243.889f, 42.6845f };
							uParam1->f_6 = 83.2f;
							break;
						case 4:
							uParam1->f_3 = { -872.9756f, -1257.088f, 42.5735f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.7613f, -1256.609f, 42.6236f };
							uParam1->f_6 = 83.2f;
							break;
						case 5:
							uParam1->f_3 = { -867.9123f, -1257.62f, 42.5442f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.1403f, -1240.715f, 42.7038f };
							uParam1->f_6 = 83.2f;
							break;
						case 6:
							uParam1->f_3 = { -872.8755f, -1254.01f, 42.5223f };
							uParam1->f_7 = 0f;
							*uParam1 = { -892.9855f, -1259.29f, 42.5953f };
							uParam1->f_6 = 52.8f;
							break;
					}
					break;
				case 1:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -852.5473f, -1247.14f, 42.3693f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -843.9141f, -1242.206f, 42.6034f };
							uParam1->f_6 = 176.8f;
							break;
						case 1:
							uParam1->f_3 = { -855.9294f, -1243.9f, 42.3176f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -841.25f, -1242.694f, 42.5649f };
							uParam1->f_6 = 176.8f;
							break;
						case 2:
							uParam1->f_3 = { -852.6059f, -1243.872f, 42.439f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -838.6961f, -1242.762f, 42.5183f };
							uParam1->f_6 = 176.8f;
							break;
						case 3:
							uParam1->f_3 = { -848.9722f, -1243.993f, 42.5525f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -835.7775f, -1243.111f, 42.5323f };
							uParam1->f_6 = 176.8f;
							break;
						case 4:
							uParam1->f_3 = { -854.2532f, -1241.536f, 42.393f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -832.4411f, -1242.565f, 42.5731f };
							uParam1->f_6 = 176.8f;
							break;
						case 5:
							uParam1->f_3 = { -850.7334f, -1241.698f, 42.5441f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -826.2964f, -1242.557f, 42.5382f };
							uParam1->f_6 = 176.8f;
							break;
						case 6:
							uParam1->f_3 = { -852.285f, -1239.152f, 42.5256f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -820.7101f, -1242.816f, 42.5536f };
							uParam1->f_6 = 176.8f;
							break;
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -843.3099f, -1268.237f, 42.6019f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -837.5016f, -1278.386f, 42.553f };
							uParam1->f_6 = 179.6f;
							break;
						case 1:
							uParam1->f_3 = { -843.525f, -1264.899f, 42.6091f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -835.0971f, -1278.267f, 42.5779f };
							uParam1->f_6 = 179.6f;
							break;
						case 2:
							uParam1->f_3 = { -843.2772f, -1272.027f, 42.5937f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.6918f, -1278.378f, 42.5896f };
							uParam1->f_6 = 179.6f;
							break;
						case 3:
							uParam1->f_3 = { -840.6252f, -1266.123f, 42.5251f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -830.1432f, -1278.289f, 42.602f };
							uParam1->f_6 = 179.6f;
							break;
						case 4:
							uParam1->f_3 = { -840.4869f, -1269.868f, 42.4709f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -827.615f, -1278.281f, 42.612f };
							uParam1->f_6 = 179.6f;
							break;
						case 5:
							uParam1->f_3 = { -838.3458f, -1268.142f, 42.5456f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.3187f, -1270.027f, 42.5925f };
							uParam1->f_6 = 266.8f;
							break;
						case 6:
							uParam1->f_3 = { -838.4648f, -1264.728f, 42.5524f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.2508f, -1267.462f, 42.6008f };
							uParam1->f_6 = 266.8f;
							break;
					}
					break;
			}
			return 1;
		case 3:
			switch (iParam2)
			{
				case 0:
					uParam1->f_3 = { 1342.391f, -1307.51f, 75.5794f };
					uParam1->f_7 = 67.1828f;
					*uParam1 = { 1339.217f, -1305.165f, 75.5944f };
					uParam1->f_6 = 336.17f;
					break;
				case 1:
					uParam1->f_3 = { 1337.586f, -1307.428f, 75.5462f };
					uParam1->f_7 = 66.7219f;
					*uParam1 = { 1313.53f, -1306.432f, 75.3049f };
					uParam1->f_6 = 133.7325f;
					break;
				case 2:
					uParam1->f_3 = { 1323.949f, -1299.458f, 75.2824f };
					uParam1->f_7 = 45.8223f;
					*uParam1 = { 1320.751f, -1286.52f, 75.348f };
					uParam1->f_6 = 265.4273f;
					break;
			}
			return 1;
		case 4:
			vVar0 = { func_114(&Global_1275573) };
			switch (vVar0.y)
			{
				case joaat("CUMBERLAND_FOREST_CAMP"):
				case joaat("GRIZZLIES_CAMP"):
				case joaat("HEARTLAND_CAMP"):
				case joaat("BIG_VALLEY_CAMP"):
				default:
					return 0;
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { -326.39f, 789.19f, 115.667f };
							uParam1->f_7 = 284.1014f;
							*uParam1 = { -321.1662f, 790.267f, 116.0272f };
							uParam1->f_6 = 11.602f;
							break;
						case 1:
							uParam1->f_3 = { -323.692f, 782.932f, 115.776f };
							uParam1->f_7 = 281.4508f;
							*uParam1 = { -312.8937f, 784.9355f, 116.5868f };
							uParam1->f_6 = -168.4326f;
							break;
						case 2:
							uParam1->f_3 = { -314.569f, 792.093f, 116.573f };
							uParam1->f_7 = 282.0273f;
							*uParam1 = { -303.8615f, 793.8496f, 117.1205f };
							uParam1->f_6 = 11.602f;
							break;
					}
				case joaat("HENNIGANS_STEAD_CAMP"):
				case joaat("RIO_BRAVO_CAMP"):
				case joaat("GREAT_PLAINS_CAMP"):
				case joaat("TALL_TREES_CAMP"):
				case joaat("CHOLLA_SPRINGS_CAMP"):
				case joaat("GAPTOOTH_RIDGE_CAMP"):
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { -3678.909f, -2616.646f, -15.0037f };
							uParam1->f_7 = 91.0549f;
							*uParam1 = { -3682.761f, -2615.857f, -15.0603f };
							uParam1->f_6 = 173.9262f;
							break;
						case 1:
							uParam1->f_3 = { -3691.773f, -2608.01f, -14.7773f };
							uParam1->f_7 = 86.4678f;
							*uParam1 = { -3695.737f, -2608.751f, -14.7323f };
							uParam1->f_6 = 27.6929f;
							break;
						case 2:
							uParam1->f_3 = { -3689.26f, -2608.184f, -14.9935f };
							uParam1->f_7 = 90.7284f;
							*uParam1 = { -3698.199f, -2608.378f, -14.7322f };
							uParam1->f_6 = 2.1578f;
							break;
					}
					break;
				case joaat("ROANOKE_RIDGE_CAMP"):
				case joaat("BAYOU_NAWAS_CAMP"):
				case joaat("SCARLETT_MEADOWS_CAMP"):
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { 2815.196f, -1310.15f, 45.624f };
							uParam1->f_7 = 141.0373f;
							*uParam1 = { 2809.395f, -1316.526f, 45.504f };
							uParam1->f_6 = 310.8568f;
							break;
						case 1:
							uParam1->f_3 = { 2817.729f, -1308.707f, 45.558f };
							uParam1->f_7 = 80.7875f;
							*uParam1 = { 2807.212f, -1303.46f, 45.607f };
							uParam1->f_6 = 126.4258f;
							break;
						case 2:
							uParam1->f_3 = { 2806.232f, -1322.305f, 45.446f };
							uParam1->f_7 = 107.4473f;
							*uParam1 = { 2798.7f, -1312.359f, 45.412f };
							uParam1->f_6 = 127.8044f;
							break;
					}
					break;
			}
			return 1;
		case 5:
			if (iParam2 < 0 || iParam2 > 2)
			{
				return 0;
			}
			iVar3 = func_109();
			if (iVar3 == -1)
			{
				return 0;
			}
			Var4 = 3;
			Var4.f_10 = 3;
			Var4.f_14 = 3;
			Var4.f_24 = 3;
			if (!func_314(iVar3, &Var4))
			{
				return 0;
			}
			uParam1->f_3 = { *(Var4[iParam2 /*3*/]) };
			uParam1->f_7 = &Var4.f_10[iParam2];
			*uParam1 = { *(Var4.f_14[iParam2 /*3*/]) };
			uParam1->f_6 = &Var4.f_24[iParam2];
			return 1;
		case 6:
			uParam1->f_3 = { 1442.626f, 369.0727f, 88.8836f };
			uParam1->f_7 = 69.9518f;
			return 1;
		default:
			break;
	}
	return 0;
}

void func_188(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_227(61);
		if (bParam1)
		{
			func_227(68);
		}
	}
	else
	{
		func_228(61);
		func_228(49);
		func_228(68);
	}
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("CUTSCENE_MPCGOI1");
		case 2:
			return joaat("CUTSCENE_MPCGOI2");
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return joaat("CUTSCENE_MPRM1");
		default:
			break;
	}
	return 0;
}

int func_190(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1275573->f_16 == Global_1275573->f_10)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 2:
			iVar1 = 13;
			while (iVar1 <= 15)
			{
				iVar0 = func_315(2, iVar1);
				if (iVar0 == 0)
				{
					return 0;
				}
				if (!NETWORK::_0xFBE782B3165AC8EC(iVar0))
				{
					return 0;
				}
				iVar1++;
			}
			return 1;
		default:
			break;
	}
	return 1;
}

int func_191(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_192(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return -1;
	}
	return Global_1272159[iParam0];
}

int func_193(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return 0;
	}
	return 1;
}

int func_194(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1272170->f_438.f_44[iVar0 /*30*/] == -1)
		{
		}
		else if (&Global_1272170->f_438.f_44[iVar0 /*30*/] != iParam0)
		{
		}
		else
		{
			return (Global_1272170->f_438.f_44[iVar0 /*30*/])->f_1;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_1272170->f_438.f_1245[iVar0 /*30*/] == -1)
		{
		}
		else if (&Global_1272170->f_438.f_1245[iVar0 /*30*/] != iParam0)
		{
		}
		else
		{
			return (Global_1272170->f_438.f_1245[iVar0 /*30*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_195(int iParam0, int iParam1)
{
	struct<30> Var0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1272170->f_438.f_1546 >= 40)
	{
		func_316();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_317();
	Var0.f_3 = iParam1;
	func_318(Var0, 0);
	return Var0;
}

void func_196(int iParam0, int iParam1)
{
	if (!func_110(iParam0))
	{
		return;
	}
	(*Global_1272159)[iParam0] = iParam1;
}

void func_197(int iParam0)
{
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])) && !func_190(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 2:
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_SAMSON_FINCH"), 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_SAMSON_FINCH"), 0, 0));
			}
			break;
		case 6:
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_MAGGIE"), 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_MAGGIE"), 0, 0));
			}
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_DANNYLEE"), 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_DANNYLEE"), 0, 0));
			}
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_AGENT_HIXON"), 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_AGENT_HIXON"), 0, 0));
			}
			break;
	}
}

void func_198()
{
	Global_1958232 = 0;
}

bool func_199(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1272028[iParam0] == iParam0;
}

var func_200(int iParam0)
{
	return &(Global_1103537->f_1752.f_5295[iParam0]);
}

var func_201(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_202(bool bParam0)
{
	if (Global_17172.f_3065.f_1 == -1)
	{
		return;
	}
	if (Global_17172.f_3065 == bParam0)
	{
		return;
	}
	Global_17172.f_3065 = bParam0;
	if (bParam0)
	{
		func_319(Global_17172.f_3065.f_1);
		Global_1051388->f_4545.f_7 = 1;
		func_320(1, 1017438712);
	}
}

int func_203(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return -1;
		}
	}
	return ((*Global_1277166)[iParam0 /*86*/])->f_5.f_12;
}

void func_204(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_321(iParam0, &iVar0, &iVar1);
	if (!func_322(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_323(iVar0, iVar1);
}

bool func_205()
{
	return &Global_1939008 == 1;
}

bool func_206()
{
	return &Global_1939008 == 2;
}

void func_207(float fParam0)
{
}

void func_208()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1939008->f_15 = 0f;
}

int func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_324(iParam0))
	{
		return 0;
	}
	iVar0 = func_325(iParam0, 1);
	if (!func_326(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_327(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_328(iParam0, iVar1))
		{
			case 0:
				func_329(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1140484->f_30603.f_10924)
				{
					if (&Global_1140484->f_30603.f_8871[iVar5 /*3*/] != iVar1 || (Global_1140484->f_30603.f_8871[iVar5 /*3*/])->f_1 != iParam0)
					{
					}
					else
					{
						func_329(iVar1, iParam0, iVar4);
						func_330(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_330(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_331(iVar1, 1);
				func_332(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_333(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1140484->f_30603.f_8870)
					{
						if (&Global_1140484->f_30603.f_8683[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1140484->f_30603.f_8683[iVar6] = -1;
							Global_1140484->f_30603.f_8870 = (Global_1140484->f_30603.f_8870 - 1);
							Global_1140484->f_30603.f_8683[iVar6] = &Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870];
							Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1140484->f_30603.f_847[iVar0 /*12*/] = -1;
			func_334(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

void func_210(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_335();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_211(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

int func_212(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return ((*Global_1139395)[iParam0 /*34*/])->f_8.f_1;
}

bool func_213(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

int func_214(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38.f_12.f_5;
}

int func_215(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case -766600612: /* GXTEntry: "Traveling Opulence" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 158;
				case 1421598733: /* GXTEntry: "Covered" */
					return 174;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 182;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 166;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 190;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 198;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 150;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 22;
				case 12:
					return 4;
				case 13:
					return 12;
				case 9:
					return 41;
				case 10:
					return 33;
				case 8:
					return 49;
				default:
					break;
			}
			break;
		case 226275223: /* GXTEntry: "The Hobo Life" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 159;
				case 1421598733: /* GXTEntry: "Covered" */
					return 175;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 183;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 167;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 191;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 199;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 151;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 23;
				case 12:
					return 5;
				case 13:
					return 13;
				case 9:
					return 42;
				case 10:
					return 34;
				case 8:
					return 50;
				default:
					break;
			}
			break;
		case -2146415538: /* GXTEntry: "Military Surplus" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 160;
				case 1421598733: /* GXTEntry: "Covered" */
					return 176;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 184;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 168;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 192;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 200;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 152;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 24;
				case 12:
					return 6;
				case 13:
					return 14;
				case 9:
					return 43;
				case 10:
					return 35;
				case 8:
					return 51;
				default:
					break;
			}
			break;
		case -892962381: /* GXTEntry: "Survivor" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 161;
				case 1421598733: /* GXTEntry: "Covered" */
					return 177;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 185;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 169;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 193;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 201;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 153;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 25;
				case 12:
					return 7;
				case 13:
					return 15;
				case 9:
					return 44;
				case 10:
					return 36;
				case 8:
					return 52;
				default:
					break;
			}
			break;
		case joaat("UPGRADE_CAMP_THEME_BOUNTY_HUNTER"):
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 162;
				case 1421598733: /* GXTEntry: "Covered" */
					return 178;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 186;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 170;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 194;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 202;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 154;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 26;
				case 12:
					return 8;
				case 13:
					return 16;
				case 9:
					return 45;
				case 10:
					return 37;
				case 8:
					return 53;
				default:
					break;
			}
			break;
		case joaat("UPGRADE_CAMP_THEME_COLLECTOR"):
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 163;
				case 1421598733: /* GXTEntry: "Covered" */
					return 179;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 187;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 171;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 195;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 203;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 155;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 27;
				case 12:
					return 9;
				case 13:
					return 17;
				case 9:
					return 46;
				case 10:
					return 38;
				case 8:
					return 54;
				default:
					break;
			}
			break;
		case joaat("UPGRADE_CAMP_THEME_TRADER"):
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 164;
				case 1421598733: /* GXTEntry: "Covered" */
					return 180;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 188;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 172;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 196;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 204;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 156;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 28;
				case 12:
					return 10;
				case 13:
					return 18;
				case 9:
					return 47;
				case 10:
					return 39;
				case 8:
					return 55;
				default:
					break;
			}
			break;
	}
	switch (iParam3)
	{
		case 11:
			return 21;
		case 12:
			return 3;
		case 10:
			return 31;
		case 9:
			return 40;
		case 8:
			return 56;
		default:
			break;
	}
	switch (iParam1)
	{
		case joaat("UPGRADE_CAMP_EQUIPMENT_FAST_TRAVEL_MAP"):
			return 60;
		case joaat("UPGRADE_CAMP_BUTCHER_TABLE"):
			return 61;
		case joaat("UPGRADE_CAMP_WEAPONS_LOCKER"):
			return 66;
		case joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE"):
			return 62;
		case joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM"):
			return 63;
		case 913131737: /* GXTEntry: "Small Delivery Wagon" */
			return 64;
		case joaat("UPGRADE_CAMP_STEW_POT"):
			return 65;
		case -1396511102: /* GXTEntry: "Deluxe Campfire" */
			return 2;
		case -1991362080: /* GXTEntry: "Black & Tan" */
		case -1535250369: /* GXTEntry: "Tan Brindle" */
		case 914789466: /* GXTEntry: "Black & White" */
			return 67;
		case 55994234: /* GXTEntry: "Dark Brown" */
		case 262209551: /* GXTEntry: "Dead Grass" */
		case 769866899: /* GXTEntry: "Brown" */
			return 68;
		case -429885089: /* GXTEntry: "Yellow" */
		case -289273358: /* GXTEntry: "Chocolate" */
		case 536669287: /* GXTEntry: "Black" */
			return 69;
		case joaat("UPGRADE_CAMP_DOG_HUSKY_003"):
			return 70;
		case 1671341100: /* GXTEntry: "Aqua" */
			return 71;
		case -1336962048: /* GXTEntry: "Blue" */
			return 72;
		case 1262519305: /* GXTEntry: "Green" */
			return 73;
		case -510449329: /* GXTEntry: "Orange" */
			return 74;
		case -474096794: /* GXTEntry: "Pink" */
			return 75;
		case 2022645972: /* GXTEntry: "Purple" */
			return 76;
		case -1867469444: /* GXTEntry: "Red" */
			return 77;
		case 81790578: /* GXTEntry: "Yellow" */
			return 78;
		case 42875037: /* GXTEntry: "White" */
			return 79;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_ALLIGATOR_WHITE_00"):
			return 80;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_BEAR_WHITE_00"):
			return 81;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_BUCK_WHITE_00"):
			return 82;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_COYOTE_WHITE_00"):
			return 83;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_EAGLE_WHITE_00"):
			return 84;
		case 1853960588: /* GXTEntry: "Gila Monster" */
			return 85;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_MORGAN_WHITE_00"):
			return 86;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_STURGEON_WHITE_00"):
			return 87;
		case -801482238: /* GXTEntry: "Tennessee Walker" */
			return 88;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_VULTURE_WHITE_00"):
			return 89;
		case 1101681612: /* GXTEntry: "Baltz" */
			return 90;
		case 1687066518: /* GXTEntry: "Clam Juice" */
			return 91;
		case 846374071: /* GXTEntry: "Festa" */
			return 92;
		case 1173221821: /* GXTEntry: "Gelatin" */
			return 93;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_JJACKS_DEFAULT_00"):
			return 94;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_LCOLA_DEFAULT_00"):
			return 95;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_LUCIFERS_DEFAULT_00"):
			return 96;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_OBEYES_DEFAULT_00"):
			return 97;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_PMGIN_DEFAULT_00"):
			return 98;
		case -1030438211: /* GXTEntry: "Schiffer" */
			return 99;
		case -1413081099: /* GXTEntry: "Ace" */
			return 100;
		case -1291835985: /* GXTEntry: "Ambarino State" */
			return 101;
		case joaat("UPGRADE_CAMP_FLAG_STATE_ANCHOR_BLUE_00"):
			return 102;
		case -1568446057: /* GXTEntry: "Guarma" */
			return 103;
		case 271439292: /* GXTEntry: "Lemoyne State" */
			return 104;
		case -132276375: /* GXTEntry: "New Hanover State" */
			return 105;
		case -908539768: /* GXTEntry: "Skulls" */
			return 106;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_CATFISH_DEFAULT_00"):
			return 107;
		case -1958953278: /* GXTEntry: "Saint Denis" */
			return 108;
		case 733303292: /* GXTEntry: "West Elizabeth State" */
			return 109;
		case -144166169: /* GXTEntry: "Standard 1" */
			return 110;
		case -492687949: /* GXTEntry: "Standard 2" */
			return 111;
		case -874512337: /* GXTEntry: "Standard 3" */
			return 112;
		case -415385882: /* GXTEntry: "Standard 4" */
			return 113;
		case -797537960: /* GXTEntry: "Standard 5" */
			return 114;
		case -941076000: /* GXTEntry: "Traveling Opulence 1" */
			return 119;
		case -1567174399: /* GXTEntry: "Traveling Opulence 2" */
			return 120;
		case -763924656: /* GXTEntry: "The Hobo Life 1" */
			return 121;
		case 1928558912: /* GXTEntry: "The Hobo Life 2" */
			return 122;
		case 524939438: /* GXTEntry: "Military Surplus 1" */
			return 123;
		case -1949362405: /* GXTEntry: "Military Surplus 2" */
			return 124;
		case 908640876: /* GXTEntry: "Survivor 1" */
			return 125;
		case 501275986: /* GXTEntry: "Survivor 2" */
			return 126;
		case 1257532163: /* GXTEntry: "Bounty Hunter" */
			return 127;
		case 1160088249: /* GXTEntry: "Collector" */
			return 128;
		case -267422042: /* GXTEntry: "Trader" */
			return 129;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_SEASONAL_01"):
			return 130;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_SEASONAL_02"):
			return 131;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_SEASONAL_03"):
			return 132;
		case 1054660175: /* GXTEntry: "Standard 6" */
			return 115;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_GENERIC_07"):
			return 116;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_GENERIC_08"):
			return 117;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_GENERIC_09"):
			return 118;
		case -811830793: /* GXTEntry: "Bedroll" */
			return 157;
		case 1421598733: /* GXTEntry: "Covered" */
			return 173;
		case -1281008453: /* GXTEntry: "Lean-To" */
			return 181;
		case 1081855422: /* GXTEntry: "Covered Lean-To" */
			return 165;
		case -805084272: /* GXTEntry: "Open-Air Lean-To" */
			return 189;
		case 1429053594: /* GXTEntry: "Tall Lean-To" */
			return 197;
		case 1802123763: /* GXTEntry: "A-Frame" */
			return 149;
		default:
			break;
	}
	return 0;
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 119:
			return -2089344668;
		case 120:
			return 2050756334;
		case 121:
			return 1086496835;
		case 122:
			return 1461439733;
		case 123:
			return -942529833;
		case 124:
			return 2125074568;
		case 110:
			return joaat("META_OUTFIT_DEFAULT");
		case 111:
			return -1359472568;
		case 112:
			return 309845830;
		case 113:
			return 472445608;
		case 114:
			return -302836163;
		case 125:
			return -827426745;
		case 126:
			return -1585799712;
		case 127:
			return -1378452636;
		case 128:
			return -273086735;
		case 129:
			return 75146260;
		case 130:
			return 1988797837;
		case 131:
			return -182115660;
		case 132:
			return -420968901;
		case 115:
			return -324004853;
		case 116:
			return -81940250;
		case 117:
			return 1363893568;
		case 118:
			return 1604450797;
		default:
			break;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPSW_LOCATION_00"):
			return 0;
		case joaat("MPSW_LOCATION_01"):
			return 1;
		case joaat("MPSW_LOCATION_02"):
			return 2;
		case joaat("MPSW_LOCATION_03"):
			return 3;
		case joaat("MPSW_LOCATION_04"):
			return 4;
		case joaat("MPSW_LOCATION_05"):
			return 5;
		case joaat("MPSW_LOCATION_06"):
			return 6;
		case joaat("MPSW_LOCATION_07"):
			return 7;
		case joaat("MPSW_LOCATION_08"):
			return 8;
		case joaat("MPSW_LOCATION_09"):
			return 9;
		case joaat("MPSW_LOCATION_10"):
			return 10;
		case joaat("MPSW_LOCATION_11"):
			return 11;
		default:
			break;
	}
	return 0;
}

Vector3 func_218()
{
	return 0f, 0f, 0f;
}

int func_219(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	float fVar5;

	Var0 = (Global_1070356->f_26934[47 /*4*/])->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_336(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = MISC::GET_HASH_KEY("vPropPos");
	DATAFILE::_DATAFILE_GET_VECTOR(uParam1, &Var0);
	fVar5 = 0f;
	Var0.f_2 = 1059891245;
	Var0.f_3 = MISC::GET_HASH_KEY("fPropHead");
	DATAFILE::_DATAFILE_GET_FLOAT(&fVar5, &Var0);
	uParam2->f_2 = fVar5;
	return 1;
}

int func_220(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, iVar0, 3);
	iVar4 = 0;
	while (iVar4 <= (iVar5 - 1))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = MISC::_0x18013392501CE5DC(iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (!ENTITY::IS_ENTITY_VISIBLE(iVar2))
		{
		}
		else if (iParam0 != ENTITY::GET_ENTITY_MODEL(iVar2))
		{
		}
		else
		{
			iVar3 = iVar2;
		}
		else
		{
			iVar4++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

int func_221()
{
	return Global_1099294->f_339;
}

void func_222(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

void func_223(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	IntToString(&cVar0, uParam0->f_1, 64);
	if (!PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(uParam0->f_10)))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 <= 86)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, uParam0->f_10, func_337(iVar8, 1));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, func_337(iVar8, 1), uParam0->f_10);
		iVar8++;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_1, uParam0->f_10);
}

int func_224()
{
	if ((Global_1275573->f_16 < 0 || Global_1275573->f_16 >= 32) || !NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[Global_1275573->f_16])))
	{
		return 0;
	}
	if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(&(Global_1275573->f_154[Global_1275573->f_16]))))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0, var uParam1, char* sParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	switch (iParam0)
	{
		case 4:
		default:
			return 0;
			StringCopy(sParam2, "local_player_variation", 64);
			vVar0 = { func_114(&Global_1275573) };
			switch (vVar0.y)
			{
				case joaat("CUMBERLAND_FOREST_CAMP"):
				case joaat("GRIZZLIES_CAMP"):
				case joaat("HEARTLAND_CAMP"):
				case joaat("BIG_VALLEY_CAMP"):
				default:
					return 0;
					*uParam1 = 0;
				case joaat("HENNIGANS_STEAD_CAMP"):
				case joaat("RIO_BRAVO_CAMP"):
				case joaat("GREAT_PLAINS_CAMP"):
				case joaat("TALL_TREES_CAMP"):
				case joaat("CHOLLA_SPRINGS_CAMP"):
				case joaat("GAPTOOTH_RIDGE_CAMP"):
					*uParam1 = 1;
					break;
				case joaat("ROANOKE_RIDGE_CAMP"):
				case joaat("BAYOU_NAWAS_CAMP"):
				case joaat("SCARLETT_MEADOWS_CAMP"):
					*uParam1 = 2;
					break;
			}
			return 1;
		case 5:
			StringCopy(sParam2, "local_player_variation", 64);
			*uParam1 = 0;
			iVar3 = func_109();
			if (iVar3 == -1)
			{
				return 1;
			}
			if (!func_338(iVar3, &iVar4))
			{
				return 1;
			}
			switch (iVar4)
			{
				case joaat("PROP_HUMAN_SEAT_CHAIR_READING"):
				default:
					return 0;
					*uParam1 = 0;
					return 1;
				case joaat("WORLD_HUMAN_SMOKE_NAZAR"):
					*uParam1 = 1;
					return 1;
				case joaat("WORLD_HUMAN_DANCING"):
					*uParam1 = 2;
					return 1;
					return 1;
			}
		}

var func_226(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;

	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _NAMESPACE76::_0x9F2CC2439A04E7BA(uParam0, &vVar0, iParam4);
	return uVar3;
}

int func_227(int iParam0)
{
	if (func_339(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)
{
	if (func_340(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_229(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = -1;
		fVar3 = 0f;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			fVar4 = BUILTIN::VDIST(Global_1275573->f_17, (Global_1070356->f_22101.f_366[iVar1 /*272*/])->f_2);
			if (fVar4 < fVar3 || iVar2 == -1)
			{
				iVar2 = iVar1;
				fVar3 = fVar4;
			}
			iVar1++;
		}
		iVar0 = iVar2;
	}
	iVar0 = &Global_1070356->f_22101.f_366[iVar0 /*272*/];
	iVar5 = func_341(iVar0);
	if (iVar5 <= 0)
	{
		return 0;
	}
	else
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		if (func_342(iVar0, iVar6, uParam0, fParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_230(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_343(255) == 4)
	{
		return;
	}
	if (func_111(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (bParam10)
	{
		func_344(0, 0, 0, 1);
	}
	func_227(0);
	func_227(3);
	Global_1099294->f_586 = iParam11;
	Global_1099294->f_587 = fParam12;
	Global_1099294->f_588 = iParam13;
	func_345(&(Global_1099294->f_516));
	Global_1099294->f_516 = fParam3;
	Global_1099294->f_516.f_5 = 1;
	Global_1099294->f_516.f_17.f_6 = { vParam0 };
	Global_1099294->f_516.f_17.f_3 = { 0f, 0f, 0f };
	Global_1099294->f_516.f_17 = { fParam9, fParam9, fParam9 };
	Global_1099294->f_516.f_17.f_9 = joaat("VOLSPHERE");
	if (fParam8 > 1f)
	{
		Global_1099294->f_516.f_16 = 1;
		Global_1099294->f_516.f_6.f_6 = { Global_1099294->f_516.f_17.f_6 };
		Global_1099294->f_516.f_6.f_3 = { 0f, 0f, 0f };
		Global_1099294->f_516.f_6 = { fParam8, fParam8, fParam8 };
		Global_1099294->f_516.f_6.f_9 = joaat("VOLSPHERE");
	}
	func_346(&(Global_1099294->f_555));
	Global_1099294->f_555.f_6 = { vParam4 };
	Global_1099294->f_555 = fParam7;
	Global_1099294->f_555.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_347(Global_1099294->f_516, 36);
	func_348(Global_1099294->f_555, 36);
}

bool func_231(var uParam0)
{
	return uParam0->f_306 == 0;
}

Vector3 func_232(var uParam0)
{
	switch (*uParam0)
	{
		case 4:
			return 10f, 10f, 5f;
		case 3:
			return 5f, 5f, 5f;
		default:
			break;
	}
	return 11.8675f, 12.9474f, 8.828214f;
}

float func_233(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_234(var uParam0)
{
	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
			if (func_349())
			{
				return 1;
			}
			if (Global_1275565->f_2.f_1 == 1 || func_350())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_MOUNT(Global_1275573->f_8);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
		{
			if (PED::_0x3AA24CCC0D451379(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
			{
				*iParam0 = iVar1;
				return 1;
			}
		}
	}
	return 0;
}

void func_236(int iParam0)
{
	vector3 vVar0;
	var uVar4;

	vVar0.x = 191;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar4, iParam0);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &vVar0, 4, 16, &uVar4);
}

bool func_237(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

int func_238(int iParam0, int iParam1)
{
	if (!func_237(iParam0))
	{
		return 0;
	}
	if (func_300() == -1)
	{
		return ((Global_1915180->f_3[iParam0 /*447*/])->f_6 && iParam1) != 0;
	}
	else
	{
		return ((Global_1051388->f_69[iParam0 /*76*/])->f_1 && iParam1) != 0;
	}
	return 0;
}

void func_239(int iParam0, int iParam1)
{
	if (!func_237(iParam0))
	{
		return;
	}
	if (func_300() == -1)
	{
		(Global_1915180->f_3[iParam0 /*447*/])->f_6 = ((Global_1915180->f_3[iParam0 /*447*/])->f_6 || iParam1);
	}
	else
	{
		(Global_1051388->f_69[iParam0 /*76*/])->f_1 = ((Global_1051388->f_69[iParam0 /*76*/])->f_1 || iParam1);
	}
}

void func_240(int iParam0, int iParam1)
{
	if (!func_237(iParam0))
	{
		return;
	}
	if (func_300() == -1)
	{
		(Global_1915180->f_3[iParam0 /*447*/])->f_6 = ((Global_1915180->f_3[iParam0 /*447*/])->f_6 - ((Global_1915180->f_3[iParam0 /*447*/])->f_6 && iParam1));
	}
	else
	{
		(Global_1051388->f_69[iParam0 /*76*/])->f_1 = ((Global_1051388->f_69[iParam0 /*76*/])->f_1 - ((Global_1051388->f_69[iParam0 /*76*/])->f_1 && iParam1));
	}
}

int func_241(int iParam0)
{
	if (func_351())
	{
		if (Global_1915180->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_242(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1939178->f_12)
	{
		if ((bParam2 || Global_1939178->f_13 > 0) || Global_1939178->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1939178->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1939178->f_14 > 0 || (bParam2 && Global_1939178->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1939178->f_7)
		{
			if (bParam2 || Global_1939178->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_243(int iParam0, bool bParam1)
{
	float fVar0;

	switch (iParam0)
	{
		case 1:
		default:
			fVar0 = 0f;
			break;
			fVar0 = 100f;
			break;
		case 2:
			fVar0 = 100f;
			break;
		case 3:
			fVar0 = 100f;
			break;
		case 4:
			fVar0 = 100f;
			break;
		case 5:
			fVar0 = 100f;
			break;
		case 6:
			fVar0 = 100f;
			break;
	}
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

void func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_352(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= (29 - 1))
	{
		iVar2 = ((29 - 1) - iVar1);
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, iVar2, false))
		{
			if (iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (iVar2 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 116, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, iVar2, false, false);
			}
		}
		iVar1++;
	}
}

Vector3 func_245(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "INVALID_HANDLE", 24);
	switch (iParam0)
	{
		case 1:
		default:
			break;
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_m_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_m_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_m_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_f_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_f_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_f_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_f_4", 24);
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_m_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_m_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_m_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_f_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_f_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_f_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_f_4", 24);
						break;
				}
			}
			break;
		case 3:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
		case 4:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
		case 5:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
		case 6:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
	}
	return cVar0;
}

void func_246(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_247(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_248(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_249(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_34) && !PED::IS_PED_INJURED(Global_34))
		{
			if (PED::_GET_HORSE_RIDER(iParam0, false) == Global_34)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_248(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_250(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_353(vVar0, vVar3, vParam1);
}

bool func_251(bool bParam0, bool bParam1)
{
	return (bParam0 && bParam1) != 0;
}

int func_252(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_248(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_247(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_247(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_247(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_253(var uParam0, int iParam1)
{
	func_354(uParam0, iParam1);
}

int func_254(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_255(int iParam0)
{
	if (func_355(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_254(iParam0, 0))
	{
		return func_357(func_356(iParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_257(int iParam0)
{
	if (!func_172() && func_358())
	{
		return 1;
	}
	return func_355(iParam0, 1435272033);
}

bool func_258(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_359(iParam0))
	{
		return false;
	}
	bVar1 = func_251(bParam3, 2);
	bVar2 = func_268(iParam0, -570078785, bVar1);
	bVar3 = func_268(iParam0, -915411861, bVar1);
	if (func_268(iParam0, 997808187, bVar1))
	{
		bParam1 = 997808187;
	}
	else if (iParam4 && (func_360(iParam0, &iVar0) || func_361(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		bParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_264())
		{
			bParam1 = -570078785;
		}
		else
		{
			bParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		bParam1 = -915411861;
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_259(int iParam0, bool bParam1)
{
	if (iParam0 == joaat("UPGRADE_MOONSHINER_BAND") && UNLOCK::_UNLOCK_IS_UNLOCKED(-1387714323))
	{
		return true;
	}
	return (func_263(iParam0, 997808187) && !func_362(iParam0, 997808187, bParam1));
}

int func_260(int iParam0)
{
	int iVar0;

	iVar0 = func_256(iParam0, 1);
	if (iVar0 != 0 && func_268(iVar0, 997808187, 0))
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1831140953))
		{
			return 1;
		}
	}
	return 0;
}

bool func_261(int iParam0, int iParam1)
{
	*iParam1 = func_363(iParam0, 1);
	return *iParam1 != 0;
}

bool func_262(int iParam0, int iParam1)
{
	*iParam1 = func_364(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_263(int iParam0, bool bParam1)
{
	if (!func_254(iParam0, 0))
	{
		return false;
	}
	if (func_255(iParam0))
	{
		return func_268(func_256(iParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, bParam1) > 0;
}

bool func_264()
{
	return Global_1915180->f_21962;
}

int func_265(int iParam0, bool bParam1)
{
	if (!func_355(iParam0, 947377998))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_355(iParam0, -1090933859))
		{
			return func_256(iParam0, 1) != 0;
		}
		if ((func_362(iParam0, -915411861, 0) || func_362(iParam0, 600942249, 0)) || func_362(iParam0, -570078785, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_266(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_365(iParam0, 1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_269(iVar0, -2141192156))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!func_270(iVar0, -2141192156, &uVar1))
		{
			return 0;
		}
	}
	return 1;
}

int func_267(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	*iParam1 = 0;
	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	if (func_366(iParam0))
	{
		return 0;
	}
	if (func_355(iParam0, 81450561) || func_355(iParam0, 1342455455))
	{
		return 0;
	}
	if (func_255(iParam0))
	{
		return 0;
	}
	iVar0 = func_256(iParam0, 1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_268(iVar0, -570078785, 0))
	{
		return 0;
	}
	if (Global_1915180->f_21989.f_2 == 1)
	{
		Var1 = { func_277(iParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return 0;
		}
	}
	*iParam1 = iVar0;
	return 1;
}

int func_268(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_359(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_269(iParam0, bParam1);
	}
	return 1;
}

int func_269(int iParam0, bool bParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == bParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

int func_270(int iParam0, bool bParam1, var uParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_367(iParam0, bParam1, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH"))
			{
				if (!func_273((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!func_272((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (func_368(&(Var0[iVar32 /*2*/]), 0, 0, 1) < (Var0[iVar32 /*2*/])->f_1)
			{
				*uParam2 = { *(Var0[iVar32 /*2*/]) };
				return 0;
			}
			iVar32++;
		}
	}
	return 1;
}

int func_271(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;

	if (!func_254(iParam0, 0))
	{
		Global_1051388->f_58 = 0;
		Global_1051388->f_45 = 0;
		return 0;
	}
	bVar1 = func_267(iParam0, &iVar0);
	if ((bParam2 && bVar1) || ((func_264() && bVar1) && bParam1 == 0))
	{
		if (func_268(iVar0, 997808187, 0) && !func_269(iVar0, 997808187))
		{
			Global_1051388->f_45 = 0;
			Global_1051388->f_58 = iParam0;
			return Global_1051388->f_45;
		}
		else if (func_268(iVar0, -570078785, 0))
		{
			if (bParam3)
			{
				iVar2 = func_369(iVar0, -570078785, 0, 1);
			}
			else
			{
				iVar2 = func_292(func_369(iVar0, -570078785, 0, 1));
			}
			Global_1051388->f_45 = iVar2;
			Global_1051388->f_58 = iParam0;
			return Global_1051388->f_45;
		}
	}
	bVar3 = bParam1;
	if (bVar3 == 0)
	{
		bVar3 = func_154(iParam0, bVar3, 1, -1, 1);
	}
	iVar4 = 0;
	if (func_370(iParam0))
	{
		iVar4 = func_371(iParam0);
	}
	else if (func_372(iParam0))
	{
		iVar4 = func_373(iParam0);
	}
	if (iVar4 != 0)
	{
		iVar2 = func_369(iVar4, bVar3, 0, 1);
		bVar5 = false;
		if (func_294(bVar3))
		{
			if (func_374(iVar4, joaat("CURRENCY_GOLD_BAR"), bVar3, 1, 1) > 0)
			{
				bVar5 = true;
			}
		}
		if ((bVar3 == -570078785 || bVar5) && !bParam3)
		{
			iVar2 = func_292(iVar2);
		}
		Global_1051388->f_58 = iParam0;
		return iVar2;
	}
	if (bVar3 == 997808187)
	{
		Global_1051388->f_58 = iParam0;
		Global_1051388->f_45 = 0;
		return 0;
	}
	else
	{
		iVar2 = func_290(iParam0, bVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_294(bVar3))
		{
			if (func_291(iParam0, joaat("CURRENCY_GOLD_BAR"), bVar3, 1, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((bVar3 == -570078785 || bVar6) && !bParam3)
		{
			iVar2 = func_292(iVar2);
		}
		Global_1051388->f_45 = iVar2;
		Global_1051388->f_58 = iParam0;
		if (Global_1051388->f_59 != Global_1051388->f_58)
		{
			Global_1051388->f_59 = Global_1051388->f_58;
		}
		else
		{
			Global_1051388->f_59 = 0;
		}
		return iVar2;
	}
	Global_1051388->f_45 = 0;
	return -1;
}

bool func_272(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

bool func_273(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_300() == 0)
	{
		return func_375(iParam0);
	}
	return iParam0 <= func_376();
}

int func_274(int iParam0, int iParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (func_255(iParam0))
	{
		return func_270(func_256(iParam0, 1), bParam2, uParam3);
	}
	if (!func_377(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (func_378(0) && !func_379());
	if (iParam6 != 0)
	{
		if (func_300() == 0)
		{
			return 0;
		}
		bParam5 = false;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0 || &Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_273(iVar32))
			{
				Jump @438; //curOff = 179
			}
			else if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_272(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = func_380(&(Var0[iVar34 /*2*/]), iParam6);
				}
				else
				{
					iVar33 = func_368(&(Var0[iVar34 /*2*/]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_381(&(Var0[iVar34 /*2*/])) || func_382(&(Var0[iVar34 /*2*/])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_383(7, &(Var0[iVar34 /*2*/]), &iVar36);
						}
						iVar38 = func_384(&(Var0[iVar34 /*2*/]), iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*uParam4 = iVar36;
							}
						}
						else
						{
							Jump @422; //curOff = 378
							if (bParam5 && ((iVar33 + func_385(7, &(Var0[iVar34 /*2*/]))) + func_386(&(Var0[iVar34 /*2*/]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *(Var0[iVar34 /*2*/]) };
								return 0;
							}
						}
						iVar34++;
						return 1;
					}
				}
			}
		}
	}

int func_275(var uParam0)
{
	if (!func_254(*uParam0, 0))
	{
		return 0;
	}
	if (!func_387(*uParam0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*uParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*uParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*uParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*uParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

int func_276(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam7;
	Var0.f_11 = Param2.f_4;
	Var0.f_4 = { Param2 };
	Var0.f_10 = iParam8;
	Var0.f_14 = iParam10;
	if (!func_388(iParam0, iParam1, &Var0, iParam9, bParam11, iParam12, iParam13))
	{
		return 0;
	}
	func_389(Var0);
	return 1;
}

struct<5> func_277(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_390(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_391(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_392(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_393(bParam1) };
			if (iParam2 && func_394(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_395(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_395(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_396(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_397(bParam1) };
			switch (func_398(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_399(iParam0, -1823706425))
			{
				Var0 = { func_392(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_399(iParam0, -1483207246))
			{
				Var0 = { func_392(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_392(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_399(iParam0, -1653629781))
			{
				Var0 = { func_392(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_400(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_399(iParam0, -1653629781))
			{
				Var0 = { func_392(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_278(int iParam0)
{
	return func_355(iParam0, 709475682);
}

int func_279(int* iParam0, int iParam1, struct<4> Param2, int iParam6, var uParam7, bool bParam8, bool bParam9)
{
	struct<16> Var0;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	var uVar21;
	struct<4> Var26;
	struct<4> Var30;
	struct<4> Var34;
	int iVar38;
	int iVar39;
	bool bVar40;
	int iVar41;
	int iVar42;

	if (!func_254(iParam1, 0))
	{
		return 0;
	}
	if (!func_401(iParam0, 0))
	{
		return 0;
	}
	if (bParam8 == 0)
	{
		bParam8 = func_154(iParam1, bParam8, 1, -1, 1);
	}
	func_402(&bParam9, 32);
	func_402(&bParam9, 64);
	func_402(&bParam9, 4);
	func_402(&bParam9, 128);
	func_402(&bParam9, 2);
	if (iParam6 < 1)
	{
		iParam6 = 1;
	}
	if (!func_403(iParam0, iParam1, Param2, -1591664384, bParam8, iParam6, bParam9, 1))
	{
		return 0;
	}
	Var0 = { func_404(iParam1, Param2, 1084182731, iParam6, 0) };
	Var0.f_13 = bParam8;
	Var0.f_12 = 1248274121;
	*uParam7 = { Var0 };
	if (!func_405(iParam0, joaat("USE")))
	{
		return 0;
	}
	bVar16 = false;
	bVar17 = false;
	iVar18 = Global_1915180->f_19742.f_49;
	iVar19 = Global_1915180->f_19742.f_50;
	iVar41 = 0;
	while (iVar41 < 5)
	{
		if (!func_254(&(Global_1051388->f_46[iVar41]), 0))
		{
		}
		else if (!func_406(&(Global_1051388->f_46[iVar41]), iVar18, &iVar20, &Var30, &uVar21, 1, iVar19))
		{
		}
		else
		{
			iVar38 = func_391(&(Global_1051388->f_46[iVar41]));
			Var26 = { func_392(&(Global_1051388->f_46[iVar41]), Var30, iVar20, 0) };
			switch (iVar38)
			{
				case joaat("WEAPON_MOD"):
				case joaat("WEAPON_DECORATION"):
					if (!func_395(&(Global_1051388->f_46[iVar41]), &Var30, iVar20, 0, 0))
					{
						if (!&Global_1051388->f_46.f_6[iVar41])
						{
						}
						else if (func_407(&(Global_1051388->f_46[iVar41])))
						{
						}
						else
						{
							bVar40 = bParam8;
							if (func_263(&(Global_1051388->f_46[iVar41]), 997808187))
							{
								bVar40 = 997808187;
							}
							if (!func_408(iParam0, &(Global_1051388->f_46[iVar41]), Var30, iVar20, 1, &Var0, 0, bVar40, 0, bParam9, 0))
							{
								bVar16 = false;
								Jump @628; //curOff = 487
							}
							else
							{
								bVar17 = true;
							}
							bVar16 = true;
							Jump @616; //curOff = 499
							if (!&Global_1051388->f_46.f_6[iVar41])
							{
								iVar39 = func_409(Var30, iVar20, 0, -1);
								if (!func_254(iVar39, 0))
								{
								}
								else
								{
									Var34 = { func_392(iVar39, Var34, iVar20, 0) };
									if (!func_410(Var34, 0))
									{
										bVar16 = false;
										Jump @628; //curOff = 579
									}
									else
									{
										bVar16 = true;
									}
									Jump @616; //curOff = 588
									if (!func_410(Var26, 1))
									{
										bVar16 = false;
										Jump @628; //curOff = 607
									}
									else
									{
										bVar16 = true;
									}
								}
								iVar41++;
								if (!bVar16)
								{
									func_411(iParam0);
									return 0;
								}
								if (bVar17)
								{
									if (!func_412(iParam0))
									{
										return 0;
									}
									else
									{
										iVar42 = WEAPON::_0x46F032B8DDF46CDE(iVar18);
										if (!MISC::IS_BIT_SET(&(Global_1051388->f_4349[(func_413(iVar42, 1) / 32)]), (func_413(iVar42, 1) % 32)))
										{
											func_415(func_414(joaat("UPDATED"), joaat("WEAPON_CUSTOMIZATION")), 1);
											MISC::SET_BIT(Global_1051388->f_4349[(func_413(iVar42, 1) / 32)], (func_413(iVar42, 1) % 32));
										}
									}
								}
								return 1;
							}
						}
					}
			}
		}
	}

int func_280(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	struct<16> Var0;
	struct<17> Var16;

	if (!func_401(iParam0, 0))
	{
		return 0;
	}
	if (bParam10 == 0)
	{
		bParam10 = func_154(iParam1, bParam10, 1, bParam11, 1);
	}
	if (!func_403(iParam0, iParam1, Param2, iParam6, bParam10, iParam7, bParam11, bParam12))
	{
		return 0;
	}
	Var0 = { func_404(iParam1, Param2, iParam6, iParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_391(iParam1) == joaat("CLOTHING"))
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_416(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return 0;
		}
	}
	else if (!func_417(iParam0, Var0, 2113164098, iParam9, bParam11))
	{
		return 0;
	}
	return 1;
}

void func_281(struct<9> Param0, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = Param0.f_8;
	if (INVENTORY::_0x2BAE4880DCDD560B(iVar0, 0))
	{
		iVar1 = func_418(iVar0, 0);
		if (!AUDIO::_0x6DF942C4179BE5AB(iVar1, joaat("HUD_SHOP_SOUNDSET")))
		{
			AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		}
		else
		{
			AUDIO::_0xE8EAFF7B41EDD291(iVar1, joaat("HUD_SHOP_SOUNDSET"), 0);
		}
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

int func_282(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return func_419(255);
		case 7:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			iVar0 = func_420(iParam0);
			if (func_254(iVar0, 0))
			{
				return func_421(iVar0, func_390(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			break;
	}
	return 0;
}

bool func_283()
{
	return Global_1199507->f_26;
}

int func_284(vector3 vParam0)
{
	switch (vParam0.x)
	{
		case 0:
		default:
			return 0;
			if (vParam0.y == -1)
			{
				return 0;
			}
		case 1:
			if (vParam0.z == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_285(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return 0;
	}
	switch (vParam0.x)
	{
		case 0:
			if (vParam0.y != vParam3.y)
			{
				return 0;
			}
			break;
		case 1:
			if (vParam0.z != vParam3.z)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_286(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (!func_153(*uParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	return func_155(iVar0, func_154(iVar0, 0, 1, -1, 1), 1);
}

int func_287(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_422();
	}
	if (!func_423(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_424(iParam0);
	Global_1896726->f_386 = 1;
	Global_1896726->f_387 = bParam1;
	return 1;
}

bool func_288(int iParam0)
{
	return iParam0 == Global_1939231->f_1433;
}

int func_289(int iParam0, char* sParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 3:
		default:
			return 0;
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return 1;
		case 4:
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return 1;
		case 5:
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return 1;
		}

int func_290(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -915411861) && func_263(iParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_255(iParam0))
	{
		return func_369(func_256(iParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_377(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || &Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}

int func_291(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (func_255(iParam0))
	{
		return func_374(func_256(iParam0, 0), iParam1, bParam2, bParam4, 1);
	}
	if (!func_377(iParam0, bParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == iParam1)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam4)
	{
	}
	return 0;
}

int func_292(int iParam0)
{
	return (iParam0 / 100);
}

int func_293(bool bParam0)
{
	switch (bParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_294(bool bParam0)
{
	switch (bParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1197011183:
		case 75922725:
		case 1070046552:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_295(int iParam0)
{
	int iVar0;

	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_425(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_296(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;
	char* sVar1;

	if (bParam4 && !func_77(iParam0))
	{
		return;
	}
	iVar0 = func_185(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	sVar1 = MISC::_CREATE_VAR_STRING(0, sParam2);
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sVar1, sParam3));
}

void func_297(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_77(iParam0))
	{
		return;
	}
	iVar0 = func_185(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iVar0 /*23*/])->f_3, bParam1);
}

int func_298(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_426(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_427(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_427(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

void func_299(int iParam0)
{
	Global_1103537->f_1752.f_5299 = (Global_1103537->f_1752.f_5299 || iParam0);
}

int func_300()
{
	return Global_1572887->f_13;
}

void func_301(int iParam0, int iParam1)
{
	if (!func_428(iParam0))
	{
		return;
	}
	Global_1915180->f_17437[iParam0] = (Global_1915180->f_17437[iParam0] || iParam1);
}

void func_302(int iParam0, int iParam1)
{
	if (!func_428(iParam0))
	{
		return;
	}
	Global_1915180->f_17437[iParam0] = (&Global_1915180->f_17437[iParam0] - (Global_1915180->f_17437[iParam0] && iParam1));
}

bool func_303(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_304(var uParam0)
{
	func_429(uParam0, 0);
}

bool func_305(var uParam0)
{
	return func_303(*uParam0, 2);
}

int func_306(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

bool func_307(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_308(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = iParam5;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949759)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949759)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949759)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949759)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949759)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1949759)[iParam0 /*23*/])->f_3 = iVar0;
	func_310(iParam0, 1);
	func_311(iParam0, 1);
	func_312(iParam0, 128);
}

void func_309(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_310(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_307(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
		}
	}
}

void func_311(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
	}
}

void func_312(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

bool func_313(int iParam0)
{
	return func_307(iParam0, 2);
}

int func_314(int iParam0, var uParam1)
{
	struct<4> Var0;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	vector3 vVar10[24];

	Var0 = (Global_1070356->f_26934[47 /*4*/])->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_336(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < 3)
	{
		vVar5 = { func_218() };
		fVar8 = 0f;
		StringCopy(&cVar10, "vPlayerPos", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = 491979052;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
		StringCopy(&cVar10, "fPlayerHead", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = -1023214806;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_FLOAT(&fVar8, &Var0);
		*((*uParam1)[iVar9 /*3*/]) = { vVar5 };
		uParam1->f_10[iVar9] = fVar8;
		vVar5 = { func_218() };
		fVar8 = 0f;
		StringCopy(&cVar10, "vHorsePos", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = 491979052;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
		StringCopy(&cVar10, "fHorseHead", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = -1023214806;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_FLOAT(&fVar8, &Var0);
		*(uParam1->f_14[iVar9 /*3*/]) = { vVar5 };
		uParam1->f_24[iVar9] = fVar8;
		iVar9++;
	}
	return 1;
}

int func_315(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_316()
{
}

var func_317()
{
	Global_1272170->f_438.f_1552++;
	if (Global_1272170->f_438.f_1552 >= 2147483646)
	{
		Global_1272170->f_438.f_1552 = 0;
	}
	return Global_1272170->f_438.f_1552;
}

void func_318(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*(Global_1272170->f_438.f_44[func_430() /*30*/]) = { Param0 };
			func_431((func_430() + 1 % 40));
			Global_1272170->f_438.f_1546++;
			break;
		case 1:
			*(Global_1272170->f_438.f_1245[func_432() /*30*/]) = { Param0 };
			func_433((func_432() + 1 % 10));
			Global_1272170->f_438.f_1547++;
			break;
	}
}

void func_319(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1915180->f_17791 = iParam0;
	}
}

int func_320(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_434())
	{
		return 0;
	}
	if (!func_172())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_435(&Global_0, 8);
	}
	func_435(&Global_0, 1);
	return 1;
}

void func_321(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_322(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_436(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_437(iParam0))
	{
		return 0;
	}
	if (func_438(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_439(iParam0, 1)) || func_440(32768))
	{
		if (!func_439(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_441())
	{
		return 0;
	}
	return 1;
}

void func_323(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_324(int iParam0)
{
	int iVar0;

	iVar0 = func_325(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_325(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2006026692:
			return 166;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 163;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1631930150:
			return 161;
		case -1629969648:
			return 164;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 162;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 167;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 171;
		case 320758674:
			return 158;
		case 352539363:
			return 169;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 165;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1498983922:
			return 84;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1614000521:
			return 170;
		case 1636352616:
			return 151;
		case 1662680949:
			return 168;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_326(int iParam0)
{
	int iVar0;

	iVar0 = func_327(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_327(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 127;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 138;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 128;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 122;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 134;
		case -1105699593:
			return 141;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 131;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 123;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 117;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 119;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 115;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 136;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 126;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 118;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 140;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 132;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 124;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 125;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 139;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 135;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 120;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 129;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 137;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 121;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 116;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_328(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_442(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_331(iParam1, 1);
	switch ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_329(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_324(iParam1))
	{
		return 0;
	}
	if (!func_443(iParam0))
	{
		return 0;
	}
	iVar0 = func_331(iParam0, 1);
	func_444(iParam0, iParam1, iParam2);
	if (func_445(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_446(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_447((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_448(vVar1))
		{
			if (func_449(vVar1.x, vVar1.y, vVar1.z))
			{
				func_450((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_451((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_451((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_330(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_331(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 170;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 183;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 177;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 151;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 172;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 186;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 163;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 174;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 182;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 171;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 155;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 162;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 150;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 159;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 165;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 185;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 184;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 168;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 160;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 173;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 152;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 166;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 179;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 178;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 180;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 153;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 169;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 157;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 156;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 164;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 154;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_332(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_333(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_334(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		(uParam0->f_1[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
}

void func_335()
{
	if (!Global_1099294->f_16)
	{
		return;
	}
	Global_1070356->f_27136.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

int func_336(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return joaat("SHOP_BUT_MUSICIAN_BANJO");
		case 6:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 7:
			return joaat("SHOP_BLK_GUNSMITH");
		case 8:
			return joaat("SHOP_BLK_BARBER");
		case 19:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 122:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 123:
			return joaat("SHOP_BLK_COACH");
		case 5:
			return joaat("SHOP_BLK_BANK");
		case 9:
			return joaat("SHOP_BLK_BUTCHER");
		case 10:
			return joaat("SHOP_BLK_BARTENDER");
		case 11:
			return joaat("SHOP_BLK_PIANIST");
		case 16:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST");
		case 17:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND");
		case 18:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD");
		case 23:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 24:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 25:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 22:
			return joaat("SHOP_EMR_FENCE");
		case 26:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 45:
			return joaat("SHOP_SDN_DOCTOR");
		case 48:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 46:
			return joaat("SHOP_SDN_FENCE");
		case 49:
			return joaat("SHOP_SDN_GUNSMITH");
		case 42:
			return joaat("SHOP_SDN_BANK");
		case 43:
			return joaat("SHOP_SDN_BARBER");
		case 44:
			return joaat("SHOP_SDN_BUTCHER");
		case 50:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 51:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 52:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 53:
			return joaat("SHOP_SDN_TAILOR");
		case 63:
			return joaat("SHOP_SDN_TRAPPER");
		case 56:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 57:
			return joaat("SHOP_SDN_PIANIST_SLUM");
		case 60:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 124:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 125:
			return joaat("SHOP_SDN_COACH");
		case 54:
			return joaat("SHOP_SDN_BARTENDER");
		case 55:
			return joaat("SHOP_SDN_PIANIST");
		case 59:
			return joaat("SHOP_SDN_MUSICIAN_BANJO");
		case 58:
			return joaat("SHOP_SDN_MUSICIAN_GUITARIST");
		case 61:
			return joaat("SHOP_SDN_THEATER_MP");
		case 62:
			return joaat("SHOP_SDN_THEATER_MAGIC_MP");
		case 27:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 28:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 33:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 31:
			return joaat("SHOP_RHO_FENCE");
		case 34:
			return joaat("SHOP_RHO_GUNSMITH");
		case 35:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 30:
			return joaat("SHOP_RHO_BUTCHER");
		case 39:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 126:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 29:
			return joaat("SHOP_RHO_BANK");
		case 36:
			return joaat("SHOP_RHO_BARTENDER");
		case 37:
			return joaat("SHOP_RHO_PIANIST");
		case 38:
			return joaat("SHOP_RHO_MUSICIAN_BANJO");
		case 68:
			return joaat("SHOP_STR_BUTCHER");
		case 69:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 70:
			return joaat("RAGE_P2_3");
		case 71:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 74:
			return joaat("SHOP_STR_POST_OFFICE");
		case 127:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 75:
			return joaat("SHOP_STR_BARTENDER");
		case 72:
			return joaat("SHOP_STR_MUSICIAN_BANJO");
		case 73:
			return joaat("SHOP_STR_MUSICIAN_GUITARIST");
		case 83:
			return joaat("SHOP_VAL_DOCTOR");
		case 84:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 85:
			return joaat("SHOP_VAL_GUNSMITH");
		case 78:
			return joaat("SHOP_VAL_BARBER");
		case 87:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 86:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 82:
			return joaat("SHOP_VAL_BUTCHER");
		case 88:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 91:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 90:
			return joaat("SHOP_VAL_HOTEL");
		case 120:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 121:
			return joaat("SHOP_VAL_COACH");
		case 77:
			return joaat("SHOP_VAL_BANK");
		case 79:
			return joaat("SHOP_VAL_BARTENDER");
		case 80:
			return joaat("SHOP_VAL_PIANIST");
		case 89:
			return joaat("SHOP_VAL_THEATER_MAGIC_MP");
		case 41:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 98:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 97:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 93:
			return joaat("SHOP_VAN_FENCE");
		case 96:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 94:
			return joaat("SHOP_VAN_BARTENDER");
		case 95:
			return joaat("SHOP_VAN_PIANIST");
		case 128:
			return joaat("SHOP_VAN_COACH");
		case 129:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 1:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 2:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 101:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 99:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 100:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 119:
			return joaat("SHOP_DYNAMIC");
		case 133:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 148:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 172:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 173:
			return joaat("SHOP_CLOTHING");
		case 174:
			return joaat("SHOP_CAMP_SHAVING");
		case 149:
			return joaat("SHOP_CAMP_LOCKBOX");
		case 150:
			return joaat("SHOP_CAMP_BUTCHERTABLE");
		case 147:
			return joaat("SHOP_CAMP_TRAVELLING_SALESMAN");
		case 135:
			return joaat("SHOP_RIO_TRAVELLING_SALESMAN");
		case 136:
			return joaat("SHOP_CHO_TRAVELLING_SALESMAN");
		case 137:
			return joaat("SHOP_HEN_TRAVELLING_SALESMAN");
		case 138:
			return joaat("SHOP_TAL_TRAVELLING_SALESMAN");
		case 139:
			return joaat("SHOP_BGV_TRAVELLING_SALESMAN");
		case 140:
			return joaat("SHOP_HRT_E_TRAVELLING_SALESMAN");
		case 141:
			return joaat("SHOP_HRT_W_TRAVELLING_SALESMAN");
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
		case 143:
			return joaat("SHOP_SCM_TRAVELLING_SALESMAN");
		case 144:
			return joaat("SHOP_BLU_TRAVELLING_SALESMAN");
		case 145:
			return joaat("SHOP_DER_TRAVELLING_SALESMAN");
		case 146:
			return joaat("SHOP_BBR_TRAVELLING_SALESMAN");
		case 47:
			return joaat("SHOP_MOONSHINE_STILL");
		case 32:
			return joaat("SHOP_MOONSHINE_STILL");
		case 21:
			return joaat("SHOP_MOONSHINE_STILL");
		case 115:
			return joaat("SHOP_MOONSHINE_STILL");
		case 92:
			return joaat("SHOP_MOONSHINE_STILL");
		case 131:
			return joaat("SHOP_MOONSHINE_STILL");
		case 20:
			return joaat("SHOP_MOONSHINE_STILL");
		case 134:
			return -765151559;
		case 175:
			return joaat("SHOP_WARDROBE");
		case 151:
			return joaat("SHOP_BVH_DOCTOR");
		case 152:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 153:
			return joaat("SHOP_BVH_GUNSMITH");
		case 154:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 67:
			return 1529797091;
		case 155:
			return joaat("SHOP_CLM_DOCTOR");
		case 156:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 157:
			return joaat("SHOP_CLM_GUNSMITH");
		case 158:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 65:
			return 1388932648;
		case 160:
			return joaat("SHOP_HSO_DOCTOR");
		case 161:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 162:
			return joaat("SHOP_HSO_GUNSMITH");
		case 163:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 64:
			return 878376253;
		case 164:
			return joaat("SHOP_LAK_DOCTOR");
		case 165:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 166:
			return joaat("SHOP_LAK_GUNSMITH");
		case 167:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 168:
			return joaat("SHOP_SHB_DOCTOR");
		case 169:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 170:
			return joaat("SHOP_SHB_GUNSMITH");
		case 171:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 66:
			return -2076086367;
		case 159:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 108:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 110:
			return joaat("SHOP_AMD_BARTENDER");
		case 109:
			return joaat("SHOP_AMD_HONOR_MP");
		case 111:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 112:
			return joaat("SHOP_AMD_TRAIN_STATION");
		case 113:
			return joaat("SHOP_ROJ_HONOR_MP");
		case 114:
			return joaat("SHOP_BOJ_HONOR_MP");
		case 102:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 105:
			return joaat("SHOP_TBL_BARTENDER");
		case 106:
			return joaat("SHOP_TBL_PIANIST");
		case 103:
			return joaat("SHOP_TBL_GUNSMITH");
		case 104:
			return joaat("SHOP_TBL_BUTCHER");
		case 107:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 116:
			return joaat("SHOP_RYC_FENCE");
		case 130:
			return joaat("SHOP_THL_FENCE");
		case 117:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 118:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_337(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PLAYER");
		case 1:
			return joaat("REL_CIVMALE");
		case 2:
			return joaat("REL_CIVFEMALE");
		case 3:
			return joaat("REL_CIVNATIVE");
		case 4:
			return joaat("REL_COP");
		case 5:
			return joaat("REL_NO_RELATIONSHIP");
		case 6:
			return joaat("REL_PLAYER_ENEMY");
		case 7:
			return joaat("REL_PLAYER_ALLY");
		case 8:
			return joaat("REL_PLAYER_LIKE");
		case 9:
			return joaat("REL_PLAYER_DISLIKE");
		case 10:
			return joaat("REL_COMPANION_GROUP");
		case 11:
			return joaat("REL_WILD_ANIMAL");
		case 12:
			return joaat("REL_WILD_ANIMAL_PREDATOR");
		case 13:
			return joaat("REL_DOMESTICATED_ANIMAL");
		case 14:
			return joaat("REL_DOMESTICATED_PET_ANIMAL");
		case 15:
			return joaat("REL_BOUNTY_HUNTER");
		case 16:
			return joaat("REL_GUAMA_LAW");
		case 17:
			return joaat("REL_PINKERTONS");
		case 18:
			return joaat("REL_TOWN_MOB");
		case 19:
			return joaat("REL_CRIMINALS");
		case 20:
			return joaat("REL_GUNSLINGERS");
		case 21:
			return joaat("REL_GANG_DUTCHS");
		case 22:
			return joaat("REL_GANG_DUTCHS_HORSES");
		case 23:
			return joaat("REL_GANG_LARAMIE_GANG");
		case 24:
			return joaat("REL_GANG_SKINNER_BROTHERS");
		case 25:
			return joaat("REL_GANG_CREOLE");
		case 26:
			return joaat("REL_GANG_LEMOYNE_RAIDERS");
		case 27:
			return joaat("REL_GANG_SMUGGLERS");
		case 28:
			return joaat("REL_GANG_ODRISCOLL");
		case 29:
			return joaat("REL_GANG_MURFREE_BROOD");
		case 30:
			return joaat("REL_WILD_ANIMAL_BIRD");
		case 31:
			return joaat("REL_ALLIGATOR");
		case 32:
			return joaat("REL_BOAR");
		case 33:
			return joaat("REL_HEN_ANIMAL");
		case 34:
			return joaat("REL_MINIGAME_PLAYER");
		case 35:
			return joaat("REL_BRAITHWAITES");
		case 36:
			return joaat("REL_GREYS");
		case 37:
			return joaat("REL_RE_VICTIM");
		case 38:
			return joaat("REL_RE_ENEMY");
		case 39:
			return joaat("REL_MP_LIKE_ALL_PLAYERS");
		case 40:
			return joaat("REL_FETCH_ENEMY_1");
		case 41:
			return joaat("REL_FETCH_ENEMY_2");
		case 42:
			return joaat("REL_NETWORK_SAFE");
		case 43:
			return joaat("REL_NETWORK_FREE_AGENT");
		case 44:
			return joaat("REL_MP_WANTED_CRIMINAL");
		case 45:
			return joaat("REL_GT_FFA");
		case 46:
			return joaat("REL_GT_TEAM_0");
		case 47:
			return joaat("REL_GT_TEAM_1");
		case 48:
			return joaat("REL_GT_TEAM_2");
		case 49:
			return joaat("REL_GT_TEAM_3");
		case 50:
			return joaat("REL_GT_TEAM_4");
		case 51:
			return joaat("REL_GT_TEAM_5");
		case 52:
			return joaat("REL_GT_TEAM_6");
		case 53:
			return joaat("REL_GT_TEAM_7");
		case 54:
			return joaat("REL_PLAYER_COP");
		case 55:
			return joaat("REL_PLAYER_0");
		case 56:
			return joaat("REL_PLAYER_1");
		case 57:
			return joaat("REL_PLAYER_2");
		case 58:
			return joaat("REL_PLAYER_3");
		case 59:
			return joaat("REL_PLAYER_4");
		case 60:
			return joaat("REL_PLAYER_5");
		case 61:
			return joaat("REL_PLAYER_6");
		case 62:
			return joaat("REL_PLAYER_7");
		case 63:
			return joaat("REL_PLAYER_8");
		case 64:
			return joaat("REL_PLAYER_9");
		case 65:
			return joaat("REL_PLAYER_10");
		case 66:
			return joaat("REL_PLAYER_11");
		case 67:
			return joaat("REL_PLAYER_12");
		case 68:
			return joaat("REL_PLAYER_13");
		case 69:
			return joaat("REL_PLAYER_14");
		case 70:
			return joaat("REL_PLAYER_15");
		case 71:
			return joaat("REL_PLAYER_16");
		case 72:
			return joaat("REL_PLAYER_17");
		case 73:
			return joaat("REL_PLAYER_18");
		case 74:
			return joaat("REL_PLAYER_19");
		case 75:
			return joaat("REL_PLAYER_20");
		case 76:
			return joaat("REL_PLAYER_21");
		case 77:
			return joaat("REL_PLAYER_22");
		case 78:
			return joaat("REL_PLAYER_23");
		case 79:
			return joaat("REL_PLAYER_24");
		case 80:
			return joaat("REL_PLAYER_25");
		case 81:
			return joaat("REL_PLAYER_26");
		case 82:
			return joaat("REL_PLAYER_27");
		case 83:
			return joaat("REL_PLAYER_28");
		case 84:
			return joaat("REL_PLAYER_29");
		case 85:
			return joaat("REL_PLAYER_30");
		case 86:
			return joaat("REL_PLAYER_31");
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_338(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = (Global_1070356->f_26934[47 /*4*/])->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_336(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = MISC::GET_HASH_KEY("sHash");
	DATAFILE::_DATAFILE_GET_HASH(iParam1, &Var0);
	return 1;
}

bool func_339(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_340(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

int func_341(int iParam0)
{
	struct<4> Var0;

	Var0 = Global_1070356->f_22101.f_366.f_4357;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_342(int iParam0, int iParam1, var uParam2, float fParam3)
{
	struct<5> Var0;

	Var0 = Global_1070356->f_22101.f_366.f_4357;
	Var0.f_2 = 160165798;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &Var0);
		Var0.f_2 = -55481687;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam3, &Var0);
		return 1;
	}
	return 0;
}

int func_343(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return ((*Global_1097610)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

void func_344(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_452(iParam0);
	if (!func_453(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_454(128) && !func_455(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_456() == 4)
	{
		func_228(17);
	}
	func_457(1024);
}

void func_345(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_346(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_347(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_348(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_349()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_458(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_350()
{
	return (Global_1275565->f_2.f_1 == 2 || Global_1275565->f_2.f_1 == 1);
}

bool func_351()
{
	return (Global_1915180->f_20135 || Global_1915180->f_21989.f_1);
}

void func_352(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;

	iVar0 = INVENTORY::_0x13D234A2A3F66E63(iParam0);
	iVar1 = INVENTORY::_0x13D234A2A3F66E63(iParam1);
	if (!INVENTORY::_0x886DFD3E185C8A89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
	}
	INVENTORY::_0xC04F47D488EF9EBA(iVar0, iVar1, &uVar2, 0);
}

bool func_353(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_354(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_355(int iParam0, int iParam1)
{
	if (!func_254(iParam0, 0))
	{
		return func_459(func_356(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0)
{
	return iParam0;
}

int func_357(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_460(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_358()
{
	return func_461(func_18(0));
}

bool func_359(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

bool func_360(int iParam0, int iParam1)
{
	*iParam1 = func_462(iParam0, 1);
	return *iParam1 != 0;
}

bool func_361(int iParam0, int iParam1)
{
	*iParam1 = func_463(iParam0, 1, 0);
	return *iParam1 != 0;
}

int func_362(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_254(iParam0, 0))
	{
		return func_464(func_356(iParam0), bParam1, bParam2);
	}
	if (func_255(iParam0))
	{
		return func_269(func_256(iParam0, 1), bParam1);
	}
	if ((bParam2 && func_300() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_465(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

int func_363(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_466(iVar0, 1, 0);
		if (!func_377(iParam0, bVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_467(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || func_368(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
					{
						return bVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_364(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	bool bVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar40 = func_466(iVar0, 0, 1);
		if (!func_377(iParam0, bVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_468(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || func_368(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || &Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && &Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && &Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (bVar4 == 0 || (bVar6 && (Var9[iVar41 /*2*/])->f_1 < iVar2))
						{
							bVar5 = bVar40;
							iVar3 = (Var9[iVar41 /*2*/])->f_1;
							iVar7 = 1;
						}
					}
					else if (bVar4 == 0 || (Var9[iVar41 /*2*/])->f_1 < iVar2)
					{
						bVar5 = bVar40;
						iVar3 = (Var9[iVar41 /*2*/])->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && bVar5 != 0)
			{
				bVar4 = bVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return bVar4;
}

int func_365(int iParam0, bool bParam1)
{
	if (!func_265(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PAMPHLET_TRACKING_ARROW"))
	{
		return func_256(joaat("AMMO_ARROW_TRACKING"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_POISON_BOTTLE"))
	{
		return func_256(joaat("AMMO_POISONBOTTLE"), 1);
	}
	return func_256(iParam0, 1);
}

bool func_366(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_300() == -1)
	{
		if (func_469(iParam0))
		{
			iVar1 = WEAPON::_0x865F36299079FB75(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_367(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_359(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_470(iParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_368(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_391(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_471(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_472(iParam0, 0);
	}
	if (func_473(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_474(bParam2), iParam0, bParam3);
	}
	else
	{
		Var3 = { func_475(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_474(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_369(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_367(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || &Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || &Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_370(int iParam0)
{
	if (!func_254(iParam0, 0))
	{
		return false;
	}
	return func_398(iParam0) == -999503751;
}

int func_371(int iParam0)
{
	if (!func_370(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -2068637111: /* GXTEntry: "The Copperhead Enforcer" */
			return -705751660;
		case -1871922677: /* GXTEntry: "The Blackrose Bounty Hunter" */
			return 1364634153;
		case -905031115: /* GXTEntry: "The Grizzlies Outlaw" */
			return -388301838;
		case 1928115537: /* GXTEntry: "The D�chaux" */
			return 208175031;
		case 453281150: /* GXTEntry: "The Mercer" */
			return -98968806;
		case 153739721: /* GXTEntry: "The Schefield" */
			return -402606360;
		case 1167678119: /* GXTEntry: "The Hettinger" */
			return -709946811;
		case 736667462: /* GXTEntry: "The Ajaccio" */
			return -362300646;
		case -673644764: /* GXTEntry: "The Tasman" */
			return -65380737;
		case -980133221: /* GXTEntry: "The Zacateca" */
			return 100758093;
		case -209930641: /* GXTEntry: "The Clayton" */
			return -1740761400;
		case -1735897526: /* GXTEntry: "The Wakeeney" */
			return -27480348;
		case -482614352: /* GXTEntry: "The Wakeeney" */
			return -257977494;
		case -1258944731: /* GXTEntry: "The Wakeeney" */
			return -582914898;
		case 1536480356: /* GXTEntry: "The Wakeeney" */
			return -814067424;
		case 1827632921: /* GXTEntry: "The Wakeeney" */
			return -1179212391;
		case -1483084691: /* GXTEntry: "The Wakeeney" */
			return -1407415707;
		case -1855140882: /* GXTEntry: "The Bullard" */
			return -9237745;
		case -1605932637: /* GXTEntry: "The Bullard" */
			return 296464256;
		case 838274308: /* GXTEntry: "The Bullard" */
			return -1849217095;
		case 1423463110: /* GXTEntry: "The Bullard" */
			return 1698584232;
		case 1722021469: /* GXTEntry: "The Bullard" */
			return 1996257828;
		case 1293960018: /* GXTEntry: "The Bullard" */
			return 1186175379;
		case 1084020314: /* GXTEntry: "The Garwood" */
			return -1332741910;
		case 1384905272: /* GXTEntry: "The Garwood" */
			return -1632447184;
		case 166258931: /* GXTEntry: "The Garwood" */
			return -1930088011;
		case -285691117: /* GXTEntry: "The Garwood" */
			return 2065632777;
		case -1506238056: /* GXTEntry: "The Garwood" */
			return 937854865;
		case -141245365: /* GXTEntry: "The Garwood" */
			return -1520409981;
		case 962175652: /* GXTEntry: "The Carthage" */
			return 1356000914;
		case 687079897: /* GXTEntry: "The Carthage" */
			return -423388555;
		case 373021801: /* GXTEntry: "The Carthage" */
			return -188959129;
		case 75839740: /* GXTEntry: "The Carthage" */
			return -93765184;
		case -208529642: /* GXTEntry: "The Carthage" */
			return 401046716;
		case -504466477: /* GXTEntry: "The Carthage" */
			return -845387737;
		case -1896067425: /* GXTEntry: "The Wentworth" */
			return -229247533;
		case -1732419039: /* GXTEntry: "The Wentworth" */
			return 57481217;
		case 1620668890: /* GXTEntry: "The Wentworth" */
			return 383434460;
		case 2095557238: /* GXTEntry: "The Wentworth" */
			return 404275544;
		case -700719823: /* GXTEntry: "The Wentworth" */
			return 721381157;
		case -520949089: /* GXTEntry: "The Wentworth" */
			return 1027509151;
		case 783963696: /* GXTEntry: "The Wallingford" */
			return -1688869940;
		case 477409701: /* GXTEntry: "The Wallingford" */
			return -97312371;
		case 325427079: /* GXTEntry: "The Wallingford" */
			return -870234774;
		case -2127824110: /* GXTEntry: "The Wallingford" */
			return -573609786;
		case -478920799: /* GXTEntry: "The Wallingford" */
			return -1336767027;
		case -784753876: /* GXTEntry: "The Wallingford" */
			return 1125692243;
		case -1991069642: /* GXTEntry: "The Gladewater" */
			return 1599850951;
		case 1534579841: /* GXTEntry: "The Gladewater" */
			return 1505836690;
		case 1755770591: /* GXTEntry: "The Gladewater" */
			return 1007026972;
		case 852591413: /* GXTEntry: "The Gladewater" */
			return -1271696523;
		case -1269692868: /* GXTEntry: "The Gladewater" */
			return -1501734903;
		case -1638540740: /* GXTEntry: "The Gladewater" */
			return -466660528;
		case 1404368072: /* GXTEntry: "The Londonderry" */
			return -1675392330;
		case 561909851: /* GXTEntry: "The Londonderry" */
			return -1377882579;
		case 1369829534: /* GXTEntry: "The Londonderry" */
			return 2136592667;
		case 669687080: /* GXTEntry: "The Londonderry" */
			return -1849788956;
		case 908671397: /* GXTEntry: "The Londonderry" */
			return -1561028528;
		case -50313388: /* GXTEntry: "The Londonderry" */
			return -1268368589;
		case 896138350: /* GXTEntry: "The Monterey" */
			return -655694620;
		case -1347489546: /* GXTEntry: "The Monterey" */
			return -882128410;
		case -1127937242: /* GXTEntry: "The Monterey" */
			return -27217981;
		case -821055557: /* GXTEntry: "The Monterey" */
			return 513863747;
		case -666844643: /* GXTEntry: "The Monterey" */
			return 272520062;
		case 1507149124: /* GXTEntry: "The Monterey" */
			return 1115043821;
		case 1797068311: /* GXTEntry: "The Sunderland" */
			return 434380030;
		case 1509389260: /* GXTEntry: "The Sunderland" */
			return -1994163333;
		case 1196052082: /* GXTEntry: "The Sunderland" */
			return 1445336445;
		case 914074837: /* GXTEntry: "The Sunderland" */
			return -1000181256;
		case 599099209: /* GXTEntry: "The Sunderland" */
			return -1601951172;
		case 774216741: /* GXTEntry: "The Sunderland" */
			return -1900673376;
		case 180232641: /* GXTEntry: "The Worthington" */
			return -1722245291;
		case -1597878813: /* GXTEntry: "The Worthington" */
			return -1550994497;
		case -895311481: /* GXTEntry: "The Worthington" */
			return -1654216923;
		case -2075290374: /* GXTEntry: "The Worthington" */
			return -956892603;
		case -1349063796: /* GXTEntry: "The Worthington" */
			return 2044551183;
		case 1649135863: /* GXTEntry: "The Worthington" */
			return 1816380636;
		case 10498108: /* GXTEntry: "The Tyringham" */
			return -1216565419;
		case 317576407: /* GXTEntry: "The Tyringham" */
			return -997045888;
		case -803057859: /* GXTEntry: "The Tyringham" */
			return -622430680;
		case -229076051: /* GXTEntry: "The Tyringham" */
			return -1279023141;
		case -1445559642: /* GXTEntry: "The Tyringham" */
			return -1036761924;
		case -1140185331: /* GXTEntry: "The Tyringham" */
			return -683249952;
		case 913153433: /* GXTEntry: "The Gatlinburg" */
			return 194792351;
		case 606730510: /* GXTEntry: "The Gatlinburg" */
			return -1974548202;
		case -964051505: /* GXTEntry: "The Gatlinburg" */
			return 1014738289;
		case -1267459676: /* GXTEntry: "The Gatlinburg" */
			return 634486813;
		case -483756272: /* GXTEntry: "The Gatlinburg" */
			return 1408261210;
		case -805187393: /* GXTEntry: "The Gatlinburg" */
			return -768354077;
		case -1116096467: /* GXTEntry: "The Dagenhart" */
			return 1791083718;
		case -4997980: /* GXTEntry: "The Dagenhart" */
			return 1484267571;
		case -305588017: /* GXTEntry: "The Dagenhart" */
			return -632577068;
		case -694850968: /* GXTEntry: "The Dagenhart" */
			return -872544455;
		case -985380922: /* GXTEntry: "The Dagenhart" */
			return -1111430465;
		case 974827889: /* GXTEntry: "The Dagenhart" */
			return -1351987694;
		case -1156770257: /* GXTEntry: "The Pittsburg" */
			return -803252891;
		case -843695231: /* GXTEntry: "The Pittsburg" */
			return 2121544208;
		case 1854078224: /* GXTEntry: "The Pittsburg" */
			return -1667469728;
		case -2137185980: /* GXTEntry: "The Pittsburg" */
			return 466087145;
		case -1830566447: /* GXTEntry: "The Pittsburg" */
			return 98091275;
		case -1537546049: /* GXTEntry: "The Pittsburg" */
			return -1010615123;
		case 469166476: /* GXTEntry: "The Wilkesboro" */
			return -32097795;
		case 1229079574: /* GXTEntry: "The Wilkesboro" */
			return -875834007;
		case 990422947: /* GXTEntry: "The Wilkesboro" */
			return 68797956;
		case -229665218: /* GXTEntry: "The Wilkesboro" */
			return -270885498;
		case -527568197: /* GXTEntry: "The Wilkesboro" */
			return 682069807;
		case 242634379: /* GXTEntry: "The Wilkesboro" */
			return 920726434;
		case 275775515: /* GXTEntry: "The Copperhead Enforcer" */
			return 1379601741;
		case -1160690408: /* GXTEntry: "The Blackrose Bounty Hunter" */
			return joaat("VANHORN0204_GTXD");
		case -1763097043: /* GXTEntry: "The Grizzlies Outlaw" */
			return 115504824;
		case 912572382: /* GXTEntry: "The Breckenridge" */
			return -1399728874;
		case 73391061: /* GXTEntry: "The Roanoke" */
			return -1090192900;
		case 332495544: /* GXTEntry: "The Summerfield" */
			return -1893000631;
		case -501475506: /* GXTEntry: "The Kimberly" */
			return -1583759578;
		case -280579677: /* GXTEntry: "The Danube" */
			return -204905596;
		case -814845497: /* GXTEntry: "The Dauphine" */
			return -974747713;
		case -1610902814: /* GXTEntry: "The Redington" */
			return -701454253;
		case -1313261987: /* GXTEntry: "The Quinton" */
			return 678546644;
		case -668402627: /* GXTEntry: "The Wakeeney" */
			return -1643732782;
		case -1436966753: /* GXTEntry: "The Wakeeney" */
			return -1879178047;
		case -1105410003: /* GXTEntry: "The Wakeeney" */
			return 2033604402;
		case -792302208: /* GXTEntry: "The Wakeeney" */
			return 729201588;
		case -1544547372: /* GXTEntry: "The Wakeeney" */
			return 1695854319;
		case -1268599623: /* GXTEntry: "The Wakeeney" */
			return -2040860293;
		case 1281867320: /* GXTEntry: "The Bullard" */
			return 430601343;
		case -1699226913: /* GXTEntry: "The Bullard" */
			return 528449577;
		case -1610553999: /* GXTEntry: "The Bullard" */
			return 836052180;
		case -1909243438: /* GXTEntry: "The Bullard" */
			return 1126483827;
		case -1551799186: /* GXTEntry: "The Bullard" */
			return 1432546287;
		case -1999554802: /* GXTEntry: "The Bullard" */
			return 1721339484;
		case 723981565: /* GXTEntry: "The Garwood" */
			return 1684533498;
		case 963752338: /* GXTEntry: "The Garwood" */
			return 1404424086;
		case 372402960: /* GXTEntry: "The Garwood" */
			return 69611632;
		case 989901996: /* GXTEntry: "The Garwood" */
			return -221377088;
		case -239754729: /* GXTEntry: "The Garwood" */
			return 1613326453;
		case 142266273: /* GXTEntry: "The Garwood" */
			return 1307853835;
		case 911761394: /* GXTEntry: "The Carthage" */
			return 2176663;
		case 1676688161: /* GXTEntry: "The Carthage" */
			return -292908182;
		case 1907906229: /* GXTEntry: "The Carthage" */
			return 1638955448;
		case -1621282302: /* GXTEntry: "The Carthage" */
			return 1374083621;
		case -1801773954: /* GXTEntry: "The Carthage" */
			return -1218075359;
		case -1003029579: /* GXTEntry: "The Carthage" */
			return -1516043876;
		case 165089723: /* GXTEntry: "The Wentworth" */
			return -726135810;
		case 395586869: /* GXTEntry: "The Wentworth" */
			return -458052621;
		case 623560802: /* GXTEntry: "The Wentworth" */
			return -926911473;
		case 888203246: /* GXTEntry: "The Wentworth" */
			return -1761242982;
		case 1123550204: /* GXTEntry: "The Wentworth" */
			return -1388135148;
		case 1862360078: /* GXTEntry: "The Wentworth" */
			return -1644486999;
		case -1320869011: /* GXTEntry: "The Wallingford" */
			return -688485759;
		case -1078345642: /* GXTEntry: "The Wallingford" */
			return -381735150;
		case -571278136: /* GXTEntry: "The Wallingford" */
			return 2046513300;
		case -856663353: /* GXTEntry: "The Wallingford" */
			return -1943603989;
		case -632654469: /* GXTEntry: "The Wallingford" */
			return -1635706465;
		case -380562552: /* GXTEntry: "The Wallingford" */
			return -1338786556;
		case 1911459413: /* GXTEntry: "The Gladewater" */
			return -1434447686;
		case -1606456586: /* GXTEntry: "The Gladewater" */
			return -675714260;
		case -1888892597: /* GXTEntry: "The Gladewater" */
			return 249321841;
		case 1154823199: /* GXTEntry: "The Gladewater" */
			return -1070777324;
		case 856068226: /* GXTEntry: "The Gladewater" */
			return 2065543650;
		case 1786380136: /* GXTEntry: "The Gladewater" */
			return 1826887023;
		case 1943475930: /* GXTEntry: "The Londonderry" */
			return -1810703525;
		case 1697315198: /* GXTEntry: "The Londonderry" */
			return -1226563331;
		case -1787340262: /* GXTEntry: "The Londonderry" */
			return -1466006414;
		case -1341845703: /* GXTEntry: "The Londonderry" */
			return 724273546;
		case -1632670578: /* GXTEntry: "The Londonderry" */
			return 1512859531;
		case -932593662: /* GXTEntry: "The Londonderry" */
			return 1266305575;
		case -499308854: /* GXTEntry: "The Monterey" */
			return 1937278961;
		case -785677145: /* GXTEntry: "The Monterey" */
			return 971478216;
		case -18849776: /* GXTEntry: "The Monterey" */
			return 1202597973;
		case -806059467: /* GXTEntry: "The Monterey" */
			return 507698559;
		case 91876671: /* GXTEntry: "The Monterey" */
			return 746355186;
		case -199538046: /* GXTEntry: "The Monterey" */
			return 523755373;
		case -1754780383: /* GXTEntry: "The Sunderland" */
			return 1219798516;
		case -2050586146: /* GXTEntry: "The Sunderland" */
			return -1568843392;
		case -1622000367: /* GXTEntry: "The Sunderland" */
			return 1824681487;
		case -1930520502: /* GXTEntry: "The Sunderland" */
			return 933561301;
		case 1689602008: /* GXTEntry: "The Sunderland" */
			return -614970571;
		case 1384162159: /* GXTEntry: "The Sunderland" */
			return -310186102;
		case -733625577: /* GXTEntry: "The Worthington" */
			return 1209768883;
		case -370348443: /* GXTEntry: "The Worthington" */
			return 1834280485;
		case -1205728560: /* GXTEntry: "The Worthington" */
			return 329528021;
		case 459985248: /* GXTEntry: "The Worthington" */
			return 1778442129;
		case 834207228: /* GXTEntry: "The Worthington" */
			return 805432208;
		case 1230744937: /* GXTEntry: "The Worthington" */
			return -25950091;
		case 1859098900: /* GXTEntry: "The Tyringham" */
			return 922505133;
		case -2137310037: /* GXTEntry: "The Tyringham" */
			return 120975393;
		case 1086995730: /* GXTEntry: "The Tyringham" */
			return 426742932;
		case -1962290800: /* GXTEntry: "The Tyringham" */
			return 2081118674;
		case 1736084082: /* GXTEntry: "The Tyringham" */
			return -1914569345;
		case 2038967949: /* GXTEntry: "The Tyringham" */
			return 1110533655;
		case -1732116082: /* GXTEntry: "The Gatlinburg" */
			return -2005854180;
		case -2043224964: /* GXTEntry: "The Gatlinburg" */
			return -1762511586;
		case 1970158315: /* GXTEntry: "The Gatlinburg" */
			return -1609283862;
		case 1655444839: /* GXTEntry: "The Gatlinburg" */
			return -1311675804;
		case 1373270980: /* GXTEntry: "The Gatlinburg" */
			return -1952932365;
		case 1058885194: /* GXTEntry: "The Gatlinburg" */
			return -1923309189;
		case -1944199774: /* GXTEntry: "The Dagenhart" */
			return -1262957735;
		case 999079041: /* GXTEntry: "The Dagenhart" */
			return -1516622564;
		case 635605293: /* GXTEntry: "The Dagenhart" */
			return -1741811132;
		case 1493792634: /* GXTEntry: "The Dagenhart" */
			return -1991740303;
		case -213406744: /* GXTEntry: "The Dagenhart" */
			return 2071419087;
		case -505870069: /* GXTEntry: "The Dagenhart" */
			return 1352008461;
		case -152330007: /* GXTEntry: "The Pittsburg" */
			return -196656840;
		case 2024678512: /* GXTEntry: "The Pittsburg" */
			return 108848547;
		case 1188643011: /* GXTEntry: "The Pittsburg" */
			return -610365465;
		case 1680243549: /* GXTEntry: "The Pittsburg" */
			return -371774376;
		case 845486043: /* GXTEntry: "The Pittsburg" */
			return -123352547;
		case -1351118334: /* GXTEntry: "The Pittsburg" */
			return 112125487;
		case -1206325201: /* GXTEntry: "The Wilkesboro" */
			return -741695871;
		case -1514091649: /* GXTEntry: "The Wilkesboro" */
			return -711024087;
		case 1284413724: /* GXTEntry: "The Wilkesboro" */
			return 784454766;
		case 976581738: /* GXTEntry: "The Wilkesboro" */
			return 1114307520;
		case 1895916033: /* GXTEntry: "The Wilkesboro" */
			return 2026825867;
		case 1588804965: /* GXTEntry: "The Wilkesboro" */
			return 177900576;
		default:
			break;
	}
	return 0;
}

bool func_372(int iParam0)
{
	if (!func_254(iParam0, 0))
	{
		return false;
	}
	return func_398(iParam0) == 153430294;
}

int func_373(int iParam0)
{
	if (!func_372(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_001"):
			return 2113612788;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_002"):
			return 1799751306;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_003"):
			return 1444076568;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_004"):
			return 1147680963;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_001"):
			return -2020336278;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_002"):
			return -1377900033;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_003"):
			return -1541941647;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_004"):
			return 1616727805;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_001"):
			return -922666835;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_002"):
			return -855621461;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_003"):
			return -564862124;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_004"):
			return 1955205056;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_001"):
			return 1515886177;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_002"):
			return 1212871226;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_003"):
			return 520003486;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_004"):
			return 214694713;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_001"):
			return -1002555587;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_002"):
			return -704816453;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_003"):
			return -408748538;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_004"):
			return 2080515794;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_001"):
			return -1438504284;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_002"):
			return -1663266855;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_003"):
			return -977280609;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_004"):
			return -1208924670;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_001"):
			return 760352143;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_002"):
			return 1528293658;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_003"):
			return 601619107;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_004"):
			return 309975007;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_001"):
			return -1805872365;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_002"):
			return 25128279;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_003"):
			return -286209990;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_004"):
			return 1269465524;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_001"):
			return 66925801;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_002"):
			return -1897379743;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_003"):
			return 1963005075;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_004"):
			return -2037925984;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_001"):
			return 1668961632;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_002"):
			return 1358934123;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_003"):
			return -1141176732;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_004"):
			return -1415813725;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_001"):
			return 11713414;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_002"):
			return 1307072000;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_003"):
			return 1575941645;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_004"):
			return 701926877;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_001"):
			return -766852067;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_002"):
			return -1076125889;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_003"):
			return -1445170375;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_004"):
			return -1685465452;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_001"):
			return -1670121942;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_002"):
			return 1790317231;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_003"):
			return 1889214097;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_004"):
			return 2120268316;
		case 918258437:
			return -1816896715;
		case 1169203439:
			return 321247770;
		case -1755397046:
			return 626818695;
		case -2090951606:
			return -121887417;
		case -1893420074:
			return -890648157;
		case -521480347:
			return 802722687;
		case -1515678445:
			return 433303369;
		case 637343178:
			return 1912758109;
		case -1759971328:
			return 2076472033;
		case -1990239091:
			return 86705584;
		case 1595344893:
			return 518666542;
		case -553416748:
			return 682151083;
		case 2086466425:
			return -1982828649;
		case 1829328082:
			return 1530204769;
		case 147295280:
			return 1836693226;
		case 857399510:
			return -1096001202;
		case 811850600:
			return -1834221234;
		case -528729190:
			return -1526815245;
		case -732726675: /* GXTEntry: "Levens Holster" */
			return 1127336149;
		case -963846432: /* GXTEntry: "Levens Holster" */
			return 828941635;
		case -1242022473: /* GXTEntry: "Levens Holster" */
			return 531497422;
		case -2026971099: /* GXTEntry: "Levens Holster" */
			return 834643453;
		case 2066466847: /* GXTEntry: "Levens Holster" */
			return 526451008;
		case 1835609242: /* GXTEntry: "Levens Holster" */
			return -399699239;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_001"):
			return 1570234737;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_002"):
			return -288324636;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_003"):
			return 11282331;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_004"):
			return 725318841;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_001"):
			return -949699437;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_002"):
			return 1306347914;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_003"):
			return 1536910598;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_004"):
			return 1924797251;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_001"):
			return 9499074;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_002"):
			return 483863122;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_003"):
			return 237473007;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_004"):
			return 1066004403;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_001"):
			return 1559978137;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_002"):
			return 1322239046;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_003"):
			return 1564631339;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_004"):
			return -212824759;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_001"):
			return -274429432;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_002"):
			return 570453695;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_003"):
			return 207242099;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_004"):
			return -1112267224;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_001"):
			return 1417685661;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_002"):
			return -2095478833;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_003"):
			return 1899947034;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_004"):
			return -1752321861;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_001"):
			return 1413210443;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_002"):
			return 1182877142;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_003"):
			return -208887838;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_004"):
			return 21707615;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_001"):
			return 857732585;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_002"):
			return 1087541582;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_003"):
			return 1451015330;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_004"):
			return 1688754425;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_001"):
			return 1437777233;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_002"):
			return 1676958164;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_003"):
			return -35123787;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_004"):
			return 195668280;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_001"):
			return -2087370390;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_002"):
			return 888087567;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_003"):
			return 707399301;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_004"):
			return 1507847664;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_001"):
			return -2018900297;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_002"):
			return -626938711;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_003"):
			return -336900292;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_004"):
			return -1124798132;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_001"):
			return 1051595054;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_002"):
			return 1338028883;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_003"):
			return 574052421;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_004"):
			return -1516904708;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_001"):
			return -337288225;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_002"):
			return 432390051;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_003"):
			return 1094880924;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_004"):
			return 1862953515;
		case 135502004:
			return -806719655;
		case -1094089207:
			return -492661555;
		case 683366891:
			return -1416714590;
		case 457948940:
			return -1170586631;
		case 84775568:
			return 385875335;
		case -2142729980:
			return 632068832;
		case -410630335:
			return 435122445;
		case -161815318:
			return 1413244326;
		case 1125547616:
			return 650709696;
		case -706894864:
			return -1018149936;
		case 512996699:
			return -712677318;
		case 822532673:
			return -272163651;
		case -1151792276:
			return 534957177;
		case -569224994:
			return 1399272333;
		case -1816871896:
			return 765978639;
		case -2105861707:
			return 1993996914;
		case 45914674:
			return 1227104007;
		case 676193620:
			return -595245625;
		case 1564617196: /* GXTEntry: "Levens Holster" */
			return 1395189422;
		case 1142159244: /* GXTEntry: "Levens Holster" */
			return 1618444619;
		case 834556641: /* GXTEntry: "Levens Holster" */
			return 1977920549;
		case -1297099578: /* GXTEntry: "Levens Holster" */
			return -2078652272;
		case -1477066926: /* GXTEntry: "Levens Holster" */
			return -1741786952;
		case -1764025059: /* GXTEntry: "Levens Holster" */
			return -1452207299;
		default:
			break;
	}
	return 0;
}

int func_374(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_367(iParam0, bParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == iParam1)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_375(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_376()
{
	if (func_300() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_377(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_476(iParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_378(bool bParam0)
{
	if (func_300() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_474(bParam0));
}

int func_379()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_380(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_390(0) };
	Var0.f_4 = func_477(iParam1);
	Var5 = { func_392(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_474(0), &Var5, false);
	return iVar9;
}

int func_381(int iParam0)
{
	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	if (func_355(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return 1;
	}
	return func_382(iParam0);
}

int func_382(int iParam0)
{
	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	if (func_355(iParam0, -839724752))
	{
		return 1;
	}
	return 0;
}

int func_383(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_478(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_254(iParam1, 0))
	{
		return 0;
	}
	if (!func_479(iParam0))
	{
		return 0;
	}
	iVar0 = func_480(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_481(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_384(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	if (!func_381(iParam0) && !func_382(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_482(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_483(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_484(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_485(iVar15, iVar1);
			if (func_254(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_486(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_380(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_488(iVar16, func_487(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_489(iVar1);
	}
	return iVar0;
}

int func_385(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_478(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_254(iParam1, 0))
	{
		return 0;
	}
	if (!func_479(iParam0))
	{
		return 0;
	}
	iVar0 = func_480(iParam0);
	iVar1 = iParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_386(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (iParam0 == ENTITY::_0x31FEF6A20F00B963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_387(int iParam0)
{
	return func_355(iParam0, 1279601681);
}

int func_388(int* iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	if (!func_401(iParam0, 0))
	{
		return 0;
	}
	if (bParam4 == 0)
	{
		bParam4 = func_258(iParam1, 0, 1, bParam5, iParam6);
	}
	if (!func_490(iParam1, bParam4, bParam5))
	{
		return 0;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = bParam4;
	uParam2->f_12 = 1248274121;
	if (!func_491(iParam0, *uParam2, 541670136, iParam3))
	{
		return 0;
	}
	if (COLLECTION::_0x9ADEE485726025D4(iParam1) != 0)
	{
		if (Global_1272170->f_20.f_402 != -1)
		{
		}
		Global_1272170->f_20.f_402.f_1 = iParam1;
		Global_1272170->f_20.f_402 = iParam0->f_1;
	}
	return 1;
}

void func_389(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
}

struct<4> func_390(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_474(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_392(joaat("CHARACTER"), func_492(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_392(joaat("CHARACTER"), func_492(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_392(joaat("CHARACTER"), func_492(), -1591664384, bParam0);
}

int func_391(int iParam0)
{
	vector3 vVar0;

	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_392(int iParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_254(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_474(bParam6), &uParam1, iParam0, bParam5, &Var0);
	return Var0;
}

struct<4> func_393(bool bParam0)
{
	int iVar0;

	iVar0 = func_474(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_392(923904168, func_390(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_392(923904168, func_390(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_392(923904168, func_390(bParam0), -740156546, 0);
}

int func_394(int iParam0, bool bParam1)
{
	if (func_398(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_493();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_395(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4)
{
	return func_421(iParam0, *uParam1, bParam2, iParam3, 1, bParam4) > 0;
}

int func_396(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_494(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_397(bool bParam0)
{
	int iVar0;

	iVar0 = func_474(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_392(271701509, func_390(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_392(271701509, func_390(bParam0), 12999093, 0);
}

int func_398(int iParam0)
{
	struct<2> Var0;

	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_399(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_398(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &bVar0))
		{
			if (func_495(iParam0, iParam1, bVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_400(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_496(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_401(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_497(iParam0))
		{
			return 0;
		}
	}
	if (func_498(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return 0;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
	{
		return 0;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("SELL")))
	{
		return 0;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
	{
		return 0;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("USE")))
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return 0;
	}
	return 1;
}

void func_402(bool bParam0, int iParam1)
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
}

int func_403(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<10> Var0;
	struct<4> Var14;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (func_251(bParam9, 32))
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_400(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_495(iParam1, func_398(Var0.f_4), bParam6))
		{
			return 0;
		}
	}
	if (func_251(bParam9, 1))
	{
		if (!func_366(iParam1))
		{
			return 0;
		}
	}
	if (func_251(bParam9, 2))
	{
		if (func_362(iParam1, bParam7, 1))
		{
			return 0;
		}
	}
	if (func_251(bParam9, 4))
	{
		if (!bParam10 && !INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = bParam6;
		Var14 = { Param2 };
		iVar19 = func_421(iParam1, Param2, bParam6, 1, !bParam10, 0);
		iVar20 = func_499(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_500(iParam1, bParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_501(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (iParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_251(bParam9, 8))
	{
		return func_502(iParam0, iParam1, bParam7, iParam8);
	}
	return 1;
}

struct<16> func_404(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_392(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_473(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_492() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_405(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, joaat("BASKET"), iParam1))
	{
		return 0;
	}
	return 1;
}

int func_406(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_398(iParam1);
		iVar5 = func_503(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &bVar2))
			{
				if (func_495(iParam0, iVar1, bVar2))
				{
					*uParam4 = { func_277(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_392(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = bVar2;
					return 1;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_474(0);
			Var37 = { func_277(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_392(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_398(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &bVar2))
						{
							if (func_495(iParam0, iVar1, bVar2))
							{
								if (func_504(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = bVar2;
									return 1;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return 0;
}

bool func_407(int iParam0)
{
	return func_355(iParam0, 1282106666);
}

int func_408(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<16> Var0;

	if (!func_401(iParam0, 0))
	{
		return 0;
	}
	if (bParam10 == 0)
	{
		bParam10 = func_154(iParam1, bParam10, 1, bParam12, 1);
	}
	if (!func_505(iParam0, iParam1, Param2, bParam6, bParam10, bParam12))
	{
		return 0;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_8 = iParam1;
	Var0.f_9 = 1;
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	Var0.f_4 = { Param2 };
	Var0.f_11 = bParam6;
	Var0.f_10 = bParam7;
	Var0.f_14 = iParam11;
	if (bParam13)
	{
		Var0.f_15 = func_473(iParam1, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_492() };
			Var0.f_11 = 0;
		}
	}
	*iParam8 = { Var0 };
	if (!func_417(iParam0, Var0, 2113164098, bParam9, bParam12))
	{
		return 0;
	}
	return 1;
}

int func_409(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_506(&uParam0, bParam4, bParam5, iParam6);
}

int func_410(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_378(0))
	{
		return func_507(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_400(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_474(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_411(int* iParam0)
{
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_427(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

int func_412(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_427(*iParam0, 0, 0, 0);
		return 1;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_427(*iParam0, 4, 0, 0);
		return 1;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_427(*iParam0, 2, 0, 0);
		return 0;
	}
	func_427(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return 1;
}

int func_413(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2141145462:
			return 47;
		case -2139497371:
			return 72;
		case -2073547330:
			return 44;
		case -2066076661:
			return 94;
		case -2048056274:
			return 21;
		case -2038873145:
			return 50;
		case -1988984077:
			return 38;
		case -1976230089:
			return 64;
		case -1948083328:
			return 109;
		case -1915486054:
			return 32;
		case -1914604474:
			return 54;
		case -1882615108:
			return 76;
		case -1879729569:
			return 1;
		case -1827447245:
			return 18;
		case -1816811601:
			return 71;
		case -1812870325:
			return 100;
		case -1672929718:
			return 103;
		case -1604265010:
			return 17;
		case -1549775456:
			return 16;
		case -1533288167:
			return 79;
		case -1461871483:
			return 68;
		case -1327698122:
			return 51;
		case -1309844859:
			return 74;
		case -1271310569:
			return 67;
		case -1239377811:
			return 69;
		case -1221836150:
			return 88;
		case -1190908814:
			return 40;
		case -1169075737:
			return 43;
		case -1157194180:
			return 30;
		case -1151085798:
			return 31;
		case -1019271530:
			return 10;
		case -944178516:
			return 26;
		case -937655290:
			return 53;
		case -936508922:
			return 102;
		case -907971236:
			return 65;
		case -863017340:
			return 92;
		case -835345303:
			return 57;
		case -832908671:
			return 48;
		case -759061492:
			return 19;
		case -692335380:
			return 83;
		case -596510485:
			return 96;
		case -585098035:
			return 46;
		case -520556863:
			return 85;
		case -378561682:
			return 60;
		case -377574959:
			return 33;
		case -367868014:
			return 15;
		case -353010695:
			return 82;
		case -350556716:
			return 81;
		case -102827824:
			return 34;
		case -102545856:
			return 75;
		case -82191741:
			return 87;
		case 0:
			return 112;
		case 7562841:
			return 105;
		case 41932468:
			return 35;
		case 72801698:
			return 78;
		case 104820669:
			return 77;
		case 175025255:
			return 93;
		case 205166155:
			return 55;
		case 214785091:
			return 42;
		case 229544920:
			return 89;
		case 253727941:
			return 66;
		case 266787856:
			return 91;
		case 358997942:
			return 63;
		case 530671939:
			return 14;
		case 558731558:
			return 58;
		case 693005399:
			return 7;
		case 709801630:
			return 98;
		case 713508039:
			return 86;
		case 744226541:
			return 13;
		case 745945503:
			return 95;
		case 757105507:
			return 0;
		case 787316203:
			return 2;
		case 790678034:
			return 8;
		case 805845691:
			return 41;
		case 911414965:
			return 24;
		case 978801228:
			return 73;
		case 992695664:
			return 52;
		case 1062881804:
			return 25;
		case 1105471824:
			return 20;
		case 1128086492:
			return 108;
		case 1131758526:
			return 62;
		case 1139025222:
			return 107;
		case 1183803081:
			return 11;
		case 1190538002:
			return 99;
		case 1250977037:
			return 106;
		case 1261138928:
			return 4;
		case 1261539922:
			return 39;
		case 1285391378:
			return 6;
		case 1306457250:
			return 61;
		case 1314299724:
			return 111;
		case 1338756401:
			return 12;
		case 1400887301:
			return 27;
		case 1423490462:
			return 90;
		case 1437199060:
			return 36;
		case 1440632655:
			return 29;
		case 1472024063:
			return 45;
		case 1504223919:
			return 84;
		case 1562378696:
			return 104;
		case 1639899405:
			return 70;
		case 1706052688:
			return 5;
		case 1741725206:
			return 22;
		case 1753192824:
			return 101;
		case 1780028424:
			return 56;
		case 1865339861:
			return 28;
		case 1901448492:
			return 23;
		case 1921351553:
			return 59;
		case 1961205920:
			return 49;
		case 1985273028:
			return 37;
		case joaat("SLOT_UNARMED"):
			return 110;
		case 1995043222:
			return 97;
		case 2031132011:
			return 9;
		case 2041846130:
			return 80;
		case 2129028479:
			return 3;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

struct<2> func_414(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_415(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_416(int* iParam0, struct<16> Param1, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != joaat("SELL")) && iParam18 != joaat("UPDATE"))
	{
		return 0;
	}
	if (!func_508(iParam18, Param1, iParam20))
	{
		return 0;
	}
	if (!func_509(iParam0, iParam18))
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(*iParam0, &Param1, 17))
	{
	}
	else
	{
		return 0;
	}
	return func_510(iParam0, bParam19);
}

int func_417(int* iParam0, struct<16> Param1, int iParam17, bool bParam18, bool bParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != joaat("SELL")) && iParam17 != joaat("UPDATE")) && iParam17 != joaat("USE")) && iParam17 != joaat("SPEND"))
	{
		return 0;
	}
	if (!func_508(iParam17, Param1, bParam19))
	{
		return 0;
	}
	if (!func_509(iParam0, iParam17))
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(*iParam0, &Param1, 16))
	{
	}
	else
	{
		return 0;
	}
	return func_510(iParam0, bParam18);
}

int func_418(int iParam0, int iParam1)
{
	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0x2BAE4880DCDD560B(iParam0, iParam1))
	{
		return 0;
	}
	return INVENTORY::_0x2E1CDC1FF3B8473E(iParam0, iParam1);
}

var func_419(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_0x32C90CDFAF40514C();
	}
	return Global_1139395[iParam0 /*34*/];
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_RANK");
		case 7:
			return joaat("CHARACTER_RANK_BOUNTY_HUNTER");
		case 12:
			return joaat("CHARACTER_RANK_COLLECTOR");
		case 11:
			return joaat("CHARACTER_RANK_TRADER");
		case 13:
			return joaat("CHARACTER_RANK_SEASON_005");
		case 14:
			return joaat("CHARACTER_RANK_VIP_SEASON_005");
		case 15:
			return joaat("CHARACTER_RANK_MOONSHINER");
		case 16:
			return joaat("CHARACTER_RANK_SEASON_006");
		case 17:
			return joaat("CHARACTER_RANK_VIP_SEASON_006");
		default:
			break;
	}
	return 0;
}

int func_421(int iParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_473(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_392(iParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_474(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_474(bParam6), iParam0, bParam8);
	}
	return iVar0;
}

void func_422()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

int func_423(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_512(bParam2, func_511(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_424(int iParam0)
{
	Global_1896726->f_390 = iParam0;
}

int func_425(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_426(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			return (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_427(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_513(iParam0, iParam1, iParam2, iParam3);
}

bool func_428(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 176);
}

void func_429(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_514(uParam0, 1);
	func_515(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_430()
{
	if (Global_1272170->f_438.f_1548 >= 40 || Global_1272170->f_438.f_1548 < 0)
	{
		Global_1272170->f_438.f_1548 = 0;
	}
	return Global_1272170->f_438.f_1548;
}

void func_431(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1272170->f_438.f_1548 = iParam0;
}

int func_432()
{
	if (Global_1272170->f_438.f_1549 >= 10 || Global_1272170->f_438.f_1549 < 0)
	{
		Global_1272170->f_438.f_1549 = 0;
	}
	return Global_1272170->f_438.f_1549;
}

void func_433(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1272170->f_438.f_1549 = iParam0;
}

bool func_434()
{
	return !Global_1572887->f_9;
}

void func_435(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_436(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_437(int iParam0)
{
	if (func_439(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_438(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3327)
	{
		if ((Global_39.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_39.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904613->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_439(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_440(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_441()
{
	if (!func_172())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

int func_442(int iParam0)
{
	if (func_516(iParam0))
	{
		return (func_517(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_443(int iParam0)
{
	int iVar0;

	iVar0 = func_331(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_444(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_325(iParam1, 1);
	iVar1 = func_331(iParam0, 1);
	iVar2 = func_327(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_518(iVar3, 1);
		if (!func_519(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_520((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_521(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_522(iVar6))
		{
		}
		else
		{
			iVar8 = func_523(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_524(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_445(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_446(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_443(iParam0))
	{
		return false;
	}
	if (!func_525(iParam1))
	{
		return false;
	}
	iVar0 = func_526(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_447(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_527(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_448(vector3 vParam0)
{
	if (!func_443(vParam0.x))
	{
		return 0;
	}
	if (!func_324(vParam0.y))
	{
		return 0;
	}
	if (!func_528(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_449(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_325(iParam1, 1);
	iVar1 = func_331(iParam0, 1);
	iVar2 = func_327(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	((Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])->f_1 = Global_1275573->f_21;
	if (&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_518(iVar3, 1);
		if (!func_519(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_520((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_529(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_522(iVar6))
		{
		}
		else if (!func_530((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_523(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_531(iVar6);
			}
		}
		iVar7++;
	}
	func_532((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_450(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_525(iParam0))
	{
		return;
	}
	iVar0 = func_526(iParam0, 1);
	if (!func_443(iParam1))
	{
		return;
	}
	if (!func_324(iParam2))
	{
		return;
	}
	if (!func_528(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_451(int iParam0)
{
	int iVar0;

	if (!func_525(iParam0))
	{
		return;
	}
	iVar0 = func_526(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

void func_452(int iParam0)
{
	Global_1099294->f_26.f_12 = iParam0;
}

bool func_453(int iParam0)
{
	return (Global_1099294->f_26.f_7 && iParam0) != 0;
}

bool func_454(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

bool func_455(int iParam0)
{
	return (Global_1099294->f_4[Global_1100047[iParam0 /*2*/]] && ((*Global_1100047)[iParam0 /*2*/])->f_1) == ((*Global_1100047)[iParam0 /*2*/])->f_1;
}

int func_456()
{
	if (&Global_1099294 <= 5)
	{
		return &Global_1099294;
	}
	if (&Global_1099294 <= 22)
	{
		return 4;
	}
	if (&Global_1099294 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_457(int iParam0)
{
	if (func_533(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 || iParam0);
}

int func_458(int iParam0)
{
	if (!func_534(iParam0))
	{
		return 0;
	}
	return &(Global_1938942->f_5[iParam0 /*11*/]);
}

int func_459(int iParam0, int iParam1)
{
	if (!func_460(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_460(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_461(struct<2> Param0)
{
	return func_535(Param0, 5, 8);
}

int func_462(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_466(iVar0, 1, 0);
		if (!func_367(iParam0, bVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_467(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || func_368(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
					{
						return bVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_463(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	bool bVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar40 = func_466(iVar0, 0, 1);
		if (!func_367(iParam0, bVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_468(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || func_368(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || &Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && &Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && &Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (bVar4 == 0 || (bVar6 && (Var9[iVar41 /*2*/])->f_1 < iVar2))
						{
							bVar5 = bVar40;
							iVar3 = (Var9[iVar41 /*2*/])->f_1;
							iVar7 = 1;
						}
					}
					else if (bVar4 == 0 || (Var9[iVar41 /*2*/])->f_1 < iVar2)
					{
						bVar5 = bVar40;
						iVar3 = (Var9[iVar41 /*2*/])->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && bVar5 != 0)
			{
				bVar4 = bVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return bVar4;
}

int func_464(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_460(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_300() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_536(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

int func_465(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, bParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

int func_466(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_467(int iParam0)
{
	return func_398(iParam0) == 1946043663;
}

bool func_468(int iParam0)
{
	return func_398(iParam0) == -126813555;
}

bool func_469(int iParam0)
{
	return func_391(iParam0) == joaat("WEAPON");
}

void func_470(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_471(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_391(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_355(iParam0, 1399091007))
	{
		func_537(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_472(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_538(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_539(&Var0, func_393(0));
	}
	if (!func_540(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_541(iVar14);
	return uVar15;
}

int func_473(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_474(bool bParam0)
{
	if (func_300() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

struct<4> func_475(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_277(iParam0, bParam1, 0) };
	return func_392(iParam0, Var0, Var0.f_4, bParam1);
}

void func_476(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

int func_478(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_277;
	}
	return iParam0;
}

int func_479(int iParam0)
{
	iParam0 = func_478(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903007[iParam0 /*43*/]))
	{
		return 1;
	}
	return 0;
}

int func_480(int iParam0)
{
	iParam0 = func_478(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903007[iParam0 /*43*/];
}

int func_481(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::_0x9A100F1CF4546629(iVar0))
	{
		return 0;
	}
	if (FLOCK::_0xF8B48A361DC388AE(iVar0) == 2)
	{
		return 0;
	}
	if (ENTITY::_GET_IS_LOOTED(iParam0))
	{
		return 0;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_482(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_483(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_484(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_485(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_486(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = joaat("A_C_FISHPERCH_01_SM");
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = joaat("A_C_BAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = joaat("A_C_BLUEJAY_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = joaat("A_C_FROGBULL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = joaat("A_C_CARDINAL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = joaat("A_C_CEDARWAXWING_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CHIPMUNK_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = joaat("A_C_CRAB_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = joaat("A_C_CROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ORIOLE_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CAROLINAPARAKEET_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = joaat("A_C_PIGEON");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = joaat("A_C_QUAIL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = joaat("A_C_RAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ROBIN_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = joaat("A_C_SONGBIRD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = joaat("A_C_SPARROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = joaat("A_C_SQUIRREL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = joaat("A_C_TOAD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = joaat("A_C_WOODPECKER_01");
			break;
	}
	return iVar0;
}

int func_487(int iParam0)
{
	if (func_355(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_355(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_355(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_488(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_254(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_489(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_490(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_268(iParam0, bParam1, 0))
	{
		return 0;
	}
	if (func_251(bParam2, 2))
	{
		if (func_269(iParam0, bParam1))
		{
			return 0;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 0;
	}
	if (func_251(bParam2, 8))
	{
		return func_542(iParam0, bParam1);
	}
	return 1;
}

int func_491(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return 0;
	}
	if (!func_543(Param1))
	{
		return 0;
	}
	if (!func_509(iParam0, iParam18))
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(*iParam0, &Param1, 17))
	{
	}
	else
	{
		return 0;
	}
	return func_510(iParam0, bParam19);
}

struct<4> func_492()
{
	struct<4> Var0;

	return Var0;
}

bool func_493()
{
	return (func_544(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_409(func_392(joaat("WARDROBE"), func_390(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_494(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_474(0);
	*uParam1 = { func_392(iParam0, func_393(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_495(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, bParam2);
}

int func_496(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_474(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_497(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_498(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_499(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_254(iParam0, 0) && !func_460(func_356(iParam0), 2))
	{
		return 0;
	}
	if (func_391(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_473(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_474(bParam3), iParam0);
}

int func_500(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_254(iParam0, 0) && !func_460(func_356(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_501(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_502(int* iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_265(iParam1, 1) && !func_266(iParam1, 1))
	{
		if (Global_1915180->f_20142)
		{
			func_545(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -570078785)
	{
		iVar0 = func_290(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_272((iVar1 + func_546(iParam0, bParam2))))
		{
			if (Global_1915180->f_20142)
			{
				func_545(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -915411861)
	{
		iVar2 = func_290(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_273((iVar3 + func_546(iParam0, bParam2))))
		{
			if (Global_1915180->f_20142)
			{
				func_545("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 997808187)
	{
		return 1;
	}
	if (func_460(func_356(iParam1), 2))
	{
		if (!func_547(func_356(iParam1), iParam3, bParam2, &uVar4))
		{
			return 0;
		}
	}
	else if (func_254(iParam1, 0))
	{
		if (!func_274(iParam1, iParam3, bParam2, &uVar4, &uVar6, 0, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_503(int iParam0)
{
	int iVar0;

	if (!func_254(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_398(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_504(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_548(&uParam0, bParam4, iParam5, bParam6, iParam7);
}

int func_505(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7, bool bParam8)
{
	if (!func_403(iParam0, iParam1, Param2, bParam6, bParam7, 1, bParam8, 1))
	{
		return 0;
	}
	if (func_251(bParam8, 4) && func_395(iParam1, &Param2, bParam6, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_506(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_548(uParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_507(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_400(Param0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_391(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_549(Param0, 1, 0) };
		Var16.f_10 = iParam4;
		iVar0 = func_550(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_551(Param0, 1, 0) };
		Var44.f_10 = iParam4;
		iVar0 = func_552(joaat("UPDATE"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_553(Param0, 1, 0) };
		Var69.f_10 = iParam4;
		iVar0 = func_554(joaat("UPDATE"), &Var69, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_555(&Var1, 0) };
		Var86.f_10 = iParam4;
		iVar0 = func_556(joaat("UPDATE"), &Var86, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_508(int iParam0, struct<10> Param1, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, bool bParam17)
{
	if (Param1.f_9 < 1)
	{
		return 0;
	}
	if (!func_254(Param1.f_8, 0) && !func_460(func_356(Param1.f_8), 2))
	{
		return 0;
	}
	if (func_251(bParam17, 128))
	{
		if (func_398(Param1.f_8) == 0)
		{
			return 0;
		}
	}
	if (func_251(bParam17, 16))
	{
		if (!func_557(iParam0, &Param1))
		{
			return 0;
		}
	}
	return 1;
}

int func_509(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_405(iParam0, iParam1))
		{
			return 0;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_412(iParam0))
		{
			return 0;
		}
		if (!func_405(iParam0, iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_510(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_412(iParam0);
	}
	return 1;
}

bool func_511()
{
	return Global_1915180->f_20141;
}

int func_512(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return 0;
	}
	iVar0 = &Global_1275573->f_154[&Global_1275573];
	iVar1 = Global_1275573->f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_34))
			{
				return 0;
			}
			if (PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1099294->f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915180->f_20136 || Global_1915180->f_21989.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_558())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1939067->f_10 || Global_1939067->f_11) || Global_1939067->f_12) || Global_1939067->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1225057->f_9330 != -1)
		{
			return 0;
		}
		if (((*Global_1122836)[iVar4 /*54*/])->f_34 & 1 != 0 && ((*Global_1122836)[iVar4 /*54*/])->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1124829->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 10 && Global_1572887->f_106.f_75 < 14)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 14)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if ((Global_1048576 || Global_2883584) /* PointerArith */)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

void func_514(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_515(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_516(int iParam0)
{
	int iVar0;

	iVar0 = func_325(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_517(int iParam0)
{
	int iVar0;

	iVar0 = func_325(iParam0, 1);
	if (func_516(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_559(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_560(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_561(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_562(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_563(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_518(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 61;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 86;
		case -1572802418:
			return 67;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 74;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 64;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 63;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 71;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 69;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 59;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 62;
		case joaat("MSKILL__PERCEPTION"):
			return 76;
		case -1:
			return 0;
		case 66478954:
			return 85;
		case joaat("MSKILL__DISTILLER"):
			return 83;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 68;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 78;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 66;
		case joaat("MSKILL__DIVINATION"):
			return 82;
		case 410940916:
			return 84;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 60;
		case joaat("MSKILL__INTUITION"):
			return 81;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 79;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 87;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 65;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 72;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case joaat("MSKILL__FOCUS"):
			return 75;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 70;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 73;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 77;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
			return 80;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_519(int iParam0)
{
	int iVar0;

	iVar0 = func_518(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_520(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_564(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_521(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_519(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0, 1);
	if (!func_565(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] - 1);
	if ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = 0;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 0;
	if (!func_566((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_567((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] - 1);
	if (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] != &Global_1140484->f_2001[iVar0 /*192*/])
		{
		}
		else
		{
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = -1;
			(Global_1140484->f_41529[iVar1 /*25*/])->f_23 = ((Global_1140484->f_41529[iVar1 /*25*/])->f_23 - 1);
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = Global_1140484->f_41529[iVar1 /*25*/][(Global_1140484->f_41529[iVar1 /*25*/])->f_23];
			(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

int func_522(int iParam0)
{
	int iVar0;

	iVar0 = func_523(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_523(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 49;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 60;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 50;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 61;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 56;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 51;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 52;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1159158432:
			return 58;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 59;
		case 1341326366:
			return 54;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 53;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_524(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_568();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_569();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_570(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_570(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_570(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_204(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_570(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_572(func_571(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case joaat("NED_KELLY_BASE"):
			func_573();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_565(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_565(16);
			break;
	}
}

int func_525(int iParam0)
{
	int iVar0;

	iVar0 = func_526(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_526(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_527(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_574(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1140484->f_30603.f_10924)
	{
		iVar64 = func_331(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1140484->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1140484->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_575(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), (Global_1140484->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_576(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

int func_528(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

void func_529(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_519(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0, 1);
	if (!func_565(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_566((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_567((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = &((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] == &Global_1140484->f_2001[iVar0 /*192*/])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = &Global_1140484->f_2001[iVar0 /*192*/];
	(Global_1140484->f_41529[iVar1 /*25*/])->f_23++;
}

int func_530(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_577(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_531(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_568();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_569();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_570(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_570(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_570(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_204(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_570(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			iVar2 = func_571(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_578(iParam0, 0));
			func_579(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_578(iParam0, 1));
			func_579(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_578(iParam0, 2));
			func_579(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_578(iParam0, 3));
			func_579(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_571(iParam0);
			func_579(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_571(iParam0);
			func_579(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case joaat("NED_KELLY_BASE"):
			func_580();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_565(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_565(16);
			break;
	}
}

void func_532(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_581(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_582(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275573->f_8, sVar1, false, 0, 0);
}

bool func_533(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) == iParam0;
}

int func_534(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return 0;
	}
	return 1;
}

bool func_535(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_11(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_583(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_536(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_460(iParam0, 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_584(iParam0, bParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

void func_537(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_538(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

void func_539(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_540(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_474(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_541(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_542(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam1 == -570078785)
	{
		iVar0 = func_369(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_272(iVar0))
		{
			if (Global_1915180->f_20142)
			{
				func_545(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_292(iVar0)));
			}
			return 0;
		}
	}
	else if (bParam1 == -915411861)
	{
		iVar1 = func_369(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_273(iVar1))
		{
			if (Global_1915180->f_20142)
			{
				func_545("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam1 == 997808187)
	{
		return 1;
	}
	if (!func_270(iParam0, bParam1, &uVar2))
	{
		return 0;
	}
	return 1;
}

int func_543(struct<17> Param0)
{
	if (!func_359(Param0.f_16))
	{
		return 0;
	}
	return 1;
}

int func_544(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_585(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_474(bParam1), iParam0, bParam3);
}

void func_545(char* sParam0)
{
	Global_1915180->f_21955 = func_201(sParam0, 10000, 0, 0, 0, 1);
}

int func_546(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_290(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_547(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_586(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (func_378(0) && !func_379());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0 || &Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_273(iVar32))
			{
				Jump @209; //curOff = 131
			}
			else if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_272(iVar32))
			{
			}
			else
			{
				iVar33 = func_368(&(Var0[iVar34 /*2*/]), 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { *(Var0[iVar34 /*2*/]) };
					return 0;
				}
			}
			iVar34++;
		}
	}
	return 1;
}

int func_548(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_474(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, bParam1, &uVar0))
	{
		return 0;
	}
	if (!func_496(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

struct<28> func_549(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_474(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_555(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_550(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_557(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_587(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_588(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_551(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<25> Var0;
	struct<24> Var25;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_474(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_555(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_552(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_587(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_588(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_553(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_474(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_555(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_554(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_557(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_587(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_588(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_555(var uParam0, bool bParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_473(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_492() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_556(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_557(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_587(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_588(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

int func_557(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if (func_247(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_247(iVar0, 8))
	{
		return 0;
	}
	else if (func_247(iVar0, 16))
	{
		return 0;
	}
	else if (func_247(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

bool func_558()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

int func_559(int iParam0)
{
	int iVar0;

	iVar0 = func_325(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_560(int iParam0)
{
	int iVar0;

	iVar0 = func_325(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_561(int iParam0)
{
	int iVar0;

	iVar0 = func_325(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_562(int iParam0)
{
	int iVar0;

	iVar0 = func_325(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_563(int iParam0)
{
	int iVar0;

	iVar0 = func_325(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

float func_564(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_589(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_565(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1140484->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1140484->f_1997 >= 21)
	{
		return 0;
	}
	Global_1140484->f_1975[Global_1140484->f_1997] = iParam0;
	Global_1140484->f_1997++;
	return 1;
}

int func_566(int iParam0)
{
	int iVar0;

	iVar0 = func_567(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_567(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
			return 2;
		case 1416591065:
			return 1;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_568()
{
	bool bVar0;
	bool bVar1;

	if ((Global_1140484->f_18706[3 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 550, bVar0);
	if ((Global_1140484->f_18706[4 /*195*/])->f_194)
	{
		bVar1 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 556, bVar1);
}

void func_569()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1140484->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 263, bVar0);
}

char* func_570(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
		default:
			break;
	}
	return 0;
}

void func_572(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (((*Global_1182208)[iVar0 /*8*/])->f_5 == iParam0)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_7 = 1;
			((*Global_1182208)[iVar0 /*8*/])->f_5 = 0;
		}
		iVar0++;
	}
}

void func_573()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275573->f_8);
}

int func_574(int iParam0)
{
	int iVar0;

	if (!func_525(iParam0))
	{
		return -1;
	}
	iVar0 = func_526(iParam0, 1);
	return &(Global_1140484->f_30603.f_8667[iVar0 /*3*/]);
}

int func_575(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_443(iParam0))
	{
		return 0;
	}
	iVar0 = func_331(iParam0, 1);
	iVar2 = (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_445(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1140484->f_30603.f_8667[func_526(iVar2, 1) /*3*/];
		Var4 = { func_576(iVar3) };
		if (iVar3 != iParam0 && (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_5 <= Var4.f_5)
		{
			return 0;
		}
	}
	switch (&Global_1140484->f_30603.f_2900[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return 1;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_590() && !func_591())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_590())
			{
				return 0;
			}
			return 1;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_442(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_442(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x81FB74C83C2ED69F(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_442(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1275573 && !func_592(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_593(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954472->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_442(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (PED::_0x0C31C51168E80365(Global_1275573->f_8) != PLAYER::GET_PLAYER_PED(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		default:
			break;
	}
	return 0;
}

struct<31> func_576(int iParam0)
{
	int iVar0;

	iVar0 = func_331(iParam0, 1);
	return *(Global_1140484->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_577(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_589(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_578(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_579(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1182208[iVar0 /*8*/]) && !((*Global_1182208)[iVar0 /*8*/])->f_6)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_5 = iParam0;
			((*Global_1182208)[iVar0 /*8*/])->f_1 = iParam1;
			((*Global_1182208)[iVar0 /*8*/])->f_2 = iParam2;
			((*Global_1182208)[iVar0 /*8*/])->f_3 = iParam3;
			((*Global_1182208)[iVar0 /*8*/])->f_4 = iParam4;
			((*Global_1182208)[iVar0 /*8*/])->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_580()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275573->f_8, 0.7f);
}

char* func_581(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_582(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

int func_583(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_594(Param0);
	}
	return -1;
}

int func_584(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_585(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_586(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_460(iParam0, 2))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xB542632693D53408(iParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_595(iParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_587(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_427(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_427(iParam1, 2, 0, 0);
	return -1;
}

int func_588(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_427(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_589(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("NAME");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("NAME")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("TYPE"));
		uParam2->f_10.f_3 = func_596(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("DEFAULT")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("MIN"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("MIN"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("MIN"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("MAX"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("MAX"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("MAX"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return 1;
	}
	return 0;
}

bool func_590()
{
	return Global_1572887->f_6;
}

int func_591()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_11(func_18(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_597(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_592(int iParam0)
{
	if (func_598(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_599(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

bool func_593(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_594(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_600(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_595(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_596(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_597(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_598(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_599(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1275573->f_22[iVar0])
	{
		func_601(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_602(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_600(struct<2> Param0, int iParam2)
{
	if (!func_11(Param0))
	{
		return 0;
	}
	func_603(iParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(iParam2, Global_1070356->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

void func_601(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_602(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_602(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

void func_603(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

