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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1();
	while (!func_2(0, 0))
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4();
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		func_5();
		BUILTIN::WAIT(0);
	}
	func_6();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_7(32, -1);
	func_8();
	if (func_9())
	{
		func_6();
	}
	func_10();
	func_11(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

int func_2(bool bParam0, bool bParam1)
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

void func_3()
{
	bool bVar0;

	bVar0 = func_12();
	if (func_13())
	{
		func_14();
	}
	func_15(bVar0);
}

void func_4()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (MAP::DOES_BLIP_EXIST(func_16((Global_1126368->f_1[iVar0 /*62*/])->f_5)))
		{
			func_17(&((Global_1126368->f_1[iVar0 /*62*/])->f_5), 0);
		}
		iVar0++;
	}
	func_18();
	Global_1126368->f_1986 = 0;
	Global_1126368->f_2009 = 0;
	Global_1126368 = 0;
}

void func_5()
{
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1126368->f_2021) && !SCRIPTS::_DOES_THREAD_EXIST(Global_1126368->f_2023))
	{
		return;
	}
	if (!Global_1126368->f_2025)
	{
		if (SCRIPTS::_DOES_THREAD_EXIST(Global_1126368->f_2021))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1126368->f_2021);
		}
		if (SCRIPTS::_DOES_THREAD_EXIST(Global_1126368->f_2023))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1126368->f_2023);
		}
		Global_1126368->f_2025 = 1;
	}
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_6();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_19() == 0)
		{
			if (func_20())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

int func_9()
{
	if (Global_1572887->f_9)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	func_21(Global_1125276);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1125276, 1092, 43);
	func_22(NETWORK::_0xBA24095EA96DFE17(Global_1125276), 1092, "g_mpHostNetCamp");
	func_23(Global_1128435);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1128435, 2657, 44);
	func_24(NETWORK::_0x690806BC83BC8CA2((*Global_1128435)[0 /*83*/]), 2657, "g_mpPlayerNetCamp");
	func_25(Global_1126368);
	func_26(Global_1128395);
}

void func_11(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

int func_12()
{
	if (func_27())
	{
		func_28(16);
		return 0;
	}
	if (func_29())
	{
		func_28(16);
		return 0;
	}
	if (func_30(16))
	{
		func_28(16);
		return 0;
	}
	func_31(16);
	return 1;
}

bool func_13()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1051202->f_16[9]), false))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(&(Global_1051202->f_16[9]));
}

void func_14()
{
	switch (Global_1125276->f_1090)
	{
		case 0:
			func_32();
			break;
		case 1:
			func_33();
			break;
		case 2:
			func_34();
			break;
	}
}

void func_15(bool bParam0)
{
	switch (&Global_1126368)
	{
		case 0:
			func_35();
			break;
		case 1:
			func_36();
			break;
		case 2:
			func_37(bParam0);
			break;
	}
	Global_1126368->f_2008 = 0;
}

int func_16(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_16843)
	{
		return &(Global_16843[iParam0]);
	}
	return 0;
}

void func_17(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_38(*uParam0, -1);
		func_39(*uParam0, 0);
		func_40(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_16843[*uParam0])))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(&(Global_16843[*uParam0]));
			}
			MAP::REMOVE_BLIP(Global_16843[*uParam0]);
		}
	}
	*uParam0 = -1;
}

void func_18()
{
	int iVar0;
	var uVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1128435)[iVar0 /*83*/])->f_38.f_23.f_1))
	{
		VOLUME::_0xFDFECC6EE4491E11(((*Global_1128435)[iVar0 /*83*/])->f_38.f_23.f_1);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1128435)[iVar0 /*83*/])->f_38.f_23))
	{
		VOLUME::_0xFDFECC6EE4491E11(((*Global_1128435)[iVar0 /*83*/])->f_38.f_23);
	}
	((*Global_1128435)[iVar0 /*83*/])->f_38.f_23.f_1 = uVar1;
	((*Global_1128435)[iVar0 /*83*/])->f_38.f_23 = uVar1;
}

int func_19()
{
	return Global_1572887->f_13;
}

bool func_20()
{
	return Global_1051202->f_8;
}

void func_21(var uParam0)
{
	struct<27> Var0;
	int iVar27;
	struct<7> Var28;
	var uVar35;
	var uVar36;

	Var0.f_9 = 255;
	Var0.f_10 = 7;
	Var0.f_10.f_1 = 255;
	Var0.f_10.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	iVar27 = 0;
	while (iVar27 <= 31)
	{
		*((*uParam0)[iVar27 /*27*/]) = { Var0 };
		iVar27++;
	}
	Var28.f_4 = -1;
	iVar27 = 0;
	while (iVar27 <= 31)
	{
		*(uParam0->f_865[iVar27 /*7*/]) = { Var28 };
		iVar27++;
	}
	uParam0->f_1090 = uVar35;
	uParam0->f_1091 = uVar36;
}

int func_22(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_23(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_41((*uParam0)[iVar0 /*83*/]);
		iVar0++;
	}
}

int func_24(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_25(var uParam0)
{
	var uVar0;
	int iVar1;
	struct<62> Var2;
	var uVar64;
	struct<9> Var65;

	*uParam0 = uVar0;
	Var2.f_5 = -1;
	Var2.f_12 = 7;
	Var2.f_48 = 7;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		*(uParam0->f_1[iVar1 /*62*/]) = { Var2 };
		iVar1++;
	}
	uParam0->f_1986 = uVar64;
	Var65.f_4 = -15;
	uParam0->f_1995 = { Var65 };
	uParam0->f_1987 = 0;
	uParam0->f_2020 = -428030045;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		uParam0->f_1988[iVar1] = 0;
		iVar1++;
	}
	uParam0->f_2009 = 0;
	uParam0->f_2010 = 0;
	uParam0->f_2011 = 0;
	uParam0->f_2012 = 0;
	uParam0->f_2025 = 0;
	uParam0->f_2017 = 0;
}

void func_26(var uParam0)
{
}

bool func_27()
{
	return Global_262996[&Global_1275573 /*70*/] > 2;
}

void func_28(int iParam0)
{
	if (func_42(iParam0))
	{
		func_43(&(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_73), iParam0);
	}
}

int func_29()
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
	if (!func_44(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_30(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

void func_31(int iParam0)
{
	if (!func_42(iParam0))
	{
		func_45(&(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_73), iParam0);
	}
}

void func_32()
{
	func_46(1);
}

void func_33()
{
	if (func_42(1))
	{
		func_46(2);
	}
}

void func_34()
{
	int iVar0;
	var uVar1;

	while (iVar0 < 10)
	{
		iVar0++;
		Global_1126368->f_2012++;
		if (Global_1126368->f_2012 >= 32)
		{
			Global_1126368->f_2012 = 0;
		}
		func_47(Global_1126368->f_2012, &uVar1);
		func_48(Global_1126368->f_2012);
	}
}

void func_35()
{
	if (Global_1125276->f_1090 > 0)
	{
		if (func_49())
		{
			func_50();
			func_51(1);
		}
	}
}

void func_36()
{
	if (!func_42(1))
	{
		if (func_52())
		{
			func_53();
			func_31(1);
		}
	}
	else if (Global_1125276->f_1090 > 1)
	{
		if (func_54() == 0)
		{
			func_55(1);
		}
		func_51(2);
	}
}

void func_37(bool bParam0)
{
	int iVar0;

	if (!func_42(64) && func_56())
	{
		func_31(64);
	}
	while (iVar0 < 10)
	{
		iVar0++;
		Global_1126368->f_2011++;
		if (Global_1126368->f_2011 >= 32)
		{
			Global_1126368->f_2011 = 0;
		}
		func_57(Global_1126368->f_2011);
	}
	func_58();
	if (bParam0)
	{
		func_59();
		func_60();
		func_61();
		func_62();
	}
	else if (Global_1126368->f_1987 != 1)
	{
		func_63(1);
	}
}

void func_38(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3438[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_24750[iParam0 /*4*/] = iParam1;
	return;
}

void func_39(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		(Global_39.f_3438[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_24750[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_40(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		(Global_39.f_3438[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_24750[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

void func_41(var uParam0)
{
	struct<83> Var0;

	Var0 = 32;
	Var0.f_33.f_3 = -1;
	Var0.f_38.f_3 = -1;
	Var0.f_38.f_7 = -1;
	Var0.f_38.f_25 = -1;
	Var0.f_38.f_28.f_1 = 1046181202;
	Var0.f_38.f_28.f_2 = 255;
	Var0.f_38.f_28.f_3 = -1;
	Var0.f_74.f_7 = -1;
	*uParam0 = { Var0 };
	func_64(&(uParam0->f_38));
}

bool func_42(int iParam0)
{
	return func_65(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_73, iParam0);
}

void func_43(var uParam0, int iParam1)
{
	func_66(uParam0, iParam1);
}

int func_44(struct<2> Param0)
{
	if (!func_67(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_68(Param0))
	{
		return 0;
	}
	return 1;
}

void func_45(var uParam0, int iParam1)
{
	func_69(uParam0, iParam1);
}

void func_46(int iParam0)
{
	if (Global_1125276->f_1090 != iParam0)
	{
		Global_1125276->f_1090 = iParam0;
	}
}

void func_47(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	int iVar12;
	struct<24> Var13;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return;
	}
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if ((Global_1125276->f_865[iVar1 /*7*/])->f_4 != ((*Global_1128435)[iParam0 /*83*/])->f_33.f_3 && ((*Global_1128435)[iParam0 /*83*/])->f_33.f_3 != -1)
	{
		func_70(iVar1, ((*Global_1128435)[iParam0 /*83*/])->f_33.f_3);
		func_71(iVar1, ((*Global_1128435)[iParam0 /*83*/])->f_33);
		func_72(iVar1, 0);
	}
	iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	iVar3 = _NAMESPACE26::_0x149A2751AB66AC02(iVar2);
	vVar9 = { (Global_1125276->f_865[iVar1 /*7*/])->f_1 };
	iVar12 = func_65((Global_1125276->f_865[iVar1 /*7*/])->f_5, 2);
	switch (&Global_1125276->f_865[iVar1 /*7*/])
	{
		case 0:
			(Global_1125276->f_865[iVar1 /*7*/])->f_5 = ((*Global_1128435)[iParam0 /*83*/])->f_33.f_4;
			iVar12 = func_65((Global_1125276->f_865[iVar1 /*7*/])->f_5, 2);
			if (vVar9.z == 0)
			{
				iVar7 = func_73(iVar0);
				if (func_74(iVar7))
				{
					if (_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
					{
						func_75(iVar7, 3);
					}
				}
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1125276->f_1091), iVar0))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(Global_1125276->f_1091), iVar0);
				}
				func_72(iVar1, 6);
			}
			else if (vVar9.z < 0)
			{
				if (func_76(iParam0))
				{
					func_72(iVar1, 3);
				}
				else
				{
					func_72(iVar1, 4);
				}
			}
			else
			{
				if (*uParam1)
				{
					return;
				}
				*uParam1 = 1;
				func_77(vVar9, &vVar4);
				if (!func_78(vVar9, iParam0, vVar4, iVar3, 1, 0, iVar12))
				{
					func_72(iVar1, 4);
					return;
				}
				func_72(iVar1, 1);
			}
			break;
		case 1:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			if (func_65(((*Global_1128435)[iParam0 /*83*/])->f_33.f_4, 8))
			{
				func_72(iVar1, 2);
			}
			break;
		case 2:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			func_77(vVar9, &vVar4);
			iVar7 = func_73(iVar0);
			if (func_74(iVar7))
			{
				func_75(iVar7, 3);
			}
			Var13.f_9 = 255;
			Var13.f_10 = 7;
			Var13.f_10.f_1 = 255;
			Var13.f_10.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_9 = iVar0;
			Var13.f_1 = vVar9.x;
			Var13.f_1.f_1 = vVar9.y;
			Var13.f_1.f_2 = vVar9.z;
			Var13.f_20 = { vVar4 };
			Var13.f_23.f_1 = ((*Global_1128435)[iParam0 /*83*/])->f_38.f_23.f_1;
			Var13.f_23 = ((*Global_1128435)[iParam0 /*83*/])->f_38.f_23;
			Var13 = 1;
			iVar7 = func_79(&Var13);
			if (!func_74(iVar7))
			{
				return;
			}
			if (!func_65((Global_1125276->f_865[iVar1 /*7*/])->f_5, 4))
			{
				func_80(iVar7, 16);
			}
			if (func_65((Global_1125276->f_865[iVar1 /*7*/])->f_5, 1))
			{
				func_80(iVar7, 512);
			}
			func_72(iVar1, 6);
			break;
		case 3:
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 < 32)
			{
				if (((*Global_1125276)[iVar7 /*27*/])->f_9 == iVar0)
				{
					((*Global_1125276)[iVar7 /*27*/])->f_1 = ((*Global_1128435)[iParam0 /*83*/])->f_33;
				}
				else
				{
					iVar7++;
				}
			}
			func_72(iVar1, 6);
			break;
		case 4:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			vVar9.f_2 = -2;
			if (func_81(iVar2, &vVar9, iVar12, &iVar8, &((Global_1125276->f_865[iVar1 /*7*/])->f_6)))
			{
				(Global_1125276->f_865[iVar1 /*7*/])->f_6 = 0;
				func_71(iVar1, vVar9);
				func_72(iVar1, 1);
			}
			else if ((Global_1125276->f_865[iVar1 /*7*/])->f_6 >= 10 || iVar8 == 1)
			{
				func_45(&((Global_1125276->f_865[iVar1 /*7*/])->f_5), 16);
				func_72(iVar1, 5);
			}
			break;
		case 5:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			vVar9.f_2 = -1;
			if (func_81(iVar2, &vVar9, iVar12, &iVar8, &((Global_1125276->f_865[iVar1 /*7*/])->f_6)))
			{
				(Global_1125276->f_865[iVar1 /*7*/])->f_6 = 0;
				func_71(iVar1, vVar9);
				func_72(iVar1, 1);
			}
			else if ((Global_1125276->f_865[iVar1 /*7*/])->f_6 >= 15 || iVar8 == 1)
			{
				func_72(iVar1, 6);
				func_45(&((Global_1125276->f_865[iVar1 /*7*/])->f_5), 32);
			}
			break;
		case 6:
			break;
	}
}

void func_48(int iParam0)
{
	func_82(iParam0);
	if (Global_1125276[iParam0 /*27*/] == 0)
	{
		return;
	}
	if (Global_1125276[iParam0 /*27*/] != 3)
	{
		func_83(iParam0);
		func_84(iParam0);
		func_85(iParam0);
	}
	switch (Global_1125276[iParam0 /*27*/])
	{
		case 1:
			func_86(iParam0);
			break;
		case 2:
			func_87(iParam0);
			break;
		case 3:
			func_88(iParam0);
			break;
	}
}

int func_49()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_4;
}

void func_50()
{
	func_64(&(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_38));
	func_89();
	func_90();
}

void func_51(int iParam0)
{
	if (&Global_1126368 != iParam0)
	{
		Global_1126368 = iParam0;
	}
}

int func_52()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!DATAFILE::_0x7907969497EA92F5(&(Global_1131092->f_361[iVar0])) || !DATAFILE::_0x603AC35FD4602C76(&(Global_1131092->f_361[iVar0])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_53()
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Var1 = { func_92(joaat("KIT_CAMP"), func_91(0), 1084182731, 1) };
	func_93(Var1);
	func_94();
	iVar5 = func_95(Var1, -421952220, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -1867469444; /* GXTEntry: "Red" */
	}
	func_96(iVar5, iVar0);
	iVar5 = func_95(Var1, 1231618917, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -144166169; /* GXTEntry: "Standard 1" */
	}
	func_97(iVar5, iVar0);
	iVar5 = func_95(Var1, 1043717005, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -811830793; /* GXTEntry: "Bedroll" */
	}
	func_98(iVar5, iVar0);
	iVar5 = func_95(Var1, 142663787, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -698168422; /* GXTEntry: "Standard" */
	}
	func_99(iVar5, iVar0);
	func_100(0, iVar0);
}

int func_54()
{
	return Global_1126368->f_1986;
}

void func_55(int iParam0)
{
	if (Global_1126368->f_1986 != iParam0)
	{
		Global_1126368->f_1986 = iParam0;
	}
}

int func_56()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

void func_57(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_101(iParam0);
	bVar1 = (bVar0 && ((*Global_1125276)[iParam0 /*27*/])->f_1.f_2 != (Global_1126368->f_1[iParam0 /*62*/])->f_2);
	iVar2 = (Global_1126368->f_1[iParam0 /*62*/])->f_3;
	if (!bVar0)
	{
		if (iVar2 == 0)
		{
			return;
		}
		else if (iVar2 == 2 || iVar2 == 1)
		{
			func_102(iParam0, (Global_1131092->f_9[iParam0 /*10*/])->f_2);
			func_103(iParam0, 3);
		}
	}
	if ((iVar2 == 0 && Global_1125276[iParam0 /*27*/] != 0) || bVar1)
	{
		func_104(iParam0, ((*Global_1125276)[iParam0 /*27*/])->f_1, ((*Global_1125276)[iParam0 /*27*/])->f_9);
		if (func_105((Global_1126368->f_1[iParam0 /*62*/])->f_5))
		{
			func_17(&((Global_1126368->f_1[iParam0 /*62*/])->f_5), 0);
		}
		func_106(Global_1126368->f_1[iParam0 /*62*/]);
		*(Global_1126368->f_1[iParam0 /*62*/]) = { ((*Global_1125276)[iParam0 /*27*/])->f_1 };
		func_103(iParam0, 1);
	}
	func_107(iParam0, bVar0);
	func_108(iParam0, bVar0);
	switch ((Global_1126368->f_1[iParam0 /*62*/])->f_3)
	{
		case 1:
			func_109(iParam0);
			break;
		case 2:
			func_110(iParam0);
			break;
		case 3:
			func_111(iParam0);
			break;
	}
}

void func_58()
{
	int iVar0;
	int iVar1;

	if (func_42(256))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (func_112(iVar0, 1))
			{
				iVar1 = 1;
			}
			else
			{
				iVar0++;
			}
		}
		if (iVar1 == 0)
		{
			func_28(256);
		}
	}
}

void func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	iVar0 = PLAYER::PLAYER_ID();
	func_113(iVar0);
	iVar1 = ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	bVar3 = func_74(iVar1);
	bVar4 = _NAMESPACE26::_0x424B17A7DC5C90BC(iVar0);
	switch (Global_1126368->f_1987)
	{
		case 0:
			if (bVar4)
			{
				if (bVar3)
				{
					func_63(20);
				}
				else
				{
					vVar8 = { func_114() };
					func_115(vVar8);
					if (vVar8.z != 0)
					{
						Global_1126368->f_2004 = { vVar8 };
						Global_1126368->f_2004.f_3 = 0;
						func_63(5);
					}
					else
					{
						func_63(4);
					}
				}
			}
			else
			{
				func_63(22);
			}
			break;
		case 1:
			func_63(0);
			break;
		case 2:
			if (!bVar3)
			{
				if (func_116())
				{
					func_117(0);
				}
				func_18();
				Global_1126368->f_2014 = 0;
				func_115(vVar8);
				func_118();
				func_119();
				func_120();
				func_63(3);
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar4)
				{
					func_118();
					func_63(20);
				}
				else
				{
					func_63(21);
				}
			}
			else
			{
				func_63(4);
			}
			break;
		case 4:
			if (bVar4)
			{
				if (bVar3)
				{
					func_118();
					func_63(20);
				}
				else if (((func_121(32) && !func_122()) && !func_123(255)) && !ENTITY::IS_ENTITY_DEAD(Global_34))
				{
					func_120();
					func_124(32);
				}
			}
			else if (bVar3)
			{
				func_63(21);
			}
			break;
		case 5:
			if (func_125(Global_1126368->f_2004, Global_1126368->f_2004.f_3))
			{
				if (func_76(iVar0))
				{
					func_63(12);
				}
				else
				{
					func_63(6);
				}
			}
			else
			{
				func_115(vVar8);
				func_63(4);
			}
			break;
		case 6:
			if (func_76(iVar0))
			{
				func_63(12);
				return;
			}
			iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
			if (func_65((Global_1125276->f_865[iVar2 /*7*/])->f_5, 32) && (Global_1125276->f_865[iVar2 /*7*/])->f_4 == ((*Global_1128435)[PLAYER::PLAYER_ID() /*83*/])->f_33.f_3)
			{
				func_63(13);
				return;
			}
			if (func_65((Global_1125276->f_865[iVar2 /*7*/])->f_5, 16) && Global_1126368->f_1995.f_5 != 0)
			{
				func_126(0);
			}
			if (&Global_1125276->f_865[iVar2 /*7*/] != 1 || (Global_1125276->f_865[iVar2 /*7*/])->f_1.f_2 == 0)
			{
				return;
			}
			if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1128435)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23.f_1))
			{
				return;
			}
			if (!func_127())
			{
				func_18();
				func_128();
				return;
			}
			vVar8 = { (Global_1125276->f_865[iVar2 /*7*/])->f_1 };
			func_77(vVar8, &vVar5);
			func_129(vVar8, vVar5);
			func_63(7);
			break;
		case 7:
			if (!VOLUME::_0xA4A4359320345B34(Global_1126368->f_2018.f_1))
			{
				Global_1126368->f_2014++;
				func_63(6);
				return;
			}
			iVar11 = VOLUME::_0xB33A604345F58202(Global_1126368->f_2018.f_1);
			switch (iVar11)
			{
				case 4:
					func_63(8);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_130(VOLUME::_0x351D71B8B72B858B(Global_1126368->f_2018.f_1));
					func_63(9);
					break;
			}
			break;
		case 8:
			if (!func_127())
			{
				func_18();
				func_128();
				func_126(0);
				return;
			}
			if (Global_1126368->f_2015 == 0)
			{
				Global_1126368->f_2015 = MISC::GET_GAME_TIMER();
				Global_1126368->f_2014++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1126368->f_2015) > 2000)
			{
				Global_1126368->f_2015 = 0;
				func_119();
				func_18();
				((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_2 = -2;
				Global_1126368->f_2004 = { ((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33 };
				func_63(5);
			}
			break;
		case 9:
			iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
			if ((Global_1125276->f_865[iVar2 /*7*/])->f_1.f_2 == 0)
			{
				return;
			}
			if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1128435)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23))
			{
				return;
			}
			if (!func_127())
			{
				func_18();
				func_128();
				return;
			}
			vVar8 = { (Global_1125276->f_865[iVar2 /*7*/])->f_1 };
			func_77(vVar8, &vVar5);
			func_131(vVar8, vVar5);
			func_63(10);
			break;
		case 10:
			if (!VOLUME::_0xA4A4359320345B34(Global_1126368->f_2018))
			{
				Global_1126368->f_2014++;
				func_63(9);
				return;
			}
			iVar12 = VOLUME::_0xB33A604345F58202(Global_1126368->f_2018);
			switch (iVar12)
			{
				case 4:
					func_63(11);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_132(VOLUME::_0x351D71B8B72B858B(Global_1126368->f_2018));
					func_133(8);
					func_63(12);
					break;
			}
			break;
		case 11:
			if (!func_127())
			{
				func_18();
				func_128();
				func_126(0);
				return;
			}
			if (Global_1126368->f_2015 == 0)
			{
				Global_1126368->f_2015 = MISC::GET_GAME_TIMER();
				Global_1126368->f_2014++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1126368->f_2015) > 2000)
			{
				Global_1126368->f_2015 = 0;
				func_119();
				func_18();
				((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_2 = -2;
				Global_1126368->f_2004 = { ((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33 };
				func_63(5);
			}
			break;
		case 12:
			if (!bVar4)
			{
				func_63(21);
				Global_1126368->f_2014 = 0;
			}
			else if (func_134(&bVar13))
			{
				Global_1126368->f_2014 = 0;
				func_135();
				func_118();
				func_63(20);
			}
			else if (bVar13)
			{
				Global_1126368->f_2014 = 0;
				func_18();
				func_120();
				func_119();
				func_63(4);
			}
			break;
		case 13:
			if ((!func_122() && CAM::IS_SCREEN_FADED_IN()) && !func_123(255))
			{
				func_136("NET_CAMP_HELP_PLACEMENT_FAIL", 10000, 0, 0, 0, 1);
				func_126(0);
				if (bVar3)
				{
					func_63(14);
				}
				else
				{
					func_63(4);
				}
			}
			break;
		case 14:
			if (bVar3)
			{
				vVar8 = { ((*Global_1125276)[((*Global_1128435)[iVar0 /*83*/])->f_38.f_3 /*27*/])->f_1 };
				func_77(vVar8, &vVar5);
				func_129(vVar8, vVar5);
				func_63(15);
			}
			else
			{
				func_128();
			}
			break;
		case 15:
			if (!func_127())
			{
				func_128();
				return;
			}
			if (!VOLUME::_0xA4A4359320345B34(Global_1126368->f_2018.f_1))
			{
				Global_1126368->f_2014++;
				func_63(14);
				return;
			}
			iVar14 = VOLUME::_0xB33A604345F58202(Global_1126368->f_2018.f_1);
			switch (iVar14)
			{
				case 4:
					func_63(16);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_130(VOLUME::_0x351D71B8B72B858B(Global_1126368->f_2018.f_1));
					func_63(17);
					break;
			}
			break;
		case 16:
			if (!func_127())
			{
				func_128();
				return;
			}
			if (Global_1126368->f_2015 == 0)
			{
				Global_1126368->f_2015 = MISC::GET_GAME_TIMER();
				Global_1126368->f_2014++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1126368->f_2015) > 2000)
			{
				Global_1126368->f_2015 = 0;
				func_18();
				func_63(14);
			}
			break;
		case 17:
			if (bVar3)
			{
				vVar8 = { ((*Global_1125276)[((*Global_1128435)[iVar0 /*83*/])->f_38.f_3 /*27*/])->f_1 };
				func_77(vVar8, &vVar5);
				func_131(vVar8, vVar5);
				func_63(18);
			}
			else
			{
				func_128();
			}
			break;
		case 18:
			if (!func_127())
			{
				func_128();
				return;
			}
			if (!VOLUME::_0xA4A4359320345B34(Global_1126368->f_2018))
			{
				Global_1126368->f_2014++;
				func_63(17);
				return;
			}
			iVar15 = VOLUME::_0xB33A604345F58202(Global_1126368->f_2018);
			switch (iVar15)
			{
				case 4:
					func_63(19);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_132(VOLUME::_0x351D71B8B72B858B(Global_1126368->f_2018));
					func_133(128);
					func_118();
					func_63(20);
					break;
			}
			break;
		case 19:
			if (!func_127())
			{
				func_128();
				return;
			}
			if (Global_1126368->f_2015 == 0)
			{
				Global_1126368->f_2015 = MISC::GET_GAME_TIMER();
				Global_1126368->f_2014++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1126368->f_2015) > 2000)
			{
				Global_1126368->f_2015 = 0;
				func_18();
				func_63(14);
			}
			break;
		case 20:
			if (!bVar3)
			{
				if (bVar4)
				{
					Global_1126368->f_2004 = { func_114() };
					Global_1126368->f_2004.f_3 = 0;
					func_63(5);
				}
				else
				{
					func_63(21);
				}
			}
			else if (bVar4)
			{
				if (func_137(((*Global_1128435)[iVar0 /*83*/])->f_38))
				{
					func_136("GC_CAMP_LOCK", 10000, 0, 0, 0, 1);
					func_119();
					Global_1126368->f_2004 = { func_114() };
					Global_1126368->f_2004.f_3 = 0;
					func_63(5);
				}
				else
				{
					func_138(iVar1);
				}
			}
			else
			{
				func_63(21);
			}
			break;
		case 21:
			if (func_139(iVar1))
			{
				func_118();
				func_63(22);
			}
			break;
		case 22:
			if (bVar4)
			{
				Global_1126368->f_2004 = { func_114() };
				Global_1126368->f_2004.f_3 = 0;
				func_63(5);
			}
			else
			{
				func_140();
			}
			break;
	}
}

