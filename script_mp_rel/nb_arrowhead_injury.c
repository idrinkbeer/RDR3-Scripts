#region Local Var
	struct<8> Local_0 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_8 = 1;
	var uLocal_9 = 0;
	var uLocal_10 = 1;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	vector3 vLocal_13[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<32> Local_110 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_142 = 0;
	var uLocal_143 = 1;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 1065353216;
	var uLocal_147 = 0;
	var uLocal_148 = 1065353216;
	var uLocal_149 = 1077936128;
	var uLocal_150 = 1108082688;
	var uLocal_151 = 1113325568;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 1;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 7;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = -1;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	float fLocal_179 = 0f;
	float fLocal_180 = 0f;
	var uLocal_181 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_179 = 1f;
	fLocal_180 = 1f;
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(ScriptParam_0);
	while (!func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 13, 41);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_0), 13, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_13, 97, 42);
	func_11(NETWORK::_0x690806BC83BC8CA2(vLocal_13[0 /*3*/]), 97, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(struct<5> Param0)
{
	if (Local_0 == 6)
	{
		return;
	}
	func_13(Param0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

int func_3()
{
	if (func_16(0, 0))
	{
		return 1;
	}
	else if (func_17(Local_110.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_110.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_110.f_12), Local_110.f_9))
	{
		return 1;
	}
	else if (Local_110.f_8 == 6)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
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
		if (func_28() == 0)
		{
			if (func_29())
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

void func_9()
{
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
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

void func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<12> Var0;
	int iVar17;
	bool bVar18;
	int iVar19;

	Var0.f_10 = 1106247680;
	iVar17 = 255;
	MISC::_COPY_MEMORY(&Local_110, &uParam0, 5);
	iVar19 = func_30(&bVar18, Local_110.f_1, Local_110.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_110.f_12 = iVar19;
	iVar17 = (Global_1186267->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_31(&Var0, Local_110.f_1, Local_110.f_2, Local_110.f_3, iVar17);
	Local_110.f_9 = { func_32(Var0.f_5, 8) };
	Local_110.f_14 = Var0.f_5;
	Local_110.f_15 = { Var0.f_11 };
	func_33();
	func_34();
}

void func_14()
{
	func_35();
}

void func_15()
{
}

int func_16(bool bParam0, bool bParam1)
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

int func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_36(*Global_1051163) && !func_21(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_37(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_38(iParam3, 255))
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
	if (func_39())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_36(*Global_1051163))
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

int func_18()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return (Global_1198382->f_1[iParam0 /*10*/])->f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_0 <= 5)
	{
		func_40();
	}
	switch (Local_0)
	{
		case 0:
			func_41();
			break;
		case 1:
			func_42();
			break;
		case 2:
			func_43();
			break;
		case 3:
			func_44();
			break;
		case 4:
			func_45();
			break;
		case 5:
			func_46();
			break;
	}
}

void func_23()
{
	func_47();
	if (Local_110.f_8 <= 5)
	{
		func_48();
	}
	switch (Local_110.f_8)
	{
		case 0:
			func_49();
			break;
		case 1:
			func_50();
			break;
		case 2:
			func_51();
			break;
		case 3:
			func_52();
			break;
		case 4:
			func_53();
			break;
		case 5:
			func_54();
			break;
	}
}

void func_24()
{
}

void func_25()
{
	if (func_55())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_0.f_3.f_1);
		}
	}
	func_56();
}

void func_26()
{
	func_57();
}

void func_27()
{
	if (Local_110.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_58(Local_110.f_12, 4);
		}
	}
	func_59();
	if (func_60(32))
	{
		func_61(Local_0.f_6);
	}
	func_62();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051202->f_8;
}

