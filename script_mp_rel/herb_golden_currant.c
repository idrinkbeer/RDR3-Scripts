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
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	bool bLocal_25 = false;
	vector3 vLocal_26[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_39[4] = { 0, 0, 0, 0 };
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	struct<60> Var0;
	struct<6> Var60;
	int iVar69;
	int iVar70;
	float fVar71;
	bool bVar72;
	vector3 vVar73;
	int iVar76;
	int iVar77;
	bool bVar78;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	Var0.f_9 = 4;
	Var0.f_13 = 4;
	Var0.f_20 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 4;
	Var0.f_28 = 4;
	Var0.f_33 = 4;
	Var0.f_39 = 10;
	Var60.f_5 = -1;
	Var0.f_5 = ScriptParam_0;
	Var0.f_6 = ScriptParam_0.f_1;
	func_1(&Var0);
	if (func_2() != -1)
	{
		if (func_3(Var0.f_18))
		{
			func_4(&Var0);
		}
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_4(&Var0);
	}
	iVar69 = func_5();
	iVar70 = func_6(iVar69);
	if (iVar70 < 22 && iVar70 >= 5)
	{
		if (func_7(Var0.f_18))
		{
			func_4(&Var0);
		}
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_4(&Var0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_4(&Var0);
	}
	Var0 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	Var0.f_3 = TASK::_GET_SCENARIO_POINT_HEADING(ScriptParam_0.f_1, true);
	Var0.f_4 = TASK::_0x6718F40313A2B5A6(ScriptParam_0.f_1);
	Global_26324[Var0.f_18] = &Global_26324[Var0.f_18] + 1;
	if (func_2() == 0)
	{
	}
	else if (!func_8(10))
	{
		func_4(&Var0);
	}
	Var0.f_24 = func_9(Var0.f_18, Var0);
	if (Var0.f_24 <= -1)
	{
		Var0.f_24 = func_10(Var0.f_18, Var0);
		if (func_11(&Var0))
		{
			func_12(&Var0);
		}
		else
		{
			func_13(&Var0);
		}
	}
	while (func_14(&Var0))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			func_4(&Var0);
		}
		BUILTIN::WAIT(0);
	}
	iLocal_17 = 0;
	iVar77 = &Global_1275573->f_154[&Global_1275573];
	while (func_15(&Var0))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			func_4(&Var0);
		}
		func_16(&Var0);
		func_17(&Var0);
		if (iLocal_17 <= 0)
		{
			fVar71 = BUILTIN::VDIST2(Var0, func_18(iVar77));
			switch (func_19(&Var0))
			{
				case 0:
					Var0.f_24 = func_9(Var0.f_18, Var0);
					if (Var0.f_24 <= -1)
					{
						Var0.f_24 = func_10(Var0.f_18, Var0);
						if (func_11(&Var0))
						{
							func_12(&Var0);
						}
						else
						{
							func_13(&Var0);
						}
					}
					func_20(&Var0, 1);
					break;
				case 1:
					if (fVar71 < 4900f)
					{
						func_20(&Var0, 2);
					}
					break;
				case 2:
					if (func_21(Var0.f_24, Var0.f_4))
					{
						func_22(Var0.f_24, 0);
					}
					bVar72 = func_23(Var0.f_24, Var0.f_18, Var0.f_6);
					if (bVar72)
					{
						func_20(&Var0, 3);
					}
					else
					{
						func_20(&Var0, 4);
					}
					func_24(&Var0);
					break;
				case 4:
					if (func_25(&Var0))
					{
						iVar76 = func_26(&Var0);
						if (iVar76 == 1)
						{
							func_20(&Var0, 5);
						}
						else if (iVar76 != 0)
						{
							func_4(&Var0);
						}
						else
						{
							iLocal_17 = 1000;
						}
					}
					break;
				case 3:
					if (func_25(&Var0))
					{
						iVar76 = func_26(&Var0);
						if (iVar76 != 1)
						{
							if (iVar76 == 0)
							{
								iLocal_17 = 1000;
							}
							else
							{
								func_4(&Var0);
							}
						}
						else
						{
							func_20(&Var0, 6);
						}
					}
					break;
				case 5:
					if (func_27(&Var0))
					{
						func_20(&Var0, 9);
					}
					break;
				case 6:
					if (func_27(&Var0))
					{
						func_20(&Var0, 7);
					}
					break;
				case 7:
					if (func_28(Global_1275573->f_8) && (ENTITY::HAS_ANIM_EVENT_FIRED(Global_1275573->f_8, 174961811) || (Global_1186264->f_1 && func_29(Var0.f_18))))
					{
						vVar73 = { func_18(iVar77) };
						if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1186264->f_2))
						{
							_NAMESPACE49::_0x8245C1F3262F4AC2(Global_1186264->f_2);
							func_30(&Var60);
							Global_1186264->f_1 = 0;
							Global_1186264->f_2 = 0;
						}
						if (func_31(Var0.f_18, vVar73, &(Var0.f_24), &iLocal_24, 1, 0, 25))
						{
							func_20(&Var0, 11);
						}
					}
					else if (!func_23(Var0.f_24, Var0.f_18, Var0.f_6))
					{
						func_20(&Var0, 12);
					}
					else if (func_29(Var0.f_18))
					{
						func_32(&Var60, Var0, 1, 1, 1);
					}
					if (!bLocal_25)
					{
						if (fVar71 < 625f && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(iVar77)))
						{
							func_33(690, 0);
							bLocal_25 = true;
						}
					}
					if (fVar71 > 8100f || func_34(Var0.f_24, 1))
					{
						func_35(Var0.f_24, 1);
						func_20(&Var0, 10);
					}
					break;
				case 11:
					Global_1186264 = 0;
					func_36(Var0.f_24);
					if (!func_37(Var0.f_24, iLocal_24))
					{
						func_38(Var0.f_24, iLocal_24);
					}
					if (func_3(Var0.f_18))
					{
						COLLECTION::_0x3EA62E56F386C997(COLLECTION::_0x126CBEBBA46693CF(BUILTIN::FLOOR(Var0.f_4), 1777389635, 0), 1);
					}
					func_39(Var0, vVar73, 0);
					Global_1939067->f_95 = 1;
					func_20(&Var0, 12);
					break;
				case 12:
					if (func_40(Var0.f_18))
					{
						if (func_41(Var0, vVar73, iLocal_24, &uLocal_19, &uLocal_20, &uLocal_21, &bVar78))
						{
							if (bVar78)
							{
								bVar78 = false;
								func_20(&Var0, 8);
							}
							else if (func_23(Var0.f_24, Var0.f_18, Var0.f_6))
							{
								func_20(&Var0, 7);
							}
							else
							{
								func_20(&Var0, 9);
							}
						}
					}
					if (&Global_1186264)
					{
						Global_1186264 = 0;
						if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1186264->f_2))
						{
							_NAMESPACE49::_0x8245C1F3262F4AC2(Global_1186264->f_2);
							func_30(&Var60);
							Global_1186264->f_1 = 0;
							Global_1186264->f_2 = 0;
						}
						if (func_23(Var0.f_24, Var0.f_18, Var0.f_6))
						{
							func_20(&Var0, 7);
						}
						else
						{
							func_20(&Var0, 9);
						}
					}
					if (fVar71 > 8100f || func_34(Var0.f_24, 1))
					{
						func_35(Var0.f_24, 1);
						func_20(&Var0, 10);
					}
					break;
				case 8:
					if (!func_28(Global_1275573->f_8))
					{
						func_20(&Var0, 9);
					}
					if (func_42(&uLocal_19, &uLocal_20, bVar78, &uLocal_21))
					{
						if (func_23(Var0.f_24, Var0.f_18, Var0.f_6))
						{
							func_20(&Var0, 7);
						}
						else
						{
							func_20(&Var0, 9);
						}
					}
					break;
				case 9:
					if (fVar71 > 8100f || func_34(Var0.f_24, 1))
					{
						func_35(Var0.f_24, 1);
						func_20(&Var0, 10);
					}
					break;
				case 10:
					func_43(&Var0);
					func_20(&Var0, 1);
					break;
			}
		}
		if (func_45(func_44(&Var0)))
		{
			if (func_46(&Var0) != func_44(&Var0))
			{
				func_47(&Var0, func_44(&Var0));
			}
		}
		else if (func_46(&Var0) != Global_17114)
		{
			func_47(&Var0, Global_17114);
		}
		func_48(&Var0);
		iLocal_17 = (iLocal_17 - 1);
		if (iLocal_17 < 0)
		{
			iLocal_17 = 0;
		}
		BUILTIN::WAIT(0);
	}
	func_30(&Var60);
	func_4(&Var0);
}

void func_1(var uParam0)
{
	func_49(uParam0, 18);
}

int func_2()
{
	return Global_1572887->f_13;
}