void func_60()
{
	bool bVar0;
	struct<2> Var1;

	Var1 = { func_141() };
	bVar0 = func_44(Var1);
	if (bVar0)
	{
		func_31(1024);
	}
	else
	{
		func_28(1024);
	}
}

void func_61()
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<14> Var9;
	var uVar25;

	func_142();
	func_143();
	func_144();
	func_145();
	iVar8 = func_146(&(Global_1275573->f_154[&Global_1275573]));
	if (((iVar8 != 9 && iVar8 > 0) && _NAMESPACE26::_0xD6F6ACF4392187FB(Global_1275573->f_15)) && !_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
	{
		func_147(0);
		func_148(9);
	}
	switch (iVar8)
	{
		case 0:
			func_149();
			if (func_150(&(Global_1275573->f_154[&Global_1275573])))
			{
				if (func_151())
				{
					func_148(7);
				}
				else
				{
					func_148(2);
				}
			}
			else
			{
				func_148(1);
			}
			break;
		case 1:
			if (func_150(&(Global_1275573->f_154[&Global_1275573])))
			{
				func_152(&(Global_1128395->f_15), 0);
				func_148(2);
			}
			break;
		case 2:
			if (func_153())
			{
				if (!func_154(&Global_1275573, 64))
				{
					func_147(1);
				}
			}
			else if (func_154(&Global_1275573, 64))
			{
				func_147(0);
			}
			if (func_155(PLAYER::PLAYER_ID()) == 0 && !func_154(&Global_1275573, 128))
			{
				func_156("TRADER_HALT_REASON_RESUPPLY", joaat("BUTCHER_TABLE_PRODUCTION"));
				func_147(0);
				func_157(8);
				func_148(4);
			}
			iVar6 = (Global_1901929->f_543.f_11 * 60000);
			if (func_158(&(Global_1128395->f_15)) && func_159(&(Global_1128395->f_15)) > iVar6)
			{
				if (func_160())
				{
					func_148(3);
				}
			}
			break;
		case 3:
			if (func_161(Global_1128395) == 3)
			{
				func_148(2);
			}
			break;
		case 4:
			if (func_154(&Global_1275573, 256))
			{
				if (func_154(&Global_1275573, 16384))
				{
					if (func_162(Global_1128395))
					{
						return;
					}
					if (!func_151())
					{
						if (!func_163(Global_1128395, joaat("VOUCHER_TRADER_RESUPPLY"), 1, 1, 0, -1))
						{
							return;
						}
					}
					func_148(5);
				}
				else if (func_154(&Global_1275573, 256))
				{
					func_165(func_164(914410532, func_91(1), 1784584921, 1, 0, 0));
					func_166(256);
					func_166(8);
					func_148(2);
				}
			}
			break;
		case 5:
			if (func_151())
			{
				func_152(&(Global_1128395->f_18), 0);
				func_148(6);
			}
			break;
		case 6:
			iVar7 = (Global_1901929->f_543.f_13 * 60000);
			if (func_158(&(Global_1128395->f_18)) && func_159(&(Global_1128395->f_18)) > iVar7)
			{
				func_148(7);
			}
			break;
		case 7:
			if (func_154(&Global_1275573, 16384))
			{
				if (func_162(Global_1128395))
				{
					return;
				}
			}
			if (func_158(&(Global_1128395->f_18)))
			{
				func_167(&(Global_1128395->f_18));
			}
			iVar5 = func_168(-1364613333, 0, 1, -1, 1);
			if (!func_169(Global_1128395, -1364613333, Var0, 1, 1, 1, 0, iVar5, -1, 0))
			{
				func_148(2);
				return;
			}
			Var9.f_8 = func_170(-1364613333, 770694722);
			Var9.f_6 = func_170(-1364613333, 914410532);
			Var9.f_13 = 1;
			func_166(16384);
			func_166(256);
			func_166(8);
			func_148(8);
			break;
		case 8:
			if (func_162(Global_1128395))
			{
				return;
			}
			TELEMETRY::_0xF184B3ECE36219CF(Global_1128395->f_1, &uVar25);
			TELEMETRY::_0x476038B5A0734C10(&Var9, &uVar25);
			func_165(func_164(914410532, func_91(1), 1784584921, 1, 0, 0));
			func_148(2);
			break;
		case 9:
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1275573->f_15) && _NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
			{
				if (func_150(&(Global_1275573->f_154[&Global_1275573])))
				{
					func_148(2);
				}
				else
				{
					func_148(1);
				}
			}
			break;
	}
}

void func_62()
{
	int iVar0;

	if ((MISC::GET_FRAME_COUNT() % 45) == 0)
	{
		iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			return;
		}
		if (Global_1131092->f_339.f_16 != 0 && (Global_1131092->f_339.f_16 != func_171(iVar0) || Global_1131092->f_339.f_16 == func_172(iVar0)))
		{
			UILOG::_UILOG_REMOVE_ENTRY(8, Global_1131092->f_339.f_16);
			Global_1131092->f_339.f_16 = 0;
		}
		else if (func_173(Global_1131092->f_339.f_18, 2))
		{
			func_174(&(Global_1131092->f_339.f_18), 2);
			func_175();
		}
	}
}

void func_63(int iParam0)
{
	Global_1126368->f_1987 = iParam0;
}

void func_64(var uParam0)
{
	struct<32> Var0;

	Var0.f_3 = -1;
	Var0.f_7 = -1;
	Var0.f_25 = -1;
	Var0.f_28.f_1 = 1046181202;
	Var0.f_28.f_2 = 255;
	Var0.f_28.f_3 = -1;
	*uParam0 = { Var0 };
}

bool func_65(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_67(int iParam0)
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

int func_68(int iParam0)
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

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_70(int iParam0, int iParam1)
{
	if ((Global_1125276->f_865[iParam0 /*7*/])->f_4 != iParam1)
	{
		(Global_1125276->f_865[iParam0 /*7*/])->f_4 = iParam1;
	}
}

void func_71(int iParam0, vector3 vParam1)
{
	(Global_1125276->f_865[iParam0 /*7*/])->f_1 = { vParam1 };
}

void func_72(int iParam0, int iParam1)
{
	if (&Global_1125276->f_865[iParam0 /*7*/] != iParam1)
	{
		Global_1125276->f_865[iParam0 /*7*/] = iParam1;
	}
}

int func_73(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -1;
	}
	if (!func_49())
	{
		return -1;
	}
	if (iParam0 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_9 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_74(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

void func_75(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (Global_1125276[iParam0 /*27*/] != iParam1)
	{
		(*Global_1125276)[iParam0 /*27*/] = iParam1;
	}
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (((*Global_1125276)[iVar1 /*27*/])->f_9 == iVar0)
		{
			return ((*Global_1125276)[iVar1 /*27*/])->f_1.f_1 == ((*Global_1128435)[iParam0 /*83*/])->f_33.f_1;
		}
		iVar1++;
	}
	return 0;
}

int func_77(vector3 vParam0, var uParam3)
{
	struct<5> Var0;

	if (!func_176(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 1886596441;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var0);
		return 1;
	}
	return 0;
}

int func_78(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (func_42(32))
	{
		if (func_177(vParam0.z))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_42(64))
	{
		iVar0 = func_178(vParam0);
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
		{
			return 0;
		}
	}
	if (func_179(vParam0, iParam7))
	{
		return 0;
	}
	if (!bParam9 && VOLUME::_0x397769175A7DBB30(vParam4, Global_1901929->f_543.f_5, 0, 0, 0))
	{
		return 0;
	}
	if (!bParam9 && VOLUME::_0x397769175A7DBB30(vParam4, Global_1901929->f_543.f_4, 0, func_180(), 0))
	{
		return 0;
	}
	if (bParam10 == 0 && func_181(vParam4))
	{
		return 0;
	}
	if (bParam10 == 0 && func_182(vParam4, iParam3))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_1.f_2 == 0 || (((*Global_1125276)[iVar0 /*27*/])->f_9 == iParam0->f_9 && iParam0->f_9 != 255))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 32)
	{
		return -1;
	}
	*((*Global_1125276)[iVar0 /*27*/]) = { *iParam0 };
	SCRIPTS::_0x31010318BA9897AC(&(Global_1125276->f_1091), ((*Global_1125276)[iVar0 /*27*/])->f_9);
	return iVar0;
}

void func_80(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_183(iParam0, iParam1))
	{
		func_45(&(((*Global_1125276)[iParam0 /*27*/])->f_7), iParam1);
	}
}

int func_81(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4)
{
	vector3 vVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	vVar0 = { *uParam1 };
	if (func_184(&vVar0, iParam0, bParam2, iParam3, uParam4))
	{
		*uParam1 = { vVar0 };
		return 1;
	}
	return 0;
}

void func_82(int iParam0)
{
	int iVar0;

	if (Global_1125276[iParam0 /*27*/] == 0)
	{
		return;
	}
	iVar0 = func_185(iParam0, 0);
	if (!func_101(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_75(iParam0, 3);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		func_75(iParam0, 3);
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
	{
		func_75(iParam0, 3);
	}
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = NETWORK::GET_NETWORK_TIME();
	if (((*Global_1125276)[iParam0 /*27*/])->f_26 == 0)
	{
		((*Global_1125276)[iParam0 /*27*/])->f_26 = iVar0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(((*Global_1125276)[iParam0 /*27*/])->f_26, iVar0) > 12000)
	{
		((*Global_1125276)[iParam0 /*27*/])->f_26 = iVar0;
	}
	else
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1125276)[iParam0 /*27*/])->f_9))
	{
		return;
	}
	if (func_65(((*Global_1128435)[((*Global_1125276)[iParam0 /*27*/])->f_9 /*83*/])->f_33.f_4, 128))
	{
		iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(((*Global_1125276)[iParam0 /*27*/])->f_9);
		if (!func_65((Global_1125276->f_865[iVar1 /*7*/])->f_5, 128))
		{
			((*Global_1125276)[iParam0 /*27*/])->f_23.f_1 = ((*Global_1128435)[((*Global_1125276)[iParam0 /*27*/])->f_9 /*83*/])->f_38.f_23.f_1;
			((*Global_1125276)[iParam0 /*27*/])->f_23 = ((*Global_1128435)[((*Global_1125276)[iParam0 /*27*/])->f_9 /*83*/])->f_38.f_23;
			((*Global_1125276)[iParam0 /*27*/])->f_25 = 0;
			func_45(&((Global_1125276->f_865[iVar1 /*7*/])->f_5), 128);
		}
	}
	iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(((*Global_1125276)[iParam0 /*27*/])->f_9);
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar4)))
		{
			if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::INT_TO_PLAYERINDEX(iVar4)) != iVar2)
			{
				SCRIPTS::_0x31010318BA9897AC(&iVar3, iVar4);
			}
		}
		iVar4++;
	}
	if (iVar3 != ((*Global_1125276)[iParam0 /*27*/])->f_25)
	{
		((*Global_1125276)[iParam0 /*27*/])->f_25 = iVar3;
		VOLUME::_0xEBA87B9273835CF3(((*Global_1125276)[iParam0 /*27*/])->f_23.f_1, &iVar3);
		VOLUME::_0xEBA87B9273835CF3(((*Global_1125276)[iParam0 /*27*/])->f_23, &iVar3);
	}
}

void func_84(int iParam0)
{
	int iVar0;
	struct<7> Var1[7];
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	bool bVar56;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1125276)[iParam0 /*27*/])->f_9))
	{
		return;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(((*Global_1125276)[iParam0 /*27*/])->f_9);
	iVar51 = _NAMESPACE26::_0xD1BF325C8252A982(iVar0, &Var1);
	if (iVar51 > ((*Global_1125276)[iParam0 /*27*/])->f_1)
	{
		return;
	}
	iVar53 = 0;
	while (iVar53 <= (((*Global_1125276)[iParam0 /*27*/])->f_1 - 1))
	{
		if (&((*Global_1125276)[iParam0 /*27*/])->f_10[iVar53] != 255)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(((*Global_1125276)[iParam0 /*27*/])->f_10[iVar53])))
			{
				((*Global_1125276)[iParam0 /*27*/])->f_10[iVar53] = 255;
			}
			else if (_NAMESPACE26::_0x901E0DC25080C8B9(&(((*Global_1125276)[iParam0 /*27*/])->f_10[iVar53])) != iVar0)
			{
				((*Global_1125276)[iParam0 /*27*/])->f_10[iVar53] = 255;
			}
		}
		else if (iVar53 >= iVar51)
		{
		}
		else
		{
			iVar55 = 0;
			while (iVar55 <= iVar53)
			{
				if (func_186(*(Var1[iVar55 /*7*/])))
				{
					iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var1[iVar55 /*7*/]);
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar52))
					{
						bVar56 = true;
						iVar54 = 0;
						while (iVar54 <= (((*Global_1125276)[iParam0 /*27*/])->f_1 - 1))
						{
							if (&((*Global_1125276)[iParam0 /*27*/])->f_10[iVar54] == iVar52)
							{
								bVar56 = false;
							}
							else
							{
								iVar54++;
							}
						}
					}
				}
				if (bVar56 == 1)
				{
				}
				else
				{
					iVar55++;
				}
			}
			if (bVar56)
			{
				((*Global_1125276)[iParam0 /*27*/])->f_10[iVar53] = iVar52;
			}
		}
		iVar53++;
	}
}