int func_30(var uParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<17> Var26;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	Var26.f_10 = 1106247680;
	func_31(&Var26, iParam1, iParam2, -1, 255);
	func_63(&Var0, Var26);
	iVar25 = func_64(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_65(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<11> Var0;
	int iVar17;

	Var0.f_10 = 1106247680;
	MISC::_COPY_MEMORY(iParam0, &Var0, 17);
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*iParam0 = 0;
			iParam0->f_1 = 0;
			iParam0->f_2 = 0;
			break;
		case 1:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 4;
			iParam0->f_2 = 7;
			func_66(iParam0, iParam2);
			switch (iParam2)
			{
				case 0:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_1");
					iParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
					break;
				case 1:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_2");
					iParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
					break;
				case 2:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_1");
					iParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
					break;
				case 3:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_2");
					iParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
					break;
				case 4:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_3");
					iParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
					break;
				case 5:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_4");
					iParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
					break;
				case 6:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_1");
					iParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
					break;
				case 7:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_2");
					iParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
					break;
				case 8:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GREAT_PLAINS_1");
					iParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
					break;
				case 9:
					iParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GRIZZLIES_WEST_1");
					iParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
					break;
			}
			break;
		case 2:
			iParam0->f_6 = 1;
			*iParam0 = 20;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_67(iParam0);
			switch (iParam2)
			{
				case 0:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
					iParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
					iParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
					iParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
					iParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
					iParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
					iParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
					iParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
					iParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
					iParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
					iParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
					iParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
					iParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
					iParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
					iParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
					iParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
					iParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
					iParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
					iParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
					iParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
					iParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
					break;
			}
			break;
		case 3:
			iParam0->f_6 = 1;
			*iParam0 = 21;
			iParam0->f_1 = 8;
			iParam0->f_2 = 1;
			func_67(iParam0);
			switch (iParam2)
			{
				case 0:
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 5);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
					iParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 5);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
					iParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 5);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
					iParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_69(iParam0, 0);
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 4);
					func_69(iParam0, 5);
					func_69(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
					iParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_69(iParam0, 0);
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 5);
					func_69(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
					iParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_69(iParam0, 0);
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 5);
					func_69(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
					iParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_69(iParam0, 0);
					func_69(iParam0, 2);
					func_69(iParam0, 4);
					func_69(iParam0, 5);
					func_69(iParam0, 6);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
					iParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_69(iParam0, 0);
					func_69(iParam0, 2);
					func_69(iParam0, 4);
					func_69(iParam0, 5);
					func_69(iParam0, 6);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
					iParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_69(iParam0, 0);
					func_69(iParam0, 2);
					func_69(iParam0, 4);
					func_69(iParam0, 5);
					func_69(iParam0, 6);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
					iParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
					iParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_69(iParam0, 0);
					func_69(iParam0, 2);
					func_69(iParam0, 5);
					func_69(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
					iParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
					iParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_69(iParam0, 0);
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 4);
					func_69(iParam0, 5);
					func_69(iParam0, 6);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
					iParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
					iParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_69(iParam0, 3);
					func_69(iParam0, 4);
					func_69(iParam0, 5);
					func_69(iParam0, 6);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
					iParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 5);
					func_69(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
					iParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					func_69(iParam0, 3);
					func_69(iParam0, 5);
					func_69(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
					iParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					func_69(iParam0, 3);
					func_69(iParam0, 5);
					func_69(iParam0, 7);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
					iParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 5);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
					iParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
					iParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 5);
					iParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
					iParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
					break;
			}
			break;
		case 4:
			iParam0->f_6 = 1;
			*iParam0 = 11;
			iParam0->f_1 = 1;
			iParam0->f_2 = 2;
			func_67(iParam0);
			iParam0->f_15 = joaat("22_TO_4");
			switch (iParam2)
			{
				case 0:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
					iParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
					iParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
					iParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
					iParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
					iParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
					iParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
					iParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
					iParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
					iParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
					iParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
					iParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
					break;
			}
			break;
		case 12:
			iParam0->f_6 = 1;
			*iParam0 = 15;
			iParam0->f_1 = 3;
			iParam0->f_2 = 1;
			func_67(iParam0);
			switch (iParam2)
			{
				case 0:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
					iParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
					iParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
					iParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
					iParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
					iParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
					iParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
					iParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
					iParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
					iParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
					iParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
					iParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
					iParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
					iParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
					iParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
					iParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
					break;
			}
			break;
		case 6:
			iParam0->f_6 = 1;
			*iParam0 = 16;
			iParam0->f_1 = 2;
			iParam0->f_2 = 8;
			switch (iParam3)
			{
				case 0:
					func_70(iParam0, 0);
					func_70(iParam0, 1);
					func_70(iParam0, 4);
					func_70(iParam0, 5);
					break;
				case 1:
					func_70(iParam0, 2);
					func_70(iParam0, 3);
					func_70(iParam0, 6);
					func_70(iParam0, 7);
					func_71(iParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_69(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
					iParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
					iParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_69(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
					iParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
					iParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_69(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
					iParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
					iParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_69(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
					iParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
					iParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_69(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
					iParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
					iParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_69(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
					iParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
					iParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_69(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
					iParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
					iParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_69(iParam0, 0);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
					iParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_69(iParam0, 1);
					iParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
					iParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
					break;
			}
			break;
		case 7:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 12;
			iParam0->f_2 = 3;
			switch (iParam2)
			{
				case 0:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 9);
					func_69(iParam0, 10);
					func_69(iParam0, 11);
					func_72(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
					iParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 8);
					func_69(iParam0, 9);
					func_69(iParam0, 10);
					func_69(iParam0, 11);
					func_72(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
					iParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 4);
					func_69(iParam0, 5);
					func_69(iParam0, 6);
					func_69(iParam0, 9);
					func_69(iParam0, 10);
					func_69(iParam0, 11);
					func_72(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
					iParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 9);
					func_69(iParam0, 10);
					func_69(iParam0, 11);
					func_72(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
					iParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 9);
					func_69(iParam0, 10);
					func_69(iParam0, 11);
					func_72(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
					iParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 4);
					func_69(iParam0, 7);
					func_69(iParam0, 8);
					func_69(iParam0, 9);
					func_69(iParam0, 10);
					func_69(iParam0, 11);
					func_72(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
					iParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 6);
					func_69(iParam0, 7);
					func_69(iParam0, 9);
					func_69(iParam0, 10);
					func_69(iParam0, 11);
					func_72(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
					iParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 4);
					func_69(iParam0, 5);
					func_69(iParam0, 6);
					func_69(iParam0, 9);
					func_69(iParam0, 10);
					func_69(iParam0, 11);
					func_72(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
					iParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 9);
					func_69(iParam0, 10);
					func_69(iParam0, 11);
					func_72(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
					iParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_69(iParam0, 1);
					func_69(iParam0, 2);
					func_69(iParam0, 5);
					func_69(iParam0, 9);
					func_69(iParam0, 10);
					func_69(iParam0, 11);
					func_72(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
					iParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
					break;
			}
			break;
		case 5:
			iParam0->f_6 = 1;
			*iParam0 = 21;
			iParam0->f_1 = 1;
			iParam0->f_2 = 1;
			func_67(iParam0);
			switch (iParam2)
			{
				case 0:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
					iParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
					iParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
					iParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
					iParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
					iParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
					iParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
					iParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
					iParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
					iParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
					iParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
					iParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
					iParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
					iParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
					iParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
					iParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
					iParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
					iParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
					iParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
					iParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
					iParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
					iParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
					break;
			}
			break;
		case 11:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 4;
			iParam0->f_2 = 1;
			func_67(iParam0);
			func_71(iParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
					iParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
					iParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
					iParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
					iParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
					iParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
					iParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
					iParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
					iParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
					iParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
					iParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
					break;
			}
			break;
		case 9:
			iParam0->f_6 = 1;
			*iParam0 = 12;
			iParam0->f_1 = 4;
			iParam0->f_2 = 5;
			switch (iParam2)
			{
				case 0:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
					iParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
					iParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
					iParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
					iParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
					iParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
					iParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
					iParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
					iParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
					iParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
					iParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
					iParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_73(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
					iParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
					break;
			}
			break;
		case 10:
			iParam0->f_6 = 1;
			*iParam0 = 20;
			iParam0->f_1 = 1;
			iParam0->f_2 = 1;
			func_67(iParam0);
			switch (iParam2)
			{
				case 0:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
					iParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
					iParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
					iParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
					iParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
					iParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
					iParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
					iParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
					iParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
					iParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
					iParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
					iParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
					iParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
					iParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
					iParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
					iParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
					iParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
					iParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
					iParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
					iParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
					iParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
					break;
			}
			break;
		case 8:
			iParam0->f_6 = 1;
			*iParam0 = 9;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_67(iParam0);
			iParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
					iParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
					iParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
					iParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
					iParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
					iParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
					iParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
					iParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
					iParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
					iParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
					break;
			}
			break;
		case 13:
			iParam0->f_6 = 1;
			*iParam0 = 1;
			iParam0->f_1 = 6;
			iParam0->f_2 = 1;
			func_67(iParam0);
			func_71(iParam0, 1);
			func_71(iParam0, 4);
			func_71(iParam0, 8);
			func_71(iParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
					iParam0->f_11 = { func_75(func_74(iParam4)) };
					break;
			}
			break;
		case 14:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 5;
			iParam0->f_2 = 6;
			switch (iParam2)
			{
				case 0:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
					iParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
					iParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
					iParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
					iParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
					iParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
					iParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
					iParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
					iParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
					iParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_76(iParam0, iParam3);
					iParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
					iParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
					break;
			}
			break;
		case 15:
			iParam0->f_6 = 1;
			iParam0->f_7 = 1;
			*iParam0 = 12;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_67(iParam0);
			switch (iParam2)
			{
				case 0:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
					iParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
					iParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
					iParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
					iParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
					iParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
					iParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
					iParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
					iParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
					iParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
					iParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
					iParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_68(iParam0);
					iParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
					iParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
					break;
			}
			break;
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			switch (iParam1)
			{
				case 16:
					iParam0->f_8 = joaat("HIDEOUT");
					break;
				case 17:
					iParam0->f_8 = joaat("DYNAMIC_AMBUSH");
					break;
				case 18:
					iParam0->f_8 = joaat("DYNAMIC_RESCUE_PED_MULTIPLE");
					break;
				case 19:
					iParam0->f_8 = joaat("DYNAMIC_ESCORT");
					break;
				case 20:
					iParam0->f_8 = joaat("DYNAMIC_CAMPSITE_DEFEND");
					break;
				case 21:
					iParam0->f_8 = joaat("MOONSHINE_DYNAMIC_SABOTAGE");
					break;
				case 22:
					iParam0->f_8 = joaat("MOONSHINE_DYNAMIC_DESTROY");
					break;
				case 23:
					iParam0->f_8 = joaat("MOONSHINE_DYNAMIC_ROADBLOCK");
					break;
			}
			iVar17 = func_77(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				iParam0->f_7 = 1;
			}
			*iParam0 = func_78(iVar17);
			iParam0->f_1 = 0;
			iParam0->f_6 = 2;
			func_71(iParam0, 32);
			if (iParam2 != -1)
			{
				iParam0->f_9 = func_80(func_79(iVar17), iParam2);
				iParam0->f_15 = func_81(func_79(iVar17), iParam2);
				iParam0->f_5 = func_82(iVar17, iParam2);
				iParam0->f_11 = { func_83(iVar17, iParam2) };
			}
			break;
	}
}

struct<2> func_32(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634), func_84(iParam1));
			break;
		case 3:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_602), func_84(iParam1));
			break;
		case 4:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_2104), func_84(iParam1));
			break;
		case 5:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_12606), func_84(iParam1));
			break;
		case 6:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_12908), func_84(iParam1));
			break;
		case 7:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_15910), func_84(iParam1));
			break;
		case 8:
			Var0.f_1 = func_85(iParam0, &(Global_1070356->f_634.f_15981), func_84(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_86();
	}
	return Var0;
}

void func_33()
{
	func_87();
}

void func_34()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

void func_35()
{
}