int func_3(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_4(var uParam0)
{
	Global_26324[uParam0->f_18] = (&Global_26324[uParam0->f_18] - 1);
	SCRIPTS::_0xE7282390542F570D(uParam0->f_5);
	if (func_46(uParam0) == 1 && TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_6))
	{
		Global_1915128 = uParam0->f_6;
	}
	func_43(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_5()
{
	return &Global_1902689;
}

int func_6(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_7(int iParam0)
{
	switch (iParam0)
	{
		case 39:
		case 42:
			return 1;
		default:
			return 0;
	}
	return 0;
}

int func_8(int iParam0)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	return func_51(iParam0);
}

int func_9(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_52(vParam1))
	{
		return -1;
	}
	fVar1 = 25f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 500)
	{
		if (!func_53(iVar3))
		{
			return iVar2;
		}
		else if (func_54(iVar3) != iParam0)
		{
			Jump @108; //curOff = 70
		}
		else
		{
			fVar0 = func_56(vParam1, func_55(iVar3));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_10(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= 0)
	{
		return -1;
	}
	if (func_52(vParam1))
	{
		return -1;
	}
	if (func_2() != -1)
	{
		if (Global_20248 >= 500)
		{
			Global_20248 = 0;
		}
		iVar0 = Global_20248;
		func_57(Global_20249[iVar0 /*9*/], iParam0, vParam1, -15);
		Global_20248++;
		return iVar0;
	}
	if (Global_39.f_4457 >= 500)
	{
		Global_39.f_4457 = 0;
	}
	iVar1 = Global_39.f_4457;
	func_58(Global_12342[iVar1 /*9*/], iParam0, vParam1, -15);
	Global_39.f_4457++;
	return iVar1;
}

bool func_11(var uParam0)
{
	return uParam0->f_20 != 3;
}

void func_12(var uParam0)
{
	var uVar0[6];
	var uVar7[3];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	func_59(uParam0->f_20, &uVar0, &uVar7);
	if (uParam0->f_22 > 4)
	{
		uParam0->f_22 = 4;
	}
	if (uParam0->f_21 <= 0)
	{
		uParam0->f_21 = 1;
	}
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_21, uParam0->f_22 + 1);
	iVar12 = 0;
	while (iVar12 <= (iVar11 - 1))
	{
		if (&uVar0[iVar12] == 0)
		{
			iVar13 = 0;
		}
		else
		{
			iVar13 = &uVar7[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)];
		}
		if (uParam0->f_23 > 0)
		{
			iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
		}
		iVar15 = ((uVar0[iVar12] || BUILTIN::SHIFT_LEFT(iVar13, 9)) || BUILTIN::SHIFT_LEFT(iVar14, 13)) | 1073741824;
		func_60(uParam0->f_24, iVar12, iVar15);
		iVar12++;
	}
}

void func_13(var uParam0)
{
	var uVar0[6];
	var uVar7;
	int iVar11;
	int iVar12;

	uVar7 = 3;
	func_59(uParam0->f_20, &uVar0, &uVar7);
	if (uParam0->f_23 > 0)
	{
		iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
	}
	iVar12 = ((uVar0[0] || BUILTIN::SHIFT_LEFT(0, 9)) || BUILTIN::SHIFT_LEFT(iVar11, 13)) | 1073741824;
	func_60(uParam0->f_24, 0, iVar12);
}

int func_14(var uParam0)
{
	if (func_61(Global_34) && func_62())
	{
		return 1;
	}
	func_17(uParam0);
	if (func_45(func_44(uParam0)))
	{
		if (func_46(uParam0) != func_44(uParam0))
		{
			func_47(uParam0, func_44(uParam0));
		}
	}
	else if (func_46(uParam0) != Global_17114)
	{
		func_47(uParam0, Global_17114);
	}
	if (func_46(uParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_15(var uParam0)
{
	if (func_63(1))
	{
		return 0;
	}
	if (Global_1572887->f_13 != -1)
	{
		if (func_64(0, 0))
		{
			return 0;
		}
	}
	if (func_46(uParam0) == 1)
	{
		if (&Global_1915128 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_16(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4) && func_65()) && func_66(PLAYER::PLAYER_ID(), 1, 0)) && func_67(0) == joaat("HERBALIST"))
	{
		bVar0 = true;
	}
	if (!bVar0 && !(uParam0->f_18 == 11 || uParam0->f_18 == 26))
	{
		return;
	}
	if (func_68(uParam0->f_18))
	{
		bVar0 = true;
	}
	if (func_46(uParam0) == 1)
	{
		bVar0 = true;
	}
	if (func_46(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (func_46(uParam0) == 3)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_22)
		{
			if (func_69(&(uParam0->f_13[iVar1])))
			{
				MISC::_0x40D72189F46D2E15(&(uParam0->f_13[iVar1]), 0);
			}
			iVar1++;
		}
	}
}

void func_17(var uParam0)
{
	int iVar0;

	if (!func_70(&(uParam0->f_25)))
	{
		func_71(&(uParam0->f_25), 1f, 0);
	}
	if (func_72(&(uParam0->f_25)) >= 1f)
	{
		func_73(&(uParam0->f_25));
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_74(&(Global_17115[iVar0 /*2*/]), *uParam0))
			{
				func_75(uParam0, (Global_17115[iVar0 /*2*/])->f_1);
			}
			iVar0++;
		}
	}
}

Vector3 func_18(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_19(var uParam0)
{
	return uParam0->f_11;
}

void func_20(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
}

int func_21(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return 0;
	}
	if (!func_76(iParam0))
	{
		return 0;
	}
	if (func_77(iParam0, uParam1))
	{
		return 0;
	}
	iVar0 = func_78(iParam0);
	func_79(&iVar0, 0, 0, 0, 0, 3, 0, 0);
	if (func_80(iVar0, 1))
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_81(iParam0, iVar0))
		{
			func_82(iParam0, iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_83(iParam0, 1);
	}
}

int func_23(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return 0;
	}
	if (func_29(iParam1) && TASK::_DOES_SCENARIO_POINT_EXIST(iParam2))
	{
		if (_NAMESPACE49::_0xFB7CF1DE938A3E22(iParam2))
		{
			return 0;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_81(iParam0, iVar0))
		{
		}
		else if (!func_37(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_24(var uParam0)
{
	TASK::_0x73F0D0327BFA0812(uParam0->f_38);
}

int func_25(var uParam0)
{
	if (!TASK::_0x5E5D96BE25E9DF68(uParam0->f_38))
	{
		return 0;
	}
	return 1;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	uVar4 = uParam0->f_2;
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, (uParam0->f_2 + 2f), &uVar4, false))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, (uParam0->f_2 + 10f), &uVar4, false))
		{
			uParam0->f_12++;
			if (uParam0->f_12 >= 50)
			{
				uParam0->f_12 = 0;
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}
	uParam0->f_2 = uVar4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_81(uParam0->f_24, iVar0))
		{
		}
		else
		{
			func_84(uParam0->f_24, iVar0, &iVar1, &iVar2, &uVar3);
			vLocal_26[iVar0 /*3*/] = (*uParam0 + (IntToFloat(iVar1) * BUILTIN::COS(BUILTIN::TO_FLOAT(iVar2))));
			(vLocal_26[iVar0 /*3*/])->f_1 = (uParam0->f_1 + (IntToFloat(iVar1) * BUILTIN::SIN(BUILTIN::TO_FLOAT(iVar2))));
			(vLocal_26[iVar0 /*3*/])->f_2 = uParam0->f_2;
			if (uParam0->f_23 > 0)
			{
				iLocal_39[iVar0] = uVar3;
			}
			else
			{
				iLocal_39[iVar0] = -1;
			}
			if (!MISC::GET_GROUND_Z_FOR_3D_COORD(&(vLocal_26[iVar0 /*3*/]), (vLocal_26[iVar0 /*3*/])->f_1, ((vLocal_26[iVar0 /*3*/])->f_2 + 10f), &((vLocal_26[iVar0 /*3*/])->f_2), false))
			{
				uParam0->f_12 = 0;
				return -1;
			}
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	return 1;
}

int func_27(var uParam0)
{
	var uVar0;
	int iVar1;

	if (iLocal_18 < 4)
	{
		if (!func_52(*(vLocal_26[iLocal_18 /*3*/])))
		{
			if (!&Global_1915127)
			{
				iVar1 = 0;
				if (((((((uParam0->f_18 == 1 || uParam0->f_18 == 9) || uParam0->f_18 == 10) || uParam0->f_18 == 17) || uParam0->f_18 == 21) || uParam0->f_18 == 25) || uParam0->f_18 == 32) || uParam0->f_18 == 36)
				{
					iVar1 |= 2;
					*(vLocal_26[iLocal_18 /*3*/]) = { *(vLocal_26[iLocal_18 /*3*/]) + func_85(0f, 0.737008f, 1.81999f, uParam0->f_3) };
				}
				if (func_29(uParam0->f_18) && !func_23(uParam0->f_24, uParam0->f_18, uParam0->f_6))
				{
					iVar1 |= 1;
				}
				if (uParam0->f_18 == 37)
				{
					iVar1 |= 2;
					*(vLocal_26[iLocal_18 /*3*/]) = { *(vLocal_26[iLocal_18 /*3*/]) + func_85(0f, 0.5f, 1.81999f, uParam0->f_3) };
				}
				if (func_37(uParam0->f_24, iLocal_18))
				{
					iVar1 |= 1;
				}
				uParam0->f_13[iLocal_18] = TASK::_0x5B4BBE80AD5972DC(uParam0->f_38, *(vLocal_26[iLocal_18 /*3*/]), func_86((uParam0->f_3 + (IntToFloat(iLocal_18) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f)))), iVar1, &uVar0, &(iLocal_39[iLocal_18]));
				if (func_87(uParam0->f_18))
				{
					uParam0->f_28[iLocal_18] = GRAPHICS::_0xFA50F79257745E74(*(vLocal_26[iLocal_18 /*3*/]), 0.37f, 4, 27, 0);
				}
				if (uParam0->f_18 == 38)
				{
					func_88(uParam0->f_33[iLocal_18], *(vLocal_26[iLocal_18 /*3*/]), 0.15f);
				}
				iLocal_18++;
				Global_1915127 = 1;
			}
		}
		else
		{
			func_89(uParam0, 255, 255, 0);
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_28(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			return 1;
	}
	return 0;
}

void func_30(var uParam0)
{
	func_90(uParam0);
	func_91(&(uParam0->f_7), 1);
}

int func_31(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	float fVar15;

	if (func_52(vParam1))
	{
		return 0;
	}
	if (*iParam4 <= -1)
	{
		*iParam4 = func_9(iParam0, vParam1);
	}
	if (*iParam4 <= -1)
	{
		return 0;
	}
	fVar14 = -1f;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_81(*iParam4, iVar0))
		{
			if (bParam6 && func_37(*iParam4, iVar0))
			{
			}
			else if (bParam7 && !func_37(*iParam4, iVar0))
			{
			}
			else
			{
				vVar8 = { func_55(*iParam4) };
				func_84(*iParam4, iVar0, &iVar1, &iVar2, &uVar3);
				vVar5.x = (vVar8.x + (IntToFloat(iVar1) * BUILTIN::COS(BUILTIN::TO_FLOAT(iVar2))));
				vVar5.f_1 = (vVar8.y + (IntToFloat(iVar1) * BUILTIN::SIN(BUILTIN::TO_FLOAT(iVar2))));
				fVar15 = func_56(vParam1, vVar5);
				if (fVar14 < 0f || (fVar14 >= 0f && fVar15 < fVar14))
				{
					fVar14 = fVar15;
					iVar4 = iVar0;
					vVar11 = { vVar5 };
				}
			}
		}
		iVar0++;
	}
	if (func_56(vParam1, vVar11) < IntToFloat(iParam8))
	{
		*iParam5 = iVar4;
		return 1;
	}
	return 0;
}