void func_85(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar2)) && ((*Global_1128435)[iVar2 /*83*/])->f_70.f_2 != 0) && ((*Global_1128435)[iVar2 /*83*/])->f_70 == iParam0)
		{
			bVar0 = true;
			iVar1 = ((*Global_1128435)[iVar2 /*83*/])->f_70.f_2;
			((*Global_1125276)[iParam0 /*27*/])->f_18 = (((*Global_1125276)[iParam0 /*27*/])->f_18 || ((*Global_1128435)[iVar2 /*83*/])->f_70.f_1);
		}
		iVar2++;
	}
	if (bVar0)
	{
		if (((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != iVar1)
		{
			((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 = iVar1;
		}
	}
	else if (((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0)
	{
		((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 = 0;
		((*Global_1125276)[iParam0 /*27*/])->f_18 = 0;
	}
}

void func_86(int iParam0)
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_187(), iParam0, false, 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_188(), iParam0, false, 0))
	{
		func_75(iParam0, 2);
	}
}

void func_87(int iParam0)
{
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_187(), iParam0, false, 0))
	{
		func_75(iParam0, 1);
	}
}

void func_88(int iParam0)
{
	func_189(iParam0);
	func_190((*Global_1125276)[iParam0 /*27*/]);
	func_75(iParam0, 0);
}

void func_89()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128395->f_39 = 0;
	((*Global_1128435)[iVar0 /*83*/])->f_74 = Global_1128395->f_32;
	((*Global_1128435)[iVar0 /*83*/])->f_74.f_1 = Global_1128395->f_33;
}

void func_90()
{
	if (func_121(512))
	{
		func_31(65536);
	}
	else if (func_121(256))
	{
		func_31(32768);
	}
}

struct<4> func_91(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_191(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_92(joaat("CHARACTER"), func_192(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_92(joaat("CHARACTER"), func_192(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_92(joaat("CHARACTER"), func_192(), -1591664384, bParam0);
}

struct<4> func_92(int iParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_193(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_191(bParam6), &uParam1, iParam0, bParam5, &Var0);
	return Var0;
}

void func_93(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar0 = joaat("UPGRADE_CAMP_EQUIPMENT_FAST_TRAVEL_MAP");
	if (func_194(iVar0, 1))
	{
		((*Global_1128435)[iVar1 /*83*/])->f_38.f_12.f_3 = iVar0;
	}
	iVar0 = joaat("UPGRADE_CAMP_STEW_POT");
	if (func_194(iVar0, 1))
	{
		((*Global_1128435)[iVar1 /*83*/])->f_38.f_12.f_1 = iVar0;
	}
	iVar0 = joaat("UPGRADE_CAMP_BUTCHER_TABLE");
	if (func_194(iVar0, 1))
	{
		((*Global_1128435)[iVar1 /*83*/])->f_38.f_12 = iVar0;
	}
	iVar0 = -1396511102; /* GXTEntry: "Deluxe Campfire" */
	if (func_194(iVar0, 1))
	{
		((*Global_1128435)[iVar1 /*83*/])->f_38.f_12.f_6 = iVar0;
	}
	iVar0 = 913131737; /* GXTEntry: "Small Delivery Wagon" */
	if (func_194(iVar0, 1))
	{
		((*Global_1128435)[iVar1 /*83*/])->f_38.f_12.f_2 = iVar0;
	}
	iVar0 = joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM");
	if (func_194(iVar0, 1))
	{
		((*Global_1128435)[iVar1 /*83*/])->f_38.f_12.f_2 = iVar0;
	}
	iVar0 = joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE");
	if (func_194(iVar0, 1))
	{
		((*Global_1128435)[iVar1 /*83*/])->f_38.f_12.f_2 = iVar0;
	}
}

void func_94()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_194(-1577890561 /* GXTEntry: "Harmonica Piece" */, 1))
	{
		if (func_194(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_002"), 1))
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 11;
		}
		else if (func_194(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_001"), 1))
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 10;
		}
		else
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 9;
		}
	}
	else if (func_194(-342106029 /* GXTEntry: "Harmonica Piece" */, 1))
	{
		if (func_194(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_002"), 1))
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 8;
		}
		else if (func_194(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_001"), 1))
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 7;
		}
		else
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 6;
		}
	}
	else if (func_194(2113111296 /* GXTEntry: "Harmonica Piece" */, 1))
	{
		if (func_194(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_002"), 1))
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 5;
		}
		else if (func_194(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_001"), 1))
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 4;
		}
		else
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 3;
		}
	}
	else if (func_194(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_002"), 1))
	{
		((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 2;
	}
	else if (func_194(joaat("UPGRADE_CAMP_MUSIC_HARMONICA_001"), 1))
	{
		((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 1;
	}
	else
	{
		((*Global_1128435)[iVar0 /*83*/])->f_38.f_26 = 0;
	}
}

int func_95(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_195(&uParam0, bParam4, bParam5, iParam6);
}

void func_96(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (((*Global_1128435)[iParam1 /*83*/])->f_38.f_12.f_4 != iParam0)
	{
		((*Global_1128435)[iParam1 /*83*/])->f_38.f_12.f_4 = iParam0;
	}
}

void func_97(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (((*Global_1128435)[iParam1 /*83*/])->f_38.f_12.f_5 != iParam0)
	{
		((*Global_1128435)[iParam1 /*83*/])->f_38.f_12.f_5 = iParam0;
	}
}

void func_98(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (((*Global_1128435)[iParam1 /*83*/])->f_38.f_12.f_7 != iParam0)
	{
		((*Global_1128435)[iParam1 /*83*/])->f_38.f_12.f_7 = iParam0;
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			func_31(8192);
		}
	}
}

void func_99(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (((*Global_1128435)[iParam1 /*83*/])->f_38.f_12.f_8 != iParam0)
	{
		((*Global_1128435)[iParam1 /*83*/])->f_38.f_12.f_8 = iParam0;
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			func_31(8192);
		}
	}
}

void func_100(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (((*Global_1128435)[iParam1 /*83*/])->f_38.f_12.f_9 != iParam0)
	{
		((*Global_1128435)[iParam1 /*83*/])->f_38.f_12.f_9 = iParam0;
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			func_31(8192);
		}
	}
}

bool func_101(int iParam0)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return (Global_1125276[iParam0 /*27*/] != 0 && Global_1125276[iParam0 /*27*/] != 3);
}

void func_102(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 255;
	*(Global_1131092->f_9[iParam0 /*10*/]) = { Var0 };
	iVar10 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if ((_NAMESPACE26::_0xD6F6ACF4392187FB(iVar10) && iParam1 == _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar10)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		Global_1131092->f_330.f_3 = { Var0.f_4 };
	}
}

void func_103(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if ((Global_1126368->f_1[iParam0 /*62*/])->f_3 != iParam1)
	{
		(Global_1126368->f_1[iParam0 /*62*/])->f_3 = iParam1;
	}
}

void func_104(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;

	(Global_1131092->f_9[iParam0 /*10*/])->f_7 = { func_196(iParam0) };
	(Global_1131092->f_9[iParam0 /*10*/])->f_4 = { vParam1 };
	(Global_1131092->f_9[iParam0 /*10*/])->f_2 = iParam4;
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if ((_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) && iParam4 == _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Global_1131092->f_330.f_7 = iParam4;
		Global_1131092->f_330.f_3 = { vParam1 };
	}
}

int func_105(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_16843)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_16843[iParam0]));
	}
	return 0;
}

void func_106(var uParam0)
{
	struct<62> Var0;

	Var0.f_5 = -1;
	Var0.f_12 = 7;
	Var0.f_48 = 7;
	*uParam0 = { Var0 };
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!bParam1)
	{
		func_17(&((Global_1126368->f_1[iParam0 /*62*/])->f_5), 0);
		return;
	}
	if (!func_197(iParam0))
	{
		func_17(&((Global_1126368->f_1[iParam0 /*62*/])->f_5), 0);
		return;
	}
	if (!func_42(16))
	{
		func_17(&((Global_1126368->f_1[iParam0 /*62*/])->f_5), 0);
		return;
	}
	iVar0 = func_198(iParam0, 0);
	iVar1 = Global_1275573->f_15;
	bVar2 = (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && ((*Global_1125276)[iParam0 /*27*/])->f_9 == PLAYER::PLAYER_ID());
	bVar3 = ((!bVar2 && iVar0 == iVar1) && _NAMESPACE26::_0x424B17A7DC5C90BC(((*Global_1125276)[iParam0 /*27*/])->f_9));
	bVar4 = func_105((Global_1126368->f_1[iParam0 /*62*/])->f_5);
	if ((!bVar2 && !bVar3) && BUILTIN::VDIST(Global_35, func_196(iParam0)) > 75f)
	{
		if (bVar4)
		{
			func_17(&((Global_1126368->f_1[iParam0 /*62*/])->f_5), 0);
		}
		return;
	}
	bVar5 = func_42(1024);
	bVar6 = func_199(1);
	if (!bVar4)
	{
		if (((bVar2 || bVar3) && Global_1126368->f_2013 != iParam0) && Global_1126368->f_2013 != -1)
		{
			func_17(&((Global_1126368->f_1[Global_1126368->f_2013 /*62*/])->f_5), 0);
		}
		if (bVar2 || bVar3)
		{
			func_200(iParam0);
		}
		if (bVar5)
		{
			if (bVar2 || bVar3)
			{
				if (!bVar6)
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
		iVar7 = ((*Global_1125276)[iParam0 /*27*/])->f_1.f_1;
		(Global_1126368->f_1[iParam0 /*62*/])->f_5 = func_203(func_201(func_196(iParam0), 1), func_202((bVar2 || bVar3)), func_196(iParam0), -1);
		if ((Global_1126368->f_1[iParam0 /*62*/])->f_5 == -1)
		{
			return;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), "NET_CAMP_BLIP_POSSE");
		MAP::SET_BLIP_FLASH_TIMER(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), func_202((bVar2 || bVar3)), func_204(iVar7, (bVar2 || bVar3), bVar2));
		if (func_42(512))
		{
			if (bVar5 == 0)
			{
				MAP::_0x662D364ABF16DE2F(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), 580546400);
				MAP::_0x662D364ABF16DE2F(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), 1784012766);
				(Global_1126368->f_1[iParam0 /*62*/])->f_61 = MISC::GET_GAME_TIMER();
			}
			func_28(512);
		}
	}
	else
	{
		if (Global_1126368->f_2013 == iParam0)
		{
			if ((Global_1126368->f_2013 != -1 && !bVar2) && !bVar3)
			{
				func_17(&((Global_1126368->f_1[iParam0 /*62*/])->f_5), 0);
				return;
			}
		}
		else if (Global_1126368->f_2013 != -1 && (bVar2 || bVar3))
		{
			func_17(&((Global_1126368->f_1[iParam0 /*62*/])->f_5), 0);
			return;
		}
		if (!bVar2 && !bVar3)
		{
			if (func_112(iParam0, 2))
			{
				MAP::_0x662D364ABF16DE2F(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), 1586775858);
			}
			else
			{
				MAP::_0x662D364ABF16DE2F(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), 1635604685);
			}
		}
		if (func_205(iParam0) && (!(bVar3 || bVar2) || !bVar5))
		{
			MAP::_0x662D364ABF16DE2F(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), 892550176);
		}
		else
		{
			MAP::_SET_BLIP_FLASH_STYLE(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), 892550176);
		}
		if (bVar5 && (!(bVar3 || bVar2) || !bVar6))
		{
			MAP::_SET_BLIP_FLASH_STYLE(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), 580546400);
			MAP::_SET_BLIP_FLASH_STYLE(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), 1784012766);
			(Global_1126368->f_1[iParam0 /*62*/])->f_61 = 0;
			MAP::_0x662D364ABF16DE2F(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), -211388321);
		}
		else
		{
			MAP::_SET_BLIP_FLASH_STYLE(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), -211388321);
		}
		if ((Global_1126368->f_1[iParam0 /*62*/])->f_61 != 0 && (MISC::GET_GAME_TIMER() - (Global_1126368->f_1[iParam0 /*62*/])->f_61) > 20000)
		{
			MAP::_SET_BLIP_FLASH_STYLE(func_16((Global_1126368->f_1[iParam0 /*62*/])->f_5), 1784012766);
			(Global_1126368->f_1[iParam0 /*62*/])->f_61 = 0;
		}
	}
}

void func_108(int iParam0, bool bParam1)
{
	struct<2> Var0;

	if (!bParam1)
	{
		return;
	}
	if (!func_74(iParam0))
	{
		return;
	}
	if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(func_198(iParam0, 0), PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_206(PLAYER::PLAYER_ID()) == iParam0 && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		Var0 = { func_207(0) };
		if (func_44(Var0) && func_208(Var0))
		{
			if ((((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 8) || Var0 == 7) || Var0 == 6)
			{
				if (!func_183(iParam0, 32) && !func_112(iParam0, 4096))
				{
					if (func_112(iParam0, 16))
					{
						func_209(iParam0, 2048);
					}
					else
					{
						func_210(iParam0, 2048);
					}
					func_211(iParam0);
					func_209(iParam0, 4096);
				}
			}
		}
		else if (func_183(iParam0, 32))
		{
			if (func_112(iParam0, 4096))
			{
				func_212(iParam0);
				func_210(iParam0, 4096);
				if (func_112(iParam0, 2048))
				{
					func_213(iParam0);
					func_210(iParam0, 2048);
				}
			}
		}
	}
	if (func_205(iParam0))
	{
		if (func_121(16))
		{
			func_124(16);
		}
	}
	else if (!func_121(16))
	{
		func_214(16);
	}
}

void func_109(int iParam0)
{
	if (!func_12())
	{
		return;
	}
	if (func_42(4))
	{
		return;
	}
	if (!func_215(iParam0, 8))
	{
		func_216(iParam0);
		func_217(iParam0);
		func_218(iParam0);
		func_219(iParam0);
		func_220(iParam0);
		func_221(iParam0);
		func_222(iParam0, 8);
	}
	if (BUILTIN::VDIST(Global_35, func_196(iParam0)) >= Global_1901929->f_543)
	{
		return;
	}
	if ((Global_1126368->f_1[iParam0 /*62*/])->f_4 == 0)
	{
		func_223(iParam0, 1);
	}
	switch ((Global_1126368->f_1[iParam0 /*62*/])->f_4)
	{
		case 0:
			func_223(iParam0, 1);
			break;
		case 1:
			if (func_224(iParam0))
			{
				func_209(iParam0, 1);
				func_31(256);
				func_223(iParam0, 2);
			}
			break;
		case 2:
			if (func_225(iParam0))
			{
				func_223(iParam0, 3);
			}
			break;
		case 3:
			func_209(iParam0, 1);
			func_31(256);
			func_103(iParam0, 2);
			break;
	}
}

void func_110(int iParam0)
{
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1126368->f_2021) || Global_1126368->f_2022 != iParam0)
	{
		func_210(iParam0, 1);
		func_210(iParam0, 2);
		func_223(iParam0, 0);
		func_103(iParam0, 1);
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1126368->f_2023) || Global_1126368->f_2024 != iParam0)
	{
		func_210(iParam0, 1024);
	}
}

void func_111(int iParam0)
{
	if ((func_112(iParam0, 1) && SCRIPTS::_DOES_THREAD_EXIST(Global_1126368->f_2021)) && Global_1126368->f_2022 == iParam0)
	{
		return;
	}
	func_226((*(*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])[iParam0]);
	func_106(Global_1126368->f_1[iParam0 /*62*/]);
	func_103(iParam0, 0);
	func_223(iParam0, 0);
}

int func_112(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	return func_65((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0], iParam1);
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((MISC::GET_FRAME_COUNT() % 3) != 0)
	{
		return;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
	iVar2 = func_227(iVar1);
	if (iVar2 != func_206(PLAYER::PLAYER_ID()))
	{
		func_228(iVar2);
	}
}

Vector3 func_114()
{
	vector3 vVar0;
	struct<19> Var3;

	Var3 = { func_229(0) };
	if (Var3.f_8 != joaat("KIT_CAMP"))
	{
	}
	if (((Var3.f_16 == 0 && Var3.f_18 == 0) && Global_17172.f_54.f_4.f_2 != 0) && Global_17172.f_54.f_4 >= 4)
	{
		vVar0 = { Global_17172.f_54.f_4 };
	}
	else
	{
		vVar0.x = Var3.f_16;
		vVar0.f_1 = Var3.f_17;
		vVar0.f_2 = Var3.f_18;
	}
	return vVar0;
}

void func_115(vector3 vParam0)
{
	((*Global_1128435)[func_230() /*83*/])->f_38 = { vParam0 };
	func_231(vParam0);
}

bool func_116()
{
	return Global_1126368->f_1995.f_7 == 3;
}

void func_117(int iParam0)
{
	Global_1126368->f_1995.f_7 = iParam0;
}

void func_118()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_38.f_7 = -1;
	((*Global_1128435)[iVar0 /*83*/])->f_38.f_8 = { 0f, 0f, 0f };
}

void func_119()
{
	if (func_65(Global_1131092->f_8, 2))
	{
		func_43(&(Global_1131092->f_8), 2);
	}
}

void func_120()
{
	if ((Global_1131092->f_382 < 3 && func_42(64)) && !func_122())
	{
		func_136("NET_CAMP_HELP_NO_CAMP", 10000, 0, 0, 0, 1);
		Global_1131092->f_382++;
	}
}

bool func_121(int iParam0)
{
	return func_65(Global_1131092->f_8, iParam0);
}

bool func_122()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_123(int iParam0)
{
	return func_232(1, iParam0);
}

void func_124(int iParam0)
{
	func_43(&(Global_1131092->f_8), iParam0);
}

int func_125(vector3 vParam0, bool bParam3)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { vParam0 };
	if ((func_49() && func_42(64)) && func_233(0, 1))
	{
		if (vVar1.z != 0)
		{
			if (func_234())
			{
				if (func_235(vVar1, 1))
				{
					iVar0 = 1;
				}
			}
			else
			{
				if (!func_236(Global_1275573->f_15))
				{
				}
				if (bParam3)
				{
					if (!func_237(vVar1, 1))
					{
						iVar0 = 0;
					}
					else if (func_235(vVar1, 0))
					{
						iVar0 = 1;
						func_126(1);
					}
				}
				else if (func_235(vVar1, 0))
				{
					iVar0 = 1;
				}
			}
		}
	}
	return iVar0;
}

void func_126(int iParam0)
{
	Global_1126368->f_1995.f_5 = iParam0;
}

bool func_127()
{
	return Global_1126368->f_2014 < 10;
}

int func_128()
{
	vector3 vVar0;

	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	func_63(2);
	((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_2 = 0;
	((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_238();
	func_239(vVar0);
	return 1;
}

void func_129(vector3 vParam0, vector3 vParam3)
{
	struct<8> Var0;

	Var0 = { vParam3 };
	Var0.f_4 = Global_1901929->f_543.f_5;
	Var0.f_5 = 544;
	Var0.f_6 = func_240();
	Var0.f_7 = func_178(vParam0);
	Global_1126368->f_2018.f_1 = VOLUME::_0x183C0B6CFEFFCAE4(&Var0);
}

void func_130(int iParam0)
{
	if (((*Global_1128435)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23.f_1 != iParam0)
	{
		((*Global_1128435)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23.f_1 = iParam0;
	}
}

void func_131(vector3 vParam0, vector3 vParam3)
{
	struct<8> Var0;

	Var0 = { vParam3 + Vector(1f, 0f, 0f) };
	Var0.f_4 = Global_1901929->f_543.f_4;
	Var0.f_5 = 552;
	Var0.f_6 = func_180();
	Var0.f_7 = func_178(vParam0);
	Global_1126368->f_2018 = VOLUME::_0x183C0B6CFEFFCAE4(&Var0);
}

void func_132(int iParam0)
{
	if (((*Global_1128435)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23 != iParam0)
	{
		((*Global_1128435)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23 = iParam0;
	}
}

void func_133(int iParam0)
{
	func_45(&(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_4), iParam0);
}

int func_134(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if ((Global_1125276->f_865[iVar1 /*7*/])->f_4 != ((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_3)
	{
		return 0;
	}
	if (func_65((Global_1125276->f_865[iVar1 /*7*/])->f_5, 32))
	{
		*uParam0 = 1;
		return 0;
	}
	if (&Global_1125276->f_865[iVar1 /*7*/] != 6)
	{
		return 0;
	}
	iVar2 = func_227(iVar0);
	if (func_74(iVar2))
	{
		vVar3 = { ((*Global_1125276)[iVar2 /*27*/])->f_1 };
		vVar6 = { func_196(iVar2) };
		func_115(vVar3);
		func_241(vVar6);
		iVar9 = func_201(vVar6, 1);
		func_242(iVar9);
		func_239(vVar3);
		TELEMETRY::_0xA72773C3134F9A57(vVar3.x, vVar3.z, vVar3.y, func_243(PLAYER::NETWORK_PLAYER_ID_TO_INT()), vVar6);
		if (_NAMESPACE26::_0x0F99F6436528A089(Global_1275573->f_15) && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_244(Global_1275573->f_15, vVar3.x);
			POSSE::_0xC08AFF658B2E51DA(&iVar10);
			if (iVar10 != 0)
			{
				Global_1182289->f_14.f_7 = iVar10;
				Global_1182289->f_14.f_9 = Global_1275573->f_15;
				Global_1182289->f_14.f_12 = vVar3.x;
				Global_1182289->f_14.f_13 = vVar3.y;
				Global_1182289->f_1 = 10;
			}
		}
		if (func_42(64))
		{
			if (Global_1126368->f_1995.f_4 == -15)
			{
				Global_1126368->f_1995.f_4 = func_245();
			}
		}
		func_228(iVar2);
		return 1;
	}
	return 0;
}

void func_135()
{
	if (!func_65(Global_1131092->f_8, 2))
	{
		func_45(&(Global_1131092->f_8), 2);
	}
}

var func_136(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, bParam5);
	return uVar15;
}

int func_137(vector3 vParam0)
{
	int iVar0;

	if (!func_42(64))
	{
		return 0;
	}
	iVar0 = func_178(vParam0);
	if (iVar0 != 0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_138(int iParam0)
{
	if ((iParam0 < 0 || iParam0 >= 32) || ((*Global_1125276)[iParam0 /*27*/])->f_9 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (((*Global_1128435)[func_230() /*83*/])->f_38.f_2 != ((*Global_1125276)[iParam0 /*27*/])->f_1.f_2)
	{
		func_115(((*Global_1125276)[iParam0 /*27*/])->f_1);
	}
	func_246();
	func_247(iParam0);
	func_248(iParam0, ((*Global_1125276)[iParam0 /*27*/])->f_1);
	func_249(iParam0);
	func_250(iParam0);
}

int func_139(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	func_18();
	if (((*Global_1125276)[iParam0 /*27*/])->f_9 == 255)
	{
		return 0;
	}
	if ((*Global_1125276)[iParam0 /*27*/])->f_9 != _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	vVar0 = { ((*Global_1125276)[iParam0 /*27*/])->f_1 };
	func_115(vVar0);
	func_31(4096);
	if (func_116())
	{
		func_117(0);
	}
	func_119();
	return 1;
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar1 = iVar0;
		iVar2 = PLAYER::PLAYER_ID();
		if ((((iVar1 < 32 && iVar1 >= 0) && iVar2 < 32) && iVar2 >= 0) && (((*Global_1128435)[iVar2 /*83*/])->f_38.f_2 != ((*Global_1128435)[iVar1 /*83*/])->f_38.f_2 || ((*Global_1128435)[iVar2 /*83*/])->f_38 != ((*Global_1128435)[iVar1 /*83*/])->f_38))
		{
			func_115(((*Global_1128435)[iVar1 /*83*/])->f_38);
		}
	}
	if (((func_42(4096) && !func_251()) && CAM::IS_SCREEN_FADED_IN()) && !func_123(255))
	{
		iVar3 = func_206(PLAYER::PLAYER_ID());
		if (func_74(iVar3))
		{
			if (func_105((Global_1126368->f_1[iVar3 /*62*/])->f_5) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1125276)[iVar3 /*27*/])->f_9))
			{
				sVar4 = MISC::_CREATE_VAR_STRING(10, "GC_CAMP_MERGE", func_253(func_252(((*Global_1125276)[iVar3 /*27*/])->f_9), joaat("COLOR_POSSE_ALLY")), func_16((Global_1126368->f_1[iVar3 /*62*/])->f_5));
				_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 1);
				Global_1131092->f_375 = func_136(sVar4, 10000, 0, 0, 0, 1);
				Global_1131092->f_376 = Global_1275573->f_15;
				func_28(4096);
			}
		}
	}
	func_246();
}

struct<2> func_141()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_207(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_207(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

void func_142()
{
	int iVar0;

	if (Global_1128395->f_39 == 0)
	{
		Global_1128395->f_39++;
	}
	else if (Global_1128395->f_39 >= 60)
	{
		Global_1128395->f_39 = 0;
		return;
	}
	else
	{
		Global_1128395->f_39++;
		return;
	}
	if (func_254())
	{
		if (!func_154(&Global_1275573, 1))
		{
			func_157(1);
		}
	}
	else if (func_154(&Global_1275573, 1))
	{
		func_166(1);
	}
	func_255(func_164(770694722, func_91(1), 1784584921, 1, 0, 0));
	func_256(func_164(-735397297, func_91(1), 1784584921, 1, 0, 0));
	func_165(func_164(914410532, func_91(1), 1784584921, 1, 0, 0));
	if (func_257() == joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE"))
	{
		iVar0 = 100;
	}
	else if (func_257() == joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM"))
	{
		iVar0 = 50;
	}
	else
	{
		iVar0 = 25;
	}
	func_258(iVar0);
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_21))
	{
		return;
	}
	iVar3 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	iVar4 = func_259(iVar3);
	iVar5 = func_260(iVar3);
	iVar6 = 0;
	if (Global_1939231->f_10478 != 0)
	{
		uVar7 = func_261(Global_1939231->f_10478);
		iVar6 = func_170(uVar7, 770694722);
		if (func_262(Global_1939231->f_10478, 1064293907))
		{
			if (func_263())
			{
				iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 1.25f));
			}
		}
		else if ((INVENTORY::_0x245D07651B1D183B(Global_1939231->f_10478, 268435456) || INVENTORY::_0x245D07651B1D183B(Global_1939231->f_10478, 134217728)) || func_262(Global_1939231->f_10478, 1888974372))
		{
			iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 0.4f));
		}
		else
		{
			iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 0.6f));
		}
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_23))
	{
		if ((func_264(29) && UIAPPS::_IS_APP_ACTIVE(joaat("SATCHEL"))) && Global_1939231->f_38.f_203 > 0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1128395->f_23, (iVar6 + iVar4));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1128395->f_23, 0);
		}
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_22))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1128395->f_22, iVar4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_24))
	{
		iVar0 = func_265(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1128395->f_24, iVar0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_26))
	{
		if (func_173(Global_1131092->f_339.f_18, 1))
		{
			iVar1 = func_266(iVar3);
			func_174(&(Global_1131092->f_339.f_18), 1);
		}
		else
		{
			iVar1 = func_267(iVar3);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1128395->f_26, iVar1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_27))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1128395->f_27, iVar5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_28))
	{
		iVar0 = func_268(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1128395->f_28, iVar0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_29))
	{
		iVar2 = func_269(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1128395->f_29, iVar2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_31))
	{
		if (func_154(iVar3, 32) || UIAPPS::_IS_APP_ACTIVE(joaat("SATCHEL")))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1128395->f_31, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1128395->f_31, false);
		}
	}
}

void func_144()
{
	if (func_270())
	{
		if (!func_154(&Global_1275573, 4096))
		{
			HUD::_0x8BC7C1F929D07BF3(2077578434);
			HUD::_0x4CC5F2FC1332577F(-782493871);
			func_157(4096);
		}
	}
	else if (func_154(&Global_1275573, 4096))
	{
		HUD::_0x8BC7C1F929D07BF3(-782493871);
		func_166(4096);
	}
}