int func_36(struct<2> Param0)
{
	if (!func_88(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_84(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_38(int iParam0, int iParam1)
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

int func_39()
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
	if (!func_36(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
}

void func_41()
{
	int iVar0;
	struct<11> Var1;

	iVar0 = (Global_1186267->f_231.f_1066[Local_110.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_31(&Var1, Local_110.f_1, Local_110.f_2, Local_110.f_3, iVar0);
	if (!func_89(&Var1, 1))
	{
		func_90(1);
		return;
	}
	Local_0.f_6 = func_74(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_91(256);
	if (func_92(Local_0.f_6))
	{
		func_93(5);
		func_90(6);
	}
	else
	{
		func_90(1);
	}
}

void func_42()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_31(&Var0, Local_110.f_1, Local_110.f_2, -1, 255);
	if (func_89(&Var0, 1))
	{
		func_90(2);
		return;
	}
	if (func_94(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_110.f_15, Var0.f_10, 2442122);
		func_90(2);
	}
	else if (bVar17)
	{
		func_93(3);
		func_90(6);
	}
	if (!func_95(Local_0.f_3.f_2))
	{
		func_96(&(Local_0.f_3.f_2));
	}
	else if (func_97(Local_0.f_3.f_2) > 45000)
	{
		func_93(4);
		func_90(6);
	}
}

void func_43()
{
	if (func_98(1, 255))
	{
		if (!func_99(1))
		{
			if (func_100())
			{
				func_91(1);
			}
		}
		else
		{
			func_101();
			func_90(3);
		}
	}
}

void func_44()
{
	bool bVar0;

	if (func_98(2, 255))
	{
		if (!func_99(2))
		{
			bVar0 = true;
			if (!func_102())
			{
				bVar0 = false;
			}
			if (!func_103())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_91(2);
			}
		}
		else
		{
			func_104();
			func_90(4);
		}
	}
}

void func_45()
{
	func_105();
	func_106();
	func_107();
	if (func_108() || Local_0.f_2 != 0)
	{
		func_109();
		func_90(5);
	}
}

void func_46()
{
	if (func_98(4, 255))
	{
		if (func_110())
		{
			func_91(4);
			func_90(6);
		}
	}
}

void func_47()
{
	if (!func_99(256))
	{
		return;
	}
	if (func_99(512))
	{
		if (func_60(32) && func_74(PLAYER::PLAYER_ID()) == Local_0.f_6)
		{
			func_61(Local_0.f_6);
			func_111(32);
		}
	}
	else if (!func_60(32))
	{
		if (func_74(PLAYER::PLAYER_ID()) == Local_0.f_6)
		{
			func_112(Local_0.f_6, 1, 1);
			func_113(32);
		}
	}
	else if (func_74(PLAYER::PLAYER_ID()) != Local_0.f_6)
	{
		func_61(Local_0.f_6);
		func_111(32);
	}
}

void func_48()
{
	func_114();
}

void func_49()
{
	if (Local_0 == 6)
	{
		func_115(6);
	}
	else if (Local_0 > 0)
	{
		func_47();
		func_115(1);
	}
}

void func_50()
{
	if (Local_0 == 6)
	{
		func_115(6);
	}
	else if (Local_0 > 1)
	{
		func_115(2);
	}
}

void func_51()
{
	bool bVar0;
	int iVar1;

	if (!func_98(1, 255))
	{
		bVar0 = true;
		if (!func_116())
		{
			bVar0 = false;
		}
		if (!func_117())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_118(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_95(Local_110.f_11))
			{
				func_96(&(Local_110.f_11));
			}
			if (func_97(Local_110.f_11) >= iVar1)
			{
				func_115(6);
			}
		}
	}
	else if (Local_0 > 2)
	{
		func_119(&(Local_110.f_11));
		func_120();
		func_115(3);
	}
}

void func_52()
{
	int iVar0;

	if (!func_98(2, 255))
	{
		if (func_121())
		{
			func_118(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_95(Local_110.f_11))
			{
				func_96(&(Local_110.f_11));
			}
			if (func_122(Local_110.f_11) >= iVar0)
			{
				func_115(6);
			}
		}
	}
	else if (Local_0 > 3)
	{
		func_119(&(Local_110.f_11));
		func_123();
		func_124();
		func_125();
		func_126();
		func_115(4);
	}
}

void func_53()
{
	if (Local_0 >= 5)
	{
		func_127();
		func_115(5);
		return;
	}
	func_128();
	func_129();
	func_130();
	func_131();
	func_132();
	func_133();
}

void func_54()
{
	if (!func_98(4, 255))
	{
		if (func_134())
		{
			func_135();
			func_58(Local_110.f_12, 4);
			func_118(4);
		}
	}
	else if (Local_0 > 5)
	{
		func_115(6);
	}
}

bool func_55()
{
	return (func_99(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_56()
{
}

void func_57()
{
	func_136(&(Local_110.f_31.f_13));
	if (VOLUME::_DOES_VOLUME_EXIST(Local_110.f_31.f_11))
	{
		VOLUME::_DELETE_VOLUME(Local_110.f_31.f_11);
	}
}

void func_58(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_137(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_59()
{
	int iVar0;
	bool bVar1;

	if (!func_60(1))
	{
		return;
	}
	if (func_60(4))
	{
		return;
	}
	if (!func_60(2))
	{
		iVar0 = -1;
	}
	else if (!func_60(8))
	{
		iVar0 = 2;
	}
	else if (func_60(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_138(Local_110.f_9, iVar0, 0);
	func_113(4);
	if (bVar1)
	{
		func_139(Local_110.f_1, Local_110.f_2);
	}
}

bool func_60(int iParam0)
{
	return func_140(Local_110.f_7, iParam0);
}

void func_61(int iParam0)
{
	int iVar0;

	if (!func_141(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_62()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_55();
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_1[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_7.f_1[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_0.f_7.f_1[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		func_142(iVar3);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_3[iVar3]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_7.f_3[iVar3])))
		{
			if (Local_110.f_18 == 0)
			{
				if (func_143() == 0)
				{
					func_144(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3])), 0, 0);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3])), PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 4, 0, -1082130432, -1, 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3])), true);
				}
			}
			if (TASK::IS_PED_IN_WRITHE(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3]))) && PED::_0x12EB4E31F092C9B3(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3]))))
			{
				PED::_0x925A160133003AC6(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3])), 0);
			}
			iVar4 = NETWORK::NET_TO_ENT(&(Local_0.f_7.f_3[iVar3]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
		}
		iVar3++;
	}
}

void func_63(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_145(uParam0))
	{
		return -1;
	}
	iVar0 = func_146(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_146(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_65(int iParam0)
{
	struct<15> Var0;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return *(Global_1186267->f_231[iParam0 /*15*/]);
}

void func_66(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_147(iParam0);
			break;
		case 1:
			func_147(iParam0);
			break;
		case 2:
			func_147(iParam0);
			break;
		case 3:
			func_148(iParam0);
			break;
		case 4:
			func_147(iParam0);
			break;
		case 5:
			func_147(iParam0);
			break;
		case 6:
			func_148(iParam0);
			break;
		case 7:
			func_148(iParam0);
			break;
		case 8:
			func_148(iParam0);
			break;
		case 9:
			func_147(iParam0);
			break;
		default:
			func_68(iParam0);
			func_67(iParam0);
			break;
	}
}

void func_67(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_2 - 1))
	{
		func_70(iParam0, iVar0);
		iVar0++;
	}
}

void func_68(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_1 - 1))
	{
		func_69(iParam0, iVar0);
		iVar0++;
	}
}

void func_69(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_3), iParam1);
}

void func_70(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_4), iParam1);
}

void func_71(int iParam0, int iParam1)
{
	func_149(&(iParam0->f_16), iParam1);
}

void func_72(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_70(iParam0, 0);
			break;
		case 1:
		case 2:
			func_70(iParam0, 1);
			func_70(iParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_70(iParam0, 0);
			func_70(iParam0, 2);
			break;
		case 8:
			func_70(iParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_70(iParam0, 1);
			break;
		default:
			func_67(iParam0);
			break;
	}
}

void func_73(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_150(iParam0);
			break;
		case 1:
			func_151(iParam0);
			break;
		case 2:
			func_152(iParam0);
			break;
		case 3:
			func_153(iParam0);
			break;
		default:
			func_68(iParam0);
			func_67(iParam0);
			break;
	}
}