void func_32(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_92(joaat("KIT_COLLECTORS_BAG"), 1))
	{
		return;
	}
	if (func_93(0))
	{
		return;
	}
	if (func_94())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (TASK::_0xEC7E480FF8BD0BED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_52(*Global_1201104) && MISC::GET_DISTANCE_BETWEEN_COORDS(*Global_1201104, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_95(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_96()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = AUDIO::GET_SOUND_ID();
						if (func_97(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) != joaat("WEAPON_KIT_METAL_DETECTOR"))
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_98(uParam0, 1);
					}
				}
				else
				{
					func_98(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_73(&(uParam0->f_2));
			func_98(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_90(uParam0);
				}
				func_98(uParam0, 0);
			}
			else if (func_72(&(uParam0->f_2)) >= 2f)
			{
				func_98(uParam0, 1);
			}
			break;
	}
}

void func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_99(iParam0, &iVar0, &iVar1);
	if (!func_100(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_101(iVar0, iVar1);
}

bool func_34(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_2() != -1)
	{
		return ((Global_20249[iParam0 /*9*/])->f_3 && iParam1) != 0;
	}
	return ((Global_12342[iParam0 /*9*/])->f_3 && iParam1) != 0;
}

void func_35(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_2() != -1)
	{
		(Global_20249[iParam0 /*9*/])->f_3 = ((Global_20249[iParam0 /*9*/])->f_3 - ((Global_20249[iParam0 /*9*/])->f_3 && iParam1));
		return;
	}
	(Global_12342[iParam0 /*9*/])->f_3 = ((Global_12342[iParam0 /*9*/])->f_3 - ((Global_12342[iParam0 /*9*/])->f_3 && iParam1));
}

void func_36(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 500)
	{
		return;
	}
	if (func_2() != -1)
	{
		(Global_20249[iParam0 /*9*/])->f_2 = func_5();
		return;
	}
	(Global_12342[iParam0 /*9*/])->f_2 = func_5();
}

bool func_37(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return false;
	}
	if (func_2() != -1)
	{
		return (Global_20249[iParam0 /*9*/])->f_4[iParam1] & 4096 != 0;
	}
	return (Global_12342[iParam0 /*9*/])->f_4[iParam1] & 4096 != 0;
}

void func_38(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_2() != -1)
	{
		(Global_20249[iParam0 /*9*/])->f_4[iParam1] |= 4096;
		return;
	}
	(Global_12342[iParam0 /*9*/])->f_4[iParam1] |= 4096;
}

int func_39(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, vector3 vParam60, int iParam63)
{
	int iVar0;

	if (func_56(Param0, vParam60) > 26f)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275573->f_8))
	{
		iVar0 = func_102(Param0.f_18);
		TELEMETRY::_0xAE693EC3A178F6C2(iVar0);
		COMPENDIUM::COMPENDIUM_HERB_PICKED(iVar0, vParam60);
	}
	func_36(Param0.f_24);
	if (!func_103(Param0.f_18))
	{
		func_104(Param0.f_18, 0, 0);
	}
	if (iParam63 == 1)
	{
		func_105(Param0.f_18, 1);
	}
	else
	{
		func_106(Param0.f_18, 1);
	}
	return 1;
}

bool func_40(int iParam0)
{
	return !func_3(iParam0);
}

int func_41(struct<60> Param0, vector3 vParam60, int iParam63, var uParam64, var uParam65, var uParam66, bool bParam67)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar0 = Param0.f_18;
	iVar1 = Param0.f_24;
	if (!func_28(Global_1275573->f_8))
	{
		return 0;
	}
	if (iVar1 != -1)
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, vParam60, true);
		if (fVar2 > 25f)
		{
			return 0;
		}
		if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_1275573->f_8, 1027129856))
		{
			return 0;
		}
		if (func_39(Param0, vParam60, 1))
		{
			if (PED::IS_PED_ON_FOOT(Global_1275573->f_8))
			{
				if (iVar0 == 26 || iVar0 == 11)
				{
					*bParam67 = 1;
				}
				else if (iVar0 == 29)
				{
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
					if (iVar3 == 3)
					{
						*bParam67 = 1;
					}
				}
				else
				{
					*bParam67 = 0;
				}
			}
			func_38(iVar1, iParam63);
			func_107(iVar0, 1, 1);
			func_109(func_108(iVar0));
			func_110(func_108(iVar0), 1, 1, 0, 0, 0, 0);
			func_42(uParam64, uParam65, *bParam67, uParam66);
			return 1;
		}
	}
	return 0;
}

int func_42(var uParam0, var uParam1, bool bParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (bParam2)
			{
				func_111(uParam3, 0);
				bParam2 = false;
			}
			if (func_70(uParam3) && func_72(uParam3) > 2f)
			{
				func_112(uParam0, 1);
				func_113(uParam3);
			}
			break;
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@MPSTORY@MP_PoisonHerb@IG@IG1_CommonBullrush@IG1_CommonBullrush", 0, "Herb_PL", true, false);
			func_112(uParam0, 2);
			break;
		case 2:
			if (ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_112(uParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0) && ANIMSCENE::_0x95531A4A20CCE7BC(*uParam1, 0))
			{
				if (PED::IS_PED_MALE(Global_34))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "MP_Male", Global_34, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "MP_Female", Global_34, 0);
				}
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_112(uParam0, 5);
			}
			break;
		case 5:
			if ((!ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0) || PED::IS_PED_FALLING(Global_34)) || ENTITY::IS_ENTITY_IN_WATER(Global_34))
			{
				if (PED::IS_PED_MALE(Global_34))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "MP_Male", Global_34);
				}
				else
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "MP_Female", Global_34);
				}
				func_112(uParam0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (func_81(uParam0->f_24, iVar1) && &uParam0->f_13[iVar1] != iVar0)
		{
			TASK::_0x5758B1EE0C3FD4AC(&(uParam0->f_13[iVar1]), 0);
			uParam0->f_13[iVar1] = 0;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_114(uParam0->f_28[iVar2]))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(uParam0->f_28[iVar2], 1);
			uParam0->f_28[iVar2] = -1;
		}
		if (func_114(uParam0->f_33[iVar2]))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(uParam0->f_33[iVar2], 1);
			uParam0->f_33[iVar2] = -1;
		}
		iVar2++;
	}
	iLocal_18 = 0;
}

int func_44(var uParam0)
{
	return uParam0->f_9;
}

bool func_45(int iParam0)
{
	return iParam0 != 4;
}

int func_46(var uParam0)
{
	return uParam0->f_8;
}

void func_47(var uParam0, int iParam1)
{
	if (!func_45(iParam1))
	{
		return;
	}
	if (func_46(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_8 = iParam1;
}

void func_48(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_115(&Global_1939178, 4194304))
	{
		bVar0 = true;
	}
	if (func_46(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_22)
	{
		if (func_69(&(uParam0->f_13[iVar1])))
		{
			MISC::_0x082C043C7AFC3747(&(uParam0->f_13[iVar1]), 1);
			MISC::_0x40D72189F46D2E15(&(uParam0->f_13[iVar1]), 1);
		}
		iVar1++;
	}
}

void func_49(var uParam0, int iParam1)
{
	uParam0->f_18 = func_116(iParam1);
	uParam0->f_19 = func_108(uParam0->f_18);
	uParam0->f_20 = func_117(uParam0->f_18);
	uParam0->f_23 = func_118(uParam0->f_18);
	uParam0->f_21 = func_119(uParam0->f_18);
	uParam0->f_22 = func_120(uParam0->f_18);
	uParam0->f_38 = func_121(uParam0->f_18);
}

int func_50(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_39.f_3434[iVar1]), iVar2);
}

int func_52(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_2() != -1)
	{
		return &Global_20249[iParam0 /*9*/] > 0;
	}
	return &Global_12342[iParam0 /*9*/] > 0;
}

int func_54(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_2() != -1)
	{
		return &(Global_20249[iParam0 /*9*/]);
	}
	else
	{
		return &(Global_12342[iParam0 /*9*/]);
	}
	return 0;
}

Vector3 func_55(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1f, -1f, -1f;
	}
	if (func_2() != -1)
	{
		return func_122((Global_20249[iParam0 /*9*/])->f_1);
	}
	return func_122((Global_12342[iParam0 /*9*/])->f_1);
}

float func_56(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_57(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	struct<5> Var0;

	Var0.f_2 = -15;
	Var0.f_4 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 9);
	*iParam0 = iParam1;
	iParam0->f_1 = func_123(vParam2);
	iParam0->f_2 = iParam5;
}