void func_145()
{
	var uVar0;
	struct<14> Var4;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) || !_NAMESPACE26::_0x0F99F6436528A089(Global_1275573->f_15))
	{
		return;
	}
	if (Global_1128395->f_34 != 255)
	{
		iVar19 = Global_1128395->f_34;
		if ((((iVar19 >= 0 && iVar19 < 32) && ((*Global_1128435)[iVar19 /*83*/])->f_74.f_6 > 0) && ((*Global_1128435)[iVar19 /*83*/])->f_74.f_7 == Global_1128395->f_37) && Global_1128395->f_37 != -1)
		{
			return;
		}
		else
		{
			Global_1128395->f_34 = 255;
		}
	}
	iVar21 = 0;
	while (iVar21 <= 31)
	{
		iVar20 = PLAYER::INT_TO_PLAYERINDEX(iVar21);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar20) && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar20))
		{
			if (((*Global_1128435)[iVar21 /*83*/])->f_74.f_8 != 0 && ((*Global_1128435)[iVar21 /*83*/])->f_74.f_6 > 0)
			{
				if (func_271(&uVar0, ((*Global_1128435)[iVar21 /*83*/])->f_74.f_8, ((*Global_1128435)[iVar21 /*83*/])->f_74.f_6, 0))
				{
					SCRIPTS::_0x31010318BA9897AC(&uVar18, iVar21);
					Global_1128395->f_34 = iVar20;
					Global_1128395->f_37 = ((*Global_1128435)[iVar21 /*83*/])->f_74.f_7;
					func_272(19, Var4, uVar18);
				}
			}
			else
			{
				iVar21++;
			}
		}
	}

int func_146(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return iVar0;
	}
	iVar1 = iParam0;
	return ((*Global_1128435)[iVar1 /*83*/])->f_74.f_1;
}

void func_147(bool bParam0)
{
	if (bParam0)
	{
		func_273(&(Global_1128395->f_15));
		func_157(64);
	}
	else
	{
		func_167(&(Global_1128395->f_15));
		func_166(64);
	}
}

void func_148(int iParam0)
{
	((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_1 = iParam0;
	Global_1128395->f_33 = ((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_1;
}

void func_149()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	iVar3 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	bVar4 = func_259(iVar3);
	bVar5 = func_260(iVar3);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_21))
	{
		Global_1128395->f_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Trader_ProgressBars");
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_22))
	{
		Global_1128395->f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1128395->f_21, "TraderMaterialsValue", bVar4);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_23))
	{
		Global_1128395->f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1128395->f_21, "TraderMaterialsDeltaValue", false);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_25))
	{
		Global_1128395->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1128395->f_21, "TraderMaterialsMaximum", Global_1901929->f_543.f_9);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_24))
	{
		bVar0 = func_265(iVar3);
		Global_1128395->f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1128395->f_21, "TraderMaterialsColorID", bVar0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_26))
	{
		bVar1 = func_267(iVar3);
		Global_1128395->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1128395->f_21, "ProductionOperational", bVar1);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_27))
	{
		Global_1128395->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1128395->f_21, "TraderGoodsValue", bVar5);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_30))
	{
		Global_1128395->f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1128395->f_21, "TraderGoodsMaximum", Global_1901929->f_543.f_10);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_28))
	{
		bVar0 = func_268(iVar3);
		Global_1128395->f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1128395->f_21, "TraderGoodsColorID", bVar0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_29))
	{
		bVar2 = func_269(iVar3);
		Global_1128395->f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1128395->f_21, "TraderGoodsThresholdValue", bVar2);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1128395->f_31))
	{
		Global_1128395->f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1128395->f_21, "TraderGoodsShowCash", false);
	}
}

bool func_150(int iParam0)
{
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && func_154(iParam0, 1));
}

int func_151()
{
	bool bVar0;

	bVar0 = func_168(-1364613333, 0, 1, -1, 1);
	if (bVar0 == 0)
	{
		return 0;
	}
	return func_274(-1364613333, bVar0);
}

void func_152(var uParam0, bool bParam1)
{
	if (bParam1 || !func_158(uParam0))
	{
		func_273(uParam0);
	}
}

int func_153()
{
	int iVar0;

	if (!func_275())
	{
		func_157(4);
	}
	else
	{
		func_166(4);
	}
	if (func_259(PLAYER::PLAYER_ID()) < 200)
	{
		if (!func_154(&Global_1275573, 2))
		{
			func_156("TRADER_HALT_REASON_MATERIALS_EMPTY", joaat("BUTCHER_TABLE_RAW_MATERIALS"));
			func_157(2);
		}
	}
	else
	{
		func_166(2);
	}
	if (func_260(PLAYER::PLAYER_ID()) >= Global_1901929->f_543.f_10)
	{
		if (!func_154(&Global_1275573, 128))
		{
			func_156("TRADER_HALT_REASON_SELL_GOODS", joaat("BUTCHER_TABLE_GOODS"));
			func_157(128);
		}
	}
	else
	{
		func_166(128);
	}
	iVar0 = func_206(PLAYER::PLAYER_ID());
	if (func_183(iVar0, 512))
	{
		if (!func_154(&Global_1275573, 16))
		{
			func_156("TRADER_HALT_REASON_CRIPPS_INJURED", joaat("BUTCHER_TABLE_PRODUCTION"));
			func_157(16);
		}
	}
	else
	{
		func_166(16);
	}
	if (((func_154(&Global_1275573, 4) || func_154(&Global_1275573, 2)) || func_154(&Global_1275573, 128)) || func_154(&Global_1275573, 16))
	{
		return 0;
	}
	return 1;
}

int func_154(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return func_65(((*Global_1128435)[iParam0 /*83*/])->f_74, iParam1);
}

int func_155(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return ((*Global_1128435)[iVar0 /*83*/])->f_74.f_5;
}

void func_156(char* sParam0, int iParam1)
{
	struct<22> Var0;

	if (!func_276())
	{
		return;
	}
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_11 = joaat("COLOR_WHITE");
	Var0.f_12 = 8000;
	Var0.f_13 = 1511356879;
	Var0.f_15 = joaat("PLAYER_MENU");
	Var0.f_21 = 1;
	Var0 = 5;
	Var0.f_2 = MISC::_CREATE_VAR_STRING(2, "TRADER_CRIPPS_TITLE");
	Var0.f_3 = MISC::_CREATE_VAR_STRING(2, sParam0);
	Var0.f_7 = iParam1;
	Var0.f_6 = joaat("TOASTS_MP_GENERIC");
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_4 = "TRADER_HOLD_INPUT_FOR_CAMP";
	Var0.f_18 = 0;
	Var0.f_17 = 0;
	Var0.f_13 = 863036578;
	Var0.f_16 = 0;
	Var0.f_14 = 0;
	func_277(&Var0);
}

void func_157(int iParam0)
{
	if (!func_65(((*Global_1128435)[&Global_1275573 /*83*/])->f_74, iParam0))
	{
		func_45(&(((*Global_1128435)[&Global_1275573 /*83*/])->f_74), iParam0);
		Global_1128395->f_32 = ((*Global_1128435)[&Global_1275573 /*83*/])->f_74;
	}
}

bool func_158(var uParam0)
{
	return func_278(*uParam0, 1);
}

int func_159(var uParam0)
{
	if (!func_158(uParam0))
	{
		return 0;
	}
	if (func_279(uParam0))
	{
		return uParam0->f_2;
	}
	return func_280(uParam0->f_1);
}

int func_160()
{
	struct<12> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (func_281(Global_1128395, -735397297, 1784584921, 1, &Var0, 1, -489628648, -1))
	{
		if (func_162(Global_1128395))
		{
			TELEMETRY::_0xCA9E42F437625A85(Global_1128395->f_1, joaat("ST_CAMP_BUTCHERTABLE"), joaat("SHOP_CAMP_BUTCHERTABLE"));
			func_152(&(Global_1128395->f_15), 1);
			return 1;
		}
	}
	return 0;
}

int func_161(int* iParam0)
{
	return func_282(iParam0->f_1);
}

int func_162(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return 0;
	}
	iVar0 = func_161(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_163(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<5> Var0;
	struct<16> Var5;
	struct<5> Var21;
	int iVar26;

	func_283(&iParam1);
	if (func_284(iParam1))
	{
		return func_169(iParam0, func_285(iParam1, 1), Var0, 1, 1, iParam3, 0, iParam4, iParam5, func_286(iParam1));
	}
	Var5.f_9 = 1;
	Var5.f_11 = -1591664384;
	Var21 = { func_287(iParam1, 1, 1) };
	if (func_288(iParam1, &iVar26))
	{
		return func_169(iParam0, iVar26, Var21, iParam2, 1, iParam3, 0, 0, iParam5, 0);
	}
	if (func_289(iParam1))
	{
		if (!func_290(iParam0, iParam1, Var21, iParam2, &Var5, iParam4, iParam5))
		{
			return 0;
		}
	}
	else if (!func_291(iParam0, iParam1, Var21, Var21.f_4, iParam2, &Var5, iParam3, iParam4, iParam5, 1))
	{
		return 0;
	}
	func_292(Var5);
	return 1;
}

int func_164(int iParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_293(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_92(iParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_191(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_191(bParam6), iParam0, bParam8);
	}
	return iVar0;
}

void func_165(int iParam0)
{
	if (((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_5 != iParam0)
	{
		((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_5 = iParam0;
	}
}

void func_166(int iParam0)
{
	if (func_65(((*Global_1128435)[&Global_1275573 /*83*/])->f_74, iParam0))
	{
		func_43(&(((*Global_1128435)[&Global_1275573 /*83*/])->f_74), iParam0);
		Global_1128395->f_32 = ((*Global_1128435)[&Global_1275573 /*83*/])->f_74;
	}
}

void func_167(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_168(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_294(iParam0))
	{
		return 0;
	}
	bVar1 = func_173(bParam3, 2);
	bVar2 = func_295(iParam0, -570078785, bVar1);
	bVar3 = func_295(iParam0, -915411861, bVar1);
	if (func_295(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (iParam4 && (func_296(iParam0, &iVar0) || func_297(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_298())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_169(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, int iParam13)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam7;
	Var0.f_11 = Param2.f_4;
	Var0.f_4 = { Param2 };
	Var0.f_10 = iParam8;
	Var0.f_14 = iParam10;
	if (!func_299(iParam0, iParam1, &Var0, iParam9, bParam11, bParam12, iParam13))
	{
		return 0;
	}
	func_300(Var0);
	return 1;
}

int func_170(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	if (!ITEMDATABASE::_0xEF254F1A4C08B7E6(iParam0))
	{
		return 0;
	}
	if (!func_193(iParam1, 0))
	{
		return 0;
	}
	iVar4 = ITEMDATABASE::_0x3FAA928A79591761(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!ITEMDATABASE::_0x121D2005DD64496B(iParam0, iVar0, &Var1))
		{
		}
		else if (Var1 == iParam1)
		{
			return Var1.f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_171(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38.f_28;
}

int func_172(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38.f_28.f_1;
}

bool func_173(bool bParam0, bool bParam1)
{
	return (bParam0 && bParam1) != 0;
}

void func_174(bool bParam0, int iParam1)
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
}

void func_175()
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	char* sVar38;

	if (Global_1131092->f_339.f_16 == 0 || !UILOG::_UILOG_IS_ENTRY_REGISTERED(8, Global_1131092->f_339.f_16))
	{
		Global_1131092->f_339.f_16 = 0;
		return;
	}
	func_301(Global_1131092->f_339.f_16, Global_1131092->f_339.f_17, &Var2, &iVar0, 1, 0);
	iVar33 = 0;
	while (iVar33 < iVar0)
	{
		if (iVar33 >= 15)
		{
		}
		else
		{
			iVar34 = &Var2[iVar33 /*2*/];
			if (func_193(iVar34, 0))
			{
				iVar36 = func_302(iVar34, 0, 0, 0);
				sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, (Var2[iVar33 /*2*/])->f_1, MISC::_CREATE_VAR_STRING(0, iVar34));
				bVar37 = func_194(iVar34, (Var2[iVar33 /*2*/])->f_1);
				if (bVar37)
				{
					iVar1++;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, Global_1131092->f_339.f_16, iVar34, sVar35, bVar37, true, true);
			}
			iVar33++;
		}
	}
	sVar38 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar1, iVar0);
	UILOG::_0x763637F9B838B0A7(8, Global_1131092->f_339.f_16, sVar38);
}

int func_176(var uParam0, struct<2> Param1, var uParam3)
{
	int iVar0;

	if (Param1.f_1 == 0)
	{
		return 0;
	}
	iVar0 = func_303(Param1.f_1);
	if (!DATAFILE::_0x7907969497EA92F5(iVar0) || !DATAFILE::_0x603AC35FD4602C76(iVar0))
	{
		return 0;
	}
	*uParam0 = iVar0;
	uParam0->f_2 = -80782076;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return 0;
	}
	return 1;
}

int func_177(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&Global_1126368->f_1988[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_178(vector3 vParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!func_176(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 1462115960;
	Var0.f_3 = vParam0.z;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 759645552;
		DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	}
	return uVar5;
}

int func_179(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = iParam0;
	return iParam3 > iVar0;
	return 0;
}

int func_180()
{
	return -1635525483;
}

int func_181(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (func_304(iVar1) == 4)
			{
			}
			else if (BUILTIN::VDIST(vParam0, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) < Global_1901929->f_543)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_182(vector3 vParam0, int iParam3)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;

	if (func_305(vParam0))
	{
		return 1;
	}
	if (iParam3 >= 0 && iParam3 < 32)
	{
		iVar5 = ((*Global_1128435)[iParam3 /*83*/])->f_33.f_3;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_305(((*Global_1125276)[iVar0 /*27*/])->f_20))
		{
			fVar1 = BUILTIN::VDIST(((*Global_1125276)[iVar0 /*27*/])->f_20, vParam0);
			if (fVar1 <= Global_1901929->f_543.f_3)
			{
				return 1;
			}
		}
		if ((((Global_1125276->f_865[iVar0 /*7*/])->f_4 != iVar5 && ((Global_1125276->f_865[iVar0 /*7*/])->f_1.f_2 > 0 || (Global_1125276->f_865[iVar0 /*7*/])->f_1.f_2 < -2)) && &Global_1125276->f_865[iVar0 /*7*/] != -1) && &Global_1125276->f_865[iVar0 /*7*/] != 6)
		{
			if (func_77((Global_1125276->f_865[iVar0 /*7*/])->f_1, &vVar2) && !func_305(vVar2))
			{
				fVar1 = BUILTIN::VDIST(vVar2, vParam0);
				if (fVar1 <= Global_1901929->f_543.f_3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	return func_65(((*Global_1125276)[iParam0 /*27*/])->f_7, iParam1);
}

int func_184(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	var uVar1;
	int iVar202;
	int iVar203;
	int iVar204;

	iVar0 = _NAMESPACE26::_0x149A2751AB66AC02(iParam1);
	uVar1 = 50;
	if (*uParam0 < 4)
	{
		*uParam0 = 4;
	}
	else if (*uParam0 > 7)
	{
		*uParam0 = 7;
	}
	if (uParam0->f_2 == -2)
	{
		func_306(iParam1, *uParam0, uParam0->f_1, &uVar1, iParam2);
		uParam0->f_2 = func_307(&uVar1);
	}
	else
	{
		iVar202 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		uParam0->f_1 = func_308(iVar202, 1);
		func_306(iParam1, *uParam0, uParam0->f_1, &uVar1, iParam2);
		uParam0->f_2 = func_307(&uVar1);
	}
	*iParam3 = 0;
	iVar203 = 0;
	iVar204 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam1);
	if (func_309(*uParam0, iVar204, iVar0, iParam2))
	{
		iVar203 = 1;
	}
	else
	{
		*uParam4++;
	}
	return iVar203;
}

int func_185(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		if (iParam1 == 0)
		{
		}
		return 255;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_9;
}

bool func_186(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

char* func_187()
{
	return "net_camp";
}

char* func_188()
{
	return "gfh_campworks";
}

void func_189(int iParam0)
{
	var uVar0;

	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1125276)[iParam0 /*27*/])->f_9) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(((*Global_1125276)[iParam0 /*27*/])->f_9)) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(((*Global_1125276)[iParam0 /*27*/])->f_9)))
	{
		((*Global_1125276)[iParam0 /*27*/])->f_23.f_1 = uVar0;
		((*Global_1125276)[iParam0 /*27*/])->f_23 = uVar0;
		return;
	}
	if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1125276)[iParam0 /*27*/])->f_23.f_1))
	{
		VOLUME::_0xFDFECC6EE4491E11(((*Global_1125276)[iParam0 /*27*/])->f_23.f_1);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1125276)[iParam0 /*27*/])->f_23))
	{
		VOLUME::_0xFDFECC6EE4491E11(((*Global_1125276)[iParam0 /*27*/])->f_23);
	}
	((*Global_1125276)[iParam0 /*27*/])->f_23.f_1 = uVar0;
	((*Global_1125276)[iParam0 /*27*/])->f_23 = uVar0;
}

void func_190(var uParam0)
{
	struct<27> Var0;

	Var0.f_9 = 255;
	Var0.f_10 = 7;
	Var0.f_10.f_1 = 255;
	Var0.f_10.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	*uParam0 = { Var0 };
}

int func_191(bool bParam0)
{
	if (func_19() == -1)
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

struct<4> func_192()
{
	struct<4> Var0;

	return Var0;
}

int func_193(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_194(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_193(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_310(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_311(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_312(iParam0))
			{
				return true;
			}
			break;
	}
	return func_302(iParam0, 0, 0, 0) >= iParam1;
}

int func_195(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_313(uParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

Vector3 func_196(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

bool func_197(int iParam0)
{
	return !func_112(iParam0, 8);
}

int func_198(int iParam0, bool bParam1)
{
	if (!func_74(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1125276)[iParam0 /*27*/])->f_9))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	return _NAMESPACE26::_0x901E0DC25080C8B9(((*Global_1125276)[iParam0 /*27*/])->f_9);
}

bool func_199(int iParam0)
{
	return func_65(Global_1126368->f_2008, iParam0);
}

void func_200(int iParam0)
{
	Global_1126368->f_2013 = iParam0;
}

int func_201(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_314();
	if (func_315(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar0 /*36*/])->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_316(vParam0, iParam3);
}

int func_202(bool bParam0)
{
	if (bParam0)
	{
		return 96;
	}
	return 95;
}

int func_203(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_305(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_317(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_16843)
	{
		if (func_318(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_318(iVar0) == iParam1 && func_319(iVar0) == iParam0) && iVar2 == func_320(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_38(iVar1, iParam0);
		func_39(iVar1, iParam1);
		func_40(iVar1, iVar2);
		func_321(iVar1, iParam5);
		func_322(iVar1);
		MAP::SET_BLIP_FLASH_TIMER(&(Global_16843[iVar1]), iParam1, func_323(iParam0, 0));
		return iVar1;
	}
	return -1;
}

int func_204(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case -682748:
			if (bParam1)
			{
				if (bParam2)
				{
					return 807049026;
				}
				return 1877266410;
			}
			return -1609475916;
		case 1357161730:
			if (bParam1)
			{
				if (bParam2)
				{
					return 1322315207;
				}
				return -690230539;
			}
			return -1621660129;
		case 1581179681:
			if (bParam1)
			{
				if (bParam2)
				{
					return 890534941;
				}
				return 353565276;
			}
			return -713543329;
		case -215258135:
			if (bParam1)
			{
				if (bParam2)
				{
					return -327090397;
				}
				return -1640183015;
			}
			return 321465645;
		case -987049424:
			if (bParam1)
			{
				if (bParam2)
				{
					return -901488938;
				}
				return 1203157087;
			}
			return 1280275183;
		case 892234183:
			if (bParam1)
			{
				if (bParam2)
				{
					return 157782508;
				}
				return -1431438421;
			}
			return 839992260;
		case -1554232707:
			if (bParam1)
			{
				if (bParam2)
				{
					return -1339543530;
				}
				return -2100701457;
			}
			return 1585227357;
		case 1538293636:
			if (bParam1)
			{
				if (bParam2)
				{
					return -897447261;
				}
				return -306961178;
			}
			return -706039225;
		case -1992167326:
			if (bParam1)
			{
				if (bParam2)
				{
					return -354997135;
				}
				return -2097555655;
			}
			return -1123163224;
		case -1884014371:
			if (bParam1)
			{
				if (bParam2)
				{
					return 1543402390;
				}
				return 753475365;
			}
			return -864497764;
		case -1871413878:
			if (bParam1)
			{
				if (bParam2)
				{
					return 646196791;
				}
				return 1650238062;
			}
			return -743114058;
		case 1483778247:
			if (bParam1)
			{
				if (bParam2)
				{
					return 706692807;
				}
				return -61157504;
			}
			return 381776905;
		case -724534761:
			if (bParam1)
			{
				if (bParam2)
				{
					return 84763048;
				}
				return -61157504;
			}
			return 381776905;
		default:
			break;
	}
	return 0;
}

bool func_205(int iParam0)
{
	return (func_183(iParam0, 16) && !func_183(iParam0, 32));
}

int func_206(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

struct<2> func_207(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

bool func_208(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_324(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_209(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_112(iParam0, iParam1))
	{
		func_45((*(*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])[iParam0], iParam1);
	}
}

void func_210(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (func_112(iParam0, iParam1))
	{
		func_43((*(*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])[iParam0], iParam1);
	}
}

void func_211(int iParam0)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_325(iParam0, 1);
}

void func_212(int iParam0)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_325(iParam0, 0);
}

void func_213(int iParam0)
{
	struct<14> Var0;

	func_124(8);
	func_214(4);
	Var0.f_8 = iParam0;
	func_272(3, Var0, func_326(0, 8));
}

void func_214(int iParam0)
{
	func_45(&(Global_1131092->f_8), iParam0);
}

int func_215(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	return func_65((Global_1126368->f_1[iParam0 /*62*/])->f_60, iParam1);
}

void func_216(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1125276)[iParam0 /*27*/])->f_1 };
	if (!func_327(vVar0, &((Global_1126368->f_1[iParam0 /*62*/])->f_6), &((Global_1126368->f_1[iParam0 /*62*/])->f_46)))
	{
	}
	if (!func_328(vVar0, &((Global_1126368->f_1[iParam0 /*62*/])->f_9), &((Global_1126368->f_1[iParam0 /*62*/])->f_47)))
	{
	}
}

void func_217(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1125276)[iParam0 /*27*/])->f_1 };
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		if (!func_329(vVar0, iVar3, (Global_1126368->f_1[iParam0 /*62*/])->f_12[iVar3 /*3*/], (Global_1126368->f_1[iParam0 /*62*/])->f_48[iVar3]))
		{
		}
		iVar3++;
	}
}

void func_218(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1125276)[iParam0 /*27*/])->f_1 };
	if (!func_330(vVar0, &((Global_1126368->f_1[iParam0 /*62*/])->f_34), &((Global_1126368->f_1[iParam0 /*62*/])->f_56)))
	{
	}
}