int func_74(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_75(int iParam0)
{
	if (!func_141(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

void func_76(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_154(iParam0);
			break;
		case 1:
		case 2:
			func_155(iParam0);
			break;
		case 3:
		case 4:
			func_156(iParam0);
			break;
		default:
			func_67(iParam0);
			break;
	}
	func_68(iParam0);
}

var func_77(int iParam0)
{
	return &(Global_1245803->f_2073[iParam0]);
}

int func_78(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_3;
}

int func_79(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

var func_80(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_157(&Var1, uParam0) && func_158(&Var1, iParam1))
	{
		func_159(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_81(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_157(&Var1, uParam0) && func_158(&Var1, iParam1))
	{
		func_159(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_160(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_83(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_160(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

int func_84(int iParam0)
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

int func_85(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2 /*3*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

struct<2> func_86()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_87()
{
}

int func_88(int iParam0)
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

bool func_89(var uParam0, int iParam1)
{
	return func_161(uParam0->f_16, iParam1);
}

void func_90(int iParam0)
{
	if (Local_0 != iParam0)
	{
		Local_0 = iParam0;
	}
}

void func_91(int iParam0)
{
	if (!func_99(iParam0))
	{
		func_162(&(Local_0.f_1), iParam0);
	}
}

bool func_92(int iParam0)
{
	if (!func_141(iParam0))
	{
		return false;
	}
	return (func_163(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_93(int iParam0)
{
	if (Local_0.f_2 != iParam0)
	{
		Local_0.f_2 = iParam0;
	}
}

int func_94(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
	{
		return 1;
	}
	if (func_164(Local_110.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_0.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_110.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_165(&uVar1, Param0);
		Local_0.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_118(128);
	}
	else if (!func_98(128, 255))
	{
		Local_0.f_3.f_1 = func_166(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
		{
			return 1;
		}
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_0.f_3);
	switch (iVar0)
	{
		case 3:
			Local_0.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_0.f_3);
			return 1;
		case 4:
			Local_0.f_3 = 0;
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_95(int iParam0)
{
	return iParam0 != 0;
}

void func_96(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

int func_97(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

bool func_98(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_140(&(vLocal_13[iParam1 /*3*/]), iParam0);
}

bool func_99(int iParam0)
{
	return func_140(Local_0.f_1, iParam0);
}

int func_100()
{
	return 1;
}

void func_101()
{
}

int func_102()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_3[iVar2])))
		{
			if (func_167(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			if (bVar1)
			{
				func_168();
			}
			return iVar0;
		}
	}

int func_103()
{
	return 1;
}

void func_104()
{
}

void func_105()
{
	if (!func_99(32) && func_169(32))
	{
		func_91(32);
	}
	if (!func_99(64) && func_169(64))
	{
		func_91(64);
	}
	if (!func_99(16) && func_170(16))
	{
		func_91(16);
	}
	if ((!func_99(2048) && func_169(2048)) && !func_169(4096))
	{
		func_91(2048);
	}
}

void func_106()
{
	bool bVar0;

	if (!bVar0 && func_99(16))
	{
		func_93(1);
		return;
	}
	if (func_99(2048) && !func_169(4096))
	{
		func_93(6);
		return;
	}
}

void func_107()
{
}

int func_108()
{
	if (func_171())
	{
		return 1;
	}
	switch (Local_0.f_7)
	{
		case 0:
			func_172();
			break;
		case 2:
			func_173();
			break;
		case 1:
			func_174();
			break;
		case 3:
			func_175();
			break;
		case 4:
			func_176();
			break;
	}
	return 0;
}

void func_109()
{
}

int func_110()
{
	return 1;
}

void func_111(int iParam0)
{
	if (func_60(iParam0))
	{
		func_177(&(Local_110.f_7), iParam0);
	}
}

int func_112(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_141(iParam0))
	{
		return 0;
	}
	iVar0 = func_178(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_149(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_179(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_113(int iParam0)
{
	if (!func_60(iParam0))
	{
		func_162(&(Local_110.f_7), iParam0);
	}
}

void func_114()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_180(iVar0);
				break;
			case -1315570756:
				func_181(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_182(iVar0);
		iVar0++;
	}
}

void func_115(int iParam0)
{
	if (Local_110.f_8 != iParam0)
	{
		Local_110.f_8 = iParam0;
	}
}

int func_116()
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = "EXPL";
	iVar1 = 1;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
		{
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!func_184(func_183(iVar2)))
		{
			iVar1 = 0;
		}
		iVar2++;
	}
	return iVar1;
}

bool func_117()
{
	bool bVar0;

	bVar0 = false;
	return !bVar0;
}

void func_118(int iParam0)
{
	if (!func_98(iParam0, 255))
	{
		func_162(vLocal_13[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], iParam0);
	}
}

void func_119(var uParam0)
{
	*uParam0 = 0;
}

void func_120()
{
}

int func_121()
{
	return 1;
}

int func_122(int iParam0)
{
	return (iParam0 - Global_1275573->f_21) * 1000;
}

void func_123()
{
	if (!func_60(1))
	{
		func_185(Local_110.f_9);
		func_113(1);
	}
}

void func_124()
{
}

void func_125()
{
	int iVar0;
	int iVar1;

	func_186(50f, 20f, 1, 1077936128 /* Float: 3f */, 0);
	func_187(1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_3[iVar0])))
		{
			(Local_110.f_18.f_4[iVar0 /*2*/])->f_1 = NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar0]));
			iVar1 = func_188(iVar0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, joaat("REL_WILD_ANIMAL"));
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				switch (iVar0)
				{
					case 0:
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 467, true);
						PED::_SET_PED_CARCASS_QUALITY(iVar1, 1);
						PED::_0xDACE03C65C6666DB(iVar1, 1);
						PED::_SET_PED_QUALITY(iVar1, 2);
						PED::SET_PED_CONFIG_FLAG(iVar1, 297, true);
						if (func_143() == 0)
						{
							GRAPHICS::_ADD_BLOOD_POOL_AT_PED(iVar1);
						}
						PED::_SET_PED_BODY_COMPONENT(iVar1, func_189());
						PED::_SET_PED_BODY_COMPONENT(iVar1, func_190());
						PED::_UPDATE_PED_VARIATION(iVar1, false, true, true, true, false);
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_126()
{
}

void func_127()
{
}

void func_128()
{
	float fVar0;

	if (func_164(Local_110.f_15))
	{
		return;
	}
	if (func_191())
	{
		return;
	}
	if (func_192(Local_110.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_110.f_15);
		if (fVar0 < 200f)
		{
			func_118(4096);
		}
		else if (fVar0 < 400f)
		{
			func_193(4096);
			func_118(2048);
		}
		else
		{
			func_193(4096);
			func_193(2048);
		}
	}
}

void func_129()
{
	func_194();
	func_195();
	func_196();
}

void func_130()
{
	if (func_197())
	{
		func_118(8);
	}
	else
	{
		func_193(8);
	}
}

void func_131()
{
	func_198();
	func_199(Local_0.f_7);
	func_200();
	switch (Local_110.f_18)
	{
		case 0:
			func_201();
			break;
		case 2:
			func_202();
			break;
		case 1:
			func_203();
			break;
		case 3:
			func_204();
			break;
		case 4:
			func_205();
			break;
	}
}

void func_132()
{
	if (!func_98(8, 255))
	{
		func_118(16);
	}
	else
	{
		func_193(16);
	}
}

void func_133()
{
	int iVar0;

	Local_110.f_6 = -1;
	Local_110.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_110.f_5 = (Local_110.f_5 || vLocal_13[iVar0 /*3*/]) /* PointerArith */;
			Local_110.f_6 = (Local_110.f_6 && vLocal_13[iVar0 /*3*/]) /* PointerArith */;
		}
		iVar0++;
	}
}

int func_134()
{
	return 1;
}

void func_135()
{
}

void func_136(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

bool func_137(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_138(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_207(func_206(Param0));
	iVar1 = func_208(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_209(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_139(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_210(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_211(iVar0);
}

bool func_140(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_141(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

void func_142(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_110.f_18.f_4[iParam0 /*2*/])))
	{
		return;
	}
	MAP::REMOVE_BLIP(Local_110.f_18.f_4[iParam0 /*2*/]);
}

int func_143()
{
	return func_212();
}

void func_144(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_34 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_145(var uParam0)
{
	if (func_36(*uParam0))
	{
		return 1;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return 1;
		}
		if (uParam0->f_4 != -1)
		{
			return 1;
		}
		if (uParam0->f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_146(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_213(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_214(iParam1)) - 1);
	}
	bVar2 = func_36(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21((Global_1186267->f_231[iVar6 /*15*/])->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_147(int iParam0)
{
	func_69(iParam0, 0);
	func_69(iParam0, 1);
	func_69(iParam0, 3);
	func_67(iParam0);
}

void func_148(int iParam0)
{
	func_68(iParam0);
	func_215(iParam0, 0, 3);
}

void func_149(var uParam0, int iParam1)
{
	func_216(uParam0, iParam1);
}

void func_150(int iParam0)
{
	func_69(iParam0, 0);
	func_70(iParam0, 0);
	func_70(iParam0, 1);
	func_70(iParam0, 2);
}

void func_151(int iParam0)
{
	func_69(iParam0, 1);
	func_67(iParam0);
}

void func_152(int iParam0)
{
	func_69(iParam0, 2);
	func_70(iParam0, 3);
}

void func_153(int iParam0)
{
	func_69(iParam0, 3);
	func_70(iParam0, 4);
}

void func_154(int iParam0)
{
	func_70(iParam0, 0);
	func_70(iParam0, 1);
}

void func_155(int iParam0)
{
	func_70(iParam0, 2);
	func_70(iParam0, 3);
}

void func_156(int iParam0)
{
	func_70(iParam0, 4);
	func_70(iParam0, 5);
}

bool func_157(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_158(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_159(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_160(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

bool func_161(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_162(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_163(int iParam0)
{
	int iVar0;

	if (!func_141(iParam0))
	{
		return false;
	}
	iVar0 = func_217(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_164(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_165(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_166(struct<17> Param0)
{
	var uVar0;

	func_165(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_167(int iParam0, int iParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*iParam1 = 1;
		return 0;
	}
	if (!func_220(Local_0.f_7.f_3[iParam0], func_183(iParam0), func_218(iParam0), func_219(iParam0), 1, 0, 0, 1, 1))
	{
		*iParam1 = 1;
		return 0;
	}
	return 1;
}

void func_168()
{
	func_93(2);
}

bool func_169(int iParam0)
{
	return func_140(Local_110.f_5, iParam0);
}

bool func_170(int iParam0)
{
	return func_140(Local_110.f_6, iParam0);
}

int func_171()
{
	if (Local_0.f_7 == 5)
	{
		return 1;
	}
	return 0;
}

void func_172()
{
	if (func_221(1))
	{
		func_222(1);
	}
}

void func_173()
{
	if (func_221(16) || func_223(32))
	{
		func_222(3);
	}
}

void func_174()
{
	if (func_221(2))
	{
		func_222(2);
	}
}

void func_175()
{
	if (func_221(1024))
	{
		func_222(5);
	}
}

void func_176()
{
	if (func_221(128))
	{
		func_222(5);
	}
}

void func_177(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_178(int iParam0)
{
	if (!func_141(iParam0))
	{
		return 0;
	}
	if (!func_163(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_179(var uParam0, int iParam1)
{
	func_224(uParam0, iParam1);
}

void func_180(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 178:
			if (func_225(&Var0, iParam0))
			{
				func_226(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_181(int iParam0)
{
}

void func_182(int iParam0)
{
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_227())
			{
				case 0:
					return joaat("A_C_DEER_01");
				case 1:
					return joaat("A_C_COYOTE_01");
				case 2:
					return joaat("A_C_WOLF_MEDIUM");
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_184(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_185(struct<2> Param0)
{
	if (func_208(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_208(Param0)))
	{
		STATS::_0x99230691875FC218(func_206(Param0), func_208(Param0), Global_35);
	}
}

void func_186(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_110.f_31.f_2 = iParam2;
	Local_110.f_31.f_9 = fParam0;
	Local_110.f_31.f_10 = fParam1;
	Local_110.f_31.f_8 = iParam3;
	if (bParam4)
	{
		func_162(&(Local_110.f_31.f_12), 1);
	}
	else
	{
		func_177(&(Local_110.f_31.f_12), 1);
	}
}

void func_187(int iParam0, int iParam1)
{
	func_162(&(Local_110.f_31.f_12), 2);
	Local_110.f_31.f_7 = iParam1;
	Local_110.f_31.f_5 = iParam0;
}

var func_188(int iParam0)
{
	return (Local_110.f_18.f_4[iParam0 /*2*/])->f_1;
}

int func_189()
{
	switch (func_227())
	{
		case 0:
			return -868965679;
		case 1:
			return 1469569555;
		case 2:
			return 184083808;
		default:
			break;
	}
	return -868965679;
}

int func_190()
{
	switch (func_227())
	{
		case 0:
			return 191923877;
		case 1:
			return 66620888;
		case 2:
			return -942236851;
		default:
			break;
	}
	return -868965679;
}

bool func_191()
{
	return (func_99(32) || func_98(32, 255));
}

int func_192(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_228(iParam0, joaat("LAST_INTERACTION_TIMESTAMP")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return 0;
	}
	if (iVar2 != 0 && (Global_1275573->f_21 - iVar2) < iParam1)
	{
		return 1;
	}
	return 0;
}

void func_193(int iParam0)
{
	if (func_140(&(vLocal_13[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), iParam0))
	{
		func_177(vLocal_13[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], iParam0);
	}
}

void func_194()
{
}

void func_195()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_229(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_196()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;

	fVar0 = func_230();
	if (Local_110.f_31.f_4)
	{
		return;
	}
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_140((vLocal_13[iVar1 /*3*/])->f_2, 1))
	{
		Local_110.f_31.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_110.f_15);
	fVar4 = Local_110.f_31.f_9;
	fVar5 = Local_110.f_31.f_10;
	if (func_140(Local_110.f_31.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_110.f_31.f_7));
		if (fVar7 > 0f)
		{
			if (func_231(Local_110.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_110.f_31.f_6 < 1f)
			{
				Local_110.f_31.f_6 = (Local_110.f_31.f_6 + fVar8);
				if (Local_110.f_31.f_6 > 1f)
				{
					Local_110.f_31.f_6 = 1f;
				}
			}
		}
		else if (Local_110.f_31.f_6 > 0f)
		{
			Local_110.f_31.f_6 = (Local_110.f_31.f_6 - fVar8);
			if (Local_110.f_31.f_6 < 0f)
			{
				Local_110.f_31.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_110.f_31.f_5) * Local_110.f_31.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_162(&((vLocal_13[iVar1 /*3*/])->f_2), 1);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_110.f_31.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_110.f_31.f_11, false, 0))
	{
		func_162(&((vLocal_13[iVar1 /*3*/])->f_2), 1);
	}
	else if (Local_110.f_31 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 1)
		{
			func_232(Local_110.f_31.f_13[iVar10 /*9*/], fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0);
			iVar10++;
		}
		if (func_233(&(Local_110.f_31.f_13), Local_110.f_31, Local_110.f_31.f_8))
		{
			func_162(&((vLocal_13[iVar1 /*3*/])->f_2), 1);
		}
	}
	if (func_140((vLocal_13[iVar1 /*3*/])->f_2, 1))
	{
		Local_110.f_31.f_4 = 1;
	}
}

int func_197()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_110.f_14))
	{
		return 0;
	}
	return 1;
}

void func_198()
{
	int iVar0;
	struct<15> Var1;

	Local_110.f_18.f_11 = -1;
	Local_110.f_18.f_12 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_110.f_18.f_11 = (Local_110.f_18.f_11 && (vLocal_13[iVar0 /*3*/])->f_1);
			Local_110.f_18.f_12 = (Local_110.f_18.f_12 || (vLocal_13[iVar0 /*3*/])->f_1);
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_234(512, iVar0) && !func_235(1))
			{
				Var1 = { func_236(1667262090) };
				Var1.f_10 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				Var1.f_11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				func_237(&Var1);
				func_238(1, 1);
			}
		}
		iVar0++;
	}
}

void func_199(int iParam0)
{
	if (Local_110.f_18 != iParam0)
	{
		Local_110.f_18 = iParam0;
	}
}

void func_200()
{
	int iVar0;

	if (!func_221(512))
	{
		iVar0 = (Local_110.f_18.f_4[0 /*2*/])->f_1;
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (func_239(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1) < 1.25f)
			{
				func_240(512);
			}
		}
	}
}

void func_201()
{
	struct<15> Var0;

	if (!func_221(1) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
	{
		if (func_241())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (func_143() == 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((Local_110.f_18.f_4[0 /*2*/])->f_1, func_242(), 2f, 20000, 0.25f, 0, 40000f);
					PED::_0x735662994E60A710((Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
				}
				else if (!func_243((Local_110.f_18.f_4[0 /*2*/])->f_1, -916659666))
				{
					TASK::TASK_ANIMAL_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 0);
				}
				func_240(1);
				Var0 = { func_236(joaat("BLIP")) };
				func_237(&Var0);
			}
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
		{
			if (TASK::IS_PED_IN_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (!PED::_0x12EB4E31F092C9B3((Local_110.f_18.f_4[0 /*2*/])->f_1))
				{
					PED::_0x925A160133003AC6((Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
				}
			}
			else if (func_143() == 0 && !func_243((Local_110.f_18.f_4[0 /*2*/])->f_1, -916659666))
			{
				TASK::TASK_ANIMAL_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 1);
			}
		}
	}
}

void func_202()
{
	if (func_221(16))
	{
		return;
	}
	if (func_244(&(Local_110.f_18.f_8), 10f))
	{
		if (func_239(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), (Local_110.f_18.f_4[0 /*2*/])->f_1, 1, 1) < 125f)
		{
			func_245(1891783641, (Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
		}
		func_246(&(Local_110.f_18.f_8));
	}
	if (func_247((Local_110.f_18.f_4[0 /*2*/])->f_1))
	{
		if (func_248((Local_110.f_18.f_4[0 /*2*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
		{
			if (!func_249(2))
			{
				if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), ENTITY::GET_ENTITY_COORDS((Local_110.f_18.f_4[0 /*2*/])->f_1, false, false), 2f) && !EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), ENTITY::GET_ENTITY_COORDS((Local_110.f_18.f_4[0 /*2*/])->f_1, false, false), 2f))
				{
					func_250(joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"), 1, 0);
				}
				func_251(2);
			}
			if (func_239((Local_110.f_18.f_4[0 /*2*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 0) < 10f)
			{
				func_252();
			}
			func_246(&(Local_110.f_18.f_8));
			func_240(16);
		}
	}
	else if (func_221(4))
	{
		if (ENTITY::DOES_ENTITY_EXIST((Local_110.f_18.f_4[0 /*2*/])->f_1))
		{
			if (PED::_GET_PED_REMAINING_REVIVAL_TIME((Local_110.f_18.f_4[0 /*2*/])->f_1, false) <= 0f && ENTITY::IS_ENTITY_DEAD((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (func_239((Local_110.f_18.f_4[0 /*2*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 0) < 10f && !func_249(2))
				{
					func_250(joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"), 1, 0);
					func_252();
					func_251(2);
				}
				func_246(&(Local_110.f_18.f_8));
				func_240(32);
			}
		}
		else if (func_221(32))
		{
			func_251(2);
			func_240(32);
		}
	}
	else
	{
		if (func_143() != 0)
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (!func_221(8))
				{
					PED::_0x735662994E60A710((Local_110.f_18.f_4[0 /*2*/])->f_1, 0);
					TASK::_0x30A768C30D385EC5((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 1, joaat("WEAPON_BOW"), 0, 0);
					func_240(8);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO((Local_110.f_18.f_4[0 /*2*/])->f_1, func_253());
			}
		}
		if (TASK::IS_PED_IN_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1))
		{
			func_240(256);
			func_240(4);
		}
		else if (func_143() == 1 && !func_221(256))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (func_254((Local_110.f_18.f_4[0 /*2*/])->f_1, func_242(), 1) < 3f)
				{
					TASK::TASK_ANIMAL_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 0);
					func_240(256);
				}
			}
		}
	}
}

void func_203()
{
	if (func_244(&(Local_110.f_18.f_8), 10f))
	{
		if (func_239(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), (Local_110.f_18.f_4[0 /*2*/])->f_1, 1, 1) < 125f)
		{
			func_245(1891783641, (Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
		}
		func_246(&(Local_110.f_18.f_8));
	}
	if (!func_221(2))
	{
		if (func_143() == 1 && !func_221(256))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (func_254((Local_110.f_18.f_4[0 /*2*/])->f_1, func_242(), 1) < 3f || !func_243((Local_110.f_18.f_4[0 /*2*/])->f_1, 713668775))
				{
					TASK::TASK_ANIMAL_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 0);
					func_240(256);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_OCCLUDED((Local_110.f_18.f_4[0 /*2*/])->f_1) && func_239(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), (Local_110.f_18.f_4[0 /*2*/])->f_1, 1, 1) < 30f)
		{
			func_255();
		}
		if (func_191())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if ((func_143() == 1 && !func_221(256)) && TASK::GET_SCRIPT_TASK_STATUS((Local_110.f_18.f_4[0 /*2*/])->f_1, 713668775, true) != 1)
				{
					TASK::TASK_ANIMAL_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 0);
					func_240(256);
				}
				PED::_0x925A160133003AC6((Local_110.f_18.f_4[0 /*2*/])->f_1, 0);
				func_240(2);
			}
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
		{
			if (TASK::IS_PED_IN_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (!PED::_0x12EB4E31F092C9B3((Local_110.f_18.f_4[0 /*2*/])->f_1))
				{
					PED::_0x925A160133003AC6((Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
				}
			}
		}
	}
}

void func_204()
{
	char* sVar0;

	if ((!func_249(8) && func_244(&(Local_110.f_18.f_8), 5f)) && func_239(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), (Local_110.f_18.f_4[0 /*2*/])->f_1, 1, 1) < 20f)
	{
		if (!func_256(2, 1))
		{
			sVar0 = func_257();
			if (!MISC::_0x375F5870A7B8BEC1(sVar0))
			{
				func_258(sVar0, 10000, 0, 0, 0, 1);
			}
		}
		func_251(8);
	}
}

void func_205()
{
	if (func_249(1))
	{
		if (!func_249(4))
		{
			if (!PED::_0x98082246107A6ACF((Local_110.f_18.f_4[0 /*2*/])->f_1, func_190()))
			{
				func_251(4);
			}
		}
		if (!func_259(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && func_260((Local_110.f_18.f_4[0 /*2*/])->f_1))
		{
			func_261(1);
			func_240(128);
		}
	}
}

int func_206(var uParam0, var uParam1)
{
	return uParam0;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
		case 8:
			return 634321112;
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
		default:
			break;
	}
	return 0;
}

int func_208(struct<2> Param0)
{
	return func_262(Param0);
}

void func_209(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_206(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_264(func_263(Param0));
			iVar5 = func_265(iVar4);
			if (!func_266(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1100950->f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = (Global_1100950->f_33[iVar2 /*16*/])->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1111121[iVar0 /*42*/];
}

int func_210(int iParam0, int iParam1)
{
	int iVar0;
	struct<11> Var1;
	int iVar18;
	int iVar19;

	Var1.f_10 = 1106247680;
	iVar19 = 1;
	while (iVar19 <= 23)
	{
		iVar18 = iVar19;
		if (iVar18 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_31(&Var1, iVar18, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar19++;
	}
	return -1;
}

void func_211(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_267(&Var0);
}

var func_212()
{
	return Local_110.f_3;
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1186267->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1186267->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1186267->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_215(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (iParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_70(iParam0, iVar0);
		iVar0++;
	}
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_217(int iParam0)
{
	if (!func_141(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

Vector3 func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_110.f_15;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 90f;
		default:
			break;
	}
	return 0f;
}

int func_220(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_184(iParam1))
	{
		return 0;
	}
	iVar0 = func_268(iParam1, vParam2, iParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

bool func_221(int iParam0)
{
	return func_140(Local_110.f_18.f_12, iParam0);
}

void func_222(int iParam0)
{
	if (Local_0.f_7 != iParam0)
	{
		Local_0.f_7 = iParam0;
	}
}

bool func_223(int iParam0)
{
	return func_140(Local_110.f_18.f_11, iParam0);
}

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_225(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return 0;
	}
	if (iParam0->f_4.f_1 != Local_110.f_1)
	{
		return 0;
	}
	if (iParam0->f_4 != Local_110)
	{
		return 0;
	}
	if (iParam0->f_4.f_2 != Local_110.f_2)
	{
		return 0;
	}
	if (iParam0->f_4.f_3 != Local_110.f_3)
	{
		return 0;
	}
	return 1;
}

void func_226(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<14> Var4;

	bVar1 = false;
	switch (iParam0->f_9)
	{
		case 1667262090:
			if (func_239((Local_110.f_18.f_4[0 /*2*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 0) < 25f)
			{
				func_252();
				func_269();
				func_270(2, 1);
			}
			iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0->f_10);
			iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (((_NAMESPACE26::_0xD6F6ACF4392187FB(iVar2) && _NAMESPACE26::_0x93A91A351A07360E(iVar2)) && _NAMESPACE26::_0xD6F6ACF4392187FB(iVar3)) && _NAMESPACE26::_0x93A91A351A07360E(iVar3))
			{
				if (iVar2 == iVar3)
				{
					bVar1 = true;
				}
			}
			if (iParam0->f_10 == PLAYER::PLAYER_ID() || bVar1)
			{
				func_271(iParam0->f_11);
				func_240(1024);
			}
			iVar0 = (Local_110.f_18.f_4[0 /*2*/])->f_1;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(iVar0, func_190());
					PED::_UPDATE_PED_VARIATION(iVar0, false, true, true, true, false);
				}
			}
			break;
		case joaat("BLIP"):
			Var4.f_6 = -1082130432;
			Var4.f_7 = -1082130432;
			Var4.f_8 = -1082130432;
			Var4.f_9 = -1082130432;
			Var4.f_10 = -1082130432;
			Var4.f_11 = -1082130432;
			Var4.f_12 = -1;
			Var4.f_13 = -1;
			Var4 = joaat("EVENT_SHOCKING_BEAT_ALARMING");
			Var4.f_1 = (Local_110.f_18.f_4[0 /*2*/])->f_1;
			Local_110.f_18.f_7 = EVENT::_0xCA1315C33B9A2847(&Var4);
			if (func_239(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), (Local_110.f_18.f_4[0 /*2*/])->f_1, 1, 1) < 125f)
			{
				func_245(1891783641, (Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
			}
			func_246(&(Local_110.f_18.f_8));
			break;
	}
}

int func_227()
{
	switch (func_272())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 2;
		case 8:
			return 1;
		case 9:
			return 2;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 0;
		case 15:
			return 0;
		case 16:
			return 2;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<2> func_228(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_273(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_274(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_229(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		(vLocal_13[iParam2 /*3*/])->f_2 = ((vLocal_13[iParam2 /*3*/])->f_2 || (vLocal_13[iParam0 /*3*/])->f_2);
	}
}

float func_230()
{
	int iVar0;
	float fVar1;

	if (Local_110.f_31.f_3 == 0)
	{
		Local_110.f_31.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_110.f_31.f_3)) * 0.001f);
	Local_110.f_31.f_3 = iVar0;
	return fVar1;
}

bool func_231(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_275(vVar0, vParam0) > func_275(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_232(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	if (bParam5)
	{
		fVar0 = (fParam6 * fParam6);
	}
	else
	{
		fVar0 = BUILTIN::VDIST2(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	}
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_276(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_277(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_278() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_233(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_136(uParam0);
	return 1;
}

bool func_234(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_140((vLocal_13[iParam1 /*3*/])->f_1, iParam0);
}

bool func_235(int iParam0)
{
	return func_140(Local_0.f_7.f_5, iParam0);
}

struct<15> func_236(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_110, 5);
	Var0.f_9 = iParam0;
	Var0 = 178;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_237(int* iParam0)
{
	func_280(iParam0, func_279(4, 117));
}

void func_238(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	func_162(&(Local_0.f_7.f_5), iParam0);
}

float func_239(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_240(int iParam0)
{
	func_162(&((vLocal_13[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1), iParam0);
}

bool func_241()
{
	return Local_110.f_31.f_4;
}

Vector3 func_242()
{
	switch (func_272())
	{
		case 0:
			return -1960.423f, -2081.308f, 56.64626f;
		case 1:
			return 116.8389f, 94.82872f, 103.029f;
		case 2:
			return -922.4316f, 894.5942f, 141.3653f;
		case 3:
			return 2819.513f, 1068.565f, 45.8229f;
		case 4:
			return 1705.646f, -1107.097f, 41.68002f;
		case 5:
			return 1271.895f, -873.2363f, 66.67879f;
		case 6:
			return 321.1271f, 1229.421f, 184.5556f;
		case 7:
			return -1771.546f, -270.3535f, 181.0415f;
		case 8:
			return -1241.065f, -1134.067f, 69.09028f;
		case 9:
			return -2351.374f, -1570.987f, 150.7724f;
		case 10:
			return -2684.808f, -2585.378f, 68.77023f;
		case 11:
			return -4516.411f, -3314.907f, 15.34342f;
		case 12:
			return -4645.084f, -2681.163f, -9.38732f;
		case 13:
			return -5720.355f, -3208.366f, -23.00574f;
		case 14:
			return -1628.354f, -2275.218f, 43.5816f;
		case 15:
			return -1599.365f, 1690.092f, 236.8163f;
		case 16:
			return 431.79f, 2051.425f, 235.0013f;
		case 17:
			return -559.3034f, 511.8383f, 98.66551f;
		case 18:
			return 1742.833f, 595.4795f, 104.0148f;
		case 19:
			return 1574.622f, -1752.983f, 52.35271f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_243(int iParam0, int iParam1)
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

int func_244(var uParam0, float fParam1)
{
	if (!func_281(uParam0))
	{
		return 0;
	}
	if (func_282(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_245(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

void func_246(var uParam0)
{
	func_283(uParam0, 0f);
}

int func_247(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_248(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_249(int iParam0)
{
	return func_140(Local_110.f_18.f_1, iParam0);
}

void func_250(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_284())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_285(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_285(iParam0, 1) /*4*/])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1275573->f_16 != &Global_1275573)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar8])))
		{
		}
		else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar8])))
		{
		}
		else if (&Global_1275573->f_154[iVar8] == Global_1275573->f_10)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar7, &(Global_1275573->f_154[iVar8]));
		}
		iVar8++;
	}
	func_286(&Var0, uVar7);
}

void func_251(int iParam0)
{
	func_162(&(Local_110.f_18.f_1), iParam0);
}

void func_252()
{
	if (!func_60(2))
	{
		return;
	}
	func_113(8);
}

float func_253()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	vVar0 = { Local_110.f_15 };
	vVar3 = { func_242() };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true);
	fVar7 = func_254((Local_110.f_18.f_4[0 /*2*/])->f_1, vVar3, 1);
	return func_287(1f, 2f, (fVar7 / fVar6));
}

float func_254(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_255()
{
	int iVar0;

	if (!func_98(32, 255))
	{
		func_288(Local_110.f_1, Local_110.f_3);
		if (!func_98(1024, 255))
		{
			func_289(Local_110.f_1);
			func_118(1024);
		}
		iVar0 = func_210(Local_110.f_1, Local_110.f_2);
		func_290(iVar0);
		func_291(iVar0);
		func_113(2);
		func_292(Local_110.f_9);
		func_293(Local_110.f_1);
		func_118(32);
	}
}

int func_256(int iParam0, int iParam1)
{
	if (!func_294(iParam0, iParam1))
	{
		return 0;
	}
	return func_295(iParam1, iParam0);
}

char* func_257()
{
	switch (func_227())
	{
		case 0:
			return "NB_ARROWHEAD_H_DEER";
		case 1:
			return "NB_ARROWHEAD_H_COYOTE";
		case 2:
			return "NB_ARROWHEAD_H_WOLF";
		default:
			break;
	}
	return "";
}

var func_258(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_259(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_260(int iParam0)
{
	return ENTITY::_GET_IS_LOOTED(iParam0);
}

void func_261(int iParam0)
{
	func_177(&(Local_110.f_18.f_1), iParam0);
}

int func_262(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_296(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_263(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_296(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_264(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_157(&Var1, uParam0))
	{
		iVar0 = ((func_297() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_265(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_266(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return 1;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

void func_267(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[15] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[15])))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 11, &(Global_1051202->f_16[15]));
	func_298(uParam0, uParam0->f_1);
}

int func_268(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

void func_269()
{
	if (!func_60(8))
	{
		return;
	}
	func_113(16);
}

void func_270(int iParam0, int iParam1)
{
	if (!func_294(iParam0, iParam1))
	{
		return;
	}
	func_299(iParam1, iParam0);
}

void func_271(int iParam0)
{
	int iVar0;

	iVar0 = 172753906;
	if (iParam0 < 0 || iParam0 > 6)
	{
		iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 1375711881;
			break;
		case 1:
			iVar0 = 1085161806;
			break;
		case 2:
			iVar0 = -1920342777;
			break;
		case 3:
			iVar0 = -1303158970;
			break;
		case 4:
			iVar0 = 533989549;
			break;
		case 5:
			iVar0 = 319906586;
			break;
		case 6:
			iVar0 = -1140055210;
			break;
	}
	func_300(iVar0, 0, 255, 0, 0);
}

int func_272()
{
	return Local_110.f_2;
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("NET_BEAT_ANIMAL_ATTACK");
		case 2:
			return joaat("NET_BEAT_ARROWHEAD_INJURY");
		case 14:
			return joaat("NET_BEAT_DUEL");
		case 4:
			return joaat("NET_BEAT_GRAVEROBBER");
		case 5:
			return joaat("NET_BEAT_RIVAL_COLLECTOR");
		case 6:
			return joaat("NET_BEAT_KIDNAPPED");
		case 7:
			return joaat("NET_BEAT_PHOTOGRAPHY");
		case 8:
			return joaat("NET_BEAT_TIED_UP_PED");
		case 9:
			return joaat("NET_BEAT_TREASURE_HUNTER");
		case 10:
			return joaat("NET_BEAT_TREE_MAP");
		case 11:
			return joaat("NET_BEAT_RUNAWAY_WAGON");
		case 12:
			return joaat("NET_BEAT_HOBO_DOG");
		case 13:
			return joaat("NET_BEAT_WILDMAN");
		case 3:
			return joaat("NET_BEAT_EGG_PROTECTOR");
		case 15:
			return joaat("NET_BEAT_MOONSHINE_CAMP");
		default:
			break;
	}
	return 0;
}

struct<2> func_274(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

float func_275(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_276(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_277(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_276(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_278() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_278()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

var func_279(int iParam0, int iParam1)
{
	return func_301(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_280(int* iParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, iParam0, 15, 40, &uParam1);
}

bool func_281(var uParam0)
{
	return func_302(*uParam0, 1);
}

float func_282(var uParam0)
{
	if (!func_281(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_303(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_278() - uParam0->f_1);
}

void func_283(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_278() - fParam1);
	func_304(uParam0, 1);
	func_305(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_284()
{
	if (func_28() != 0)
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_HONOR")))
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 2 != 0)
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 4 != 0)
	{
		return 1;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return 1;
	}
	return 0;
}

int func_285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 93;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 96;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 61;
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 63;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 97;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 87;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 62;
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 58;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 90;
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 88;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 69;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 77;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 98;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 65;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 74;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 70;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 95;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 68;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 72;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 91;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 81;
		case -1:
			return 0;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 82;
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 60;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 64;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 84;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 89;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 59;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 67;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 71;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 78;
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 92;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 73;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 85;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 76;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 66;
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 94;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 79;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 80;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 86;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 75;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 83;
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return 19;
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

void func_286(int* iParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*iParam0 = 181;
	iParam0->f_1 = PLAYER::PLAYER_ID();
	iParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, iParam0, 7, 8, &uParam1);
}

float func_287(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_288(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_228(iParam0, joaat("VARIATIONS_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_89(&Var0, 4) && func_306(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_289(int iParam0)
{
	func_307();
	func_308(iParam0);
}

void func_290(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_95(Global_1245803[iParam0 /*4*/]))
	{
		return;
	}
	func_309(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_96((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_310(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_310(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_310(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_310(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_291(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_267(&Var0);
}

void func_292(struct<2> Param0)
{
	struct<32> Var0;

	if (func_208(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_208(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_208(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_311(Param0, &Var0))
		{
			if (Var0.f_29 == joaat("RACE_IMPROMPTU"))
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("RACE"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

void func_293(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_228(iParam0, joaat("NUM_TIMES_SEEN")) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

int func_294(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_312(iParam0) - 1))
	{
		return 0;
	}
	return 1;
}

bool func_295(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_228(iParam1, joaat("CHARACTER_MEMORY")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	return MISC::IS_BIT_SET(iVar2, iParam0);
}

int func_296(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		return 0;
	}
	func_313(iParam2);
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

int func_297()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1234391->f_8113;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

void func_298(var uParam0, var uParam1)
{
}

void func_299(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_228(iParam1, joaat("CHARACTER_MEMORY")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::SET_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

int func_300(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_314(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

var func_301(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_315() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_316());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_316());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_316());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_317(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_318(iVar2))
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
				if (iVar9 & 8192 != 0 && func_319(iVar2) != 1)
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
					if (!func_320(iVar10))
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

bool func_302(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_303(var uParam0)
{
	return func_302(*uParam0, 2);
}

void func_304(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_305(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_306(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_307()
{
	func_96(&(Global_1245803->f_2003));
}

void func_308(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_228(iParam0, joaat("LAST_INTERACTION_TIMESTAMP")) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_309(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*uParam1 = iVar1;
		func_31(&Var2, *uParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*uParam2 = 0;
			while (*uParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*uParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

struct<2> func_310(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_311(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_296(Param0, &vVar0);
	if (func_321(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 4:
			return 2;
		default:
			break;
	}
	return 8;
}

void func_313(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

int func_314(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_322(iParam2, -372840566);
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
	func_323(uParam1, iParam0, Var3);
	return 1;
}

int func_315()
{
	return Global_1051202->f_12;
}

char* func_316()
{
	return "unnamed";
}

int func_317(int iParam0)
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

int func_318(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_324(35, iParam0);
}

int func_319(int iParam0)
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

bool func_320(int iParam0)
{
	if (func_325(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_326(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_321(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_327(iParam0))
	{
		return 0;
	}
	if (func_328(iParam0, uParam1, &uVar0))
	{
		func_329(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_322(int iParam0, int iParam1)
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

void func_323(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_330(uParam0))
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

int func_324(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_331(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_332())
	{
		return func_331(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_331(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_325(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_326(int iParam0)
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
		func_333(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_334(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_327(int iParam0)
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

bool func_328(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_335(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_329(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_336(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_337(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_338(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_339(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_340(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_341(iVar0);
	uParam1->f_2 = 1060782978;
	DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
}

int func_330(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_331(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_332()
{
	return Global_1099294->f_339;
}

void func_333(int iParam0)
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
	func_334(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_334(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_335(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_FETCH");
			break;
		case 5:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 6:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 7:
			iVar0 = joaat("MISSION_UGC");
			break;
		case 8:
			iVar0 = joaat("MISSION_BEAT");
			break;
		case 9:
			iVar0 = joaat("PROPERTY");
			break;
		case 10:
			iVar0 = joaat("RECIPE");
			break;
		case 11:
			iVar0 = joaat("TITLE");
			break;
		case 12:
			iVar0 = joaat("SHOP");
			break;
		case 13:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 14:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = joaat("GVO_UNLOCKS");
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_336(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_342(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		default:
			break;
	}
	return -1;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 12;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 13;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 14;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 15;
		case joaat("ESCAPED_CONVICTS"):
			return 7;
		case joaat("SUPPLY_TRAIN"):
			return 9;
		case joaat("ROUND_UP"):
			return 8;
		case joaat("WRECKAGE"):
			return 10;
		case joaat("CONDOR_EGG"):
			return 11;
		default:
			break;
	}
	return -1;
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		default:
			break;
	}
	return 0;
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		default:
			break;
	}
	return -1;
}

int func_342(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_343(iParam0, uParam1, &uVar0))
	{
		func_344(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_343(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_335(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_344(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