void func_58(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	struct<5> Var0;

	Var0.f_2 = -15;
	Var0.f_4 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 9);
	*iParam0 = iParam1;
	iParam0->f_1 = func_123(vParam2);
	iParam0->f_2 = iParam5;
}

void func_59(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	switch (iParam0)
	{
		case 0:
			(*uParam2)[0] = 1;
			(*uParam2)[1] = 2;
			(*uParam2)[2] = 3;
			break;
		case 1:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		case 2:
			(*uParam2)[0] = 3;
			(*uParam2)[1] = 4;
			(*uParam2)[2] = 5;
			break;
		case 3:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		default:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
	}
	(*uParam1)[0] = 0;
	(*uParam1)[1] = 67;
	(*uParam1)[2] = 139;
	(*uParam1)[3] = 223;
	(*uParam1)[4] = 293;
	(*uParam1)[5] = 359;
	iVar0 = 5;
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
		uVar2 = uParam1[iVar1];
		(*uParam1)[iVar1] = uParam1[iVar0];
		(*uParam1)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > 500)
	{
		return;
	}
	if (func_2() != -1)
	{
		(Global_20249[iParam0 /*9*/])->f_4[iParam1] = iParam2;
	}
	(Global_12342[iParam0 /*9*/])->f_4[iParam1] = iParam2;
}

int func_61(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

bool func_62()
{
	return (Global_1893575 & 1 != 0 && func_124() != -1);
}

int func_63(bool bParam0)
{
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
	return 0;
}

int func_64(bool bParam0, bool bParam1)
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

bool func_65()
{
	return func_125(Global_1572887->f_7, 1);
}

int func_66(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam1 != -1)
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if ((Global_1184573->f_1[iVar1 /*26*/])->f_1 == iParam1 && func_126(iVar1, 64, iVar0))
			{
				if (bParam2)
				{
					if (&Global_1185132->f_66[iVar1 /*20*/] >= 2)
					{
						return 1;
					}
				}
				else if (&Global_1185132->f_66[iVar1 /*20*/] >= 5)
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	return (Global_1184573->f_1[iParam0 /*26*/])->f_3;
}

int func_68(int iParam0)
{
	if (!func_127(iParam0))
	{
		return 0;
	}
	return func_128(iParam0, 4, 1);
}

bool func_69(int iParam0)
{
	return iParam0 != -1;
}

bool func_70(var uParam0)
{
	return func_129(*uParam0, 1);
}

void func_71(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_70(uParam0))
	{
		func_130(uParam0, fParam1);
	}
}