void func_219(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1125276)[iParam0 /*27*/])->f_1 };
	if (!func_331(vVar0, &((Global_1126368->f_1[iParam0 /*62*/])->f_37), &((Global_1126368->f_1[iParam0 /*62*/])->f_57)))
	{
	}
}

void func_220(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1125276)[iParam0 /*27*/])->f_1 };
	if (!func_332(vVar0, &((Global_1126368->f_1[iParam0 /*62*/])->f_40), &((Global_1126368->f_1[iParam0 /*62*/])->f_58)))
	{
	}
}

void func_221(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1125276)[iParam0 /*27*/])->f_1 };
	if (!func_333(vVar0, &((Global_1126368->f_1[iParam0 /*62*/])->f_43), &((Global_1126368->f_1[iParam0 /*62*/])->f_59)))
	{
	}
}

void func_222(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_65((Global_1126368->f_1[iParam0 /*62*/])->f_60, iParam1))
	{
		func_45(&((Global_1126368->f_1[iParam0 /*62*/])->f_60), iParam1);
	}
}

void func_223(int iParam0, int iParam1)
{
	if (func_74(iParam0))
	{
		(Global_1126368->f_1[iParam0 /*62*/])->f_4 = iParam1;
	}
}

int func_224(int iParam0)
{
	vector3 vVar0;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_187(), iParam0, true, 0))
	{
		return 1;
	}
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1126368->f_2021) || SCRIPTS::IS_THREAD_ACTIVE(Global_1126368->f_2021, false))
	{
		return 0;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6400) <= 0)
	{
		return 0;
	}
	vVar0.f_3 = iParam0;
	vVar0 = { func_334(iParam0) };
	SCRIPTS::REQUEST_SCRIPT(func_187());
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_187()))
	{
		return 0;
	}
	Global_1126368->f_2021 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_187(), &vVar0, 4, 6400);
	Global_1126368->f_2022 = iParam0;
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_187());
	return 1;
}

int func_225(int iParam0)
{
	vector3 vVar0;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_188(), iParam0, true, 0))
	{
		return 1;
	}
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1126368->f_2023) || SCRIPTS::IS_THREAD_ACTIVE(Global_1126368->f_2023, false))
	{
		return 0;
	}
	vVar0.f_3 = iParam0;
	vVar0 = { func_334(iParam0) };
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(3081) <= 0)
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(func_188());
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_188()))
	{
		return 0;
	}
	Global_1126368->f_2023 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_188(), &vVar0, 4, 3081);
	Global_1126368->f_2024 = iParam0;
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_188());
	return 1;
}

void func_226(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

int func_227(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1125276->f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_9 == iParam0 && Global_1125276[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_228(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_38.f_3 = iParam0;
}

struct<19> func_229(bool bParam0)
{
	struct<19> Var0;
	struct<4> Var19;
	struct<17> Var23;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var19 = { func_92(joaat("KIT_CAMP"), func_91(1), 1084182731, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var19))
	{
		return Var0;
	}
	Var23.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_191(1), &Var19, &Var23, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_335(&Var23, bParam0) };
	Var0.f_17 = Var23.f_15;
	Var0.f_18 = Var23.f_16;
	Var0.f_16 = Var23.f_14;
	return Var0;
}

int func_230()
{
	return Global_1099294->f_339;
}

void func_231(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_1433.f_54.f_65, func_336(Param0.f_1, 0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_1433.f_54.f_66, MISC::_CREATE_VAR_STRING(2, "NM_CAMP_SIZE_VALUE", Param0));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939231->f_1433.f_54.f_67, func_337(Param0));
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar1 = DATABINDING::_0x81D7183E7A8ECA72(&(Global_1939231->f_1433.f_2628.f_49[iVar0 /*23*/]));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939231->f_1433.f_2628.f_49[iVar0 /*23*/])->f_1.f_21, iVar1 == Param0.f_1);
		iVar0++;
	}
}

int func_232(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_338(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_230())
	{
		return func_338(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_338(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_339() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return 0;
	}
	if (!func_42(16))
	{
		return 0;
	}
	if (func_56())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
		{
			return 0;
		}
	}
	if (!func_340())
	{
		return 0;
	}
	if (func_30(16))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (iParam0 == 1 && func_65(Global_1131092->f_8, 1))
	{
		return 0;
	}
	if (func_341())
	{
		return 0;
	}
	return 1;
}

bool func_234()
{
	return func_65(Global_1131092->f_8, 2);
}

int func_235(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_233(0, 1))
	{
		return 0;
	}
	((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33 = { vParam0 };
	((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_238();
	if (iParam3 == 1)
	{
		func_133(2);
	}
	else
	{
		Global_1131092->f_330.f_6 = 1;
		func_342(2);
	}
	if (!func_76(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_342(8);
		func_18();
	}
	if (!func_121(4) && (func_121(8) || func_121(16)))
	{
		func_133(4);
	}
	else
	{
		func_342(4);
	}
	if (func_65(Global_1131092->f_8, 1))
	{
		func_133(1);
	}
	else
	{
		func_342(1);
	}
	func_63(6);
	return 1;
}

int func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	struct<10> Var9;
	int iVar19;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		else
		{
			Var2 = { func_343(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return 1;
				}
				iVar19++;
			}
		}
	}
	return 0;
}

int func_237(struct<2> Param0, var uParam2, int iParam3)
{
	if (func_344())
	{
		return 0;
	}
	if (func_345(Param0.f_1, Param0))
	{
		return 0;
	}
	if (!func_233(iParam3, 1))
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (func_42(64))
	{
		if (!func_347(func_346(Param0), 1, 59806960))
		{
			return 0;
		}
	}
	return 1;
}

void func_238()
{
	((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_4 = 0;
}

void func_239(vector3 vParam0)
{
	Global_17172.f_54.f_4 = vParam0.x;
	Global_17172.f_54.f_4.f_1 = vParam0.y;
	Global_17172.f_54.f_4.f_2 = vParam0.z;
	if (func_348(vParam0, 1) == -1)
	{
	}
}

int func_240()
{
	return -1727708451;
}

void func_241(vector3 vParam0)
{
	((*Global_1128435)[func_230() /*83*/])->f_38.f_4 = { vParam0 };
}

void func_242(int iParam0)
{
	((*Global_1128435)[func_230() /*83*/])->f_38.f_11 = iParam0;
}

int func_243(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38.f_12.f_10;
}

void func_244(int iParam0, int iParam1)
{
	if (iParam1 > 7)
	{
		return;
	}
	if ((_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0) && _NAMESPACE26::_0x0F99F6436528A089(iParam0)) && _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0) == PLAYER::PLAYER_ID())
	{
		if (_NAMESPACE26::_0x853B0FA4D8732C57(iParam0) == iParam1)
		{
			return;
		}
		_NAMESPACE26::_0x833D8268D51B4522(iParam1);
	}
}

var func_245()
{
	return &Global_1902689;
}

void func_246()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (Global_1126368->f_2016 < 10)
	{
		Global_1126368->f_2016++;
	}
	else
	{
		Global_1126368->f_2016 = 0;
		iVar0 = PLAYER::PLAYER_ID();
		iVar1 = func_206(iVar0);
		if (iVar1 >= 0 && iVar1 <= 31)
		{
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ((*Global_1128435)[iVar0 /*83*/])->f_38)
			{
				if (&((*Global_1125276)[iVar1 /*27*/])->f_10[iVar2] == iVar0)
				{
					bVar3 = true;
				}
				else
				{
					iVar2++;
				}
			}
			if (bVar3)
			{
				if (iVar2 != ((*Global_1128435)[iVar0 /*83*/])->f_38.f_7)
				{
					func_349(iVar2, *((Global_1126368->f_1[iVar1 /*62*/])->f_12[iVar2 /*3*/]));
					func_31(16384);
				}
				else if (func_42(8192))
				{
					func_349(iVar2, *((Global_1126368->f_1[iVar1 /*62*/])->f_12[iVar2 /*3*/]));
					func_31(16384);
					func_28(8192);
				}
			}
		}
	}
}

void func_247(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (Global_1126368->f_1995.f_5 == 0)
	{
		return;
	}
	if (!func_42(64))
	{
		if (Global_1126368->f_1995.f_5 != 0)
		{
			func_126(0);
		}
	}
	else if (func_74(iParam0))
	{
		vVar0 = { ((*Global_1125276)[iParam0 /*27*/])->f_1 };
	}
	else if (Global_1126368->f_1995.f_5 != 0)
	{
		func_126(0);
	}
	switch (Global_1126368->f_1995.f_5)
	{
		case 1:
			iVar3 = func_346(vVar0.x);
			if (!func_347(iVar3, 1, 59806960))
			{
				func_128();
				func_126(0);
			}
			else
			{
				func_126(2);
			}
			break;
		case 2:
			iVar3 = func_346(vVar0.x);
			if (!func_350(Global_1126368->f_1995.f_6))
			{
				Global_1126368->f_1995.f_6 = func_351(iVar3, "NET_CAMP_PC", 1, 1, 0, 59806960);
				func_126(3);
			}
			break;
		case 3:
			if (!func_350(Global_1126368->f_1995.f_6))
			{
				func_352(iParam0);
				func_126(0);
			}
			break;
	}
}

void func_248(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = func_245();
	switch (Global_1126368->f_1995.f_7)
	{
		case 0:
			if (!func_42(64))
			{
				func_117(4);
				return;
			}
			if (((*Global_1125276)[iParam0 /*27*/])->f_9 == PLAYER::PLAYER_ID() && Global_1126368->f_1995.f_4 != -15)
			{
				if (func_353(iVar1) != func_353(Global_1126368->f_1995.f_4))
				{
					if (func_354(iVar1) >= func_354(Global_1126368->f_1995.f_4))
					{
						func_117(1);
					}
				}
			}
			break;
		case 1:
			iVar0 = func_355(iParam1);
			if (func_347(iVar0, 1, 59806960))
			{
				if (!func_350(Global_1126368->f_1995.f_8))
				{
					func_356(&(Global_1126368->f_1995.f_4), func_353(iVar1));
					Global_1126368->f_1995.f_8 = func_351(iVar0, "NET_CAMP_DC", 1, 1, 0, 59806960);
					func_117(2);
				}
			}
			else
			{
				func_136("NET_CAMP_DF", 10000, 0, 0, 0, 1);
				func_117(3);
			}
			break;
		case 2:
			if (!func_350(Global_1126368->f_1995.f_8))
			{
				func_117(0);
			}
			break;
		case 3:
			iVar0 = func_355(iParam1);
			if (func_347(iVar0, 1, 59806960) && !func_350(Global_1126368->f_1995.f_8))
			{
				func_117(1);
			}
			break;
		case 4:
			if (func_42(64))
			{
				Global_1126368->f_1995.f_4 = iVar1;
				func_117(0);
			}
			break;
	}
}

void func_249(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	int iVar8;
	int iVar9;
	struct<5> Var10;
	struct<10> Var17;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	if ((*Global_1125276)[iParam0 /*27*/])->f_9 != PLAYER::PLAYER_ID()
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (((*Global_1128435)[iVar0 /*83*/])->f_38.f_28 != Global_1131092->f_339)
	{
		((*Global_1128435)[iVar0 /*83*/])->f_38.f_28 = Global_1131092->f_339;
	}
	CLOCK::_0x86A68E84E5884951(&Var1);
	if ((MISC::GET_FRAME_COUNT() % 60) == 0)
	{
		iVar8 = func_357();
		iVar9 = func_358();
		if (iVar8 != 255)
		{
			if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8) || _NAMESPACE26::_0x901E0DC25080C8B9(iVar8) != _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) || (iVar9 != -1 && (MISC::GET_GAME_TIMER() - iVar9) > 5000))
			{
				func_359(PLAYER::PLAYER_ID(), 1);
			}
		}
	}
	if (Global_1131092->f_339.f_2 != -1 && !func_360(Var1, Global_1131092->f_339.f_2))
	{
		return;
	}
	Var10.f_3 = 2;
	Var10.f_4 = 24;
	CLOCK::_0x28EEACE9B43D9597(&Var1, &Var10, &Var1);
	Global_1131092->f_339.f_2 = { Var1 };
	Var17 = { func_361(-1591664384, -1591664384, 0, 0, 0, 0, -1, -2011345500, 0) };
	if (func_362(Var17, &iVar27, &iVar28, 0))
	{
		iVar29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar28);
		iVar30 = func_363(iVar29, iVar27);
		if (iVar30 == func_171(iVar0))
		{
			iVar29 = func_364(0, iVar28, iVar29);
			iVar30 = func_363(iVar29, iVar27);
		}
		func_365(iVar0, iVar30);
		func_366(iVar27);
	}
}

void func_250(int iParam0)
{
	int iVar0;
	struct<7> Var1;

	if ((*Global_1125276)[iParam0 /*27*/])->f_9 != PLAYER::PLAYER_ID()
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_1 != Global_1131092->f_339.f_1)
	{
		((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_1 = Global_1131092->f_339.f_1;
	}
	CLOCK::_0x86A68E84E5884951(&Var1);
	if (Global_1131092->f_339.f_9 == -1 || !func_360(Var1, Global_1131092->f_339.f_9))
	{
		return;
	}
	Global_1131092->f_339.f_9 = -1;
	((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_1 = 1046181202; /* GXTEntry: "Base Quality Stew" */
	Global_1131092->f_339.f_1 = 1046181202; /* GXTEntry: "Base Quality Stew" */
}

bool func_251()
{
	return Global_1896726->f_382;
}

char* func_252(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_367(iVar0);
}

char* func_253(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_368(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_254()
{
	return func_194(joaat("UPGRADE_CAMP_BUTCHER_TABLE"), 1);
}

void func_255(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901929->f_543.f_9)
	{
		iParam0 = Global_1901929->f_543.f_9;
	}
	if (((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_2 != iParam0)
	{
		((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_2 = iParam0;
	}
}

void func_256(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901929->f_543.f_10)
	{
		iParam0 = Global_1901929->f_543.f_10;
	}
	if (((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_3 != iParam0)
	{
		((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_3 = iParam0;
	}
}

int func_257()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (func_194(joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE"), 1))
	{
		iVar0 = joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE");
	}
	else if (func_194(joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM"), 1))
	{
		iVar0 = joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM");
	}
	else if (func_194(913131737 /* GXTEntry: "Small Delivery Wagon" */, 1))
	{
		iVar0 = 913131737; /* GXTEntry: "Small Delivery Wagon" */
	}
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		if (_NAMESPACE26::_0x0F99F6436528A089(iVar1))
		{
			iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar1);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				iVar3 = iVar2;
				iVar0 = ((*Global_1128435)[iVar3 /*83*/])->f_38.f_12.f_2;
			}
		}
	}
	return iVar0;
}

void func_258(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1901929->f_543.f_10)
	{
		iParam0 = 0;
	}
	if (((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_4 != iParam0)
	{
		((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_4 = iParam0;
	}
}

int func_259(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return ((*Global_1128435)[iVar0 /*83*/])->f_74.f_2;
}

int func_260(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return ((*Global_1128435)[iVar0 /*83*/])->f_74.f_3;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_FAT"):
			return -2059491326;
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return -2054061821;
		case joaat("PROVISION_BUCK_ANTLERS"):
			return -2054061821;
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return -276530555;
		case joaat("PROVISION_ELK_ANTLERS"):
			return -276530555;
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return 1786362058;
		case joaat("PROVISION_MOOSE_ANTLER"):
			return 1786362058;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -479944273;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -479944273;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return -479944273;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return -1900245017;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
			return 996737485;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return -317318063;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return -1179145184;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
			return 49841414;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
			return 1853004765;
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return -613244561;
		case joaat("PROVISION_FISH_MUSKIE"):
			return 998459086;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
			return -1185304294;
		case joaat("PROVISION_FISH_PERCH"):
			return 1606770041;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return 592705199;
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return 1001427351;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return -2134757665;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return 1296165525;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 513869240;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 513869240;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 513869240;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -482152318;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -482152318;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -482152318;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return -329015022;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -329015022;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -329015022;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return 340488205;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return 340488205;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return 340488205;
		case joaat("PROVISION_BADGER_CLAW"):
			return 1228602887;
		case joaat("PROVISION_BEAR_CLAW"):
			return -1749311280;
		case joaat("PROVISION_BLACK_BEAR_CLAW"):
			return -770230168;
		case joaat("PROVISION_COUGAR_FANG"):
			return -1761903019;
		case joaat("PROVISION_BLUEJAY_FEATHER"):
			return -202898890;
		case joaat("PROVISION_CONDOR_FEATHER"):
			return -324172879;
		case joaat("PROVISION_CARDINAL_FEATHER"):
			return 221026557;
		case joaat("PROVISION_PARAKEET_FEATHER"):
			return 2055874470;
		case joaat("PROVISION_CEDARWAXWING_FEATHER"):
			return 1383597214;
		case joaat("PROVISION_CHICKEN_FEATHER"):
			return -695920779;
		case joaat("PROVISION_CORMORANT_FEATHER"):
			return 1864240538;
		case joaat("PROVISION_WHOOPING_CRANE_FEATHER"):
			return 135251025;
		case joaat("PROVISION_CROW_FEATHER"):
			return -1380974753;
		case joaat("PROVISION_DUCK_FEATHER"):
			return 1918940015;
		case joaat("PROVISION_EAGLE_FEATHER"):
			return 1606360364;
		case joaat("PROVISION_EGRET_FEATHER"):
			return 949154977;
		case joaat("PROVISION_GOOSE_FEATHER"):
			return 1327585677;
		case joaat("PROVISION_HAWK_FEATHER"):
			return -424223638;
		case joaat("PROVISION_HERON_FEATHER"):
			return -817814915;
		case joaat("PROVISION_LOON_FEATHER"):
			return 1324361660;
		case joaat("PROVISION_ORIOLE_FEATHER"):
			return -1740875511;
		case joaat("PROVISION_OWL_FEATHER"):
			return -1114206422;
		case joaat("PROVISION_PARROT_FEATHER"):
			return 1129016218;
		case joaat("PROVISION_PELICAN_FEATHER"):
			return 74265533;
		case joaat("PROVISION_PHEASANT_FEATHER"):
			return -1687205102;
		case joaat("PROVISION_PIGEON_FEATHER"):
			return -2112352640;
		case joaat("PROVISION_QUAIL_FEATHER"):
			return -1179922595;
		case joaat("PROVISION_RAVEN_FEATHER"):
			return -1777044066;
		case joaat("PROVISION_BOOBY_FEATHER"):
			return -427774472;
		case joaat("PROVISION_ROBIN_FEATHER"):
			return -862133853;
		case joaat("PROVISION_ROOSTER_FEATHER"):
			return -153093028;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 1961151934;
		case joaat("PROVISION_SEAGULL_FEATHER"):
			return -1429428300;
		case joaat("PROVISION_SONGBIRD_FEATHER"):
			return 641025903;
		case joaat("PROVISION_SPARROW_FEATHER"):
			return 1014343203;
		case joaat("PROVISION_TURKEY_FEATHER"):
			return -977684174;
		case joaat("PROVISION_VULTURE_FEATHER"):
			return 753992067;
		case joaat("PROVISION_WOODPECKER_FEATHER"):
			return 975102591;
		case joaat("PROVISION_WOLF_HEART"):
			return -742266708;
		case joaat("PROVISION_BIGHORN_HORN"):
			return 1002050200;
		case joaat("PROVISION_BUFFALO_HORN"):
			return 970250315;
		case joaat("PROVISION_BULL_HORNS"):
			return 913562114;
		case joaat("PROVISION_OXEN_HORN"):
			return 1415886451;
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 1244458697;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 322165109;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return -2083991045;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 709722347;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 709722347;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 709722347;
		case joaat("PROVISION_ARMADILLO_SKIN_PRISTINE"):
			return 144513283;
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return 144513283;
		case joaat("PROVISION_ARMADILLO_SKIN"):
			return 144513283;
		case joaat("PROVISION_BADGER_PELT_PRISTINE"):
			return -78603574;
		case joaat("PROVISION_BADGER_PELT_POOR"):
			return -78603574;
		case joaat("PROVISION_BADGER_PELT"):
			return -78603574;
		case joaat("PROVISION_BEAR_FUR_PRISTINE"):
			return 956393401;
		case joaat("PROVISION_BEAR_FUR_POOR"):
			return 956393401;
		case joaat("PROVISION_BEAR_FUR"):
			return 956393401;
		case joaat("PROVISION_BLACK_BEAR_FUR_PRISTINE"):
			return -1604538436;
		case joaat("PROVISION_BLACK_BEAR_FUR_POOR"):
			return -1604538436;
		case joaat("PROVISION_BLACK_BEAR_FUR"):
			return -1604538436;
		case joaat("PROVISION_BEAVER_FUR"):
			return -1583116953;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return -1583116953;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return -1583116953;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 1995645004;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 1995645004;
		case joaat("PROVISION_RAM_HIDE"):
			return 1995645004;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 439094686;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 439094686;
		case joaat("PROVISION_BOAR_SKIN"):
			return 439094686;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 1069834732;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 1069834732;
		case joaat("PROVISION_BUCK_FUR"):
			return 1069834732;
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -1508151163;
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return -1508151163;
		case joaat("PROVISION_BUFFALO_FUR"):
			return -1508151163;
		case joaat("PROVISION_BULL_HIDE_PRISTINE"):
			return 854098596;
		case joaat("PROVISION_BULL_HIDE_POOR"):
			return 854098596;
		case joaat("PROVISION_BULL_HIDE"):
			return 854098596;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 1467162138;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 1467162138;
		case joaat("PROVISION_COUGAR_FUR"):
			return 1467162138;
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return 1322026128;
		case joaat("PROVISION_COW_HIDE_POOR"):
			return 1322026128;
		case joaat("PROVISION_COW_HIDE"):
			return 1322026128;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 711086189;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 711086189;
		case joaat("PROVISION_COYOTE_FUR"):
			return 711086189;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return -1334624683;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return -1334624683;
		case joaat("PROVISION_DEER_HIDE"):
			return -1334624683;
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return 2118150058;
		case joaat("PROVISION_ELK_FUR_POOR"):
			return 2118150058;
		case joaat("PROVISION_ELK_FUR"):
			return 2118150058;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 1889550255;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 1889550255;
		case joaat("PROVISION_FOX_FUR"):
			return 1889550255;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 1684561350;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 1684561350;
		case joaat("PROVISION_GOAT_HAIR"):
			return 1684561350;
		case joaat("PROVISION_GILA_SKIN_PRISTINE"):
			return 1763709491;
		case joaat("PROVISION_GILA_SKIN_POOR"):
			return 1763709491;
		case joaat("PROVISION_GILA_SKIN"):
			return 1763709491;
		case joaat("PROVISION_IGUANA_SKIN_PRISTINE"):
			return 1828340319;
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return 1828340319;
		case joaat("PROVISION_IGUANA_SKIN"):
			return 1828340319;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 344414895;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 344414895;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 344414895;
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return -1875079046;
		case joaat("PROVISION_MOOSE_FUR_POOR"):
			return -1875079046;
		case joaat("PROVISION_MOOSE_FUR"):
			return -1875079046;
		case joaat("PROVISION_MUSKRAT_FUR_PRISTINE"):
			return -1273558742;
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -1273558742;
		case joaat("PROVISION_MUSKRAT_FUR"):
			return -1273558742;
		case joaat("PROVISION_OXEN_HIDE_PRISTINE"):
			return -839975185;
		case joaat("PROVISION_OXEN_HIDE_POOR"):
			return -839975185;
		case joaat("PROVISION_OXEN_HIDE"):
			return -839975185;
		case joaat("PROVISION_OPOSSUM_FUR_PRISTINE"):
			return -401745683;
		case joaat("PROVISION_OPOSSUM_FUR_POOR"):
			return -401745683;
		case joaat("PROVISION_OPOSSUM_FUR"):
			return -401745683;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return -2096730839;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return -2096730839;
		case joaat("PROVISION_PANTHER_FUR"):
			return -2096730839;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 1871609823;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 1871609823;
		case joaat("PROVISION_PIG_SKIN"):
			return 1871609823;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -1028335922;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -1028335922;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return -1028335922;
		case joaat("PROVISION_RABBIT_PELT_PRISTINE"):
			return 172698521;
		case joaat("PROVISION_RABBIT_PELT_POOR"):
			return 172698521;
		case joaat("PROVISION_RABBIT_PELT"):
			return 172698521;
		case joaat("PROVISION_RACCOON_FUR_PRISTINE"):
			return 212330241;
		case joaat("PROVISION_RACCOON_FUR_POOR"):
			return 212330241;
		case joaat("PROVISION_RACCOON_FUR"):
			return 212330241;
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return -555536739;
		case joaat("PROVISION_RAT_FUR_POOR"):
			return -555536739;
		case joaat("PROVISION_RAT_FUR"):
			return -555536739;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return -1896091463;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return -1896091463;
		case joaat("PROVISION_SHEEP_WOOL"):
			return -1896091463;
		case joaat("PROVISION_SKUNK_FUR_PRISTINE"):
			return 1854095100;
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 1854095100;
		case joaat("PROVISION_SKUNK_FUR"):
			return 1854095100;
		case joaat("PROVISION_SNAKE_SKIN_PRISTINE"):
			return 1690246594;
		case joaat("PROVISION_SNAKE_SKIN_POOR"):
			return 1690246594;
		case joaat("PROVISION_SNAKE_SKIN"):
			return 1690246594;
		case joaat("PROVISION_SQUIRREL_PELT_PRISTINE"):
			return -885435577;
		case joaat("PROVISION_SQUIRREL_PELT_POOR"):
			return -885435577;
		case joaat("PROVISION_SQUIRREL_PELT"):
			return -885435577;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return -1923252111;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return -1923252111;
		case joaat("PROVISION_WOLF_FUR"):
			return -1923252111;
		case joaat("PROVISION_SQUIRREL_TAIL"):
			return -470304000;
		case joaat("PROVISION_EAGLE_TALON"):
			return -1074986502;
		case joaat("PROVISION_ALLIGATOR_TOOTH"):
			return -1042059910;
		case joaat("PROVISION_BOAR_TUSK"):
			return 1234479911;
		case joaat("PROVISION_BAT_WING"):
			return -591134272;
		case joaat("PROVISION_ANIMAL_SCENT_GLAND"):
			return 2092024647;
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			return -1902618794;
		default:
			break;
	}
	return 0;
}

int func_262(int iParam0, int iParam1)
{
	if (!func_193(iParam0, 0))
	{
		return func_370(func_369(iParam0), iParam1);
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

bool func_263()
{
	return (Global_1140484->f_18706[60 /*195*/])->f_194;
}

int func_264(int iParam0)
{
	if (func_371())
	{
		if (Global_1915180->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_265(int iParam0)
{
	int iVar0;

	iVar0 = func_259(iParam0);
	if (iVar0 < 2500)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_266(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 2;
	}
	return func_372(((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_1);
}

int func_267(int iParam0)
{
	if (func_154(iParam0, 64))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_268(int iParam0)
{
	int iVar0;

	iVar0 = func_260(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_269(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return ((*Global_1128435)[iVar0 /*83*/])->f_74.f_4;
}

int func_270()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return 0;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 0;
	}
	if (func_373())
	{
		return 0;
	}
	if (func_154(&Global_1275573, 8192) == 0)
	{
		return 0;
	}
	return 1;
}

int func_271(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1;
	struct<13> Var4;
	int iVar17;
	struct<13> Var18;
	int iVar31;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (bParam3)
		{
			func_374(iParam1, iParam2);
		}
		func_375(iParam1, iParam2);
		return 1;
	}
	iVar0 = func_261(iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_376(iParam1, &Var1, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		Var1 = "TRANSACTION_CAMP_GANG";
		Var1.f_1 = "ITEMTYPE_TEXTURES";
	}
	func_377(MISC::_CREATE_VAR_STRING(2, "TRANSACTION_DONATED"), Var1.f_1, MISC::GET_HASH_KEY(Var1), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	Var4.f_1 = 11;
	if (func_262(iParam1, 1064293907) || INVENTORY::_0x245D07651B1D183B(iParam1, 1073741824))
	{
		if (func_263())
		{
			func_378(&Var4, 1417019613);
		}
	}
	else if ((INVENTORY::_0x245D07651B1D183B(iParam1, 268435456) || INVENTORY::_0x245D07651B1D183B(iParam1, 134217728)) || func_262(iParam1, 1888974372))
	{
		func_378(&Var4, -688057837);
	}
	else
	{
		func_378(&Var4, 25550726);
	}
	iVar17 = iParam2;
	if (iVar17 > 10)
	{
		Var18 = { Var4 };
		func_378(&Var18, 964458272);
		while (iVar17 > 10)
		{
			if (!func_379(iVar0, uParam0, &Var18, 0, 255, 0, 0))
			{
				return 0;
			}
			iVar17 = (iVar17 - 10);
		}
	}
	iVar31 = 0;
	switch (iVar17)
	{
		case 2:
			iVar31 = 1206214767;
			break;
		case 3:
			iVar31 = 1048858029;
			break;
		case 4:
			iVar31 = 2003386234;
			break;
		case 5:
			iVar31 = 1510933702;
			break;
		case 6:
			iVar31 = -712967248;
			break;
		case 7:
			iVar31 = -1206075160;
			break;
		case 8:
			iVar31 = -246762689;
			break;
		case 9:
			iVar31 = -414474431;
			break;
		case 10:
			iVar31 = 964458272;
			break;
	}
	if (iVar31 != 0)
	{
		func_378(&Var4, iVar31);
	}
	if (!func_379(iVar0, uParam0, &Var4, 0, 255, 0, 0))
	{
		return 0;
	}
	if (bParam3)
	{
		func_374(iParam1, iParam2);
	}
	return 1;
}

void func_272(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam15))
	{
		return;
	}
	if (!func_380(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 6, &uParam15);
}

void func_273(var uParam0)
{
	func_381(uParam0, 0);
}

int func_274(int iParam0, bool bParam1)
{
	var uVar0;

	return func_382(iParam0, bParam1, &uVar0);
}

int func_275()
{
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
	{
		return 1;
	}
	return 0;
}

int func_276()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return 0;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 0;
	}
	if (func_373())
	{
		return 0;
	}
	if (UIAPPS::_IS_APP_RUNNING(joaat("TRADER")))
	{
		return 0;
	}
	if (Global_1070356->f_27249)
	{
		return 0;
	}
	if (Global_1572887->f_9)
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1324907014))
	{
		return 0;
	}
	if (func_383())
	{
		return 0;
	}
	return 1;
}

int func_277(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896726->f_384)
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_385(func_384(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_384(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_386(func_384(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_384(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_387(func_384(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_384(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_388(func_384(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_384(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_389(func_384(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_384(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_390(func_384(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_384(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_391(func_384(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_384(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

bool func_278(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_279(var uParam0)
{
	return func_278(*uParam0, 2);
}

int func_280(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

bool func_281(int* iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_289(iParam1))
	{
		return func_290(iParam0, iParam1, func_91(1), iParam3, uParam4, iParam6, iParam7);
	}
	return func_291(iParam0, iParam1, func_91(1), iParam2, iParam3, uParam4, iParam5, iParam6, iParam7, 1);
}

int func_282(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_392(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_393(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_393(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_283(var uParam0)
{
	if (!func_193(*uParam0, 0))
	{
		return 0;
	}
	if (!func_394(*uParam0))
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

int func_284(int iParam0)
{
	if (func_262(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_285(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_193(iParam0, 0))
	{
		return func_395(func_369(iParam0), bParam1);
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

int func_286(int iParam0)
{
	if (!func_56() && func_396())
	{
		return 1;
	}
	return func_262(iParam0, 1435272033);
}

struct<5> func_287(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_91(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_310(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_92(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_397(bParam1) };
			if (iParam2 && func_398(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_399(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_399(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_400(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_401(bParam1) };
			switch (func_402(iParam0))
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
			if (func_403(iParam0, -1823706425))
			{
				Var0 = { func_92(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_403(iParam0, -1483207246))
			{
				Var0 = { func_92(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_92(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_403(iParam0, -1653629781))
			{
				Var0 = { func_92(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_404(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_403(iParam0, -1653629781))
			{
				Var0 = { func_92(1384535894, Var0, 1784584921, bParam1) };
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

int func_288(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	*uParam1 = 0;
	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (func_405(iParam0))
	{
		return 0;
	}
	if (func_262(iParam0, 81450561) || func_262(iParam0, 1342455455))
	{
		return 0;
	}
	if (func_284(iParam0))
	{
		return 0;
	}
	iVar0 = func_285(iParam0, 1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_295(iVar0, -570078785, 0))
	{
		return 0;
	}
	if (Global_1915180->f_21989.f_2 == 1)
	{
		Var1 = { func_287(iParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return 0;
		}
	}
	*uParam1 = iVar0;
	return 1;
}

bool func_289(int iParam0)
{
	return func_262(iParam0, 709475682);
}

int func_290(int* iParam0, int iParam1, struct<4> Param2, int iParam6, var uParam7, int iParam8, bool bParam9)
{
	struct<16> Var0;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	struct<4> Var26;
	struct<4> Var30;
	struct<4> Var34;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;

	if (!func_193(iParam1, 0))
	{
		return 0;
	}
	if (!func_406(iParam0, 0))
	{
		return 0;
	}
	if (iParam8 == 0)
	{
		iParam8 = func_407(iParam1, iParam8, 1, -1, 1);
	}
	func_174(&bParam9, 32);
	func_174(&bParam9, 64);
	func_174(&bParam9, 4);
	func_174(&bParam9, 128);
	func_174(&bParam9, 2);
	if (iParam6 < 1)
	{
		iParam6 = 1;
	}
	if (!func_408(iParam0, iParam1, Param2, -1591664384, iParam8, iParam6, bParam9, 1))
	{
		return 0;
	}
	Var0 = { func_409(iParam1, Param2, 1084182731, iParam6, 0) };
	Var0.f_13 = iParam8;
	Var0.f_12 = 1248274121;
	*uParam7 = { Var0 };
	if (!func_410(iParam0, joaat("USE")))
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
		if (!func_193(&(Global_1051388->f_46[iVar41]), 0))
		{
		}
		else if (!func_411(&(Global_1051388->f_46[iVar41]), iVar18, &bVar20, &Var30, &uVar21, 1, iVar19))
		{
		}
		else
		{
			iVar38 = func_310(&(Global_1051388->f_46[iVar41]));
			Var26 = { func_92(&(Global_1051388->f_46[iVar41]), Var30, bVar20, 0) };
			switch (iVar38)
			{
				case joaat("WEAPON_MOD"):
				case joaat("WEAPON_DECORATION"):
					if (!func_399(&(Global_1051388->f_46[iVar41]), &Var30, bVar20, 0, 0))
					{
						if (!&Global_1051388->f_46.f_6[iVar41])
						{
						}
						else if (func_412(&(Global_1051388->f_46[iVar41])))
						{
						}
						else
						{
							iVar40 = iParam8;
							if (func_413(&(Global_1051388->f_46[iVar41]), 997808187))
							{
								iVar40 = 997808187;
							}
							if (!func_414(iParam0, &(Global_1051388->f_46[iVar41]), Var30, bVar20, 1, &Var0, 0, iVar40, 0, bParam9, 0))
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
								iVar39 = func_95(Var30, bVar20, 0, -1);
								if (!func_193(iVar39, 0))
								{
								}
								else
								{
									Var34 = { func_92(iVar39, Var34, bVar20, 0) };
									if (!func_415(Var34, 0))
									{
										bVar16 = false;
										Jump @628; //curOff = 579
									}
									else
									{
										bVar16 = true;
									}
									Jump @616; //curOff = 588
									if (!func_415(Var26, 1))
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
									func_416(iParam0);
									return 0;
								}
								if (bVar17)
								{
									if (!func_417(iParam0))
									{
										return 0;
									}
									else
									{
										iVar42 = WEAPON::_0x46F032B8DDF46CDE(iVar18);
										if (!MISC::IS_BIT_SET(&(Global_1051388->f_4349[(func_418(iVar42, 1) / 32)]), (func_418(iVar42, 1) % 32)))
										{
											func_420(func_419(joaat("UPDATED"), joaat("WEAPON_CUSTOMIZATION")), 1);
											MISC::SET_BIT(Global_1051388->f_4349[(func_418(iVar42, 1) / 32)], (func_418(iVar42, 1) % 32));
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

int func_291(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	struct<16> Var0;
	struct<17> Var16;

	if (!func_406(iParam0, 0))
	{
		return 0;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_407(iParam1, iParam10, 1, bParam11, 1);
	}
	if (!func_408(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, bParam11, bParam12))
	{
		return 0;
	}
	Var0 = { func_409(iParam1, Param2, iParam6, iParam7, bParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_310(iParam1) == joaat("CLOTHING"))
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_421(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return 0;
		}
	}
	else if (!func_422(iParam0, Var0, 2113164098, iParam9, bParam11))
	{
		return 0;
	}
	return 1;
}

void func_292(struct<9> Param0, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = Param0.f_8;
	if (INVENTORY::_0x2BAE4880DCDD560B(iVar0, 0))
	{
		iVar1 = func_423(iVar0, 0);
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

int func_293(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_294(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

int func_295(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_294(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_424(iParam0, bParam1);
	}
	return 1;
}

bool func_296(int iParam0, int iParam1)
{
	*iParam1 = func_425(iParam0, 1);
	return *iParam1 != 0;
}

bool func_297(int iParam0, int iParam1)
{
	*iParam1 = func_426(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_298()
{
	return Global_1915180->f_21962;
}

int func_299(int* iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	if (!func_406(iParam0, 0))
	{
		return 0;
	}
	if (bParam4 == 0)
	{
		bParam4 = func_168(iParam1, 0, 1, bParam5, iParam6);
	}
	if (!func_427(iParam1, bParam4, bParam5))
	{
		return 0;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = bParam4;
	uParam2->f_12 = 1248274121;
	if (!func_428(iParam0, *uParam2, 541670136, iParam3))
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

void func_300(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
}

int func_301(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_193(iParam0, 0))
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
		func_429(iParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_302(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_310(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_430(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_431(iParam0, 0);
	}
	if (func_293(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_191(bParam2), iParam0, bParam3);
	}
	else
	{
		Var3 = { func_432(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_191(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_303(int iParam0)
{
	int iVar0;
	var uVar1;

	switch (iParam0)
	{
		case -1992167326:
		case -1884014371:
		case -1871413878:
		case -1554232707:
		case -987049424:
		case -724534761:
		case -215258135:
		case -682748:
		case 892234183:
		case 1357161730:
		case 1483778247:
		case 1538293636:
		case 1581179681:
			iVar0 = func_433(iParam0, 1);
			return &(Global_1131092->f_361[iVar0]);
		default:
			break;
	}
	return uVar1;
}

int func_304(int iParam0)
{
	if (iParam0 >= 0)
	{
		return Global_1055966[iParam0 /*436*/];
	}
	return -1;
}

int func_305(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_306(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	struct<7> Var18[7];
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;

	vVar0.x = uParam1;
	vVar0.f_1 = uParam2;
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return;
	}
	iVar3 = -999;
	iVar4 = 100;
	iVar5 = 200;
	iVar6 = 100;
	iVar7 = 50;
	fVar8 = 800f;
	fVar9 = 1400f;
	fVar10 = 2000f;
	iVar68 = _NAMESPACE26::_0xD1BF325C8252A982(iParam0, &Var18);
	iVar69 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	iVar71 = func_434(vVar0);
	iVar72 = 0;
	while (iVar72 <= (iVar71 - 1))
	{
		((*uParam3)[iVar72 /*4*/])->f_1 = uParam1;
		((*uParam3)[iVar72 /*4*/])->f_1.f_1 = uParam2;
		((*uParam3)[iVar72 /*4*/])->f_1.f_2 = func_435(iVar72, vVar0);
		if (func_309(((*uParam3)[iVar72 /*4*/])->f_1, iVar69, iVar68, iParam4))
		{
			(*uParam3)[iVar72 /*4*/] = (uParam3[iVar72 /*4*/] + iVar4);
			if (!func_77(((*uParam3)[iVar72 /*4*/])->f_1, &vVar15))
			{
			}
			else
			{
				iVar73 = 0;
				while (iVar73 <= (iVar68 - 1))
				{
					iVar70 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var18[iVar73 /*7*/]);
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar70))
					{
						vVar12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar70), false, false) };
						fVar11 = BUILTIN::VDIST(vVar12, vVar15);
						if (fVar11 < fVar8)
						{
							(*uParam3)[iVar72 /*4*/] = (uParam3[iVar72 /*4*/] + iVar5);
						}
						else if (fVar11 < fVar9)
						{
							(*uParam3)[iVar72 /*4*/] = (uParam3[iVar72 /*4*/] + iVar6);
						}
						else if (fVar11 < fVar10)
						{
							(*uParam3)[iVar72 /*4*/] = (uParam3[iVar72 /*4*/] + iVar7);
						}
					}
					iVar73++;
				}
				Jump @376; //curOff = 365
				(*uParam3)[iVar72 /*4*/] = iVar3;
			}
			iVar72++;
		}
	}

int func_307(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	NETWORK::_0x7E300B5B86AB1D1A(uParam0, *uParam0, 4, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar3 = uParam0[0 /*4*/];
	if (iVar3 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= (*uParam0 - 1))
	{
		if (uParam0[iVar1 /*4*/] == iVar3)
		{
			iVar2 = iVar1;
		}
	else
	{
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 > 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
	}
	else
	{
		iVar1 = 0;
	}
	uVar0 = ((*uParam0)[iVar1 /*4*/])->f_1.f_2;
	return uVar0;
}

int func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -682748;
		case 1:
			return 1357161730;
		case 2:
			return 1581179681;
		case 3:
			return -215258135;
		case 4:
			return -987049424;
		case 5:
			return 892234183;
		case 6:
			return -1554232707;
		case 7:
			return 1538293636;
		case 8:
			return -1992167326;
		case 9:
			return -1884014371;
		case 10:
			return -1871413878;
		case 11:
			return 1483778247;
		case 12:
			return -724534761;
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

int func_309(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	vector3 vVar0;

	if (vParam0.z == 0)
	{
		return 0;
	}
	if (!func_77(vParam0, &vVar0))
	{
		return 0;
	}
	if (func_78(vParam0, iParam3, vVar0, iParam4, 1, 0, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_310(int iParam0)
{
	vector3 vVar0;

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_311(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_430(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_436("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_437(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_438(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_439(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_439(iVar1);
	}
	return 0;
}

bool func_312(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_193(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_402(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_440(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_441(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_442(iParam0);
	iVar2 = func_441(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_313(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_191(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, bParam1, &uVar0))
	{
		return 0;
	}
	if (!func_443(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_314()
{
	return Global_1893575->f_2;
}

bool func_315(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_316(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_444(vParam0);
	iVar1 = -1;
	if (Global_1893558[iVar0] > 0)
	{
		iVar2 = (Global_1893558[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892741)[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1887327)[iVar4 /*36*/])->f_4))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar4 /*36*/])->f_4, vParam0))
				{
					switch (((*Global_1887327)[iVar4 /*36*/])->f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_317(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_318(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_3438[iParam0 /*4*/])->f_1;
	}
	return (Global_24750[iParam0 /*4*/])->f_1;
}

int func_319(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_3438[iParam0 /*4*/]);
	}
	return &(Global_24750[iParam0 /*4*/]);
}

int func_320(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_3438[iParam0 /*4*/])->f_2;
	}
	return (Global_24750[iParam0 /*4*/])->f_2;
}

void func_321(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		(Global_39.f_3438[iParam0 /*4*/])->f_3 = iParam1;
		return;
	}
	(Global_24750[iParam0 /*4*/])->f_3 = iParam1;
	return;
}

void func_322(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_445(func_320(iParam0)) };
	Global_16843[iParam0] = MAP::_BLIP_ADD_FOR_COORD(func_446(func_318(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(&(Global_16843[iParam0]), func_447(func_318(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(&(Global_16843[iParam0]), func_318(iParam0), iParam0);
}

int func_323(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 30:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 29:
			return joaat("REGION_BGV_OLD_MAN_JONES");
		case 31:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 32:
			return joaat("REGION_BLU_COPPERHEAD");
		case 33:
			return joaat("REGION_BLU_SISIKA");
		case 34:
			return joaat("REGION_BLU_TRAVELLING_SALESMAN");
		case 35:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 36:
			return joaat("REGION_CML_DINO_LADY");
		case 37:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 38:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 39:
			return joaat("REGION_GRT_BEECHERS");
		case 40:
			return joaat("REGION_GRT_BLACKWATER");
		case 41:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 42:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 43:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 53:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 54:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 44:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 55:
			return joaat("REGION_GRZ_COHUTTA");
		case 45:
			return joaat("REGION_GRZ_COLTER");
		case 56:
			return joaat("REGION_GRZ_COTORRA_SPRINGS");
		case 46:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 57:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 47:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 48:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 49:
			return joaat("REGION_GRZ_MOUNT_HAGEN_PEAK");
		case 50:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 51:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 58:
			return joaat("REGION_GRZ_THELOFT");
		case 59:
			return joaat("REGION_GRE_VETERAN");
		case 60:
			return joaat("REGION_GRZ_WAPITI");
		case 52:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 61:
			return joaat("REGION_GRZ_TRAVELLING_SALESMAN");
		case 62:
			return joaat("REGION_GUA_AGUASDULCES");
		case 63:
			return joaat("REGION_GUA_CAMP");
		case 64:
			return joaat("REGION_GUA_CINCOTORRES");
		case 65:
			return joaat("REGION_GUA_LACAPILLA");
		case 66:
			return joaat("REGION_GUA_MANICATO");
		case 67:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 69:
			return joaat("REGION_HRT_CARMODYDELL");
		case 70:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 71:
			return joaat("REGION_HRT_CROP_FARM");
		case 72:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 73:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 74:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 75:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 76:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 77:
			return joaat("REGION_HRT_LARNEDSOD");
		case 78:
			return joaat("REGION_HRT_LOONY_CULT");
		case 79:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 80:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 81:
			return joaat("REGION_HRT_VALENTINE");
		case 82:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 83:
			return joaat("REGION_ROA_ANNESBURG");
		case 84:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 68:
			return joaat("REGION_ROA_BEECHERS_C");
		case 85:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 86:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 87:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 88:
			return joaat("REGION_ROA_DOVERHILL");
		case 89:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 90:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 91:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 92:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 93:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 94:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 95:
			return joaat("REGION_ROA_TRAPPER");
		case 97:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 98:
			return joaat("REGION_ROA_VANHORNPOST");
		case 96:
			return joaat("REGION_ROA_OLD_MAN_JONES");
		case 99:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 100:
			return joaat("REGION_SCM_BULGERGLADE");
		case 101:
			return joaat("REGION_SCM_CALIGAHALL");
		case 102:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 103:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 104:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 105:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 106:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 107:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 108:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 109:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 110:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 111:
			return joaat("REGION_SCM_RHODES");
		case 112:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 113:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 115:
			return joaat("REGION_TAL_COCHINAY");
		case 116:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 117:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 118:
			return joaat("REGION_TAL_TANNERSREACH");
		case 114:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 119:
			return joaat("REGION_TAL_TRAPPER");
		case 134:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 135:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 136:
			return joaat("REGION_HEN_TRAVELLING_SALESMAN");
		case 127:
			return joaat("REGION_CHO_ARMADILLO");
		case 128:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 129:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 131:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 130:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 132:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 133:
			return joaat("REGION_CHO_TRAVELLING_SALESMAN");
		case 120:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 121:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 122:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 123:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 124:
			return joaat("REGION_RIO_FORT_MERCER");
		case 125:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 126:
			return joaat("REGION_RIO_TRAVELLING_SALESMAN");
		case 137:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	if (bParam1)
	{
		return joaat("WILDERNESS");
	}
	return 0;
}

int func_324(struct<2> Param0)
{
	int iVar0;

	if (!func_44(Param0))
	{
		return -1;
	}
	iVar0 = func_448(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

void func_325(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;

	Var0.f_8 = iParam0;
	if (bParam1)
	{
		iVar14 = 5;
	}
	else
	{
		iVar14 = 6;
	}
	func_272(iVar14, Var0, func_326(0, 8));
}

var func_326(int iParam0, int iParam1)
{
	return func_449(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

int func_327(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_176(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -238050295;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
		return 1;
	}
	return 0;
}

int func_328(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	int iVar13;

	if (!func_176(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -402732872;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var0.f_2 = -1420258246;
		if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var0))
		{
			return 0;
		}
		iVar13 = 0;
		while (iVar13 <= 50)
		{
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(*uParam3, iVar13, &vVar10, 17, 1077936128, 0))
			{
				*fParam4 = func_450(*uParam3, vVar10, 1);
				return 1;
			}
			iVar13++;
		}
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
	}
	return 0;
}

int func_329(vector3 vParam0, int iParam3, var uParam4, float fParam5)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_176(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -1763127828;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = iParam3;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam4, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam5, &Var5);
		return 1;
	}
	return 0;
}

int func_330(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_176(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 952598509;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
		return 1;
	}
	return 0;
}

int func_331(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_176(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -466985247;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
		return 1;
	}
	return 0;
}

int func_332(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_176(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -1629816098;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
		return 1;
	}
	return 0;
}

int func_333(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_176(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 1078091189;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
		return 1;
	}
	return 0;
}

Vector3 func_334(int iParam0)
{
	vector3 vVar0;

	if (!func_74(iParam0))
	{
		return vVar0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_1;
}

struct<16> func_335(var uParam0, bool bParam1)
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
		Var0.f_15 = func_293(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_192() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

char* func_336(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case -682748:
				return "GC_GRIZZLIES_DIST";
			case 1357161730:
				return "GC_BAYOU_DIST";
			case 1581179681:
				return "GC_BIG_VALLEY_DIST";
			case -987049424:
				return "GC_CUMBERLAND_FOREST_DIST";
			case -1554232707:
				return "GC_GREAT_PLAINS_DIST";
			case 1538293636:
				return "GC_HEARTLANDS_DIST";
			case -1871413878:
				return "GC_ROANOKE_RIDGE_DIST";
			case 1483778247:
				return "GC_SCARLETT_MEADOWS_DIST";
			case -724534761:
				return "GC_TALL_TREES_DIST";
			case 892234183:
				return "GC_GAPTOOTH_RIDGE_DIST";
			case -1884014371:
				return "GC_RIO_BRAVO_DIST";
			case -215258135:
				return "GC_CHOLLA_SPRINGS_DIST";
			case -1992167326:
				return "GC_HENNIGANS_STEAD_DIST";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -682748:
				return "GRIZZLIES_DIST";
			case 1357161730:
				return "BAY";
			case 1581179681:
				return "BGV";
			case -987049424:
				return "CML";
			case -1554232707:
				return "GRT";
			case 1538293636:
				return "HRT";
			case -1871413878:
				return "ROA";
			case 1483778247:
				return "SCM";
			case -724534761:
				return "TAL";
			case 892234183:
				return "GAP";
			case -1884014371:
				return "RIO";
			case -215258135:
				return "CHO";
			case -1992167326:
				return "HEN";
			default:
				break;
		}
	}
	return "NM_GC_TEXT_CAMP_NONE";
}

int func_337(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = func_355(iParam0);
	if (!func_193(iVar0, 0))
	{
		return 0;
	}
	uVar1 = func_451(iVar0, 0, 59806960);
	return uVar1;
}

bool func_338(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_339()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_3;
}

bool func_340()
{
	return !func_42(2);
}

int func_341()
{
	int iVar0;

	iVar0 = func_206(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_18.f_1 != 0 && func_65(((*Global_1125276)[iVar0 /*27*/])->f_18, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_342(int iParam0)
{
	func_43(&(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_4), iParam0);
}

struct<7> func_343(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_344()
{
	bool bVar0;

	bVar0 = (((Global_1126368->f_1987 == 2 || (Global_1126368->f_1987 >= 6 && Global_1126368->f_1987 <= 11)) || Global_1126368->f_1987 == 12) || (Global_1126368->f_1987 >= 13 && Global_1126368->f_1987 <= 19));
	return bVar0;
}

bool func_345(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	vVar1 = { func_334(func_452(iVar0)) };
	return (vVar1.y == iParam0 && iParam1 == vVar1.x);
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1975753417;
		case 7:
			return -142724881;
		default:
			break;
	}
	return 0;
}

bool func_347(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = (func_451(iParam0, 0, bParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_453(iVar0);
	}
	return bVar1;
}

int func_348(vector3 vParam0, bool bParam3)
{
	int iVar0;
	struct<19> Var1;

	iVar0 = -1;
	Var1 = { func_229(0) };
	Var1.f_17 = vParam0.y;
	Var1.f_18 = vParam0.z;
	Var1.f_16 = vParam0.x;
	iVar0 = func_454(joaat("UPDATE"), &Var1, bParam3);
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

void func_349(int iParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_38.f_7 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_38.f_8 = { vParam1 };
}

int func_350(int iParam0)
{
	int iVar0;

	iVar0 = func_392(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_351(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<16> Var53;

	if (!func_193(iParam0, 0))
	{
		return -1;
	}
	if (func_310(iParam0) != joaat("FEE"))
	{
		return -1;
	}
	if (func_455())
	{
		bParam3 = true;
	}
	if (bParam5 == -570078785 || bParam5 == -915411861)
	{
		iVar0 = (func_456(iParam0, bParam5, 1, 0, 1, joaat("CURRENCY_CASH")) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_456(iParam0, bParam5, 1, 0, 1, joaat("CURRENCY_GOLD_BAR")) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_301(iParam0, bParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
			if (!func_302(&(Var2[iVar35 /*2*/]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_457(0))
	{
		if (iVar0 > 0)
		{
			func_458(joaat("CURRENCY_CASH"), iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_458(joaat("CURRENCY_GOLD_BAR"), iVar1, -142743235, 0, 0);
		}
		else if (func_459(bParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
				func_458(&(Var2[iVar35 /*2*/]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = bParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_460(joaat("SPEND"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_461(iVar52, Var53);
	}
	return iVar52;
}

void func_352(int iParam0)
{
	struct<14> Var0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	Var0.f_5 = { ((*Global_1125276)[iParam0 /*27*/])->f_1 };
	func_272(11, Var0, func_462(_NAMESPACE26::_0x901E0DC25080C8B9(((*Global_1125276)[iParam0 /*27*/])->f_9)));
}

int func_353(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_354(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1082007132;
		case 7:
			return -1321348724;
		default:
			break;
	}
	return 0;
}

void func_356(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_463(*uParam0);
	iVar1 = func_464(*uParam0);
	if (iParam1 < 1 || iParam1 > func_465(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

int func_357()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2;
	}
	return 255;
}

int func_358()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_3;
	}
	return -1;
}

void func_359(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2) || ((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2 == iParam0) || bParam1)
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2 = 255;
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_3 = -1;
		}
	}
}

int func_360(struct<7> Param0, struct<7> Param7)
{
	if (Param0 > Param7)
	{
		return 1;
	}
	else if (Param7 > Param0)
	{
		return 0;
	}
	if (Param0.f_1 > Param7.f_1)
	{
		return 1;
	}
	else if (Param7.f_1 > Param0.f_1)
	{
		return 0;
	}
	if (Param0.f_2 > Param7.f_2)
	{
		return 1;
	}
	else if (Param7.f_2 > Param0.f_2)
	{
		return 0;
	}
	if (Param0.f_3 > Param7.f_3)
	{
		return 1;
	}
	else if (Param7.f_3 > Param0.f_3)
	{
		return 0;
	}
	if (Param0.f_4 > Param7.f_4)
	{
		return 1;
	}
	else if (Param7.f_4 > Param0.f_4)
	{
		return 0;
	}
	if (Param0.f_5 > Param7.f_5)
	{
		return 1;
	}
	else if (Param7.f_5 > Param0.f_5)
	{
		return 0;
	}
	if (Param0.f_6 > Param7.f_6)
	{
		return 1;
	}
	else if (Param7.f_6 > Param0.f_6)
	{
		return 0;
	}
	return 0;
}

struct<10> func_361(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

int func_362(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0, int iParam1)
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

int func_364(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_466())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_467(func_466(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_365(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	((*Global_1128435)[iParam0 /*83*/])->f_38.f_28 = iParam1;
	Global_1131092->f_339 = iParam1;
}

int func_366(int iParam0)
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

char* func_367(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_232(39, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1099294->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1099294->f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1275573->f_22[iParam0])
	{
		return sVar0;
	}
	if (func_232(39, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1097610)[iParam0 /*51*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1097610)[iParam0 /*51*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1275573->f_154[iParam0]));
}

char* func_368(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_369(int iParam0)
{
	return iParam0;
}

int func_370(int iParam0, int iParam1)
{
	if (!func_468(iParam0, 2))
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

bool func_371()
{
	return (Global_1915180->f_20135 || Global_1915180->f_21989.f_1);
}

int func_372(int iParam0)
{
	if (!func_193(iParam0, 0))
	{
		return 2;
	}
	switch (iParam0)
	{
		case 1046181202: /* GXTEntry: "Base Quality Stew" */
			return 2;
		case 1856073229: /* GXTEntry: "Low Quality Stew" */
			return 3;
		case -1612693182: /* GXTEntry: "Medium Quality Stew" */
			return 4;
		case 1689071181: /* GXTEntry: "High Quality Stew" */
			return 5;
		case -1171462349: /* GXTEntry: "Superior Quality Stew" */
			return 6;
		default:
			break;
	}
	if (func_262(iParam0, -2011345500))
	{
		return 7;
	}
	return 2;
}

bool func_373()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

int func_374(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var14;

	iVar0 = iParam1;
	if (iParam1 == 1)
	{
	}
	Var1.f_1 = 11;
	while (iVar0 > 10)
	{
		func_378(&Var1, 964458272);
		if (!func_469(-1463094839, &Var1, 0, 255, 0, 0))
		{
			return 0;
		}
		iVar0 = (iVar0 - 10);
	}
	Var14.f_1 = 11;
	switch (iVar0)
	{
		case 2:
			func_378(&Var14, 1206214767);
			break;
		case 3:
			func_378(&Var14, 1048858029);
			break;
		case 4:
			func_378(&Var14, 2003386234);
			break;
		case 5:
			func_378(&Var14, 1510933702);
			break;
		case 6:
			func_378(&Var14, -712967248);
			break;
		case 7:
			func_378(&Var14, -1206075160);
			break;
		case 8:
			func_378(&Var14, -246762689);
			break;
		case 9:
			func_378(&Var14, -414474431);
			break;
		case 10:
			func_378(&Var14, 964458272);
			break;
	}
	if (!func_469(-1463094839, &Var14, 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_375(int iParam0, int iParam1)
{
	if (((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_8 != 0)
	{
		return 0;
	}
	((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_8 = iParam0;
	((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_6 = iParam1;
	((*Global_1128435)[&Global_1275573 /*83*/])->f_74.f_7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	return 1;
}

int func_376(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

var func_377(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_470(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_378(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_RAGE_STORE_N_SR >= 11)
	{
		return;
	}
}

bool func_379(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_471(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

int func_380(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1126368->f_2017 == 0 || (MISC::_GET_SYSTEM_TIME() - Global_1126368->f_2017) >= 1000)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_1126368->f_2017 == 0)
	{
		Global_1126368->f_2017 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1126368->f_2017) >= 1000)
	{
		Global_1126368->f_2017 = MISC::_GET_SYSTEM_TIME();
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_381(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_472(uParam0, 1);
	func_473(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_382(int iParam0, bool bParam1, var uParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_474(iParam0, bParam1, &Var0, &iVar31, 0, 1))
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
				if (!func_453((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (&Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!func_475((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (func_302(&(Var0[iVar32 /*2*/]), 0, 0, 1) < (Var0[iVar32 /*2*/])->f_1)
			{
				*uParam2 = { *(Var0[iVar32 /*2*/]) };
				return 0;
			}
			iVar32++;
		}
	}
	return 1;
}

int func_383()
{
	struct<2> Var0;

	Var0 = { func_207(0) };
	if (func_44(Var0) && func_208(Var0))
	{
		if ((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 7)
		{
			return 1;
		}
	}
	return 0;
}

char* func_384(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_368(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_385(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	struct<10> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_386(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = _NAMESPACE71::_0xC927890AA64E9661(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_387(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_388(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = _NAMESPACE71::_0xC927890AA64E9661(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_389(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_390(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x3F9FDDBA79117C69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_391(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam4;
	Var0.f_1 = uParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = uParam7;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_392(int iParam0)
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

void func_393(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_476(iParam0, iParam1, iParam2, iParam3);
}

bool func_394(int iParam0)
{
	return func_262(iParam0, 1279601681);
}

int func_395(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_468(iParam0, 2))
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

bool func_396()
{
	return func_477(func_207(0));
}

struct<4> func_397(bool bParam0)
{
	int iVar0;

	iVar0 = func_191(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_92(923904168, func_91(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_92(923904168, func_91(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_92(923904168, func_91(bParam0), -740156546, 0);
}

int func_398(int iParam0, bool bParam1)
{
	if (func_402(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_478();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_399(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4)
{
	return func_164(iParam0, *uParam1, bParam2, iParam3, 1, bParam4) > 0;
}

int func_400(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_479(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_401(bool bParam0)
{
	int iVar0;

	iVar0 = func_191(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_92(271701509, func_91(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_92(271701509, func_91(bParam0), 12999093, 0);
}

int func_402(int iParam0)
{
	struct<2> Var0;

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_403(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_402(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &bVar0))
		{
			if (func_480(iParam0, iParam1, bVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_404(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_443(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_405(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_19() == -1)
	{
		if (func_481(iParam0))
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

int func_406(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_162(iParam0))
		{
			return 0;
		}
	}
	if (func_482(&(iParam0->f_6)))
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

int func_407(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (func_284(iParam0))
	{
		return func_168(func_285(iParam0, 0), iParam1, bParam2, bParam3, func_286(iParam0));
	}
	if (func_483(iParam0, bParam4) || func_484(iParam0))
	{
		iParam1 = 997808187;
	}
	else if (func_286(iParam0) && (func_485(iParam0, &iVar0) || func_486(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_413(iParam0, -570078785);
		bVar2 = func_413(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			iParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_298())
			{
				iParam1 = -570078785;
			}
			else
			{
				iParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			iParam1 = -915411861;
		}
		else
		{
			iParam1 = 0;
		}
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_408(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<10> Var0;
	struct<4> Var14;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (func_173(bParam9, 32))
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_404(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_480(iParam1, func_402(Var0.f_4), bParam6))
		{
			return 0;
		}
	}
	if (func_173(bParam9, 1))
	{
		if (!func_405(iParam1))
		{
			return 0;
		}
	}
	if (func_173(bParam9, 2))
	{
		if (func_487(iParam1, bParam7, 1))
		{
			return 0;
		}
	}
	if (func_173(bParam9, 4))
	{
		if (!bParam10 && !INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = bParam6;
		Var14 = { Param2 };
		iVar19 = func_164(iParam1, Param2, bParam6, 1, !bParam10, 0);
		iVar20 = func_488(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_489(iParam1, bParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_490(iParam0, iParam1) * iVar21);
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
	if (func_173(bParam9, 8))
	{
		return func_491(iParam0, iParam1, bParam7, iParam8);
	}
	return 1;
}

struct<16> func_409(int iParam0, struct<4> Param1, bool bParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_92(iParam0, Var0.f_4, bParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = bParam5;
	if (bParam7)
	{
		Var0.f_15 = func_293(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_192() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_410(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, joaat("BASKET"), iParam1))
	{
		return 0;
	}
	return 1;
}

int func_411(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
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
		iVar1 = func_402(iParam1);
		iVar5 = func_492(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &bVar2))
			{
				if (func_480(iParam0, iVar1, bVar2))
				{
					*uParam4 = { func_287(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_92(iParam1, *uParam4, uParam4->f_4, 0) };
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
			iVar34 = func_191(0);
			Var37 = { func_287(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_92(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_402(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &bVar2))
						{
							if (func_480(iParam0, iVar1, bVar2))
							{
								if (func_493(Var42, Var6.f_9, &Var20, 0, -1))
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

bool func_412(int iParam0)
{
	return func_262(iParam0, 1282106666);
}

bool func_413(int iParam0, bool bParam1)
{
	if (!func_193(iParam0, 0))
	{
		return false;
	}
	if (func_284(iParam0))
	{
		return func_295(func_285(iParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, bParam1) > 0;
}

int func_414(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<16> Var0;

	if (!func_406(iParam0, 0))
	{
		return 0;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_407(iParam1, iParam10, 1, bParam12, 1);
	}
	if (!func_494(iParam0, iParam1, Param2, bParam6, iParam10, bParam12))
	{
		return 0;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_8 = iParam1;
	Var0.f_9 = 1;
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	Var0.f_4 = { Param2 };
	Var0.f_11 = bParam6;
	Var0.f_10 = iParam7;
	Var0.f_14 = iParam11;
	if (bParam13)
	{
		Var0.f_15 = func_293(iParam1, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_192() };
			Var0.f_11 = 0;
		}
	}
	*iParam8 = { Var0 };
	if (!func_422(iParam0, Var0, 2113164098, bParam9, bParam12))
	{
		return 0;
	}
	return 1;
}

int func_415(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_457(0))
	{
		return func_495(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_404(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_191(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_416(int* iParam0)
{
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_393(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

int func_417(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_393(*iParam0, 0, 0, 0);
		return 1;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_393(*iParam0, 4, 0, 0);
		return 1;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_393(*iParam0, 2, 0, 0);
		return 0;
	}
	func_393(*iParam0, 1, 0, 0);
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

int func_418(int iParam0, int iParam1)
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

struct<2> func_419(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_420(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_421(int* iParam0, struct<16> Param1, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != joaat("SELL")) && iParam18 != joaat("UPDATE"))
	{
		return 0;
	}
	if (!func_496(iParam18, Param1, iParam20))
	{
		return 0;
	}
	if (!func_497(iParam0, iParam18))
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
	return func_498(iParam0, bParam19);
}

int func_422(int* iParam0, struct<16> Param1, int iParam17, bool bParam18, bool bParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != joaat("SELL")) && iParam17 != joaat("UPDATE")) && iParam17 != joaat("USE")) && iParam17 != joaat("SPEND"))
	{
		return 0;
	}
	if (!func_496(iParam17, Param1, bParam19))
	{
		return 0;
	}
	if (!func_497(iParam0, iParam17))
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
	return func_498(iParam0, bParam18);
}

int func_423(int iParam0, int iParam1)
{
	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0x2BAE4880DCDD560B(iParam0, iParam1))
	{
		return 0;
	}
	return INVENTORY::_0x2E1CDC1FF3B8473E(iParam0, iParam1);
}

int func_424(int iParam0, bool bParam1)
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

int func_425(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_499(iVar0, 1, 0);
		if (!func_474(iParam0, bVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_500(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || func_302(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
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

bool func_426(int iParam0, bool bParam1, bool bParam2)
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
		bVar40 = func_499(iVar0, 0, 1);
		if (!func_474(iParam0, bVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_501(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || func_302(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
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

int func_427(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_295(iParam0, bParam1, 0))
	{
		return 0;
	}
	if (func_173(bParam2, 2))
	{
		if (func_424(iParam0, bParam1))
		{
			return 0;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 0;
	}
	if (func_173(bParam2, 8))
	{
		return func_502(iParam0, bParam1);
	}
	return 1;
}

int func_428(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return 0;
	}
	if (!func_503(Param1))
	{
		return 0;
	}
	if (!func_497(iParam0, iParam18))
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
	return func_498(iParam0, bParam19);
}

void func_429(int iParam0, bool bParam1, var uParam2, int iParam3)
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

int func_430(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_310(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_262(iParam0, 1399091007))
	{
		func_504(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_431(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_505(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_506(&Var0, func_397(0));
	}
	if (!func_507(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_439(iVar14);
	return uVar15;
}

struct<4> func_432(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_287(iParam0, bParam1, 0) };
	return func_92(iParam0, Var0, Var0.f_4, bParam1);
}

int func_433(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1992167326:
			return 8;
		case -1884014371:
			return 9;
		case -1871413878:
			return 10;
		case -1554232707:
			return 6;
		case -987049424:
			return 4;
		case -724534761:
			return 12;
		case -215258135:
			return 3;
		case -682748:
			return 0;
		case 892234183:
			return 5;
		case 1357161730:
			return 1;
		case 1483778247:
			return 11;
		case 1538293636:
			return 7;
		case 1581179681:
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

int func_434(vector3 vParam0)
{
	struct<4> Var0;
	int iVar5;

	if (!func_176(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -265879762;
	Var0.f_3 = 0;
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	return iVar5;
}

int func_435(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	if (!func_176(&Var2, vParam1))
	{
		return 0;
	}
	Var2.f_2 = -265879762;
	Var2.f_3 = iParam0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = 536676462;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar1, &Var2))
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

int func_436(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_191(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_437(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_438(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_439(int iParam0)
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

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_441(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_442(int iParam0)
{
	int iVar0;

	iVar0 = func_402(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_443(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_191(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_444(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_508(vParam0, 0f, 0f, 0, 2);
	return func_508(vParam0, ((*Global_1892728)[iVar0 /*3*/])->f_1, ((*Global_1892728)[iVar0 /*3*/])->f_2, Global_1892728[iVar0 /*3*/], 4);
}

Vector3 func_445(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -678244495;
		case 1:
			return -678244495;
		case 2:
			return -678244495;
		case 4:
			return -678244495;
		case 5:
			return -678244495;
		case 6:
			return -678244495;
		case 7:
			return -678244495;
		case 8:
			return -678244495;
		case 9:
			return -678244495;
		case 10:
			return -678244495;
		case 11:
			return -678244495;
		case 12:
			return -678244495;
		case 14:
			return -936216634;
		case 13:
			return -936216634;
		case 15:
			return -936216634;
		case 16:
			return -936216634;
		case 17:
			return -936216634;
		case 18:
			return -936216634;
		case 19:
			return -936216634;
		case 20:
			return 168093330;
		case 21:
			return 168093330;
		case 22:
			return 168093330;
		case 23:
			return 168093330;
		case 24:
			return 168093330;
		case 25:
			return 168093330;
		case 26:
			return 168093330;
		case 28:
			return 168093330;
		case 29:
			return 168093330;
		case 33:
			return 168093330;
		case 34:
			return 168093330;
		case 30:
			return 168093330;
		case 32:
			return 168093330;
		case 31:
			return 168093330;
		case 35:
			return 168093330;
		case 36:
			return 168093330;
		case 37:
			return 168093330;
		case 38:
			return 168093330;
		case 39:
			return 168093330;
		case 27:
			return 168093330;
		case 51:
			return 168093330;
		case 52:
			return 168093330;
		case 40:
			return 168093330;
		case 41:
			return 168093330;
		case 42:
			return 168093330;
		case 47:
			return 168093330;
		case 48:
			return 168093330;
		case 43:
			return 168093330;
		case 44:
			return 168093330;
		case 49:
			return -691985497;
		case 50:
			return 168093330;
		case 45:
			return -1923570663;
		case 53:
			return -972966383;
		case 54:
			return -972966383;
		case 55:
			return -972966383;
		case 46:
			return -678244495;
		case 56:
			return -678244495;
		case 57:
			return -678244495;
		case 58:
			return -678244495;
		case 59:
			return 1560611276;
		case 60:
			return -494978356;
		case 61:
			return -494978356;
		case 62:
			return -494978356;
		case 63:
			return -494978356;
		case 64:
			return -507182222;
		case 65:
			return -1337945352;
		case 66:
			return -678244495;
		case 67:
			return -678244495;
		case 68:
			return -678244495;
		case 69:
			return -383696203;
		case 95:
			return 1560611276;
		case 96:
			return 776060936;
		case 97:
			return 168093330;
		default:
			break;
	}
	return 0;
}

int func_447(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MG_POKER");
		case 1:
			return joaat("BLIP_MG_BLACKJACK");
		case 2:
			return joaat("BLIP_MG_DOMINOES");
		case 4:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET");
		case 5:
			return joaat("BLIP_SUMMER_COW");
		case 6:
			return joaat("BLIP_SUMMER_HORSE");
		case 7:
			return joaat("BLIP_FENCE_BUILDING");
		case 8:
			return joaat("BLIP_MG_DOMINOES_ALL3S");
		case 9:
			return joaat("BLIP_MG_DOMINOES_ALL5S");
		case 10:
			return joaat("BLIP_MG_DOMINOES_DRAW");
		case 11:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT");
		case 12:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET_GUTS");
		case 14:
			return joaat("BLIP_PROC_LOANSHARK");
		case 13:
			return joaat("BLIP_AMBIENT_HERD");
		case 16:
			return joaat("BLIP_PROC_BOUNTY_POSTER");
		case 17:
			return joaat("BLIP_AMBIENT_COACH");
		case 18:
			return joaat("BLIP_AMBIENT_TRAIN");
		case 19:
			return joaat("BLIP_AMBIENT_RIVERBOAT");
		case 20:
			return joaat("BLIP_SHOP_STORE");
		case 21:
			return joaat("BLIP_SHOP_SHADY_STORE");
		case 22:
			return joaat("BLIP_AMBIENT_QUARTERMASTER");
		case 23:
			return joaat("BLIP_SHOP_GUNSMITH");
		case 24:
			return joaat("BLIP_SHOP_COACH_FENCING");
		case 25:
			return joaat("BLIP_SHOP_DOCTOR");
		case 26:
			return joaat("BLIP_SHOP_TAILOR");
		case 28:
			return joaat("BLIP_SHOP_BLACKSMITH");
		case 29:
			return joaat("BLIP_SHOP_TRAINER");
		case 33:
			return joaat("BLIP_POST_OFFICE");
		case 34:
			return joaat("BLIP_POST_OFFICE_REC");
		case 30:
			return joaat("BLIP_SHOP_TRAIN");
		case 31:
			return joaat("BLIP_SHOP_BARBER");
		case 32:
			return joaat("BLIP_SHOP_BUTCHER");
		case 35:
			return joaat("BLIP_SHOP_TACKLE");
		case 36:
			return joaat("BLIP_SHOP_ANIMAL_TRAPPER");
		case 37:
			return joaat("BLIP_SHOP_HORSE");
		case 38:
			return joaat("BLIP_SHOP_HORSE_FENCING");
		case 39:
			return joaat("BLIP_SHOP_HORSE_SADDLE");
		case 27:
			return joaat("BLIP_SALOON");
		case 40:
			return joaat("BLIP_HOTEL_BED");
		case 41:
			return joaat("BLIP_PHOTO_STUDIO");
		case 51:
			return joaat("BLIP_SHOP_WARDROBE");
		case 52:
			return joaat("BLIP_STABLE");
		case 53:
			return joaat("BLIP_PROC_HOME");
		case 54:
			return joaat("BLIP_PROC_HOME_LOCKED");
		case 55:
			return joaat("BLIP_PROC_HOME");
		case 56:
			return joaat("BLIP_AMBIENT_TELEGRAPH");
		case 57:
			return joaat("BLIP_AMBIENT_COACH_TAXI");
		case 58:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 59:
			return joaat("BLIP_REGION_CARAVAN");
		case 60:
			return joaat("BLIP_EVENT_APPLESEED");
		case 61:
			return joaat("BLIP_EVENT_CASTOR");
		case 62:
			return joaat("BLIP_EVENT_RAILROAD_CAMP");
		case 63:
			return joaat("BLIP_EVENT_RIGGS_CAMP");
		case 64:
			return joaat("BLIP_REGION_HIDEOUT");
		case 65:
			return joaat("BLIP_PROC_HOME");
		case 66:
			return joaat("BLIP_MG_FISHING");
		case 67:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 68:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 69:
			return joaat("BLIP_TOWN");
		case 42:
			return joaat("BLIP_AMBIENT_LAW");
		case 47:
			return joaat("BLIP_AMBIENT_QUARTERMASTER");
		case 48:
			return joaat("BLIP_MP_TRAVELLING_SALESWOMAN");
		case 43:
			return joaat("BLIP_MP_ORDERED_ITEM");
		case 44:
			return joaat("BLIP_MP_BUTCHER_TABLE");
		case 45:
			return joaat("BLIP_SHOP_HONOR");
		case 46:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 95:
			return joaat("BLIP_CAMP");
		case 96:
			return joaat("BLIP_CAMP");
		case 97:
			return joaat("BLIP_GRUB");
		case 50:
			return joaat("BLIP_MOONSHINE_STILL");
		case 49:
			return joaat("BLIP_BUSINESS_MOONSHINE");
		default:
			break;
	}
	return 0;
}

int func_448(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1070356->f_17817 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_509(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_509(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

var func_449(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_510() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1275573->f_10;
	iVar6 = Global_1275573->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_511());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_511());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_511());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_512(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar2])))
		{
			iVar10 = &Global_1275573->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_513(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1275573->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_514(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_515(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

float func_450(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_451(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	return func_456(iParam0, bParam2, 1, bParam1, 1, 0);
}

int func_452(int iParam0)
{
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_206(PLAYER::PLAYER_ID());
	}
	return func_227(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0));
}

bool func_453(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_19() == 0)
	{
		return func_516(iParam0);
	}
	return iParam0 <= func_517();
}

int func_454(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 != joaat("UPDATE"))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_518(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 19), iVar0, uParam1);
		}
	}
	else
	{
		return func_519(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 19), iVar0, uParam1);
	}
	return -1;
}

int func_455()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_456(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -915411861) && func_413(iParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_284(iParam0))
	{
		return func_520(func_285(iParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_301(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_457(bool bParam0)
{
	if (func_19() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_191(bParam0));
}

int func_458(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_293(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_521(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_287(iParam0, bParam4, 0) };
	Var6 = { func_92(iParam0, Var1, Var1.f_4, bParam4) };
	return func_522(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_459(bool bParam0)
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

int func_460(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_523(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_518(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_519(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_461(int iParam0, struct<16> Param1)
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

var func_462(int iParam0)
{
	struct<7> Var0[7];
	var uVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	iVar51 = _NAMESPACE26::_0xD1BF325C8252A982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar52 /*7*/]);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar53))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

int func_463(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

var func_464(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_467(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_465(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

int func_466()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_467(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_468(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_469(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	return func_471(iParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

void func_470(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_471(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_378(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_524(uParam1, iParam0, Var3);
	return 1;
}

void func_472(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_473(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_474(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_294(iParam0))
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
		func_525(iParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

bool func_475(int iParam0)
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

void func_476(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_477(struct<2> Param0)
{
	return func_526(Param0, 5, 8);
}

bool func_478()
{
	return (func_527(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_95(func_92(joaat("WARDROBE"), func_91(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_479(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_191(0);
	*uParam1 = { func_92(iParam0, func_397(0), bParam3, 0) };
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

int func_480(int iParam0, int iParam1, bool bParam2)
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

bool func_481(int iParam0)
{
	return func_310(iParam0) == joaat("WEAPON");
}

int func_482(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_483(int iParam0, bool bParam1)
{
	if (iParam0 == joaat("UPGRADE_MOONSHINER_BAND") && UNLOCK::_UNLOCK_IS_UNLOCKED(-1387714323))
	{
		return true;
	}
	return (func_413(iParam0, 997808187) && !func_487(iParam0, 997808187, bParam1));
}

int func_484(int iParam0)
{
	int iVar0;

	iVar0 = func_285(iParam0, 1);
	if (iVar0 != 0 && func_295(iVar0, 997808187, 0))
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1831140953))
		{
			return 1;
		}
	}
	return 0;
}

bool func_485(int iParam0, int iParam1)
{
	*iParam1 = func_528(iParam0, 1);
	return *iParam1 != 0;
}

bool func_486(int iParam0, int iParam1)
{
	*iParam1 = func_529(iParam0, 1, 0);
	return *iParam1 != 0;
}

int func_487(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_193(iParam0, 0))
	{
		return func_530(func_369(iParam0), bParam1, bParam2);
	}
	if (func_284(iParam0))
	{
		return func_424(func_285(iParam0, 1), bParam1);
	}
	if ((bParam2 && func_19() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_531(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_488(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_193(iParam0, 0) && !func_468(func_369(iParam0), 2))
	{
		return 0;
	}
	if (func_310(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_293(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_191(bParam3), iParam0);
}

int func_489(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_193(iParam0, 0) && !func_468(func_369(iParam0), 2))
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

int func_490(int* iParam0, int iParam1)
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

int func_491(int* iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_532(iParam1, 1) && !func_533(iParam1, 1))
	{
		if (Global_1915180->f_20142)
		{
			func_534(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -570078785)
	{
		iVar0 = func_456(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_475((iVar1 + func_535(iParam0, bParam2))))
		{
			if (Global_1915180->f_20142)
			{
				func_534(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -915411861)
	{
		iVar2 = func_456(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_453((iVar3 + func_535(iParam0, bParam2))))
		{
			if (Global_1915180->f_20142)
			{
				func_534("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 997808187)
	{
		return 1;
	}
	if (func_468(func_369(iParam1), 2))
	{
		if (!func_536(func_369(iParam1), iParam3, bParam2, &uVar4))
		{
			return 0;
		}
	}
	else if (func_193(iParam1, 0))
	{
		if (!func_537(iParam1, iParam3, bParam2, &uVar4, &uVar6, 0, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_492(int iParam0)
{
	int iVar0;

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_402(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_493(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_313(&uParam0, bParam4, iParam5, bParam6, iParam7);
}

int func_494(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_408(iParam0, iParam1, Param2, bParam6, iParam7, 1, bParam8, 1))
	{
		return 0;
	}
	if (func_173(bParam8, 4) && func_399(iParam1, &Param2, bParam6, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_495(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_404(Param0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_310(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_538(Param0, 1, 0) };
		Var16.f_10 = iParam4;
		iVar0 = func_539(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_540(Param0, 1, 0) };
		Var44.f_10 = iParam4;
		iVar0 = func_541(joaat("UPDATE"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_542(Param0, 1, 0) };
		Var69.f_10 = iParam4;
		iVar0 = func_543(joaat("UPDATE"), &Var69, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_335(&Var1, 0) };
		Var86.f_10 = iParam4;
		iVar0 = func_460(joaat("UPDATE"), &Var86, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_496(int iParam0, struct<10> Param1, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, bool bParam17)
{
	if (Param1.f_9 < 1)
	{
		return 0;
	}
	if (!func_193(Param1.f_8, 0) && !func_468(func_369(Param1.f_8), 2))
	{
		return 0;
	}
	if (func_173(bParam17, 128))
	{
		if (func_402(Param1.f_8) == 0)
		{
			return 0;
		}
	}
	if (func_173(bParam17, 16))
	{
		if (!func_523(iParam0, &Param1))
		{
			return 0;
		}
	}
	return 1;
}

int func_497(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_410(iParam0, iParam1))
		{
			return 0;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_417(iParam0))
		{
			return 0;
		}
		if (!func_410(iParam0, iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_498(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_417(iParam0);
	}
	return 1;
}

int func_499(int iParam0, bool bParam1, bool bParam2)
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

bool func_500(int iParam0)
{
	return func_402(iParam0) == 1946043663;
}

bool func_501(int iParam0)
{
	return func_402(iParam0) == -126813555;
}

int func_502(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam1 == -570078785)
	{
		iVar0 = func_520(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_475(iVar0))
		{
			if (Global_1915180->f_20142)
			{
				func_534(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_544(iVar0)));
			}
			return 0;
		}
	}
	else if (bParam1 == -915411861)
	{
		iVar1 = func_520(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_453(iVar1))
		{
			if (Global_1915180->f_20142)
			{
				func_534("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam1 == 997808187)
	{
		return 1;
	}
	if (!func_382(iParam0, bParam1, &uVar2))
	{
		return 0;
	}
	return 1;
}

int func_503(struct<17> Param0)
{
	if (!func_294(Param0.f_16))
	{
		return 0;
	}
	return 1;
}

void func_504(int iParam0, var uParam1, var uParam2)
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

struct<14> func_505(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_506(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_507(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_191(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_508(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_509(struct<2> Param0, int iParam2)
{
	if (!func_44(Param0))
	{
		return 0;
	}
	func_545(iParam2);
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

int func_510()
{
	return Global_1051202->f_12;
}

char* func_511()
{
	return "unnamed";
}

int func_512(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_513(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_232(35, iParam0);
}

int func_514(int iParam0)
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

bool func_515(int iParam0)
{
	if (func_546(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_547(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

bool func_516(int iParam0)
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

int func_517()
{
	if (func_19() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_518(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_393(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_393(iParam1, 2, 0, 0);
	return -1;
}

int func_519(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_393(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_520(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_474(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_521(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_548(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_293(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_457(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_549(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_550(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_460(joaat("USE"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = iParam3;
			Var51.f_7 = iParam2;
			func_461(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_191(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_522(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_548(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_404(*uParam1, &Var0, bParam6, 0, -1))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_457(bParam6))
	{
		iVar14 = -1;
		if (func_19() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_460(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_461(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_191(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_523(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if (func_65(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_65(iVar0, 8))
	{
		return 0;
	}
	else if (func_65(iVar0, 16))
	{
		return 0;
	}
	else if (func_65(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

void func_524(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_482(uParam0))
	{
		return;
	}
	if (Global_1272170->f_1991 < 20)
	{
		Global_1272170->f_1991++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_1991.f_1[iVar0 /*24*/]) = { *(Global_1272170->f_1991.f_1[iVar0 + 1 /*24*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1272170->f_1991.f_1[(Global_1272170->f_1991 - 1) /*24*/]) = { Var1 };
}

void func_525(int iParam0, bool bParam1, var uParam2, int iParam3)
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

bool func_526(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_44(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_551(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_527(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_552(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_191(bParam1), iParam0, bParam3);
}

int func_528(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_499(iVar0, 1, 0);
		if (!func_301(iParam0, bVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_500(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || func_302(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
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

bool func_529(int iParam0, bool bParam1, bool bParam2)
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
		bVar40 = func_499(iVar0, 0, 1);
		if (!func_301(iParam0, bVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_501(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || func_302(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
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

int func_530(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_468(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_19() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_553(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_531(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_193(iParam0, 0))
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

int func_532(int iParam0, bool bParam1)
{
	if (!func_262(iParam0, 947377998))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_262(iParam0, -1090933859))
		{
			return func_285(iParam0, 1) != 0;
		}
		if ((func_487(iParam0, -915411861, 0) || func_487(iParam0, 600942249, 0)) || func_487(iParam0, -570078785, 0))
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

int func_533(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_554(iParam0, 1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_424(iVar0, -2141192156))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!func_382(iVar0, -2141192156, &uVar1))
		{
			return 0;
		}
	}
	return 1;
}

void func_534(char* sParam0)
{
	Global_1915180->f_21955 = func_136(sParam0, 10000, 0, 0, 0, 1);
}

int func_535(int* iParam0, bool bParam1)
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
				iVar0 = (iVar0 + (func_456(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_536(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_555(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (func_457(0) && !func_455());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0 || &Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_453(iVar32))
			{
				Jump @209; //curOff = 131
			}
			else if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_475(iVar32))
			{
			}
			else
			{
				iVar33 = func_302(&(Var0[iVar34 /*2*/]), 0, !bVar35, 0);
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

int func_537(int iParam0, int iParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
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

	if (func_284(iParam0))
	{
		return func_382(func_285(iParam0, 1), bParam2, uParam3);
	}
	if (!func_301(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (func_457(0) && !func_455());
	if (iParam6 != 0)
	{
		if (func_19() == 0)
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
			if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_453(iVar32))
			{
				Jump @438; //curOff = 179
			}
			else if (&Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_475(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = func_556(&(Var0[iVar34 /*2*/]), iParam6);
				}
				else
				{
					iVar33 = func_302(&(Var0[iVar34 /*2*/]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_557(&(Var0[iVar34 /*2*/])) || func_558(&(Var0[iVar34 /*2*/])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_559(7, &(Var0[iVar34 /*2*/]), &iVar36);
						}
						iVar38 = func_560(&(Var0[iVar34 /*2*/]), iParam6);
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
							if (bParam5 && ((iVar33 + func_561(7, &(Var0[iVar34 /*2*/]))) + func_562(&(Var0[iVar34 /*2*/]))) >= iVar32)
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

struct<28> func_538(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_191(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_335(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_539(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_523(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_518(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_519(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_540(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_191(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_335(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_541(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_518(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_519(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_542(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_191(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_335(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_543(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_523(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_518(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_519(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

int func_544(int iParam0)
{
	return (iParam0 / 100);
}

void func_545(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

int func_546(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_547(int iParam0)
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
		func_563(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_564(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_548(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_549(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_293(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_565(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_550(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_92(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_551(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_566(Param0);
	}
	return -1;
}

bool func_552(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_553(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_468(iParam0, 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_567(iParam0, bParam1, &Var0))
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

int func_554(int iParam0, bool bParam1)
{
	if (!func_532(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PAMPHLET_TRACKING_ARROW"))
	{
		return func_285(joaat("AMMO_ARROW_TRACKING"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_POISON_BOTTLE"))
	{
		return func_285(joaat("AMMO_POISONBOTTLE"), 1);
	}
	return func_285(iParam0, 1);
}

int func_555(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_468(iParam0, 2))
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
		func_568(iParam0, bParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_556(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_91(0) };
	Var0.f_4 = func_569(iParam1);
	Var5 = { func_92(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_191(0), &Var5, false);
	return iVar9;
}

int func_557(int iParam0)
{
	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (func_262(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return 1;
	}
	return func_558(iParam0);
}

int func_558(int iParam0)
{
	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (func_262(iParam0, -839724752))
	{
		return 1;
	}
	return 0;
}

int func_559(int iParam0, int iParam1, int iParam2)
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

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_193(iParam1, 0))
	{
		return 0;
	}
	if (!func_571(iParam0))
	{
		return 0;
	}
	iVar0 = func_572(iParam0);
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
		if (!func_573(iVar28))
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

int func_560(int iParam0, int iParam1)
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

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (!func_557(iParam0) && !func_558(iParam0))
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
	iVar13 = func_574(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_361(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_362(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_363(iVar15, iVar1);
			if (func_193(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_575(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_556(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_577(iVar16, func_576(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_366(iVar1);
	}
	return iVar0;
}

int func_561(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_193(iParam1, 0))
	{
		return 0;
	}
	if (!func_571(iParam0))
	{
		return 0;
	}
	iVar0 = func_572(iParam0);
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

int func_562(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_34))
	{
		iVar1 = PED::_0xD806CD2A4F2C2996(Global_34);
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

void func_563(int iParam0)
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
	func_564(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_564(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_565(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 5)
	{
		return 0;
	}
	else if (*uParam2 != 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam3 < 1)
		{
			Jump @200; //curOff = 49
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @191; //curOff = 67
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_5 == 0)
		{
		}
		else
		{
			*((*uParam0)[*iParam1 /*6*/]) = { *((*uParam2)[iVar0 /*6*/]) };
			((*uParam0)[*iParam1 /*6*/])->f_4 = ((*uParam2)[iVar0 /*6*/])->f_4;
			if (((*uParam2)[iVar0 /*6*/])->f_5 > iParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = iParam3;
				iParam3 = 0;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				iParam3 = (iParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && iParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

int func_566(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_509(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_567(int iParam0, bool bParam1, var uParam2)
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

void func_568(int iParam0, bool bParam1, var uParam2, int iParam3)
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

int func_569(int iParam0)
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

int func_570(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_277;
	}
	return iParam0;
}

int func_571(int iParam0)
{
	iParam0 = func_570(iParam0);
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

int func_572(int iParam0)
{
	iParam0 = func_570(iParam0);
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

int func_573(int iParam0)
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
	if (ENTITY::_0x8DE41E9902E85756(iParam0))
	{
		return 0;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_574(int iParam0, int iParam1)
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

int func_575(int iParam0)
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

int func_576(int iParam0)
{
	if (func_262(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_262(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_262(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_577(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_193(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