float func_72(var uParam0)
{
	if (!func_70(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_131(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_132() - uParam0->f_1);
}

void func_73(var uParam0)
{
	func_130(uParam0, 0f);
}

bool func_74(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

void func_75(var uParam0, int iParam1)
{
	if (!func_45(iParam1))
	{
		return;
	}
	if (func_44(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_9 = iParam1;
}

bool func_76(int iParam0)
{
	if (func_2() != -1)
	{
		return (Global_20249[iParam0 /*9*/])->f_2 != -15;
	}
	return (Global_12342[iParam0 /*9*/])->f_2 != -15;
}

int func_77(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_54(iParam0);
	if (!func_3(iVar0) || func_2() != -1)
	{
		return 0;
	}
	return 0;
}

var func_78(int iParam0)
{
	if (func_2() != -1)
	{
		return (Global_20249[iParam0 /*9*/])->f_2;
	}
	return (Global_12342[iParam0 /*9*/])->f_2;
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_133(*uParam0);
	iVar1 = func_134(*uParam0);
	iVar2 = func_135(*uParam0);
	iVar3 = func_6(*uParam0);
	iVar4 = func_136(*uParam0);
	iVar5 = func_137(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_138(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_138(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_139(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_80(int iParam0, bool bParam1)
{
	return func_140(func_5(), iParam0, bParam1);
}

bool func_81(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_2() != -1)
	{
		return (Global_20249[iParam0 /*9*/])->f_4[iParam1] & 1073741824 != 0;
	}
	return (Global_12342[iParam0 /*9*/])->f_4[iParam1] & 1073741824 != 0;
}

void func_82(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_2() != -1)
	{
		(Global_20249[iParam0 /*9*/])->f_4[iParam1] = (&(Global_20249[iParam0 /*9*/])->f_4[iParam1] - (Global_20249[iParam0 /*9*/])->f_4[iParam1] & 4096);
		return;
	}
	(Global_12342[iParam0 /*9*/])->f_4[iParam1] = (&(Global_12342[iParam0 /*9*/])->f_4[iParam1] - (Global_12342[iParam0 /*9*/])->f_4[iParam1] & 4096);
}

void func_83(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_2() != -1)
	{
		(Global_20249[iParam0 /*9*/])->f_3 = ((Global_20249[iParam0 /*9*/])->f_3 || iParam1);
		return;
	}
	(Global_12342[iParam0 /*9*/])->f_3 = ((Global_12342[iParam0 /*9*/])->f_3 || iParam1);
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_2() != -1)
	{
		func_141(Global_20249[iParam0 /*9*/], iParam1, iParam2, iParam3, uParam4);
		return;
	}
	func_142(Global_12342[iParam0 /*9*/], iParam1, iParam2, iParam3, uParam4);
}

Vector3 func_85(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = BUILTIN::SIN(fParam3);
	fVar4 = BUILTIN::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

float func_86(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_88(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = -1;
	func_143(uParam0, vParam1, fParam4, 4, iVar0, 0);
}

void func_89(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((((((((uParam0->f_18 == 39 || uParam0->f_18 == 41) || uParam0->f_18 == 42) || uParam0->f_18 == 40) || uParam0->f_18 == 43) || uParam0->f_18 == 44) || uParam0->f_18 == 45) || uParam0->f_18 == 46) || uParam0->f_18 == 47)
	{
		if (iLocal_18 > 0)
		{
			iVar0 = 0;
			while (iVar0 < iLocal_18)
			{
				iVar1 = TASK::_0x96C6ED22FB742C3E(&(uParam0->f_13[iVar0]), &(uParam0->f_39));
				if (iVar1 > 0 && iVar1 <= 10)
				{
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_39[iVar2 /*2*/])))
						{
							PLAYER::_0x62ED71E133B6C9F1(&(uParam0->f_39[iVar2 /*2*/]), iParam1, iParam2, iParam3);
							MAP::_0x7563CBCA99253D1A(&(uParam0->f_39[iVar2 /*2*/]), joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
						}
						iVar2++;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_90(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		AUDIO::_0x0F2A2175734926D8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_5 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_91(var uParam0, int iParam1)
{
	if (func_114(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

bool func_92(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_144(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_145(iParam0);
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
			if (!func_146(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_147(iParam0))
			{
				return true;
			}
			break;
	}
	return func_148(iParam0, 0, 0, 0) >= iParam1;
}

bool func_93(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

bool func_94()
{
	return func_149() != -1;
}

float func_95(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_96()
{
	return (Global_1140484->f_2001[82 /*192*/])->f_188;
}

int func_97(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_100(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_150(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_151(iParam0))
	{
		return 0;
	}
	if (func_152(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_153(iParam0, 1)) || func_154(32768))
	{
		if (!func_153(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_155())
	{
		return 0;
	}
	return 1;
}

void func_101(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("HERB_ALASKAN_GINSENG");
		case 3:
			return joaat("HERB_AMERICAN_GINSENG");
		case 4:
			return joaat("HERB_BAY_BOLETE");
		case 5:
			return joaat("HERB_BLACK_BERRY");
		case 6:
			return joaat("HERB_BLACK_CURRANT");
		case 7:
			return joaat("HERB_BURDOCK_ROOT");
		case 8:
			return joaat("HERB_CHANTERELLES");
		case 11:
			return joaat("HERB_COMMON_BULRUSH");
		case 12:
			return joaat("HERB_CREEPING_THYME");
		case 13:
			return joaat("HERB_DESERT_SAGE");
		case 15:
			return joaat("HERB_ENGLISH_MACE");
		case 16:
			return joaat("HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("HERB_GOLDEN_CURRANT");
		case 19:
			return joaat("HERB_HUMMINGBIRD_SAGE");
		case 20:
			return joaat("HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("HERB_MILKWEED");
		case 26:
			return joaat("HERB_OLEANDER_SAGE");
		case 27:
			return joaat("HERB_OREGANO");
		case 28:
			return joaat("HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("HERB_RAMS_HEAD");
		case 33:
			return joaat("HERB_RED_RASPBERRY");
		case 34:
			return joaat("HERB_RED_SAGE");
		case 37:
			return joaat("HERB_VANILLA_FLOWER");
		case 38:
			return joaat("HERB_VIOLET_SNOWDROP");
		case 48:
			return joaat("HERB_WILD_CARROTS");
		case 49:
			return joaat("HERB_WILD_FEVERFEW");
		case 50:
			return joaat("HERB_WILD_MINT");
		case 51:
			return joaat("HERB_WINTERGREEN_BERRY");
		case 52:
			return joaat("HERB_YARROW");
		case 1:
			return joaat("HERB_ACUNAS_STAR_ORCHID");
		case 9:
			return joaat("HERB_CIGAR_ORCHID");
		case 10:
			return joaat("HERB_CLAMSHELL_ORCHID");
		case 14:
			return joaat("HERB_DRAGONS_MOUTH_ORCHID");
		case 17:
			return joaat("HERB_GHOST_ORCHID");
		case 21:
			return joaat("HERB_LADY_OF_NIGHT_ORCHID");
		case 22:
			return joaat("HERB_LADY_SLIPPER_ORCHID");
		case 24:
			return joaat("HERB_MOCCASIN_FLOWER_ORCHID");
		case 25:
			return joaat("HERB_NIGHT_SCENTED_ORCHID");
		case 30:
			return joaat("HERB_QUEENS_ORCHID");
		case 32:
			return joaat("HERB_RAT_TAIL_ORCHID");
		case 35:
			return joaat("HERB_SPARROWS_EGG_ORCHID");
		case 36:
			return joaat("HERB_SPIDER_ORCHID");
		case 39:
			return joaat("HERB_WILD_FLWR_AGARITA");
		case 41:
			return joaat("HERB_WILD_FLWR_BITTERWEED");
		case 42:
			return joaat("HERB_WILD_FLWR_BLOOD_FLOWER");
		case 40:
			return joaat("HERB_WILD_FLWR_BLUE_BONNET");
		case 43:
			return joaat("HERB_WILD_FLWR_CARDINAL_FLOWER");
		case 44:
			return joaat("HERB_WILD_FLWR_CHOCOLATE_DAISY");
		case 45:
			return joaat("HERB_WILD_FLWR_CREEK_PLUM");
		case 46:
			return joaat("HERB_WILD_FLWR_RHUBARB");
		case 47:
			return joaat("HERB_WILD_FLWR_WISTERIA");
	}
	return 0;
}

int func_103(int iParam0)
{
	if (!func_127(iParam0))
	{
		return 0;
	}
	return func_128(iParam0, 1, 1);
}

void func_104(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (func_103(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_3(iParam0);
	}
	if (!bParam1)
	{
		func_156(iParam0);
	}
	func_157(iParam0, 1);
	func_158(iParam0, 1);
	if (bParam2)
	{
		if (!func_159(0, 0, 1))
		{
			func_160(1, 6);
		}
	}
}

void func_105(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_161(joaat("EATEN"), func_102(iParam0)) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	func_163(func_162(joaat("HERBS_EATEN")), iParam1);
}

void func_106(int iParam0, int iParam1)
{
	func_163(func_161(joaat("PICK"), func_102(iParam0)), iParam1);
	func_163(func_162(joaat("HERBS_PICKED_TOTAL")), iParam1);
	if (func_164(iParam0))
	{
		func_163(func_162(joaat("HERBS_PICKED_MUSHROOMS")), iParam1);
	}
}

void func_107(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_108(iParam0);
	iVar1 = func_165(iVar0);
	if (iVar1 != iParam0)
	{
		func_157(iVar1, 4);
	}
	if (!func_127(iParam0))
	{
		return;
	}
	if (func_68(iParam0))
	{
		return;
	}
	func_157(iParam0, 4);
	func_158(iParam0, bParam1);
	if (!func_103(iParam0))
	{
		func_104(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_159(0, 0, 1))
		{
			func_160(1, 6);
		}
	}
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 3:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 4:
			return joaat("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return joaat("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 7:
			return joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return joaat("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return joaat("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 15:
			return joaat("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 19:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 20:
			return joaat("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("CONSUMABLE_HERB_MILKWEED");
		case 26:
			return joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 27:
			return joaat("CONSUMABLE_HERB_OREGANO");
		case 28:
			return joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("CONSUMABLE_HERB_RAMS_HEAD");
		case 33:
			return joaat("CONSUMABLE_HERB_RED_RASPBERRY");
		case 34:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 37:
			return joaat("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 38:
			return joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 48:
			return joaat("CONSUMABLE_HERB_WILD_CARROTS");
		case 49:
			return joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 50:
			return joaat("CONSUMABLE_HERB_WILD_MINT");
		case 51:
			return joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 52:
			return joaat("CONSUMABLE_HERB_YARROW");
		case 39:
			return joaat("PROVISION_WLDFLWR_AGARITA");
		case 40:
			return joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET");
		case 41:
			return joaat("PROVISION_WLDFLWR_BITTERWEED");
		case 42:
			return joaat("PROVISION_WLDFLWR_BLOOD_FLOWER");
		case 43:
			return joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER");
		case 44:
			return joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY");
		case 45:
			return joaat("PROVISION_WLDFLWR_CREEK_PLUM");
		case 46:
			return joaat("PROVISION_WLDFLWR_WILD_RHUBARB");
		case 47:
			return joaat("PROVISION_WLDFLWR_WISTERIA");
		default:
			break;
	}
	return 0;
}

void func_109(int iParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;

	Var0.f_1 = 20;
	if ((func_166(iParam0, 1573112293) || func_166(iParam0, 672467738)) || func_166(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_145(iParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				uVar30 = func_167(0, Var22.f_2);
				func_168(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				uVar31 = func_167(2, Var22.f_2);
				func_169(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				uVar32 = func_167(1, Var22.f_2);
				func_170(Var22.f_2);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == Var22.f_1)
			{
				fVar33 = func_171(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_172(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == Var22.f_1)
			{
				fVar34 = func_171(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_172(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == Var22.f_1)
			{
				fVar35 = func_171(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_172(1, fVar35, 1, 1, bVar37);
			}
			else if (joaat("EFFECT_HEALTH_CORE_GOLD") == Var22.f_1)
			{
				fVar36 = func_173(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_174(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE_GOLD") == Var22.f_1)
			{
				fVar36 = func_173(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_174(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE_GOLD") == Var22.f_1)
			{
				fVar36 = func_173(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_174(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_173(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_174(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_173(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_174(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_173(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_174(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_175(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_166(iParam0, -537818634))
		{
			func_163(func_176(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_166(iParam0, -1457797660))
		{
			func_163(func_176(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar38)
		{
			func_163(func_176(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		if (iParam0 == -241345764 || iParam0 == -1735850413)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_SALOONSNACK_00"), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(uVar30, uVar32, uVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_110(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	char* sVar19;
	char cVar20[128];

	if (!func_144(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_177() || bParam6)
	{
		func_178(iParam0, iParam1, bParam2, iParam4, iParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_179(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (iParam3 || iParam4)
	{
		StringCopy(&cVar2, func_179(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_180(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_145(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_181(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_182(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_166(iParam0, 474910316))
	{
		sVar17 = func_183(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_166(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	iVar18 = func_184(iParam0);
	if ((func_185(iVar12) && func_166(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_186(iParam0);
	}
	sVar19 = func_187(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_166(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_188(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_166(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_189(iParam0, &cVar20))
			{
				sVar19 = func_191(func_190(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_192(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

void func_111(var uParam0, bool bParam1)
{
	if (bParam1 || !func_70(uParam0))
	{
		func_73(uParam0);
	}
}

void func_112(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_113(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_114(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_115(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_116(int iParam0)
{
	var uVar0;
	int iVar54;
	bool bVar55;

	if (Global_1914966->f_160)
	{
		uVar0 = 53;
		iVar54 = 0;
		while (iVar54 <= 1)
		{
			if ((*Global_1914966)[iParam0 /*3*/][iVar54] != 0)
			{
				bVar55 = true;
			}
			else
			{
				iVar54++;
			}
		}
		if (!bVar55)
		{
			return iParam0;
		}
		func_193(&uVar0, 53, 1);
		iVar54 = 0;
		while (iVar54 <= 52)
		{
			if (iVar54 == iParam0)
			{
			}
			else if (func_194((*Global_1914966)[iParam0 /*3*/], iVar54, 53))
			{
				return iVar54;
			}
			iVar54++;
		}
		return iParam0;
	}
	return iParam0;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 15:
			return 0;
		case 16:
			return 1;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 23:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 31:
			return 0;
		case 33:
			return 1;
		case 34:
			return 0;
		case 37:
			return 3;
		case 38:
			return 0;
		case 48:
			return 0;
		case 49:
			return 0;
		case 50:
			return 0;
		case 51:
			return 1;
		case 52:
			return 0;
		case 1:
			return 3;
		case 9:
			return 3;
		case 10:
			return 3;
		case 14:
			return 3;
		case 17:
			return 3;
		case 21:
			return 3;
		case 22:
			return 3;
		case 24:
			return 3;
		case 25:
			return 3;
		case 30:
			return 3;
		case 32:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		case 39:
			return 3;
		case 40:
			return 3;
		case 41:
			return 3;
		case 42:
			return 3;
		case 43:
			return 3;
		case 44:
			return 3;
		case 45:
			return 3;
		case 46:
			return 3;
		case 47:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 23:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 31:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 37:
			return 0;
		case 38:
			return 0;
		case 48:
			return 0;
		case 49:
			return 0;
		case 50:
			return 0;
		case 51:
			return 0;
		case 52:
			return 4;
		case 1:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 14:
			return 0;
		case 17:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 30:
			return 0;
		case 32:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
			return 0;
		case 42:
			return 0;
		case 43:
			return 0;
		case 44:
			return 0;
		case 45:
			return 0;
		case 46:
			return 0;
		case 47:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 2;
		case 8:
			return 2;
		case 11:
			return 3;
		case 12:
			return 3;
		case 13:
			return 2;
		case 15:
			return 2;
		case 16:
			return 1;
		case 18:
			return 2;
		case 19:
			return 2;
		case 20:
			return 2;
		case 23:
			return 2;
		case 26:
			return 2;
		case 27:
			return 3;
		case 28:
			return 2;
		case 29:
			return 2;
		case 31:
			return 2;
		case 33:
			return 1;
		case 34:
			return 2;
		case 37:
			return 1;
		case 38:
			return 2;
		case 48:
			return 2;
		case 49:
			return 2;
		case 50:
			return 3;
		case 51:
			return 1;
		case 52:
			return 2;
		case 1:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 14:
			return 1;
		case 17:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 30:
			return 1;
		case 32:
			return 1;
		case 35:
			return 1;
		case 36:
			return 1;
		case 39:
			return 1;
		case 40:
			return 1;
		case 41:
			return 1;
		case 42:
			return 1;
		case 43:
			return 1;
		case 44:
			return 1;
		case 45:
			return 1;
		case 46:
			return 1;
		case 47:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 4;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 3;
		case 8:
			return 4;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 15:
			return 3;
		case 16:
			return 2;
		case 18:
			return 3;
		case 19:
			return 3;
		case 20:
			return 3;
		case 23:
			return 3;
		case 26:
			return 3;
		case 27:
			return 4;
		case 28:
			return 4;
		case 29:
			return 3;
		case 31:
			return 4;
		case 33:
			return 2;
		case 34:
			return 3;
		case 37:
			return 1;
		case 38:
			return 3;
		case 48:
			return 3;
		case 49:
			return 3;
		case 50:
			return 4;
		case 51:
			return 2;
		case 52:
			return 3;
		case 1:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 14:
			return 1;
		case 17:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 30:
			return 1;
		case 32:
			return 1;
		case 35:
			return 1;
		case 36:
			return 1;
		case 39:
			return 1;
		case 40:
			return 1;
		case 41:
			return 1;
		case 42:
			return 1;
		case 43:
			return 1;
		case 44:
			return 1;
		case 45:
			return 1;
		case 46:
			return 1;
		case 47:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("COMPOSITE_LOOTABLE_ALASKAN_GINSENG_ROOT_DEF");
		case 3:
			return joaat("COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_DEF");
		case 4:
			return joaat("COMPOSITE_LOOTABLE_BAY_BOLETE_DEF");
		case 5:
			return joaat("COMPOSITE_LOOTABLE_BLACK_BERRY_DEF");
		case 6:
			return joaat("COMPOSITE_LOOTABLE_BLACK_CURRANT_DEF");
		case 7:
			return joaat("COMPOSITE_LOOTABLE_BURDOCK_ROOT_DEF");
		case 8:
			return joaat("COMPOSITE_LOOTABLE_CHANTERELLES_DEF");
		case 11:
			return joaat("COMPOSITE_LOOTABLE_COMMON_BULRUSH_DEF");
		case 12:
			return joaat("COMPOSITE_LOOTABLE_CREEPING_THYME_DEF");
		case 13:
			return joaat("COMPOSITE_LOOTABLE_DESERT_SAGE_DEF");
		case 15:
			return joaat("COMPOSITE_LOOTABLE_ENGLISH_MACE_DEF");
		case 16:
			return joaat("COMPOSITE_LOOTABLE_EVERGREEN_HUCKLEBERRY_DEF");
		case 18:
			return joaat("COMPOSITE_LOOTABLE_GOLDEN_CURRANT_DEF");
		case 19:
			return joaat("COMPOSITE_LOOTABLE_HUMMINGBIRD_SAGE_DEF");
		case 20:
			return joaat("COMPOSITE_LOOTABLE_INDIAN_TOBACCO_DEF");
		case 23:
			return joaat("COMPOSITE_LOOTABLE_MILKWEED_DEF");
		case 26:
			return joaat("COMPOSITE_LOOTABLE_OLEANDER_SAGE_DEF");
		case 27:
			return joaat("COMPOSITE_LOOTABLE_OREGANO_DEF");
		case 28:
			return joaat("COMPOSITE_LOOTABLE_PARASOL_MUSHROOM_DEF");
		case 29:
			return joaat("COMPOSITE_LOOTABLE_PRAIRIE_POPPY_DEF");
		case 31:
			return joaat("COMPOSITE_LOOTABLE_RAMS_HEAD_DEF");
		case 33:
			return joaat("COMPOSITE_LOOTABLE_RED_RASPBERRY_DEF");
		case 34:
			return joaat("COMPOSITE_LOOTABLE_RED_SAGE_DEF");
		case 37:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_VANILLA_DEF");
		case 38:
			return joaat("COMPOSITE_LOOTABLE_VIOLET_SNOWDROP_DEF");
		case 48:
			return joaat("COMPOSITE_LOOTABLE_WILD_CARROT_DEF");
		case 49:
			return joaat("COMPOSITE_LOOTABLE_WILD_FEVERFEW_DEF");
		case 50:
			return joaat("COMPOSITE_LOOTABLE_WILD_MINT_DEF");
		case 51:
			return joaat("COMPOSITE_LOOTABLE_WINTERGREEN_BERRY_DEF");
		case 52:
			return joaat("COMPOSITE_LOOTABLE_YARROW_DEF");
		case 1:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_ACUNA_STAR_DEF");
		case 9:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_CIGAR_DEF");
		case 39:
			return joaat("COMPOSITE_LOOTABLE_AGARITA_DEF");
		case 40:
			return joaat("COMPOSITE_LOOTABLE_TEXAS_BONNET_DEF");
		case 41:
			return joaat("COMPOSITE_LOOTABLE_BITTERWEED_DEF");
		case 42:
			return joaat("COMPOSITE_LOOTABLE_BLOODFLOWER_DEF");
		case 43:
			return joaat("COMPOSITE_LOOTABLE_CARDINAL_FLOWER_DEF");
		case 44:
			return joaat("COMPOSITE_LOOTABLE_CHOC_DAISY_DEF");
		case 45:
			return joaat("COMPOSITE_LOOTABLE_CREEKPLUM_DEF");
		case 46:
			return joaat("COMPOSITE_LOOTABLE_WILD_RHUBARB_DEF");
		case 47:
			return joaat("COMPOSITE_LOOTABLE_WISTERIA_DEF");
		case 10:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_CLAM_SHELL_DEF");
		case 14:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_DRAGONS_DEF");
		case 17:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_GHOST_DEF");
		case 21:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_NIGHT_DEF");
		case 22:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_SLIPPER_DEF");
		case 24:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_MOCCASIN_DEF");
		case 25:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_NIGHT_SCENTED_DEF");
		case 30:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_QUEENS_DEF");
		case 32:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_RAT_TAIL_DEF");
		case 35:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_SPARROWS_DEF");
		case 36:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_SPIDER_DEF");
		default:
			break;
	}
	return 0;
}

Vector3 func_122(int iParam0)
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

int func_123(struct<2> Param0, var uParam2)
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

int func_124()
{
	return Global_1893575->f_2;
}

bool func_125(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_126(int iParam0, int iParam1, int iParam2)
{
	return func_195((*Global_1184801)[iParam2 /*10*/][iParam0], iParam1);
}

bool func_127(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_128(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_127(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_13 != -1)
	{
		return (Global_17172[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4458[iParam0] && iParam1) != 0;
}

bool func_129(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_130(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_132() - fParam1);
	func_196(uParam0, 1);
	func_197(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_131(var uParam0)
{
	return func_129(*uParam0, 2);
}

float func_132()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_133(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_198(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_134(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_135(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_136(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_137(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_138(int iParam0, int iParam1)
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

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_199(iParam0, iParam6);
	func_200(iParam0, iParam5);
	func_201(iParam0, iParam4);
	func_202(iParam0, iParam3);
	func_203(iParam0, iParam2);
	func_204(iParam0, iParam1);
}

bool func_140(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_205(iParam1) || !func_205(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_141(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = uParam0->f_4[iParam1] & 511;
	*iParam2 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 57344, 13);
}

void func_142(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = uParam0->f_4[iParam1] & 511;
	*iParam2 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 57344, 13);
}

void func_143(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_114(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_114(uParam0))
		{
		}
	}
}

int func_144(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_145(int iParam0)
{
	vector3 vVar0;

	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_206(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_207("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_208(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_209(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_210(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_210(iVar1);
	}
	return 0;
}

bool func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_144(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_181(iParam0);
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
	iVar1 = func_211(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_212(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_213(iParam0);
	iVar2 = func_212(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_148(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_145(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_206(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_214(iParam0, 0);
	}
	if (func_215(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_216(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_217(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_216(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_149()
{
	return Global_1132549->f_137;
}

bool func_150(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_151(int iParam0)
{
	if (func_153(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_152(int iParam0)
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

bool func_153(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_154(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_155()
{
	if (!func_218())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

void func_156(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_33(239, 0);
			break;
		case 16:
			func_33(240, 0);
			break;
		case 33:
			func_33(241, 0);
			break;
		case 51:
			func_33(242, 0);
			break;
		case 2:
			func_33(243, 0);
			break;
		case 3:
			func_33(244, 0);
			break;
		case 52:
			func_33(245, 0);
			break;
		case 15:
			func_33(246, 0);
			break;
		case 23:
			func_33(247, 0);
			break;
		case 37:
			func_33(248, 0);
			break;
		case 26:
			func_33(249, 0);
			break;
		case 13:
			func_33(250, 0);
			break;
		case 19:
			func_33(251, 0);
			break;
		case 34:
			func_33(252, 0);
			break;
		case 38:
			func_33(253, 0);
			break;
		case 49:
			func_33(254, 0);
			break;
		case 7:
			func_33(255, 0);
			break;
		case 20:
			func_33(256, 0);
			break;
		case 18:
			func_33(257, 0);
			break;
		case 6:
			func_33(258, 0);
			break;
		case 29:
			func_33(259, 0);
			break;
		case 48:
			func_33(260, 0);
			break;
		case 11:
			break;
		case 4:
			func_33(262, 0);
			break;
		case 8:
			func_33(263, 0);
			break;
		case 28:
			func_33(264, 0);
			break;
		case 31:
			func_33(265, 0);
			break;
		case 12:
			func_33(266, 0);
			break;
		case 27:
			func_33(267, 0);
			break;
		case 50:
			func_33(268, 0);
			break;
	}
}

void func_157(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (func_2() != -1)
	{
		Global_17172[iParam0] = (Global_17172[iParam0] || iParam1);
		return;
	}
	Global_39.f_4458[iParam0] = (Global_39.f_4458[iParam0] || iParam1);
}

void func_158(int iParam0, bool bParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (func_219(iParam0))
	{
		return;
	}
	func_157(iParam0, 2);
	if (bParam1)
	{
		if (!func_159(0, 0, 1))
		{
			if (func_2() == -1)
			{
				func_160(1, 6);
			}
			else
			{
				func_220(1, 1017438712);
			}
		}
	}
}

int func_159(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900718->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900718->f_68;
		}
		if (func_221())
		{
			return 1;
		}
		if (Global_1070356->f_3 && !Global_1572887->f_9)
		{
			if ((((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_428 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900718->f_67;
		}
		else
		{
			return Global_1900718->f_68;
		}
	}
	if (iParam0 == 0 && func_223(func_222(0)))
	{
		return 1;
	}
	if ((Global_1939178 && 81919 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1900853)
		{
			return 1;
		}
	}
	switch (func_224(func_222(0)))
	{
		case -1:
			return 0;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return 0;
}

void func_160(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_225(&Global_0, 8);
	}
	if (!func_226() || func_2() != -1)
	{
		return;
	}
	func_225(&Global_0, 1);
}

struct<2> func_161(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

struct<2> func_162(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_163(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return 1;
	}
	return 0;
}

int func_165(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 20;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 23;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 26;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 27;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 28;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 29;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 31;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 33;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 34;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 37;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 38;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 48;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 49;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 50;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 51;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 52;
		case joaat("PROVISION_WLDFLWR_AGARITA"):
			return 39;
		case joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET"):
			return 40;
		case joaat("PROVISION_WLDFLWR_BITTERWEED"):
			return 41;
		case joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"):
			return 42;
		case joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER"):
			return 43;
		case joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY"):
			return 44;
		case joaat("PROVISION_WLDFLWR_CREEK_PLUM"):
			return 45;
		case joaat("PROVISION_WLDFLWR_WILD_RHUBARB"):
			return 46;
		case joaat("PROVISION_WLDFLWR_WISTERIA"):
			return 47;
	}
	return 0;
}

int func_166(int iParam0, int iParam1)
{
	if (!func_144(iParam0, 0))
	{
		return func_228(func_227(iParam0), iParam1);
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

float func_167(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_34));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_34);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_34);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_168(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_229(2);
	func_230(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_169(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_231(2);
	func_232(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_170(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_233(2);
	func_234(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_171(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_172(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_235(iParam0, fParam1, 1);
	}
	func_237(iParam0, (func_236(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_173(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

int func_174(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_238(iParam0, fParam1, bParam2, bParam3);
}

void func_175(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_239(13, 2);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_240())
	{
		iVar1 = func_241(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_241(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1954472->f_1331.f_107 = func_5();
			func_79(&(Global_1954472->f_1331.f_107), 0, 0, 1, 0, 0, 0, 0);
		}
		func_243(13, func_242(fVar0, 0f, 100f), 2);
	}
	if (bParam1)
	{
		Global_17172.f_54.f_2438.f_41++;
		if (5 == Global_17172.f_54.f_2438.f_41)
		{
			func_33(109, 0);
		}
	}
}

struct<2> func_176(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

bool func_177()
{
	return !&Global_1912978;
}

void func_178(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1912978->f_3)
	{
		if ((((&Global_1912978->f_4[iVar0 /*6*/] == iParam0 && (Global_1912978->f_4[iVar0 /*6*/])->f_2 == bParam2) && (Global_1912978->f_4[iVar0 /*6*/])->f_3 == iParam3) && (Global_1912978->f_4[iVar0 /*6*/])->f_4 == iParam4) && (Global_1912978->f_4[iVar0 /*6*/])->f_5 == bParam5)
		{
			(Global_1912978->f_4[iVar0 /*6*/])->f_1 = ((Global_1912978->f_4[iVar0 /*6*/])->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1912978->f_3 < 19)
	{
		Global_1912978->f_4[Global_1912978->f_3 /*6*/] = iParam0;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_1 = iParam1;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_2 = bParam2;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_3 = iParam3;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_4 = iParam4;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_5 = bParam5;
		Global_1912978->f_3++;
	}
}

char* func_179(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_180(int iParam0, int iParam1)
{
	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_181(int iParam0)
{
	struct<2> Var0;

	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_182(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_183(int iParam0)
{
	if (func_166(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_166(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_166(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_166(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_166(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_166(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_166(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_166(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_184(int iParam0)
{
	int iVar0;

	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_186(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

char* func_187(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_188(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_245(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_189(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_246(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_247(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_248(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return 0;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return 0;
	}
	*sParam1 = { cVar1 };
	return 1;
}

char* func_190(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_191(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_187(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_192(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_249(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_193(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = uParam0[iVar2];
		(*uParam0)[iVar2] = uParam0[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

bool func_194(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

bool func_195(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_196(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_197(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_198(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_199(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_200(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_134(*iParam0);
	iVar1 = func_133(*iParam0);
	if (iParam1 < 1 || iParam1 > func_138(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_202(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_203(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_204(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_137(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_136(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_6(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_133(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_134(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_135(iParam0);
	if (iVar5 < 1 || iVar5 > func_138(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_166(iParam0, 1399091007))
	{
		func_250(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_207(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_216(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_208(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_209(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_210(int iParam0)
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

int func_211(int iParam0)
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
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
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

int func_212(var uParam0, int iParam1)
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

int func_213(int iParam0)
{
	int iVar0;

	iVar0 = func_181(iParam0);
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

int func_214(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_251(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_253(&Var0, func_252(0));
	}
	if (!func_254(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_210(iVar14);
	return uVar15;
}

int func_215(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_216(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_217(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_255(iParam0, bParam1, 0) };
	return func_256(iParam0, Var0, Var0.f_4, bParam1);
}

int func_218()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)
{
	if (!func_127(iParam0))
	{
		return 0;
	}
	return func_128(iParam0, 2, 1);
}

int func_220(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_257())
	{
		return 0;
	}
	if (!func_218())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_225(&Global_0, 8);
	}
	func_225(&Global_0, 1);
	return 1;
}

int func_221()
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
	if (!func_223(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_222(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_223(struct<2> Param0)
{
	if (!func_258(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_259(Param0))
	{
		return 0;
	}
	return 1;
}

int func_224(var uParam0, var uParam1)
{
	return uParam0;
}

void func_225(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_226()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

int func_227(int iParam0)
{
	return iParam0;
}

int func_228(int iParam0, int iParam1)
{
	if (!func_260(iParam0, 2))
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

int func_229(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_261(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446;
		case 1:
			return Global_1954472->f_1465.f_136;
		default:
			break;
	}
	return -1;
}

void func_230(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_231(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_261(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_1;
		case 1:
			return Global_1954472->f_1465.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_232(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_262(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_233(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_261(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_2;
		case 1:
			return Global_1954472->f_1465.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_234(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iParam1, fParam0);
}

float func_235(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_5();
	func_263(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_264(iParam0, 2);
	if (func_140(iVar0, func_265(iParam0, 2), 1))
	{
		func_266(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_33(103, bParam2);
		return 0f;
	}
	func_267(iParam0, func_5(), 2);
	func_266(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_236(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_261(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_6[iParam0 /*3*/]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_237(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_261(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_268(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_269(iParam0, 7000, iParam5);
		}
		func_270(iVar0, iParam0, fParam1);
		func_271(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_238(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_272(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_273(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_168(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			Global_17172.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_273(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_274(joaat("STATUS_EFFECT__TRACKING"));
			func_170(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			Global_17172.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_273(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_169(-1, 0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			Global_17172.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_274(joaat("STATUS_EFFECT__POISON"));
			func_275(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			(Global_17172.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_275(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			(Global_17172.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_275(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, bParam3);
			(Global_17172.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

float func_239(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_261(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_26[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_240()
{
	if (Global_1954472->f_1331.f_107 == -15)
	{
		return 1;
	}
	return func_80(Global_1954472->f_1331.f_107, 0);
}

int func_241(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

float func_242(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_243(int iParam0, float fParam1, int iParam2)
{
	if (!func_276(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_261(2);
	}
	func_277(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275573->f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1275573->f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_244(int iParam0)
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

int func_245(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if ((Var0[iVar43 /*2*/])->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_246(int iParam0)
{
	int iVar0;

	if (!func_144(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_184(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_247(int iParam0)
{
	if (func_181(iParam0) == -126813555 || func_181(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_248(int iParam0)
{
	int iVar0;

	if (!func_144(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_186(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_249(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

void func_250(int iParam0, var uParam1, var uParam2)
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

struct<14> func_251(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_252(bool bParam0)
{
	int iVar0;

	iVar0 = func_216(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_256(923904168, func_278(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_256(923904168, func_278(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_256(923904168, func_278(bParam0), -740156546, 0);
}

void func_253(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_254(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_216(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<5> func_255(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_278(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_145(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_256(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_252(bParam1) };
			if (iParam2 && func_279(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_280(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_280(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_281(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_282(bParam1) };
			switch (func_181(iParam0))
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
			if (func_283(iParam0, -1823706425))
			{
				Var0 = { func_256(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_283(iParam0, -1483207246))
			{
				Var0 = { func_256(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_256(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_283(iParam0, -1653629781))
			{
				Var0 = { func_256(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_284(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_283(iParam0, -1653629781))
			{
				Var0 = { func_256(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_256(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_144(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_216(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_257()
{
	return !Global_1572887->f_9;
}

int func_258(int iParam0)
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

int func_259(int iParam0)
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

int func_260(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_261(int iParam0)
{
	return func_286(func_285(iParam0));
}

bool func_262(int iParam0)
{
	float fVar0;

	fVar0 = (func_287(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

void func_263(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_133(*iParam0);
	iVar1 = func_134(*iParam0);
	iVar2 = func_135(*iParam0);
	iVar3 = func_6(*iParam0);
	iVar4 = func_136(*iParam0);
	iVar5 = func_137(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_138(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_139(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_264(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_261(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_265(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_261(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

void func_266(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_261(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_261(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_268(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_288(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

void func_269(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_261(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_270(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_289(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_290(iParam1), fParam2, -1);
	}
}

void func_271(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_261(2);
	}
	uVar0 = Global_1275573->f_21;
	func_291(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_292(iParam0, uVar0, iParam3);
	}
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1140484->f_41657.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1140484->f_41657.f_1[iVar2 /*2*/];
		iVar3 = func_293(iVar0, 1);
		if (&Global_1140484->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_294(iVar0);
			Global_1140484->f_41657.f_1.f_42 = (Global_1140484->f_41657.f_1.f_42 - 1);
		}
		else
		{
			*(Var6[iVar4 /*2*/]) = { *(Global_1140484->f_41657.f_1[iVar2 /*2*/]) };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*(Global_1140484->f_41657.f_1[iVar5 /*2*/]) = { *(Var6[iVar5 /*2*/]) };
		iVar5++;
	}
}

void func_275(int iParam0, bool bParam1, bool bParam2)
{
	func_237(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_276(int iParam0)
{
	if (func_272(iParam0))
	{
		return 1;
	}
	else if (func_295(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_277(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_261(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

struct<4> func_278(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_216(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_256(joaat("CHARACTER"), func_296(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_256(joaat("CHARACTER"), func_296(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_256(joaat("CHARACTER"), func_296(), -1591664384, bParam0);
}

int func_279(int iParam0, bool bParam1)
{
	if (func_181(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_297();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_280(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_298(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_281(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_299(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_282(bool bParam0)
{
	int iVar0;

	iVar0 = func_216(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_256(271701509, func_278(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_256(271701509, func_278(bParam0), 12999093, 0);
}

int func_283(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_181(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_300(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_284(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_301(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_285(int iParam0)
{
	return func_194(&(Global_1954472->f_1465), iParam0, 1);
}

int func_286(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_287(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_302(2)));
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_290(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_291(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_261(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_292(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_261(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		default:
			break;
	}
}

int func_293(int iParam0, int iParam1)
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

int func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_303(iParam0))
	{
		return 0;
	}
	iVar0 = func_293(iParam0, 1);
	if (!func_304(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_305(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_306(iParam0, iVar1))
		{
			case 0:
				func_307(iVar1, iParam0, iVar4);
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
						func_307(iVar1, iParam0, iVar4);
						func_308(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_308(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_309(iVar1, 1);
				func_310(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_311(iVar2, 0);
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
			func_312(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<4> func_296()
{
	struct<4> Var0;

	return Var0;
}

bool func_297()
{
	return (func_313(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_314(func_256(joaat("WARDROBE"), func_278(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_298(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_215(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_256(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_216(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_216(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_299(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_216(0);
	*uParam1 = { func_256(iParam0, func_252(0), iParam3, 0) };
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

int func_300(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

int func_301(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_216(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_229(2) * 2;
		case 1:
			return func_233(2) * 2;
		case 2:
			return func_231(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_303(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_304(int iParam0)
{
	int iVar0;

	iVar0 = func_305(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_305(int iParam0, int iParam1)
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

int func_306(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_315(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_309(iParam1, 1);
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

int func_307(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_303(iParam1))
	{
		return 0;
	}
	if (!func_316(iParam0))
	{
		return 0;
	}
	iVar0 = func_309(iParam0, 1);
	func_317(iParam0, iParam1, iParam2);
	if (func_318(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_319(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_320((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_321(vVar1))
		{
			if (func_322(vVar1.x, vVar1.y, vVar1.z))
			{
				func_323((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_324((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_324((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_308(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_309(int iParam0, int iParam1)
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

void func_310(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_311(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_312(var uParam0)
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

int func_313(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_325(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_216(bParam1), iParam0, iParam3);
}

int func_314(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_326(&uParam0, iParam4, bParam5, iParam6);
}

int func_315(int iParam0)
{
	if (func_327(iParam0))
	{
		return (func_328(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_316(int iParam0)
{
	int iVar0;

	iVar0 = func_309(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_317(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_293(iParam1, 1);
	iVar1 = func_309(iParam0, 1);
	iVar2 = func_305(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
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
		iVar5 = func_329(iVar3, 1);
		if (!func_330(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_331((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_332(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_333(iVar6))
		{
		}
		else
		{
			iVar8 = func_334(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_335(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_318(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_319(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_316(iParam0))
	{
		return false;
	}
	if (!func_336(iParam1))
	{
		return false;
	}
	iVar0 = func_337(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_320(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_338(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_321(vector3 vParam0)
{
	if (!func_316(vParam0.x))
	{
		return 0;
	}
	if (!func_303(vParam0.y))
	{
		return 0;
	}
	if (!func_339(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_322(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_293(iParam1, 1);
	iVar1 = func_309(iParam0, 1);
	iVar2 = func_305(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
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
		iVar5 = func_329(iVar3, 1);
		if (!func_330(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_331((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_340(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_333(iVar6))
		{
		}
		else if (!func_341((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_334(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_342(iVar6);
			}
		}
		iVar7++;
	}
	func_343((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_323(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_336(iParam0))
	{
		return;
	}
	iVar0 = func_337(iParam0, 1);
	if (!func_316(iParam1))
	{
		return;
	}
	if (!func_303(iParam2))
	{
		return;
	}
	if (!func_339(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_324(int iParam0)
{
	int iVar0;

	if (!func_336(iParam0))
	{
		return;
	}
	iVar0 = func_337(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

bool func_325(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_326(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_344(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_327(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_328(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0, 1);
	if (func_327(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_345(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_346(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_347(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_348(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_349(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_329(int iParam0, int iParam1)
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

int func_330(int iParam0)
{
	int iVar0;

	iVar0 = func_329(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_331(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_350(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_332(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_330(iParam0))
	{
		return;
	}
	iVar0 = func_329(iParam0, 1);
	if (!func_351(&(Global_1140484->f_2001[iVar0 /*192*/])))
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
	if (!func_352((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_353((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
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

int func_333(int iParam0)
{
	int iVar0;

	iVar0 = func_334(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_334(int iParam0, int iParam1)
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

void func_335(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_354();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_355();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_356(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_356(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_356(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_33(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_356(iParam0));
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
			func_358(func_357(iParam0));
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
			func_359();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_351(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_351(16);
			break;
	}
}

int func_336(int iParam0)
{
	int iVar0;

	iVar0 = func_337(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_337(int iParam0, int iParam1)
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

int func_338(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_360(iParam0);
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
		iVar64 = func_309(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1140484->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1140484->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_361(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), (Global_1140484->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_362(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/])) };
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

int func_339(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

void func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_330(iParam0))
	{
		return;
	}
	iVar0 = func_329(iParam0, 1);
	if (!func_351(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_352((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_353((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
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

int func_341(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_363(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_342(int iParam0)
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
			func_354();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_355();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_356(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_356(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_356(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_33(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_356(iParam0));
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
			iVar2 = func_357(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_364(iParam0, 0));
			func_365(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_364(iParam0, 1));
			func_365(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_364(iParam0, 2));
			func_365(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_364(iParam0, 3));
			func_365(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_357(iParam0);
			func_365(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_357(iParam0);
			func_365(iVar2, 4, 1, -1, 0);
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
			func_366();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_351(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_351(16);
			break;
	}
}

void func_343(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_367(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_368(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275573->f_8, sVar1, false, 0, 0);
}

int func_344(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_216(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_301(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_345(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_346(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_348(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_349(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

float func_350(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_369(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_351(int iParam0)
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

int func_352(int iParam0)
{
	int iVar0;

	iVar0 = func_353(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_353(int iParam0, int iParam1)
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

void func_354()
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

void func_355()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1140484->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 263, bVar0);
}

char* func_356(int iParam0)
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

int func_357(int iParam0)
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

void func_358(int iParam0)
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

void func_359()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275573->f_8);
}

int func_360(int iParam0)
{
	int iVar0;

	if (!func_336(iParam0))
	{
		return -1;
	}
	iVar0 = func_337(iParam0, 1);
	return &(Global_1140484->f_30603.f_8667[iVar0 /*3*/]);
}

int func_361(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_316(iParam0))
	{
		return 0;
	}
	iVar0 = func_309(iParam0, 1);
	iVar2 = (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_318(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1140484->f_30603.f_8667[func_337(iVar2, 1) /*3*/];
		Var4 = { func_362(iVar3) };
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
			if (!func_370() && !func_371())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_370())
			{
				return 0;
			}
			return 1;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_315(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_315(iParam1);
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
			iVar1 = func_315(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1275573 && !func_372(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_373(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954472->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_315(iParam1);
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

struct<31> func_362(int iParam0)
{
	int iVar0;

	iVar0 = func_309(iParam0, 1);
	return *(Global_1140484->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_363(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_369(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_364(int iParam0, int iParam1)
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

void func_365(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_366()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275573->f_8, 0.7f);
}

char* func_367(int iParam0)
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

char* func_368(int iParam0)
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

int func_369(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_374(iVar7);
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

bool func_370()
{
	return Global_1572887->f_6;
}

int func_371()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_223(func_222(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_375(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_372(int iParam0)
{
	if (func_376(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_377(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

bool func_373(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_374(int iParam0)
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

bool func_375(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_376(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_377(int iParam0)
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
		func_378(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_379(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_378(int iParam0)
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
	func_379(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_379(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

