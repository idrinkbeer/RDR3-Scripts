#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	vector3 vLocal_15 = { 0f, 0f, 0f };
	vector3 vLocal_18 = { 0f, 0f, 0f };
	vector3 vLocal_21 = { 0f, 0f, 0f };
	float fLocal_24 = 0f;
	char* sLocal_25[33] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	struct<193> Local_59 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	struct<32> Local_253[7];
	int iLocal_478 = 0;
	struct<8> Local_479 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_487 = 0;
	struct<2> Local_488[7];
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 1065353216;
	var uLocal_508 = 1065353216;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 1065353216;
	var uLocal_513 = 1065353216;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 1065353216;
	var uLocal_518 = 1065353216;
	var uLocal_519 = 0;
	var uLocal_520 = 1040187392;
	var uLocal_521 = 1040187392;
	var uLocal_522 = -1;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = -1082130432;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 7;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_606 = 0;
	vector3 vLocal_607 = { 0f, 0f, 0f };
	var uLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	char[] cLocal_618[8] = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	var uLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	float fLocal_648 = 0f;
	float fLocal_649 = 0f;
	float fLocal_650 = 0f;
	float fLocal_651 = 0f;
	float fLocal_652 = 0f;
	var uLocal_653 = 0;
	bool bLocal_654 = false;
	bool bLocal_655 = false;
	bool bLocal_656 = false;
	bool bLocal_657 = false;
	bool bLocal_658 = false;
	bool bLocal_659 = false;
	bool bLocal_660 = false;
	bool bLocal_661 = false;
	bool bLocal_662 = false;
	bool bLocal_663 = false;
	bool bLocal_664 = false;
	bool bLocal_665 = false;
	bool bLocal_666 = false;
	bool bLocal_667 = false;
	bool bLocal_668 = false;
	bool bLocal_669 = false;
	bool bLocal_670 = false;
	bool bLocal_671 = false;
	bool bLocal_672 = false;
	bool bLocal_673 = false;
	bool bLocal_674 = false;
	bool bLocal_675 = false;
	bool bLocal_676 = false;
	int iLocal_677 = 0;
	bool bLocal_678 = false;
	bool bLocal_679 = false;
	bool bLocal_680 = false;
	bool bLocal_681 = false;
	bool bLocal_682 = false;
	int iLocal_683 = 0;
	bool bLocal_684 = false;
	bool bLocal_685 = false;
	bool bLocal_686 = false;
	bool bLocal_687 = false;
	bool bLocal_688 = false;
	bool bLocal_689 = false;
	bool bLocal_690 = false;
	bool bLocal_691 = false;
	bool bLocal_692 = false;
	bool bLocal_693 = false;
	bool bLocal_694 = false;
	bool bLocal_695 = false;
	bool bLocal_696 = false;
	bool bLocal_697 = false;
	var uLocal_698 = 0;
	bool bLocal_699 = false;
	bool bLocal_700 = false;
	bool bLocal_701 = false;
	bool bLocal_702 = false;
	bool bLocal_703 = false;
	bool bLocal_704 = false;
	bool bLocal_705 = false;
	bool bLocal_706 = false;
	bool bLocal_707 = false;
	bool bLocal_708 = false;
	bool bLocal_709 = false;
	bool bLocal_710 = false;
	bool bLocal_711 = false;
	bool bLocal_712 = false;
	bool bLocal_713 = false;
	bool bLocal_714 = false;
	bool bLocal_715 = false;
	bool bLocal_716 = false;
	bool bLocal_717 = false;
	bool bLocal_718 = false;
	bool bLocal_719 = false;
	bool bLocal_720 = false;
	bool bLocal_721 = false;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	int iLocal_765 = 0;
	var uLocal_766[7] = { 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_774 = false;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	var uLocal_778 = -1;
	var uLocal_779 = 0;
	var uLocal_780 = -1;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = -1;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 1073741824;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 1;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	struct<17> Local_798[2];
	int iLocal_833 = 0;
	var uLocal_834 = -1;
	var uLocal_835 = 0;
	var uLocal_836 = -1;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = -1;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 1073741824;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 1;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	struct<17> Local_854[2];
	int iLocal_889 = 0;
	var uLocal_890 = -1;
	var uLocal_891 = 0;
	var uLocal_892 = -1;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = -1;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 1073741824;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 1;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	struct<17> Local_910[2];
	int iLocal_945 = 0;
	var uLocal_946 = -1;
	var uLocal_947 = 0;
	var uLocal_948 = -1;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = -1;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 1073741824;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 1;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	struct<17> Local_966[2];
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 1065353216;
	var uLocal_1008 = 1065353216;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 1065353216;
	var uLocal_1013 = 1065353216;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 1065353216;
	var uLocal_1018 = 1065353216;
	var uLocal_1019 = 0;
	var uLocal_1020 = 1040187392;
	var uLocal_1021 = 1040187392;
	var uLocal_1022 = -1;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = -1082130432;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	int iLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 1176256512;
	int iLocal_1045 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_618 = "TB";
	iLocal_623 = -1;
	iLocal_624 = -1;
	iLocal_1041 = 1;
	Local_59.f_3 = func_1(&vScriptParam_0);
	bVar0 = false;
	Local_59.f_161 = func_2(vScriptParam_0.z, 2);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	else
	{
		func_3(&Local_59, 1);
		func_4();
		func_5(&(Local_59.f_5), 1);
		func_6(&(Local_59.f_5), 1);
		func_7(&(Local_59.f_5), 1);
		func_8(&(Local_59.f_5), 1);
		func_9(&(Local_59.f_5), 1);
		func_10(&(Local_59.f_5), 1);
		func_11(&(Local_59.f_5), 1);
		func_12(&(Local_59.f_5), 0);
		func_13(&(Local_59.f_5), 1);
		func_8(&(Local_59.f_5), 0);
		func_14(&(Local_59.f_5), 1);
		func_15(&(Local_59.f_5), 0);
		func_16(&(Local_59.f_5), 1);
		func_17(&(Local_59.f_5), 1);
		func_18(&(Local_59.f_5), 20f);
		func_19(&(Local_59.f_5), 100);
		func_20(&(Local_59.f_5), 1000);
	}
	while (true)
	{
		if (bVar0)
		{
			func_22(bVar0, 1531, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_613)
			{
				case 0:
					if (func_23())
					{
						if (func_24())
						{
							iLocal_613 = 1;
						}
					}
					else
					{
						func_21();
					}
					break;
				case 1:
					if (func_25(&Local_59, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_26();
						func_27(&Local_798);
						func_28(&Local_854);
						func_29(&Local_910);
						func_29(&Local_966);
						iLocal_613 = 3;
					}
					else if (Local_59.f_160)
					{
						func_21();
					}
					break;
				case 3:
					if (func_30())
					{
						if (((func_31(&(uLocal_598[0]), 0, 1) && func_31(&(uLocal_598[1]), 0, 1)) && func_31(&(uLocal_598[2]), 0, 1)) && ENTITY::DOES_ENTITY_EXIST(iLocal_606))
						{
							func_32();
							func_33();
							func_34();
							func_35();
							func_36();
							PED::SET_PED_CONFIG_FLAG(&(uLocal_598[0]), 317, true);
							PED::SET_PED_CONFIG_FLAG(&(uLocal_598[1]), 317, true);
							AUDIO::STOP_PED_SPEAKING(&(uLocal_598[0]), true);
							AUDIO::STOP_PED_SPEAKING(&(uLocal_598[1]), true);
							AUDIO::STOP_PED_SPEAKING(&(uLocal_598[2]), true);
							iLocal_1045 = GRAPHICS::_0xFA50F79257745E74(vLocal_607, 1f, 1, 14, 0);
							iLocal_613 = 4;
						}
					}
					break;
				case 4:
					func_37();
					if (!Local_59.f_46)
					{
						if (func_38())
						{
							PED::_0x58F7DB5BD8FA2288(&(uLocal_598[0]));
							PED::_0x58F7DB5BD8FA2288(&(uLocal_598[1]));
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "VICTIM", &(uLocal_598[2]));
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_598[0]), 0);
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_598[1]), 0);
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_598[2]), 0);
							iLocal_612 = 5;
							Local_59.f_46 = 1;
						}
					}
					if (func_39())
					{
						if (!Local_59.f_44)
						{
							Local_59.f_44 = 1;
						}
						func_21();
					}
					if (func_40(&Local_59, &uLocal_598, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_21();
					}
					if (!func_41(&Local_59, &uLocal_598, iLocal_478, 0, 1, 0, 1, 0))
					{
						func_21();
					}
					break;
			}
			BUILTIN::WAIT(Local_59.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_3(var uParam0, bool bParam1)
{
	func_42(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_43("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_4()
{
	iLocal_487 = func_45(func_44(), 0, 0, 0);
	switch (func_44())
	{
		case 4:
		case 12:
			iLocal_487 = 3;
			iLocal_478 = 0;
			break;
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
			iLocal_487 = 0;
			iLocal_478 = 1;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iLocal_487 = 5;
			iLocal_478 = 2;
			break;
	}
	if (func_46(iLocal_487, 0))
	{
		uLocal_14 = func_47(iLocal_487, -1);
	}
	Local_59.f_177 = iLocal_487;
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 2048);
	}
	else
	{
		func_49(&(uParam0->f_1), 2048);
	}
}

void func_6(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 16);
	}
	else
	{
		func_48(iParam0, 67108864);
		func_48(iParam0, 16);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 256);
	}
	else
	{
		func_49(&(uParam0->f_1), 256);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 1);
	}
	else
	{
		func_49(&(uParam0->f_1), 1);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 8);
	}
	else
	{
		func_49(&(uParam0->f_1), 8);
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 131072);
	}
	else
	{
		func_49(&(uParam0->f_1), 131072);
	}
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 1);
	}
	else
	{
		func_48(iParam0, 1);
	}
}

void func_12(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 512);
	}
	else
	{
		func_48(iParam0, 512);
	}
}

void func_13(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 2);
	}
	else
	{
		func_48(iParam0, 2);
	}
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 256);
	}
	else
	{
		func_48(iParam0, 256);
	}
}

void func_15(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 16384);
	}
	else
	{
		func_49(&(uParam0->f_1), 16384);
	}
}

void func_16(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 2);
	}
	else
	{
		func_49(&(uParam0->f_1), 2);
	}
}

void func_17(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 65536);
	}
	else
	{
		func_48(iParam0, 65536);
	}
}

void func_18(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_20(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_21()
{
	int iVar0;

	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_606, 0);
	func_50(0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_606))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_606, false);
		if (!Local_59.f_48 && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_606))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_606);
		}
		else
		{
			func_51(&iLocal_606);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(bLocal_774))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(bLocal_774);
	}
	func_52(Local_59.f_51, 50f, 1, 0, 5);
	if (iLocal_623 < 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_623);
	}
	if (iLocal_624 < 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_624);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_598[iVar0])))
		{
			AUDIO::STOP_PED_SPEAKING(&(uLocal_598[iVar0]), false);
		}
		iVar0++;
	}
	LAW::_0x710448D44A64C213(1);
	LAW::_0xC805EB785824F712(1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1002);
	AUDIO::STOP_PED_SPEAKING(&(uLocal_598[2]), false);
	GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_1045, 1);
	if (!Local_59.f_48)
	{
		func_53(&(uLocal_598[2]), 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		func_53(&(uLocal_598[0]), 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		func_53(&(uLocal_598[1]), 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		func_53(&(uLocal_598[4]), 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		if (iLocal_487 == 3)
		{
			func_53(&(uLocal_598[3]), 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		}
	}
	func_54(&Local_59, &uLocal_598, &uLocal_766, iLocal_478, -1, 0, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_22(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_55(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

int func_23()
{
	if (iLocal_487 == 0)
	{
		if (!func_56(0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iLocal_487 == 3)
	{
		if (!func_56(3) && !func_57(75))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iLocal_487 == 5)
	{
		if (!func_56(5))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_24()
{
	int iVar0;

	switch (iLocal_611)
	{
		case 0:
			if (func_58(&Local_59))
			{
				func_59();
				func_60(&Local_59, iLocal_487);
				func_61();
				func_62();
				func_63();
				STREAMING::REQUEST_MODEL(joaat("P_MONEYSTACK01X"), false);
				STREAMING::REQUEST_MODEL(func_64(), false);
				if (iLocal_478 == 0)
				{
				}
				else if (iLocal_478 == 1)
				{
				}
				iLocal_611 = 1;
			}
			break;
		case 1:
			if (!func_65(&uLocal_610, cLocal_618))
			{
				return 0;
			}
			if (!func_66(&uLocal_541))
			{
				return 0;
			}
			if (!func_67())
			{
				return 0;
			}
			if (!func_68())
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if ((Local_253[iVar0 /*32*/])->f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED((Local_253[iVar0 /*32*/])->f_1))
					{
						return 0;
					}
				}
				iVar0++;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_64()))
			{
				return 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_MONEYSTACK01X")))
			{
				return 0;
			}
			if (!func_69(&Local_253))
			{
				return 0;
			}
			if (!AUDIO::_0xD9130842D7226045("RECHR_Sounds", 0))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

int func_25(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (iParam6 || func_70(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (iParam6 || func_71(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_72(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_73(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_74(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

void func_26()
{
	switch (Local_59.f_51.f_4)
	{
		case 0:
			(Local_253[0 /*32*/])->f_6 = { -1312.21f, 112.43f, 71.59f };
			(Local_253[0 /*32*/])->f_9 = -26.12f;
			(Local_253[1 /*32*/])->f_6 = { -1312.21f, 112.43f, 71.59f };
			(Local_253[1 /*32*/])->f_9 = 81.6f;
			(Local_253[4 /*32*/])->f_6 = { -1312.21f, 112.43f, 71.59f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { -1312.21f, 112.43f, 71.59f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[6 /*32*/])->f_6 = { -1300.95f, 110.64f, 72.37f };
			(Local_253[6 /*32*/])->f_9 = -91.99f;
			(Local_253[5 /*32*/])->f_6 = { -1301.56f, 107.19f, 72.32f };
			(Local_253[5 /*32*/])->f_9 = 167.49f;
			vLocal_15 = { -1305.2f, 114.73f, 72.78f };
			fLocal_24 = 12.3f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -1324.02f, 117.19f, 74.02f };
			vLocal_607 = { -1307.17f, 114.48f, 71.87f };
			break;
		case 1:
			(Local_253[0 /*32*/])->f_6 = { -1193.09f, -346.84f, 98.15f };
			(Local_253[0 /*32*/])->f_9 = 0f;
			(Local_253[1 /*32*/])->f_6 = { -1195.65f, -345.04f, 98.61f };
			(Local_253[1 /*32*/])->f_9 = 0f;
			(Local_253[4 /*32*/])->f_6 = { -1192.24f, -346.96f, 98.03f };
			(Local_253[4 /*32*/])->f_9 = 0f;
			(Local_253[2 /*32*/])->f_6 = { -1198.44f, -343.93f, 99.04f };
			(Local_253[2 /*32*/])->f_9 = 0f;
			(Local_253[5 /*32*/])->f_6 = { -1205.14f, -341.4f, 101.32f };
			(Local_253[5 /*32*/])->f_9 = 52.14f;
			(Local_253[6 /*32*/])->f_6 = { -1201.97f, -345.81f, 100.62f };
			(Local_253[6 /*32*/])->f_9 = -175.95f;
			vLocal_15 = { -1197.46f, -344.73f, 99.76f };
			fLocal_24 = 234.73f;
			vLocal_21 = { -1213.66f, -320.25f, 102.74f };
			vLocal_18 = { -1191.14f, -342.14f, 98.41f };
			vLocal_607 = { -1197.68f, -343.02f, 98.99f };
			break;
		case 2:
			(Local_253[0 /*32*/])->f_6 = { -1631.463f, -508.5251f, 147.7541f };
			(Local_253[0 /*32*/])->f_9 = 0f;
			(Local_253[1 /*32*/])->f_6 = { -1631.463f, -508.5251f, 147.7541f };
			(Local_253[1 /*32*/])->f_9 = 0f;
			(Local_253[4 /*32*/])->f_6 = { -1631.463f, -508.5251f, 147.7541f };
			(Local_253[4 /*32*/])->f_9 = 0f;
			(Local_253[2 /*32*/])->f_6 = { -1631.463f, -508.5251f, 147.7541f };
			(Local_253[2 /*32*/])->f_9 = 0f;
			(Local_253[5 /*32*/])->f_6 = { -1637.45f, -508.1897f, 147.755f };
			(Local_253[5 /*32*/])->f_9 = -141.12f;
			(Local_253[6 /*32*/])->f_6 = { -1640.173f, -507.7695f, 147.659f };
			(Local_253[6 /*32*/])->f_9 = -155.95f;
			vLocal_15 = { -1631.463f, -508.5251f, 147.7541f };
			fLocal_24 = -141.12f;
			vLocal_21 = { -1637.463f, -503.5251f, 147.7541f };
			vLocal_18 = { -1758.201f, -399.4812f, 154.7452f };
			vLocal_607 = { -1630.81f, -506.53f, 147.55f };
			break;
		case 3:
			(Local_253[0 /*32*/])->f_6 = { 236.77f, 1169.34f, 174.62f };
			(Local_253[0 /*32*/])->f_9 = -88f;
			(Local_253[1 /*32*/])->f_6 = { 236.77f, 1169.34f, 174.62f };
			(Local_253[1 /*32*/])->f_9 = -88f;
			(Local_253[4 /*32*/])->f_6 = { 236.77f, 1169.34f, 174.62f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { 236.77f, 1169.34f, 174.62f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[5 /*32*/])->f_6 = { 251.32f, 1180.34f, 175.6f };
			(Local_253[5 /*32*/])->f_9 = 163.24f;
			(Local_253[6 /*32*/])->f_6 = { 248.57f, 1180.03f, 175.64f };
			(Local_253[6 /*32*/])->f_9 = 136.43f;
			vLocal_15 = { 244.1f, 1174.28f, 175.59f };
			fLocal_24 = 111.29f;
			vLocal_21 = { 247.75f, 1166.65f, 174.73f };
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_607 = { 243.44f, 1172.02f, 174.64f };
			break;
		case 4:
			(Local_253[0 /*32*/])->f_6 = { -869.7f, -1800.16f, 64.39f };
			(Local_253[0 /*32*/])->f_9 = -88f;
			(Local_253[1 /*32*/])->f_6 = { -872.75f, -1804.54f, 64f };
			(Local_253[1 /*32*/])->f_9 = -88f;
			(Local_253[4 /*32*/])->f_6 = { -868.79f, -1804.09f, 64f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { -873.21f, -1807.84f, 63.76f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[3 /*32*/])->f_6 = { -872.44f, -1809.49f, 63.74f };
			(Local_253[3 /*32*/])->f_9 = -88f;
			(Local_253[5 /*32*/])->f_6 = { -866.13f, -1814.96f, 64.63f };
			(Local_253[5 /*32*/])->f_9 = 152.9f;
			(Local_253[6 /*32*/])->f_6 = { -870.73f, -1816.86f, 64.79f };
			(Local_253[6 /*32*/])->f_9 = 111.61f;
			vLocal_15 = { -865.4097f, -1807.907f, 64.0395f };
			fLocal_24 = 319.3985f;
			vLocal_21 = { -869.7f, -1800.16f, 64.39f };
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_607 = { -866.62f, -1806.84f, 63.96f };
			break;
		case 5:
			(Local_253[0 /*32*/])->f_6 = { -1401.62f, -1966.7f, 43.51f };
			(Local_253[0 /*32*/])->f_9 = -88f;
			(Local_253[1 /*32*/])->f_6 = { -1403.72f, -1964.08f, 43.65f };
			(Local_253[1 /*32*/])->f_9 = -88f;
			(Local_253[4 /*32*/])->f_6 = { -1408.09f, -1962.03f, 43.81f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { -1410.01f, -1961.63f, 43.91f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[3 /*32*/])->f_6 = { -1411.61f, -1963.74f, 43.98f };
			(Local_253[3 /*32*/])->f_9 = -88f;
			(Local_253[5 /*32*/])->f_6 = { -1413.93f, -1971.1f, 43.68f };
			(Local_253[5 /*32*/])->f_9 = 26.93f;
			(Local_253[6 /*32*/])->f_6 = { -1414.71f, -1966.43f, 43.9f };
			(Local_253[6 /*32*/])->f_9 = 67.68f;
			vLocal_15 = { -1407.439f, -1969.719f, 43.6107f };
			fLocal_24 = 230.1571f;
			vLocal_21 = { -1401.62f, -1966.7f, 43.51f };
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_607 = { -1406.83f, -1968.49f, 43.63f };
			break;
		case 6:
			(Local_253[0 /*32*/])->f_6 = { -552.22f, -497.59f, 50.64f };
			(Local_253[0 /*32*/])->f_9 = -88f;
			(Local_253[1 /*32*/])->f_6 = { -550.15f, -494.62f, 50.95f };
			(Local_253[1 /*32*/])->f_9 = -88f;
			(Local_253[4 /*32*/])->f_6 = { -547.6475f, -489.3265f, 50.9591f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { -551.76f, -496.31f, 50.79f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[5 /*32*/])->f_6 = { -569.41f, -522.09f, 52.2f };
			(Local_253[5 /*32*/])->f_9 = -149.37f;
			(Local_253[6 /*32*/])->f_6 = { -563.72f, -522.5f, 52.02f };
			(Local_253[6 /*32*/])->f_9 = 128.75f;
			vLocal_15 = { -556.52f, -519.95f, 50.2f };
			fLocal_24 = 261.69f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -553.11f, -506.61f, 50.74f };
			vLocal_607 = { -556.97f, -518.21f, 50.78f };
			break;
		case 7:
			(Local_253[0 /*32*/])->f_6 = { -484.73f, -188.64f, 43.86f };
			(Local_253[0 /*32*/])->f_9 = -88f;
			(Local_253[1 /*32*/])->f_6 = { -483.78f, -183.71f, 43.67f };
			(Local_253[1 /*32*/])->f_9 = -88f;
			(Local_253[4 /*32*/])->f_6 = { -489.04f, -192.47f, 44.26f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { -483.91f, -186.09f, 43.62f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[5 /*32*/])->f_6 = { -484.4f, -178.28f, 44.89f };
			(Local_253[5 /*32*/])->f_9 = -167.58f;
			(Local_253[6 /*32*/])->f_6 = { -487.91f, -178.17f, 44.52f };
			(Local_253[6 /*32*/])->f_9 = 139.97f;
			vLocal_15 = { -488.51f, -185.91f, 45.01f };
			fLocal_24 = 136.47f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -437.12f, -156.22f, 43.05f };
			vLocal_607 = { -486.92f, -186.59f, 43.78f };
			break;
		case 8:
			(Local_253[0 /*32*/])->f_6 = { -617.8984f, 200.8106f, 42.3731f };
			(Local_253[0 /*32*/])->f_9 = -88f;
			(Local_253[1 /*32*/])->f_6 = { -617.8984f, 200.8106f, 42.3731f };
			(Local_253[1 /*32*/])->f_9 = -88f;
			(Local_253[4 /*32*/])->f_6 = { -617.8984f, 200.8106f, 42.3731f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { -617.8984f, 200.8106f, 42.3731f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[5 /*32*/])->f_6 = { -594.77f, 201.87f, 44.58f };
			(Local_253[5 /*32*/])->f_9 = -114.16f;
			(Local_253[6 /*32*/])->f_6 = { -592.63f, 202.98f, 44.57f };
			(Local_253[6 /*32*/])->f_9 = -98.02f;
			vLocal_15 = { -590.5f, 209.93f, 44.31f };
			fLocal_24 = 309.1313f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -595.11f, 215.38f, 43.6f };
			vLocal_607 = { -591.41f, 211.15f, 43.37f };
			break;
		case 9:
			(Local_253[0 /*32*/])->f_6 = { 45.2288f, -309.8703f, 100.0965f };
			(Local_253[0 /*32*/])->f_9 = -88f;
			(Local_253[1 /*32*/])->f_6 = { 45.2288f, -309.8703f, 100.0965f };
			(Local_253[1 /*32*/])->f_9 = -88f;
			(Local_253[4 /*32*/])->f_6 = { 45.2288f, -309.8703f, 100.0965f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { 45.2288f, -309.8703f, 100.0965f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[5 /*32*/])->f_6 = { 43.7662f, -321.3496f, 99.5085f };
			(Local_253[5 /*32*/])->f_9 = 47.48f;
			(Local_253[6 /*32*/])->f_6 = { 46.082f, -320.283f, 99.4931f };
			(Local_253[6 /*32*/])->f_9 = 52.56f;
			vLocal_15 = { 45.2288f, -309.8703f, 100.0965f };
			fLocal_24 = 52.56f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { 39.2288f, -304.8703f, 100.0965f };
			vLocal_607 = { 44.22f, -311.55f, 99.93f };
			break;
		case 10:
			(Local_253[0 /*32*/])->f_6 = { 553.2196f, -536.8489f, 76.4877f };
			(Local_253[0 /*32*/])->f_9 = -88f;
			(Local_253[1 /*32*/])->f_6 = { 553.2196f, -536.8489f, 76.4877f };
			(Local_253[1 /*32*/])->f_9 = -88f;
			(Local_253[4 /*32*/])->f_6 = { 553.2196f, -536.8489f, 76.4877f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { 553.2196f, -536.8489f, 76.4877f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[5 /*32*/])->f_6 = { 543.27f, -535.21f, 77.01f };
			(Local_253[5 /*32*/])->f_9 = 66.03f;
			(Local_253[6 /*32*/])->f_6 = { 546.66f, -539.9f, 77.08f };
			(Local_253[6 /*32*/])->f_9 = 138.11f;
			vLocal_15 = { 553.2196f, -536.8489f, 76.4877f };
			fLocal_24 = -90f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { 547.2196f, -531.8489f, 76.4877f };
			vLocal_607 = { 553.08f, -535.29f, 76.5f };
			break;
		case 11:
			(Local_253[0 /*32*/])->f_6 = { -2001.76f, -1381.82f, 116.85f };
			(Local_253[0 /*32*/])->f_9 = -88f;
			(Local_253[1 /*32*/])->f_6 = { -1999.71f, -1382.69f, 116.7f };
			(Local_253[1 /*32*/])->f_9 = -88f;
			(Local_253[4 /*32*/])->f_6 = { -1865.16f, -1329.99f, 98.02f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { -1991.74f, -1383.62f, 116.28f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[3 /*32*/])->f_6 = { -1989.89f, -1383.18f, 116.07f };
			(Local_253[3 /*32*/])->f_9 = -88f;
			(Local_253[5 /*32*/])->f_6 = { -1990.66f, -1367.77f, 117.06f };
			(Local_253[5 /*32*/])->f_9 = 90.32f;
			(Local_253[6 /*32*/])->f_6 = { -1987.93f, -1371.15f, 116.63f };
			(Local_253[6 /*32*/])->f_9 = 40.62f;
			vLocal_15 = { -1995.538f, -1374.255f, 116.3711f };
			fLocal_24 = 82.8f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -1870.52f, -1319.83f, 97f };
			vLocal_607 = { -1995.81f, -1375.67f, 116.33f };
			break;
		case 12:
			(Local_253[0 /*32*/])->f_6 = { -1716.08f, -1723.55f, 87.86f };
			(Local_253[0 /*32*/])->f_9 = -88f;
			(Local_253[1 /*32*/])->f_6 = { -1718.87f, -1724.05f, 88.06f };
			(Local_253[1 /*32*/])->f_9 = -88f;
			(Local_253[4 /*32*/])->f_6 = { -1721.37f, -1724.84f, 88.17f };
			(Local_253[4 /*32*/])->f_9 = -88f;
			(Local_253[2 /*32*/])->f_6 = { -1709.04f, -1725.6f, 87.52f };
			(Local_253[2 /*32*/])->f_9 = -88f;
			(Local_253[3 /*32*/])->f_6 = { -1723.08f, -1725.73f, 88.23f };
			(Local_253[3 /*32*/])->f_9 = -88f;
			(Local_253[5 /*32*/])->f_6 = { -1720.29f, -1733.52f, 89.96f };
			(Local_253[5 /*32*/])->f_9 = -68.07f;
			(Local_253[6 /*32*/])->f_6 = { -1725.06f, -1733.63f, 89.21f };
			(Local_253[6 /*32*/])->f_9 = -61.94f;
			vLocal_15 = { -1722.938f, -1729f, 88.21406f };
			fLocal_24 = -70.14f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -1717.44f, -1720.72f, 88.09f };
			vLocal_607 = { -1716.02f, -1727.22f, 88.08f };
			break;
		case 13:
			(Local_253[0 /*32*/])->f_6 = { -2210.19f, -1610.43f, 145.28f };
			(Local_253[0 /*32*/])->f_9 = 19.57f;
			(Local_253[1 /*32*/])->f_6 = { -2208.26f, -1611.85f, 145.26f };
			(Local_253[1 /*32*/])->f_9 = -94.74f;
			(Local_253[4 /*32*/])->f_6 = { -2212.31f, -1608.57f, 145.33f };
			(Local_253[4 /*32*/])->f_9 = 126.5875f;
			(Local_253[2 /*32*/])->f_6 = { -2203.24f, -1614.94f, 145.15f };
			(Local_253[2 /*32*/])->f_9 = 126.5875f;
			(Local_253[3 /*32*/])->f_6 = { -2198.94f, -1617.79f, 145.09f };
			(Local_253[3 /*32*/])->f_9 = 126.5875f;
			(Local_253[5 /*32*/])->f_6 = { -2191.72f, -1612.02f, 147.01f };
			(Local_253[5 /*32*/])->f_9 = 6.01f;
			(Local_253[6 /*32*/])->f_6 = { -2191.26f, -1614.95f, 146.47f };
			(Local_253[6 /*32*/])->f_9 = 52.02f;
			vLocal_15 = { -2202.42f, -1609.38f, 146.43f };
			fLocal_24 = 40.1595f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -1848.93f, -1677.75f, 106.46f };
			vLocal_607 = { -2203.1f, -1610.76f, 145.28f };
			break;
		case 14:
			(Local_253[0 /*32*/])->f_6 = { -5704.61f, -3186.09f, -22.77f };
			(Local_253[0 /*32*/])->f_9 = 126.5875f;
			(Local_253[1 /*32*/])->f_6 = { -5704.61f, -3186.09f, -22.77f };
			(Local_253[1 /*32*/])->f_9 = 126.5875f;
			(Local_253[4 /*32*/])->f_6 = { -5704.61f, -3186.09f, -22.77f };
			(Local_253[4 /*32*/])->f_9 = 126.5875f;
			(Local_253[2 /*32*/])->f_6 = { -5704.61f, -3186.09f, -22.77f };
			(Local_253[2 /*32*/])->f_9 = 126.5875f;
			(Local_253[3 /*32*/])->f_6 = { -5704.61f, -3186.09f, -22.77f };
			(Local_253[3 /*32*/])->f_9 = 126.5875f;
			(Local_253[6 /*32*/])->f_6 = { -5716.39f, -3191.46f, -21.91f };
			(Local_253[6 /*32*/])->f_9 = -129.11f;
			(Local_253[5 /*32*/])->f_6 = { -5719.14f, -3190.35f, -21.81f };
			(Local_253[5 /*32*/])->f_9 = -154.33f;
			vLocal_15 = { -5710.6f, -3187.24f, -21.92f };
			fLocal_24 = 269.5f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -5709.32f, -3136.62f, -18.8f };
			vLocal_607 = { -5711.39f, -3185.4f, -22.64f };
			break;
		case 15:
			(Local_253[0 /*32*/])->f_6 = { -5403.85f, -2350.23f, -7.17f };
			(Local_253[0 /*32*/])->f_9 = 126.5875f;
			(Local_253[1 /*32*/])->f_6 = { -5403.85f, -2350.23f, -7.17f };
			(Local_253[1 /*32*/])->f_9 = 126.5875f;
			(Local_253[4 /*32*/])->f_6 = { -5403.85f, -2350.23f, -7.17f };
			(Local_253[4 /*32*/])->f_9 = 126.5875f;
			(Local_253[2 /*32*/])->f_6 = { -5403.85f, -2350.23f, -7.17f };
			(Local_253[2 /*32*/])->f_9 = 126.5875f;
			(Local_253[3 /*32*/])->f_6 = { -5403.85f, -2350.23f, -7.17f };
			(Local_253[3 /*32*/])->f_9 = 126.5875f;
			(Local_253[5 /*32*/])->f_6 = { -5408.14f, -2360.38f, -6.6f };
			(Local_253[5 /*32*/])->f_9 = 168.78f;
			(Local_253[6 /*32*/])->f_6 = { -5411.23f, -2359.97f, -6.89f };
			(Local_253[6 /*32*/])->f_9 = -140.23f;
			vLocal_15 = { -5402.77f, -2354.41f, -6.24f };
			fLocal_24 = -74.87f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -5402.07f, -2339.51f, -7.05f };
			vLocal_607 = { -5404.08f, -2353.07f, -7.35f };
			break;
		case 16:
			(Local_253[0 /*32*/])->f_6 = { -4231.62f, -3052.43f, -9.07f };
			(Local_253[0 /*32*/])->f_9 = 126.5875f;
			(Local_253[1 /*32*/])->f_6 = { -4231.62f, -3052.43f, -9.07f };
			(Local_253[1 /*32*/])->f_9 = 126.5875f;
			(Local_253[4 /*32*/])->f_6 = { -4231.62f, -3052.43f, -9.07f };
			(Local_253[4 /*32*/])->f_9 = 126.5875f;
			(Local_253[2 /*32*/])->f_6 = { -4231.62f, -3052.43f, -9.07f };
			(Local_253[2 /*32*/])->f_9 = 126.5875f;
			(Local_253[3 /*32*/])->f_6 = { -4231.62f, -3052.43f, -9.07f };
			(Local_253[3 /*32*/])->f_9 = 126.5875f;
			(Local_253[5 /*32*/])->f_6 = { -4227.37f, -3051.38f, -7.94f };
			(Local_253[5 /*32*/])->f_9 = -86.86f;
			(Local_253[6 /*32*/])->f_6 = { -4227.15f, -3049.07f, -7.91f };
			(Local_253[6 /*32*/])->f_9 = -18.73f;
			vLocal_15 = { -4238.25f, -3051.37f, -8.53f };
			fLocal_24 = 81.93f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -4241.75f, -3060.61f, -8.89f };
			vLocal_607 = { -4237.77f, -3053.14f, -9.2f };
			break;
		case 17:
			(Local_253[0 /*32*/])->f_6 = { -1650f, -2458.62f, 42.51f };
			(Local_253[0 /*32*/])->f_9 = 126.5875f;
			(Local_253[1 /*32*/])->f_6 = { -1650f, -2458.62f, 42.51f };
			(Local_253[1 /*32*/])->f_9 = 126.5875f;
			(Local_253[4 /*32*/])->f_6 = { -1650f, -2458.62f, 42.51f };
			(Local_253[4 /*32*/])->f_9 = 126.5875f;
			(Local_253[2 /*32*/])->f_6 = { -1650f, -2458.62f, 42.51f };
			(Local_253[2 /*32*/])->f_9 = 126.5875f;
			(Local_253[3 /*32*/])->f_6 = { -1650f, -2458.62f, 42.51f };
			(Local_253[3 /*32*/])->f_9 = 126.5875f;
			(Local_253[6 /*32*/])->f_6 = { -1630.76f, -2456.45f, 43.3f };
			(Local_253[6 /*32*/])->f_9 = 6.03f;
			(Local_253[5 /*32*/])->f_6 = { -1630.25f, -2459.71f, 43.33f };
			(Local_253[5 /*32*/])->f_9 = -58.72f;
			vLocal_15 = { -1637.69f, -2454.7f, 43.58f };
			fLocal_24 = 48.81f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -1645.78f, -2465.31f, 42.99f };
			vLocal_607 = { -1638.47f, -2456.47f, 42.32f };
			break;
	}
}

void func_27(var uParam0)
{
	func_76((*uParam0)[0 /*17*/], func_75(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_76((*uParam0)[1 /*17*/], func_75(10), func_77(29), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_28(var uParam0)
{
	func_76((*uParam0)[0 /*17*/], func_75(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_76((*uParam0)[1 /*17*/], func_75(10), func_77(39), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_29(var uParam0)
{
	func_76((*uParam0)[0 /*17*/], func_75(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_76((*uParam0)[1 /*17*/], func_75(26), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

int func_30()
{
	int iVar0;

	switch (iLocal_614)
	{
		case 0:
			if (func_69(&Local_253))
			{
				iLocal_614 = 1;
			}
			break;
		case 1:
			if (func_80(func_78(&Local_59), func_79(&Local_59), &Local_253, &uLocal_598, 0, 0, -1, 1))
			{
				func_81();
				iLocal_614 = 6;
			}
			break;
		case 6:
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[0]), "Default_Panic");
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[0]), "DEFAULT_SHOCKED");
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[0]), "Default_Angry");
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[1]), "Default_Panic");
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[1]), "DEFAULT_SHOCKED");
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[1]), "Default_Angry");
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[1]), "Default_Brave");
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[1]), "Default_Curious");
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[2]), "Default_Shocked");
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[2]), "Default_Panic");
			PED::_0x5C3C55EAAD19915F(&(uLocal_598[2]), "Default_Shocked");
			if ((((((((((PED::_0xDE3904B22695D9F9(&(uLocal_598[0]), "Default_Panic") && PED::_0xDE3904B22695D9F9(&(uLocal_598[0]), "DEFAULT_SHOCKED")) && PED::_0xDE3904B22695D9F9(&(uLocal_598[0]), "Default_Angry")) && PED::_0xDE3904B22695D9F9(&(uLocal_598[1]), "Default_Panic")) && PED::_0xDE3904B22695D9F9(&(uLocal_598[1]), "DEFAULT_SHOCKED")) && PED::_0xDE3904B22695D9F9(&(uLocal_598[1]), "Default_Angry")) && PED::_0xDE3904B22695D9F9(&(uLocal_598[1]), "Default_Brave")) && PED::_0xDE3904B22695D9F9(&(uLocal_598[1]), "Default_Curious")) && PED::_0xDE3904B22695D9F9(&(uLocal_598[2]), "DEFAULT_SHOCKED")) && PED::_0xDE3904B22695D9F9(&(uLocal_598[2]), "Default_Panic")) && PED::_0xDE3904B22695D9F9(&(uLocal_598[2]), "Default_Shocked"))
			{
				iVar0 = 0;
				while (iVar0 < 7)
				{
					ENTITY::SET_ENTITY_COORDS(&(uLocal_598[iVar0]), (Local_253[iVar0 /*32*/])->f_6, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(&(uLocal_598[iVar0]), (Local_253[iVar0 /*32*/])->f_9);
					iVar0++;
				}
				return 1;
			}
			break;
	}
	return 0;
}

bool func_31(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_82(iParam0, iParam1);
}

void func_32()
{
}

void func_33()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_598[iVar0])))
		{
			PED::SET_PED_HEARING_RANGE(&(uLocal_598[iVar0]), 40f);
			PED::SET_PED_SEEING_RANGE(&(uLocal_598[iVar0]), 60f);
			PED::SET_PED_CONFIG_FLAG(&(uLocal_598[iVar0]), 96, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_598[iVar0]), 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_598[iVar0]), 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_598[iVar0]), 43, true);
			PED::SET_COMBAT_FLOAT(&(uLocal_598[iVar0]), 13, 0f);
			PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_598[iVar0]), 2);
			if ((iVar0 != 0 && iVar0 != 1) && iVar0 != 2)
			{
				PED::SET_PED_CONFIG_FLAG(&(uLocal_598[iVar0]), 146, false);
			}
		}
		iVar0++;
	}
	PED::_0x89F5E7ADECCCB49C(&(uLocal_598[0]), "intimidate");
	PED::_0x89F5E7ADECCCB49C(&(uLocal_598[1]), "intimidate");
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_598[4])) && ENTITY::DOES_ENTITY_EXIST(iLocal_606))
	{
		if (!func_83(&(uLocal_598[4]), iLocal_606, 0))
		{
			PED::SET_PED_INTO_VEHICLE(&(uLocal_598[4]), iLocal_606, -1);
			func_84(&(uLocal_598[4]), 0, 0);
			PED::APPLY_PED_DAMAGE_PACK(&(uLocal_598[4]), "PD_Blood_throat_chest", 0f, 1f);
			PED::APPLY_PED_DAMAGE_PACK(&(uLocal_598[4]), "PD_Blood_face_right", 0f, 1f);
		}
	}
	if (iLocal_487 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_598[2])) && ENTITY::DOES_ENTITY_EXIST(iLocal_606))
		{
			if (!func_83(&(uLocal_598[2]), iLocal_606, 0))
			{
				func_85(&(uLocal_598[0]), joaat("WEAPON_MELEE_KNIFE"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_85(&(uLocal_598[1]), joaat("WEAPON_MELEE_KNIFE"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_85(&(uLocal_598[0]), func_86(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_85(&(uLocal_598[1]), func_86(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_606, 0, false, true);
				VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(iLocal_606, 3, 11);
				PED::SET_PED_INTO_VEHICLE(&(uLocal_598[2]), iLocal_606, 1);
			}
		}
	}
	if (iLocal_487 == 0 || iLocal_487 == 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_598[0])) && ENTITY::DOES_ENTITY_EXIST(&(uLocal_598[1])))
		{
			func_85(&(uLocal_598[0]), func_87(131072, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			func_85(&(uLocal_598[0]), func_86(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			func_85(&(uLocal_598[1]), func_86(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			func_85(&(uLocal_598[1]), func_87(131072, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
	}
	func_88(&(uLocal_598[0]), &Local_59, 0);
	func_88(&(uLocal_598[1]), &Local_59, 0);
	func_89(&(uLocal_598[0]), 0);
	func_89(&(uLocal_598[1]), 0);
	func_89(&(uLocal_598[2]), 0);
	PED::ADD_RELATIONSHIP_GROUP("RECR_VICTIM", &iLocal_1002);
	PED::ADD_RELATIONSHIP_GROUP("RECR_ROBBER", &iLocal_1001);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_598[2]), iLocal_1002);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_1002, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_598[0]), iLocal_1001);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_598[1]), iLocal_1001);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1001, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
	LAW::_0x710448D44A64C213(0);
	LAW::_0xC805EB785824F712(0);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_598[0]), 6, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_598[1]), 6, true);
	ENTITY::_0x4B436BAC8CBE9B07(&(uLocal_598[0]), 1, 0);
	ENTITY::_0x4B436BAC8CBE9B07(&(uLocal_598[1]), 1, 0);
}

void func_34()
{
	if (func_46(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			func_90();
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479, "SKINNER_01", &(uLocal_598[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479, "VICTIM", &(uLocal_598[2]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_1, "SKINNER_02", &(uLocal_598[1]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_1, "DEAD", &(uLocal_598[3]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479, "wagon", iLocal_606, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_2, "VICTIM", &(uLocal_598[2]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_3, "VICTIM", &(uLocal_598[2]), 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "BASE_BOOL", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "IDLE_BOOL", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "FEM_IDLE_BOOL", false, false);
			ANIMSCENE::START_ANIM_SCENE(Local_479);
			ANIMSCENE::START_ANIM_SCENE(Local_479.f_1);
		}
		if (iLocal_487 == 0 || iLocal_487 == 5)
		{
			func_90();
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479, "odriscoll", &(uLocal_598[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479, "vic", &(uLocal_598[2]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_2, "vic", &(uLocal_598[2]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_1, "odriscoll", &(uLocal_598[1]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_1, "wagon", iLocal_606, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "base_bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "ground_bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "base_bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "", false, false);
			ANIMSCENE::START_ANIM_SCENE(Local_479);
			ANIMSCENE::START_ANIM_SCENE(Local_479.f_1);
		}
	}
}

void func_35()
{
	if (func_46(iLocal_487, 0))
	{
		if (iLocal_487 == 0)
		{
			func_91(uLocal_598[0], 2061539371);
			func_91(uLocal_598[1], 1771140493);
			func_91(uLocal_598[4], 1537379613);
			func_91(uLocal_598[2], 975618243);
		}
		else if (iLocal_487 == 3)
		{
			func_91(uLocal_598[0], 2024768285);
			func_91(uLocal_598[1], -1963382864);
			func_91(uLocal_598[4], -1532821035);
			func_91(uLocal_598[2], 1023712399);
			func_91(uLocal_598[3], 1255880764);
		}
		else if (iLocal_487 == 5)
		{
			func_91(uLocal_598[0], 1937571152);
			func_91(uLocal_598[1], 70688453);
			func_91(uLocal_598[4], 633654067);
			func_91(uLocal_598[2], 1963369243);
		}
	}
}

void func_36()
{
	if (Local_59.f_161)
	{
		if (!bLocal_684)
		{
			PERSCHAR::_0x92690B0822493CE0();
			PERSCHAR::_0xEFC5C6670E0B99BA();
			func_92(Local_59.f_51, 100f, 0, 0);
			func_92(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 100f, 0, 0);
			MISC::CLEAR_AREA(Local_59.f_51, 300f, 2442122);
			bLocal_684 = true;
		}
	}
	else
	{
		func_92(vLocal_15, 20f, 0, 0);
		func_52(Local_59.f_51, 20f, 0, 0, 5);
	}
	func_93(&bLocal_774, 1569.125f, -1433.113f, 61.73186f, 0f, 0f, 0f, 1f, 1f, 3f, "volVicBlockingArea");
	PED::_0x7C00CFC48A782DC0(bLocal_774, &(uLocal_598[2]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	PATHFIND::_0x19C7567D2F2287D6(bLocal_774, 7);
}

void func_37()
{
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479, 0))
	{
		fLocal_648 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_479);
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479.f_1, 0))
	{
		fLocal_649 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_479.f_1);
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479.f_2, 0))
	{
		fLocal_650 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_479.f_2);
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[22])))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479, 0))
		{
			bLocal_703 = true;
			fLocal_651 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_479);
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_479.f_1, &(sLocal_25[22])))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479.f_1, 0))
		{
			fLocal_652 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_479.f_1);
		}
	}
	if (iLocal_612 > 1)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	if (!bLocal_687)
	{
		PED::SET_PED_CONFIG_FLAG(&(uLocal_598[2]), 430, true);
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (!Local_59.f_46)
	{
		func_94();
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[2]), 105945964))
	{
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[0]), 105945964))
	{
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[1]), 105945964))
	{
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_598[5]), Global_35, 1, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_598[5]), false);
	}
	uLocal_653 = uLocal_653;
}

int func_38()
{
	iLocal_776 = PED::GET_MOUNT(Global_35);
	if (!bLocal_681)
	{
		if (((((((func_95(&uLocal_598, &(Local_59.f_5), &iLocal_765, &uLocal_635, 0, 2, 1) || ((func_83(Global_35, iLocal_606, 0) && func_31(&(uLocal_598[1]), 0, 1)) && iLocal_612 < 4)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_776, &(uLocal_598[0]), 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_776, &(uLocal_598[1]), 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_776, &(uLocal_598[2]), 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, &(uLocal_598[0]), 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, &(uLocal_598[1]), 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, &(uLocal_598[2]), 1, 1))
		{
			if ((((iLocal_765 != 131072 || iLocal_765 != 262144) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, &(uLocal_598[0]), 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, &(uLocal_598[1]), 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, &(uLocal_598[2]), 1, 1))
			{
				bLocal_660 = true;
				bLocal_661 = true;
				return 1;
			}
		}
	}
	if (iLocal_612 >= 4)
	{
		if (func_95(&uLocal_598, &(Local_59.f_5), &iLocal_765, &uLocal_635, 0, 1, 1))
		{
			bLocal_660 = true;
			bLocal_661 = true;
			func_96();
			return 1;
		}
		if (func_97())
		{
			bLocal_660 = true;
			return 1;
		}
	}
	if (((func_98(Global_35, &(uLocal_598[5]), 0) || func_98(Global_35, &(uLocal_598[6]), 0)) || func_99(Global_35, &(uLocal_598[1])) < 1f) || func_99(Global_35, &(uLocal_598[0])) < 1f)
	{
		bLocal_660 = true;
		return 1;
	}
	if (!bLocal_709)
	{
		if (func_100(&(uLocal_598[1]), &(Local_59.f_5)) || func_100(&(uLocal_598[0]), &(Local_59.f_5)))
		{
			bLocal_709 = true;
		}
	}
	if (func_101(Global_35, 1, 0, 0) == joaat("WEAPON_BOW"))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_598[1]), Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_598[0]), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_598[2]), Global_35, 1, 1))
		{
			bLocal_660 = true;
			return 1;
		}
	}
	if ((iLocal_487 == 5 && bLocal_721) && !func_102(Global_35, 0))
	{
		func_96();
		return 1;
	}
	return 0;
}

int func_39()
{
	func_103();
	switch (iLocal_612)
	{
		case 0:
			iLocal_1041 = func_104(1, 0, 0);
			func_50(1);
			if (func_105())
			{
				func_106(0);
				iLocal_623 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), func_78(&Local_59), 0f, 20f, -1f, -1082130432, -1082130432, -1, -1);
				if (iLocal_487 == 0 || iLocal_487 == 5)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_606, 2);
				}
				func_107(Local_854[0 /*17*/], 0, 0);
				func_107(Local_854[1 /*17*/], 0, 0);
				iLocal_612 = 1;
			}
			break;
		case 1:
			if (func_108(&Local_59, 1f, 60f, 55f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "BASE_BOOL", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "BASE_BOOL", true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_606, true);
				if (iLocal_487 == 0)
				{
					func_109(Local_59.f_3, 0, 1);
				}
				else if (iLocal_487 == 5)
				{
					func_109(Local_59.f_3, 1, 2);
				}
				else if (iLocal_487 == 3)
				{
					func_109(Local_59.f_3, 2, 3);
					AITRANSPORT::_0x8886D83A430537FD(&(uLocal_598[2]), 0);
				}
				iLocal_612 = 2;
			}
			else
			{
				func_110();
			}
			break;
		case 2:
			if (func_111())
			{
				iLocal_612 = 4;
			}
			break;
		case 5:
			if (!bLocal_662)
			{
				if (iLocal_487 != 3)
				{
					switch (iLocal_644)
					{
						case 0:
							TASK::TASK_PLAY_ANIM(&(uLocal_598[2]), &(Local_488[4 /*2*/]), (Local_488[4 /*2*/])->f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
							iLocal_644++;
							break;
						case 1:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_598[2]), &(Local_488[4 /*2*/]), (Local_488[4 /*2*/])->f_1, 1) || ENTITY::_0x627520389E288A73(&(uLocal_598[2]), &(Local_488[4 /*2*/]), (Local_488[4 /*2*/])->f_1) >= 0.98f)
							{
								TASK::TASK_PLAY_ANIM(&(uLocal_598[2]), &(Local_488[5 /*2*/]), (Local_488[5 /*2*/])->f_1, 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
								bLocal_662 = true;
								iLocal_644++;
							}
							break;
					}
				}
			}
			if (func_112())
			{
				if (!PED::IS_PED_IN_COMBAT(&(uLocal_598[0]), Global_35))
				{
					TASK::TASK_COMBAT_PED(&(uLocal_598[0]), Global_35, 0, 0);
				}
				if (!PED::IS_PED_IN_COMBAT(&(uLocal_598[1]), Global_35))
				{
					TASK::TASK_COMBAT_PED(&(uLocal_598[1]), Global_35, 0, 0);
				}
				if ((func_31(&(uLocal_598[2]), 0, 1) && !func_31(&(uLocal_598[0]), 0, 1)) && !func_31(&(uLocal_598[1]), 0, 1))
				{
					func_113();
					func_106(1);
					iLocal_612 = 3;
				}
				if ((!func_31(&(uLocal_598[2]), 0, 1) && !func_31(&(uLocal_598[0]), 0, 1)) && !func_31(&(uLocal_598[1]), 0, 1))
				{
					func_113();
					func_106(1);
					iLocal_612 = 6;
				}
			}
			break;
		case 3:
			if (func_114())
			{
				if (!Local_59.f_44)
				{
					Local_59.f_44 = 1;
				}
				iLocal_612 = 6;
			}
			break;
		case 4:
			if (!Local_59.f_46 && !bLocal_678)
			{
				if (func_115())
				{
					iLocal_612 = 6;
				}
			}
			if (bLocal_678)
			{
				if (func_116())
				{
					iLocal_612 = 6;
				}
			}
			break;
		case 6:
			if (((!func_31(&(uLocal_598[0]), 0, 1) && !func_31(&(uLocal_598[0]), 0, 1)) || func_117(&(uLocal_598[0]), Global_35, 1, 1) > 100f) || func_117(&(uLocal_598[1]), Global_35, 1, 1) > 100f)
			{
				if ((func_118(Global_35, Local_59.f_51, 1) > 100f && !func_31(&(uLocal_598[2]), 0, 1)) || func_118(Global_35, Local_59.f_51, 1) > 200f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_40(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_119())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_120(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_72(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_72(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_72(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_121(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_121(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

int func_41(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_122(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_123(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_124(&(uParam0->f_5));
			}
			func_49(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_125(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_126(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_127(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_128(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_129(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_72(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_130(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_0x3AA24CCC0D451379(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_42(int iParam0)
{
	func_15(iParam0, 0);
	func_5(iParam0, 0);
	func_7(iParam0, 1);
	func_6(iParam0, 1);
	func_131(iParam0, 0);
	func_14(iParam0, 1);
	func_132(iParam0, 1, 1, 1);
}

var func_43(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_133(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_134(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_133(sVar0, iParam1, 0, 0, 1, 1);
}

int func_44()
{
	return Global_1897952->f_41;
}

int func_45(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	bVar0 = (func_135() && !bParam2);
	switch (iParam0)
	{
		case 15:
		case 16:
			return 5;
		case 3:
		case 9:
			return 0;
		case 1:
			if (!bVar0 && !bParam1)
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 10:
			return 1;
		case 4:
		case 12:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
		case 0:
		case 11:
			return 2;
		case 5:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
	}
	return -1;
}

int func_46(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return 0;
	}
	return 1;
}

bool func_47(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_136(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_137(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

void func_48(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_49(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_50(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 1)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 1), "DRAFT_HARNESS_RR");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 1), 48, bParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 0)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 0), "DRAFT_HARNESS_LR");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 0), 48, bParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 5)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 5), "DRAFT_HARNESS_RF");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 5), 48, bParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 4)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 4), "DRAFT_HARNESS_LF");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 4), 48, bParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 2)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 2), "DRAFT_HARNESS_LM");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 2), 48, bParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 3)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 3), "DRAFT_HARNESS_RM");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 3), 48, bParam0);
	}
}

void func_51(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
}

void func_52(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_138(vVar0, vVar3, 0f) };
	vVar9 = { func_139(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

void func_53(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	float fVar0;

	fVar0 = func_118(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	PED::_0x39A2FC5AF55A52B1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		PED::_0x7C08E7CB8D951B70(iParam0, fParam7);
	}
	PED::_0x36E4B61DC56DE77C(iParam0, fParam2, fParam3, iParam4, iParam5);
}

void func_54(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_140(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_141(uParam0->f_3, 524288);
		}
	}
	if (func_31(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_31(uParam1[iVar0], 0, 0))
			{
				func_142(uParam1[iVar0], bVar3);
				if (func_143(uParam0, (*uParam1)[iVar0]))
				{
					func_144((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_31(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT(uParam1[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT(uParam1[iVar0], false, 0, 0);
						}
						else if (PED::_0xD5FE956C70FF370B(uParam1[iVar0]))
						{
							PED::_0x7DE9692C6F64CFE8(uParam1[iVar0], false, 0, 0);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_146(uParam1[iVar0], 1073741824 /* Float: 2f */, func_145(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_147(uParam0);
	}
	func_148(uParam0);
	if (!uParam0->f_186)
	{
		func_122(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_149(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_150(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

int func_55(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_151(iVar0))
	{
		return 0;
	}
	if (func_152(iVar0, 1) || func_152(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0)
{
	if (!func_46(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/])->f_1 == 5;
}

bool func_57(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_153(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_58(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_154(uParam0->f_3);
	iVar1 = func_155(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	if (func_46(iLocal_487, 0))
	{
		if (iLocal_487 == 0)
		{
			(Local_253[0 /*32*/])->f_1 = joaat("G_M_M_UNIDUSTER_03");
			Local_253[0 /*32*/] = 4;
			StringCopy(&((Local_253[0 /*32*/])->f_23), "0361_G_M_M_UniDuster_03_WHITE_01", 64);
			(Local_253[0 /*32*/])->f_3 = 2061539371;
			(Local_253[1 /*32*/])->f_1 = joaat("G_M_M_UNIDUSTER_03");
			Local_253[1 /*32*/] = 4;
			StringCopy(&((Local_253[1 /*32*/])->f_23), "0362_G_M_M_UniDuster_03_WHITE_02", 64);
			(Local_253[1 /*32*/])->f_3 = 1771140493;
			(Local_253[4 /*32*/])->f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[4 /*32*/] = 4;
			(Local_253[4 /*32*/])->f_3 = 1537379613;
			(Local_253[2 /*32*/])->f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[2 /*32*/] = 4;
			StringCopy(&((Local_253[2 /*32*/])->f_23), "0595_A_M_M_Civ_White_AVOID_11", 64);
			(Local_253[2 /*32*/])->f_3 = 975618243;
			(Local_253[3 /*32*/])->f_1 = 0;
			(Local_253[5 /*32*/])->f_1 = func_156(0, 0, 1);
			(Local_253[6 /*32*/])->f_1 = func_156(0, 0, 1);
		}
		else if (iLocal_487 == 3)
		{
			(Local_253[0 /*32*/])->f_1 = joaat("G_M_M_UNIMOUNTAINMEN_01");
			Local_253[0 /*32*/] = 4;
			StringCopy(&((Local_253[0 /*32*/])->f_23), "0257_G_M_M_UniMountainMen_02_WHITE_01", 64);
			(Local_253[0 /*32*/])->f_3 = 2024768285;
			(Local_253[1 /*32*/])->f_1 = joaat("G_M_M_UNIMOUNTAINMEN_01");
			Local_253[1 /*32*/] = 4;
			StringCopy(&((Local_253[1 /*32*/])->f_23), "0255_G_M_M_UniMountainMen_01_WHITE_01", 64);
			(Local_253[1 /*32*/])->f_3 = -1963382864;
			(Local_253[4 /*32*/])->f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[4 /*32*/] = 4;
			(Local_253[4 /*32*/])->f_3 = -1532821035;
			(Local_253[2 /*32*/])->f_1 = joaat("RE_COACHROBBERY_FEMALES_01");
			Local_253[2 /*32*/] = 4;
			StringCopy(&((Local_253[2 /*32*/])->f_23), "CONCERNED_AUNT", 64);
			(Local_253[2 /*32*/])->f_3 = 1023712399;
			(Local_253[3 /*32*/])->f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[3 /*32*/] = 4;
			(Local_253[3 /*32*/])->f_3 = 1255880764;
			(Local_253[5 /*32*/])->f_1 = func_156(3, 0, 1);
			(Local_253[6 /*32*/])->f_1 = func_156(3, 0, 1);
		}
		else if (iLocal_487 == 5)
		{
			(Local_253[0 /*32*/])->f_1 = joaat("G_M_M_UNIBANDITOS_01");
			Local_253[0 /*32*/] = 4;
			StringCopy(&((Local_253[0 /*32*/])->f_23), "1022_G_M_M_UniBanditos_01_HISPANIC_04", 64);
			(Local_253[0 /*32*/])->f_3 = 1937571152;
			(Local_253[1 /*32*/])->f_1 = joaat("G_M_M_UNIBANDITOS_01");
			Local_253[1 /*32*/] = 4;
			StringCopy(&((Local_253[1 /*32*/])->f_23), "1021_G_M_M_UniBanditos_01_HISPANIC_03", 64);
			(Local_253[1 /*32*/])->f_3 = 70688453;
			(Local_253[4 /*32*/])->f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[4 /*32*/] = 4;
			(Local_253[4 /*32*/])->f_3 = 633654067;
			(Local_253[2 /*32*/])->f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[2 /*32*/] = 4;
			StringCopy(&((Local_253[2 /*32*/])->f_23), "1071_A_M_M_ArmTownfolk_01_WHITE_02", 64);
			(Local_253[2 /*32*/])->f_3 = 1963369243;
			(Local_253[3 /*32*/])->f_1 = 0;
			(Local_253[5 /*32*/])->f_1 = func_156(5, 0, 1);
			(Local_253[6 /*32*/])->f_1 = func_156(5, 0, 1);
		}
	}
}

void func_60(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

void func_61()
{
	if (func_46(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			Local_488[0 /*2*/] = "script_re@coach_robbery@odriscoll";
			(Local_488[0 /*2*/])->f_1 = "thanks_vic";
			func_157(&(Local_488[0 /*2*/]), &uLocal_541);
			Local_488[3 /*2*/] = "script_re@coach_robbery@odriscoll";
			(Local_488[3 /*2*/])->f_1 = "trans_to_knee_vic";
			func_157(&(Local_488[3 /*2*/]), &uLocal_541);
		}
		if (iLocal_487 == 0 || iLocal_487 == 5)
		{
			Local_488[0 /*2*/] = "script_re@coach_robbery@odriscoll";
			(Local_488[0 /*2*/])->f_1 = "thanks_vic";
			func_157(&(Local_488[0 /*2*/]), &uLocal_541);
			Local_488[1 /*2*/] = "script_re@coach_robbery@odriscoll";
			(Local_488[1 /*2*/])->f_1 = "action_05_wagon";
			func_157(&(Local_488[1 /*2*/]), &uLocal_541);
			Local_488[3 /*2*/] = "script_re@coach_robbery@odriscoll";
			(Local_488[3 /*2*/])->f_1 = "trans_to_sit_vic";
			func_157(&(Local_488[3 /*2*/]), &uLocal_541);
			Local_488[4 /*2*/] = "script_re@coach_robbery@odriscoll";
			(Local_488[4 /*2*/])->f_1 = "breakout_01_vic";
			func_157(&(Local_488[4 /*2*/]), &uLocal_541);
			Local_488[5 /*2*/] = "script_re@coach_robbery@odriscoll";
			(Local_488[5 /*2*/])->f_1 = "ground_vic";
			func_157(&(Local_488[5 /*2*/]), &uLocal_541);
		}
	}
}

void func_62()
{
	func_158(&Local_253);
}

void func_63()
{
	if (func_46(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			Local_479.f_4 = "script@beat@wilderness@CoachRobbery@skinner_pt01";
			Local_479.f_5 = "script@beat@wilderness@CoachRobbery@skinner_pt02";
			Local_479.f_6 = "script@beat@wilderness@CoachRobbery@skinner_pt01";
			Local_479.f_7 = "script@beat@wilderness@CoachRobbery@skinner_pt01";
			sLocal_25[11] = "PBL_BASE";
			sLocal_25[18] = "PBL_ACTION_01";
			sLocal_25[16] = "PBL_BASE_VAR";
			sLocal_25[17] = "PBL_ACTION_02";
			sLocal_25[0] = "PBL_BRKOUT_FEM";
			sLocal_25[1] = "PBL_BRKOUT_STG01_F";
			sLocal_25[2] = "PBL_BRKOUT_STG01_R";
			sLocal_25[3] = "PBL_BRKOUT_STG01_L";
			sLocal_25[4] = "PBL_BRKOUT_STG02_F";
			sLocal_25[5] = "PBL_BRKOUT_STG02_R";
			sLocal_25[6] = "PBL_BRKOUT_STG02_L";
			sLocal_25[7] = "PBL_BRKOUT_STG03_F";
			sLocal_25[8] = "PBL_BRKOUT_STG03_B";
			sLocal_25[9] = "PBL_BRKOUT_STG03_R";
			sLocal_25[10] = "PBL_BRKOUT_STG03_L";
			sLocal_25[12] = "PBL_BRKOUT_03_F";
			sLocal_25[13] = "PBL_BRKOUT_03_B";
			sLocal_25[14] = "PBL_BRKOUT_03_R";
			sLocal_25[15] = "PBL_BRKOUT_03_L";
			Local_479 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_4, 64, &(sLocal_25[18]), false, true);
			Local_479.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_5, 64, &(sLocal_25[16]), false, true);
			Local_479.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_6, 64, &(sLocal_25[0]), false, true);
			Local_479.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_7, 64, &(sLocal_25[17]), false, true);
		}
		if (iLocal_487 == 0 || iLocal_487 == 5)
		{
			Local_479.f_4 = "script@beat@wilderness@CoachRobbery@odriscoll_pt01";
			Local_479.f_5 = "script@beat@wilderness@CoachRobbery@odriscoll_pt02";
			Local_479.f_6 = "script@beat@wilderness@CoachRobbery@odriscoll_pt01";
			sLocal_25[18] = "PBL_ACTION_01";
			sLocal_25[17] = "PBL_ACTION_02";
			sLocal_25[19] = "PBL_ACTION_03";
			sLocal_25[20] = "PBL_ACTION_04";
			sLocal_25[21] = "PBL_ACTION_05";
			sLocal_25[22] = "PBL_ACTION_06";
			sLocal_25[23] = "PBL_ACTION_EXIT";
			sLocal_25[24] = "PBL_BREAKOUT_01";
			sLocal_25[25] = "PBL_BREAKOUT_02";
			sLocal_25[27] = "PBL_CALLOUT_01_F";
			sLocal_25[26] = "PBL_CALLOUT_01_R";
			sLocal_25[28] = "PBL_CALLOUT_01_L";
			sLocal_25[30] = "PBL_CALLOUT_02_F";
			sLocal_25[29] = "PBL_CALLOUT_02_R";
			sLocal_25[31] = "PBL_CALLOUT_02_L";
			sLocal_25[32] = "PBL_VIC";
			Local_479 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_4, 64, &(sLocal_25[18]), false, true);
			Local_479.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_5, 64, &(sLocal_25[18]), false, true);
			Local_479.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_6, 64, &(sLocal_25[32]), false, true);
		}
	}
}

int func_64()
{
	return joaat("COACH2");
}

int func_65(var uParam0, char* sParam1)
{
	return 1;
}

int func_66(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

int func_67()
{
	if (func_46(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			if (((!ANIMSCENE::_0x477122B8D05E7968(Local_479, 1, 0) && !ANIMSCENE::_0x477122B8D05E7968(Local_479.f_1, 1, 0)) && !ANIMSCENE::_0x477122B8D05E7968(Local_479.f_2, 1, 0)) && !ANIMSCENE::_0x477122B8D05E7968(Local_479.f_3, 1, 0))
			{
				if (((!ANIMSCENE::_0x59606519FF9D3EC2(Local_479, 1) && !ANIMSCENE::_0x59606519FF9D3EC2(Local_479.f_1, 1)) && !ANIMSCENE::_0x59606519FF9D3EC2(Local_479.f_2, 1)) && !ANIMSCENE::_0x59606519FF9D3EC2(Local_479.f_3, 1))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_479);
					ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_1);
					ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_2);
					ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_3);
				}
			}
			else
			{
				return 1;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(Local_479);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_1);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_2);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_3);
			if (((ANIMSCENE::_0x477122B8D05E7968(Local_479, 1, 0) && ANIMSCENE::_0x477122B8D05E7968(Local_479.f_1, 1, 0)) && ANIMSCENE::_0x477122B8D05E7968(Local_479.f_2, 1, 0)) && ANIMSCENE::_0x477122B8D05E7968(Local_479.f_3, 1, 0))
			{
				return 1;
			}
		}
		else if ((!ANIMSCENE::_0x477122B8D05E7968(Local_479, 1, 0) && !ANIMSCENE::_0x477122B8D05E7968(Local_479.f_1, 1, 0)) && !ANIMSCENE::_0x477122B8D05E7968(Local_479.f_2, 1, 0))
		{
			if ((!ANIMSCENE::_0x59606519FF9D3EC2(Local_479, 1) && !ANIMSCENE::_0x59606519FF9D3EC2(Local_479.f_1, 1)) && !ANIMSCENE::_0x59606519FF9D3EC2(Local_479.f_2, 1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_479);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_1);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_2);
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_68()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (func_46(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			iVar4 = 0;
			while (iVar4 <= 11)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[iVar4])))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479, &(sLocal_25[iVar4])))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[iVar4]));
					}
					bVar0 = false;
				}
				iVar4++;
			}
			iVar4 = 11;
			while (iVar4 <= 17)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[iVar4])))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479.f_1, &(sLocal_25[iVar4])))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[iVar4]));
					}
					bVar1 = false;
				}
				iVar4++;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_2, &(sLocal_25[4])))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479.f_2, &(sLocal_25[4])))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_2, &(sLocal_25[4]));
				}
				bVar2 = false;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_3, &(sLocal_25[17])))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479.f_3, &(sLocal_25[17])))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_3, &(sLocal_25[17]));
				}
				bVar3 = false;
			}
		}
		if (iLocal_487 == 0 || iLocal_487 == 5)
		{
			iVar4 = 17;
			while (iVar4 <= 32)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[iVar4])))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479, &(sLocal_25[iVar4])))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[iVar4]));
					}
					bVar0 = false;
				}
				iVar4++;
			}
			iVar4 = 17;
			while (iVar4 <= 31)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[iVar4])))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479.f_1, &(sLocal_25[iVar4])))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[iVar4]));
					}
					bVar1 = false;
				}
				iVar4++;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_2, &(sLocal_25[32])))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479.f_2, &(sLocal_25[32])))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_2, &(sLocal_25[32]));
				}
				bVar2 = false;
			}
		}
	}
	if (iLocal_487 == 3)
	{
		return (!bVar0 && !bVar1);
	}
	if (iLocal_487 == 0 || iLocal_487 == 5)
	{
		return (((!bVar0 && !bVar1) && !bVar2) && !bVar3);
	}
	return 0;
}

bool func_69(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_159((*iParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_70(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_160(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_161(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_125(iParam0, 128))
			{
				if (!func_162(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_163(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_164(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_165(*uParam1))
				{
					return func_166(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_167(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(Param4.f_2, 8))
				{
					func_161(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_168(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_169(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_170(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_125(iParam0, 128))
			{
				if (!func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_166(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_163(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_168(uParam1))
					{
						return func_166(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_172(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_161(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_166(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_43("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_43("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_71(var uParam0, int iParam1)
{
	if (func_72(iParam1, 256))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_172) || func_174(iParam1, func_173(uParam0), &(uParam0->f_172)))
		{
			if (func_31(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_72(int iParam0, int iParam1)
{
	if (!func_175(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_73(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_93(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_72(uParam0->f_3, 1) && !func_72(uParam0->f_3, 32))
	{
		func_93(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_72(uParam0->f_3, 2) && !func_72(uParam0->f_3, 32))
	{
		func_93(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_176(uParam0->f_171, 1);
	}
	if (func_72(uParam0->f_3, 1))
	{
		func_93(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_177(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_74(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

char* func_75(int iParam0)
{
	if (func_178(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_76(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_179(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_180(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_181(iParam0->f_6, iParam0->f_5, 0);
			}
			func_182(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_183(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

char* func_77(int iParam0)
{
	if (func_46(iLocal_487, 0))
	{
		if (iLocal_487 == 0)
		{
			switch (iParam0)
			{
				case 0:
					return "RE_RC_ODR_V1_OPN_A";
				case 1:
					return "RE_RC_ODR_V1_OPN_B";
				case 3:
					return "RE_RC_ODR_V1_ACTION_1";
				case 4:
					return "RE_RC_ODR_V1_ACTION_2";
				case 5:
					return "RE_RC_ODR_V1_ACTION_3";
				case 6:
					return "RE_RC_ODR_V1_ACTION_4";
				case 7:
					return "RE_RC_ODR_V1_ACTION_5";
				case 8:
					return "RE_RC_ODR_V1_ACTION_6";
				case 9:
					return "RE_RC_ODR_V1_ACTION_7";
				case 10:
					return "RE_RC_ODR_V1_ACTION_8";
				case 11:
					return "RE_RC_ODR_V1_ACTION_9";
				case 12:
					return "RE_RC_ODR_V1_ACTION_10";
				case 13:
					return "RE_RC_ODR_V1_ACTION_11";
				case 14:
					return "RE_RC_ODR_V1_CALLOUT_1";
				case 15:
					return "RE_RC_ODR_V1_CALLOUT_2";
				case 16:
					return "RE_RC_ODR_V1_CALLOUT_3";
				case 17:
					return "RE_RC_ODR_V1_AGGRO_FEUD_B";
				case 18:
					return "RE_RC_ODR_V1_AGGRO_FEUD_A";
				case 19:
					return "RE_RC_ODR_V1_AGGRO_3";
				case 20:
					return "RE_RC_ODR_V1_AGGRO_2";
				case 21:
					return "RE_RC_ODR_V1_GEN_AGGRO";
				case 22:
					return "RE_RC_ODR_V1_AGGRO_5";
				case 23:
					return "GENERIC_SHOCKED_HIGH";
				case 24:
					return "RE_RC_ODR_V1_ILO_AGGRO";
				case 25:
					return "RE_RC_ODR_V1_THANKS_1";
				case 26:
					return "RE_RC_ODR_V1_THANKS_2";
				case 27:
					return "RE_RC_ODR_V1_THANKS_3";
				case 28:
					return "RE_RC_ODR_V1_THANKS_3_ALT";
				case 29:
					return "RE_RC_ODR_V1_THANKS_4";
				case 33:
					return "RE_RC_ODR_V1_THANKS_5";
				case 30:
					return "RE_RC_ODR_V1_THANKS_2B";
				case 31:
					return "RE_RC_ODR_V1_THANKS_OPEN";
				case 32:
					return "RE_RC_ODR_V1_THANKS_OPEN_B";
				case 34:
					return "RE_RC_ODR_V1_ILO_A";
				case 35:
					return "RE_RC_ODR_V1_ILO_A_ALT";
				case 36:
					return "RE_RC_ODR_V1_ILO_B";
				case 37:
					return "RE_RC_ODR_V1_ILO_C";
				case 38:
					return "RE_RC_ODR_V1_ILO_D";
				case 39:
					return "RE_RC_ODR_V1_ILO_E";
				case 40:
					return "RE_RC_ODR_V1_THANKS_RESP_FINAL_HIGH";
				case 41:
					return "RE_RC_ODR_V1_THANKS_RESP_FINAL_LOW";
			}
		}
		else if (iLocal_487 == 3)
		{
			switch (iParam0)
			{
				case 0:
					return "RE_RC_SVG_V1_OPN_A";
				case 1:
					return "RE_RC_SVG_V1_OPN_B";
				case 3:
					return "RE_RC_SVG_V1_ACTION_1";
				case 4:
					return "RE_RC_SVG_V1_ACTION_2";
				case 5:
					return "RE_RC_SVG_V1_ACTION_3";
				case 6:
					return "RE_RC_SVG_V1_ACTION_4";
				case 14:
					return "RE_RC_SVG_V1_WRN_A";
				case 15:
					return "RE_RC_SVG_V1_WRN_B";
				case 17:
					return "RE_RC_SVG_V1_FACE_BREAKOUT";
				case 18:
					return "RE_RC_SVG_V1_OPN_AGGRO";
				case 19:
					return "RE_RC_SVG_V1_AGGRO_4";
				case 21:
					return "RE_RC_SVG_V1_AGGRO";
				case 20:
					return "RE_RC_SVG_V1_POST_B";
				case 23:
					return "GENERIC_SHOCKED_HIGH";
				case 33:
					return "RE_RC_SVG_V1_AGGRO_5";
				case 24:
					return "RE_RC_SVG_V1_THANK_NEG_RESP";
				case 25:
					return "RE_RC_SVG_V1_THANK_1";
				case 26:
					return "RE_RC_SVG_V1_THANK_2";
				case 27:
					return "RE_RC_SVG_V1_THANK_3";
				case 29:
					return "RE_RC_SVG_V1_THANK_4";
				case 31:
					return "RE_RC_SVG_V1_THANK_5";
				case 34:
					return "RE_RC_SVG_V1_ILO_A";
				case 35:
					return "RE_RC_SVG_V1_ILO_A_ALT";
				case 36:
					return "RE_RC_SVG_V1_ILO_B";
				case 39:
					return "RE_RC_SVG_V1_ILO_C";
				case 40:
					return "RE_RC_ODR_V1_THANKS_RESP_FINAL_HIGH";
				case 41:
					return "RE_RC_ODR_V1_THANKS_RESP_FINAL_LOW";
			}
		}
		else if (iLocal_487 == 5)
		{
			switch (iParam0)
			{
				case 0:
					return "RE_RC_ODR_V1_OPN_A";
				case 1:
					return "RE_RC_ODR_V1_OPN_B";
				case 3:
					return "RE_RC_BND_V1_ACTION_1";
				case 4:
					return "RE_RC_BND_V1_ACTION_2";
				case 5:
					return "RE_RC_BND_V1_ACTION_3";
				case 6:
					return "RE_RC_BND_V1_ACTION_4";
				case 7:
					return "RE_RC_BND_V1_ACTION_5";
				case 8:
					return "RE_RC_BND_V1_ACTION_6";
				case 9:
					return "RE_RC_BND_V1_ACTION_7";
				case 10:
					return "RE_RC_BND_V1_ACTION_8";
				case 11:
					return "RE_RC_BND_V1_ACTION_9";
				case 12:
					return "RE_RC_BND_V1_ACTION_10";
				case 13:
					return "RE_RC_BND_V1_ACTION_11";
				case 14:
					return "RE_RC_BND_V1_CALLOUT_1";
				case 15:
					return "RE_RC_BND_V1_CALLOUT_2";
				case 16:
					return "RE_RC_BND_V1_CALLOUT_3";
				case 17:
					return "RE_RC_BND_V1_AGGRO_4";
				case 18:
					return "GANG_INTERACT_CHAT_WARNING";
				case 19:
					return "RE_RC_BND_V1_AGGRO_3";
				case 24:
					return "RE_RC_BND_V1_AGGRO_2";
				case 21:
					return "RE_RC_BND_V1_AGGRO_4";
				case 22:
					return "RE_RC_BND_V1_AGGRO_5";
				case 23:
					return "GENERIC_SHOCKED_HIGH";
				case 25:
					return "RE_RC_BND_V1_THANKS_1";
				case 26:
					return "RE_RC_BND_V1_THANKS_2";
				case 27:
					return "RE_RC_BND_V1_THANKS_3";
				case 28:
					return "RE_RC_BND_V1_THANKS_3_ALT";
				case 29:
					return "RE_RC_BND_V1_THANKS_4";
				case 33:
					return "RE_RC_BND_V1_THANKS_5";
				case 30:
					return "RE_RC_ODR_V1_THANKS_OPEN_B";
				case 31:
					return "RE_RC_ODR_V1_THANKS_OPEN";
				case 32:
					return "RE_RC_ODR_V1_THANKS_OPEN_B";
				case 34:
					return "RE_RC_BND_V1_ILO_A";
				case 35:
					return "RE_RC_BND_V1_ILO_A_ALT";
				case 36:
					return "RE_RC_BND_V1_ILO_B";
				case 37:
					return "RE_RC_BND_V1_ILO_C";
				case 38:
					return "RE_RC_BND_V1_ILO_D";
				case 39:
					return "RE_RC_BND_V1_ILO_E";
				case 40:
					return "RE_RC_BND_V1_THANKS_RESP_FINAL_HIGH";
				case 41:
					return "RE_RC_BND_V1_THANKS_RESP_FINAL_LOW";
			}
		}
	}
	return "RERC_ODR_V1_END_A";
}

Vector3 func_78(var uParam0)
{
	return uParam0->f_51;
}

var func_79(var uParam0)
{
	return uParam0->f_51.f_3;
}

int func_80(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;

	if (*iParam4 != *iParam5)
	{
		return 0;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_184() || !func_185((*iParam4)[iVar0 /*32*/], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_81()
{
	iLocal_606 = VEHICLE::CREATE_VEHICLE(func_64(), vLocal_15, fLocal_24, true, true, false, false);
	ENTITY::_0x9587913B9E772D29(iLocal_606, 0);
	func_186(iLocal_606);
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_187(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_187(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_187(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_187(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_187(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_187(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_187(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_187(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84(int iParam0, bool bParam1, bool bParam2)
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
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_85(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_0x959383DCD42040DA(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_188(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_188(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_189() == -1 && !func_190(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_190(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_188(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_0x79407D33328286C6(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_191(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_192(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_193(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

int func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (((func_194(iParam0, 4096) && func_194(iParam0, 512)) && func_194(iParam0, 1024)) && func_194(iParam0, 2048))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REPEATER"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_RIFLE"), iParam1, iParam2, 0);
	iVar2 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SNIPER"), iParam1, iParam2, 0);
	iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0);
	while (func_195(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
			Jump @185; //curOff = 160
		}
		else
		{
			iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0);
		}
	}
	if (!func_190(iVar3))
	{
		iVar3 = joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar5 = 0;
	if (!func_194(iParam0, 4096))
	{
		iVar5 = iVar0;
	}
	if (!func_194(iParam0, 512))
	{
		if (!func_188(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar1, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_194(iParam0, 1024))
	{
		if (!func_188(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar3, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_194(iParam0, 2048))
	{
		if (!func_188(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_188(iVar5))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	return iVar5;
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((func_194(iParam0, 8192) && func_194(iParam0, 16384)) && func_194(iParam0, 131072))
	{
		return joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_PISTOL"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REVOLVER"), iParam1, iParam2, 0);
	iVar2 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
	iVar3 = 0;
	if (!func_194(iParam0, 16384))
	{
		iVar3 = iVar1;
	}
	if (!func_194(iParam0, 8192))
	{
		if (!func_188(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_194(iParam0, 131072) && func_190(iVar2))
	{
		if (!func_188(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_188(iVar3))
	{
		return joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	return iVar3;
}

int func_88(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_196(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_197(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_90()
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_479, ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) + Vector(0f, 0f, 0f), 0f, 0f, fLocal_24, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_479.f_1, ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) + Vector(0f, 0f, 0f), 0f, 0f, fLocal_24, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_479.f_2, ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) + Vector(0f, 0f, 0f), 0f, 0f, fLocal_24, 2);
	if (iLocal_487 == 3)
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_479.f_3, ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) + Vector(0f, 0f, 0f), 0f, 0f, 0f, 2);
	}
}

void func_91(var uParam0, int iParam1)
{
	PED::_0x1902C4CFCC5BE57C(*uParam0, iParam1);
	PED::_0xCC8CA3E88256E58F(*uParam0, false, true, true, true, false);
}

void func_92(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_93(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*bParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_94()
{
	if (!bLocal_703)
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479, 0))
		{
			if (!bLocal_691)
			{
				if (fLocal_649 > 0.556866f)
				{
					VEHICLE::_0x9D12796EF4BF9EA9(iLocal_606);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_606, 5, false, false);
					bLocal_700 = true;
					bLocal_691 = true;
				}
			}
		}
	}
	else if (!bLocal_691)
	{
		VEHICLE::_0x9D12796EF4BF9EA9(iLocal_606);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_606, 5, false, false);
		bLocal_700 = true;
		bLocal_691 = true;
	}
}

int func_95(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_198(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_199(uParam0[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

void func_96()
{
}

int func_97()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (iLocal_487 == 0 || iLocal_487 == 5)
	{
		if (fLocal_648 > 0.7f && fLocal_648 < 0.73f)
		{
			return 0;
		}
	}
	if (func_200())
	{
		bVar1 = (func_118(&(uLocal_598[0]), Global_36, 1) < 20f || func_118(&(uLocal_598[1]), Global_36, 1) < 20f);
	}
	else
	{
		bVar0 = (func_118(&(uLocal_598[0]), Global_36, 1) < 20f || func_118(&(uLocal_598[1]), Global_36, 1) < 20f);
	}
	if (bVar0 || bVar1)
	{
	}
	if (!bLocal_656)
	{
		if (func_118(&(uLocal_598[0]), Global_36, 1) < 15f)
		{
			bLocal_656 = true;
			func_201(&(Local_59.f_5), 1);
		}
	}
	else if (func_118(&(uLocal_598[0]), Global_36, 1) >= 15f)
	{
		func_201(&(Local_59.f_5), 0);
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (func_202(&(uLocal_598[iVar2]), &(Local_59.f_5), &iLocal_765, 0) && func_117(&(uLocal_598[0]), Global_35, 1, 1) < 15f)
		{
			return 1;
		}
		iVar2++;
	}
	if (bLocal_693)
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

float func_99(int iParam0, int iParam1)
{
	return func_117(iParam0, iParam1, 1, 1);
}

int func_100(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_203(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (iParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_204(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1935630->f_44) || WEAPON::_0x506F1DE1BFC75304(Global_1935630->f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_205())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_101(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_102(int iParam0, bool bParam1)
{
	if (func_31(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

void func_103()
{
	func_206();
	func_207();
	func_208();
	func_209();
	if (bLocal_700)
	{
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_606, false))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479.f_1, 0))
		{
			func_113();
		}
		func_50(0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_606, false);
		func_51(&iLocal_606);
	}
	if (!bLocal_678)
	{
		if (func_210())
		{
			func_211(&(uLocal_598[2]), 1);
			bLocal_678 = true;
			iLocal_612 = 4;
		}
	}
	if (iLocal_487 == 3)
	{
		func_212();
		if (func_213())
		{
		}
	}
	if (iLocal_487 == 0 || iLocal_487 == 5)
	{
		func_214();
	}
	if (func_215())
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_606, false);
		func_51(&iLocal_606);
	}
	if (!Local_59.f_46 && iLocal_612 != 5)
	{
		if (func_216())
		{
			if (!bLocal_662)
			{
				if (iLocal_487 != 3)
				{
					func_217();
				}
				else
				{
					bLocal_676 = true;
				}
			}
			func_218(0);
			iLocal_612 = 5;
		}
	}
	if (bLocal_710)
	{
		func_219(&(uLocal_598[1]), 0);
	}
	if (!func_31(&(uLocal_598[2]), 0, 1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(bLocal_774))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(bLocal_774);
		}
	}
	func_220();
	if (bLocal_654)
	{
		func_107(Local_798[1 /*17*/], 0, 0);
		func_107(Local_798[0 /*17*/], 0, 0);
	}
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_105()
{
	func_221();
	if ((func_117(Global_35, &(uLocal_598[0]), 1, 1) < IntToFloat(iLocal_633) || func_222(Global_35, &(uLocal_598[0]), 1, 150f, 0)) || func_222(Global_35, &(uLocal_598[1]), 1, 150f, 0))
	{
		if (!bLocal_668)
		{
			if (iLocal_487 == 0)
			{
				switch (iLocal_630)
				{
					case 0:
						AUDIO::_PLAY_SOUND_FROM_ENTITY("CarbineShotDistant", &(uLocal_598[0]), "REFC_Sounds", false, 0, 0);
						func_223(1066055203, &(uLocal_598[0]), 1);
						func_224(&uLocal_734);
						iLocal_630++;
						break;
					case 1:
						if (func_225(&uLocal_734) > 2f && func_117(Global_35, &(uLocal_598[0]), 1, 1) < 130f)
						{
							func_226(&(uLocal_598[2]), Global_35, "GUN_RUN", "", 150f, 2, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
							func_223(1891783641, &(uLocal_598[2]), 1);
							func_224(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 2:
						if (!func_102(&(uLocal_598[2]), 0))
						{
							func_224(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 3:
						func_226(&(uLocal_598[2]), Global_35, "PANIC_HELP", "", 150f, 2, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
						func_223(1891783641, &(uLocal_598[2]), 1);
						func_224(&uLocal_734);
						iLocal_630++;
						break;
					case 4:
						if (!func_102(&(uLocal_598[2]), 0))
						{
							bLocal_668 = true;
							return 1;
						}
						break;
				}
			}
			else if (iLocal_487 == 5)
			{
				switch (iLocal_630)
				{
					case 0:
						AUDIO::_PLAY_SOUND_FROM_ENTITY("CarbineShotDistant", &(uLocal_598[0]), "REFC_Sounds", false, 0, 0);
						func_223(1066055203, &(uLocal_598[0]), 1);
						func_224(&uLocal_734);
						iLocal_630++;
						break;
					case 1:
						if (func_225(&uLocal_734) > 2f && func_117(Global_35, &(uLocal_598[0]), 1, 1) < 120f)
						{
							func_226(&(uLocal_598[2]), Global_35, "PLEAD", "", 150f, 1, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
							func_223(1891783641, &(uLocal_598[2]), 1);
							func_224(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 2:
						if (!func_102(&(uLocal_598[2]), 0))
						{
							func_224(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 3:
						func_226(&(uLocal_598[2]), Global_35, "PANIC_HELP", "", 150f, 1, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
						func_223(1891783641, &(uLocal_598[2]), 1);
						func_224(&uLocal_734);
						iLocal_630++;
						break;
					case 4:
						if (!func_102(&(uLocal_598[2]), 0))
						{
							bLocal_668 = true;
							return 1;
						}
						break;
				}
			}
			else if (iLocal_487 == 3)
			{
				switch (iLocal_630)
				{
					case 0:
						AUDIO::_PLAY_SOUND_FROM_ENTITY("CarbineShotDistant", &(uLocal_598[0]), "REFC_Sounds", false, 0, 0);
						func_223(1066055203, &(uLocal_598[0]), 1);
						func_224(&uLocal_734);
						iLocal_630++;
						break;
					case 1:
						if (func_225(&uLocal_734) > 2f && func_117(Global_35, &(uLocal_598[0]), 1, 1) < 130f)
						{
							func_226(&(uLocal_598[2]), Global_35, "RE_RC_SVG_V1_OPN_IDLE_A", "", 150f, 0, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
							func_223(1891783641, &(uLocal_598[2]), 1);
							func_224(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 2:
						if (!func_102(&(uLocal_598[2]), 0))
						{
							func_224(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 3:
						if (func_225(&uLocal_734) > 0.5f)
						{
							func_227(&(uLocal_598[2]), "SCREAM_TERROR", 1744022339, 0, 1, 0, 0, 1);
							func_223(1891783641, &(uLocal_598[2]), 1);
							func_224(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 4:
						if (func_225(&uLocal_734) > 2f)
						{
							func_226(&(uLocal_598[2]), Global_35, "GENERIC_FRIGHTENED_HIGH", "", 150f, 1, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
							func_223(1891783641, &(uLocal_598[2]), 1);
							func_224(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 5:
						if (!func_102(&(uLocal_598[2]), 0))
						{
							func_226(&(uLocal_598[2]), Global_35, "GENERIC_FRIGHTENED_HIGH", "", 150f, 2, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
							func_223(1891783641, &(uLocal_598[2]), 1);
							bLocal_668 = true;
							return 1;
						}
						break;
				}
			}
		}
	}
	return 0;
}

void func_106(bool bParam0)
{
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_606, bParam0, 3f);
}

void func_107(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_228(iParam0, 13))
	{
		func_229(iParam0, 0);
	}
	else
	{
		func_230(iParam0, 0);
	}
	if (func_179(iParam0->f_6))
	{
		if (bParam2)
		{
			func_231(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_108(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_232(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && func_233())
	{
		bVar1 = true;
		fVar3 = func_145(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_234(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_234(uParam0->f_121[0 /*9*/], fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (func_235(&(uParam0->f_121), iParam4, fParam1))
		{
			func_127(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_149(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_121[iVar0 /*9*/])->f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS((uParam0->f_121[iVar0 /*9*/])->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_126(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_127(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_149(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_236(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_1 = iParam2;
}

void func_110()
{
	switch (iLocal_647)
	{
		case 0:
			if (func_225(&uLocal_734) > 6f)
			{
				if (iLocal_487 == 3)
				{
					func_226(&(uLocal_598[2]), Global_35, "RE_RC_SVG_V1_OPN_IDLE_A", "", 200f, 0, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					func_223(1891783641, &(uLocal_598[2]), 1);
					func_224(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 5)
				{
					func_226(&(uLocal_598[2]), Global_35, "PLEAD", "", 200f, 2, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					func_223(1891783641, &(uLocal_598[2]), 1);
					func_224(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 0)
				{
					func_226(&(uLocal_598[2]), Global_35, "PANIC_HELP", "", 200f, 1, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					func_223(1891783641, &(uLocal_598[2]), 1);
					func_224(&uLocal_734);
					iLocal_647++;
				}
			}
			break;
		case 1:
			if (func_225(&uLocal_734) > 6f)
			{
				if (iLocal_487 == 3)
				{
					func_226(&(uLocal_598[2]), Global_35, "PANIC_HELP", "", 200f, 1, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					func_223(1891783641, &(uLocal_598[2]), 1);
					func_224(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 5)
				{
					func_226(&(uLocal_598[2]), Global_35, "PANIC_HELP", "", 200f, 1, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					func_223(1891783641, &(uLocal_598[2]), 1);
					func_224(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 0)
				{
					func_226(&(uLocal_598[2]), Global_35, "GUN_BEG", "", 200f, 2, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					func_223(1891783641, &(uLocal_598[2]), 1);
					func_224(&uLocal_734);
					iLocal_647++;
				}
			}
			break;
		case 2:
			if (func_225(&uLocal_734) > 6f)
			{
				if (iLocal_487 == 3)
				{
					func_226(&(uLocal_598[2]), Global_35, "PANIC_HELP", "", 200f, 2, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					func_223(1891783641, &(uLocal_598[2]), 1);
					func_224(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 5)
				{
					func_226(&(uLocal_598[2]), Global_35, "GUN_RUN", "", 200f, 1, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					func_223(1891783641, &(uLocal_598[2]), 1);
					func_224(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 0)
				{
					func_226(&(uLocal_598[2]), Global_35, "PANIC_HELP", "", 200f, 1, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					func_223(1891783641, &(uLocal_598[2]), 1);
					func_224(&uLocal_734);
					iLocal_647++;
				}
			}
			break;
	}
}

int func_111()
{
	if (!bLocal_718)
	{
		if (!bLocal_655)
		{
			if (func_237())
			{
				iLocal_612 = 4;
				return 1;
			}
		}
	}
	return 0;
}

int func_112()
{
	switch (iLocal_627)
	{
		case 0:
			if (!Local_59.f_44)
			{
				Local_59.f_44 = 1;
			}
			PED::REGISTER_TARGET(&(uLocal_598[0]), Global_35, 1);
			PED::REGISTER_HATED_TARGETS_AROUND_PED(&(uLocal_598[1]), 100f);
			PED::REGISTER_TARGET(&(uLocal_598[0]), Global_35, 1);
			PED::REGISTER_HATED_TARGETS_AROUND_PED(&(uLocal_598[1]), 100f);
			if (iLocal_487 == 0 || iLocal_487 == 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_606))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_1, "wagon", iLocal_606);
				}
				bLocal_667 = true;
				func_224(&uLocal_731);
				if (func_238())
				{
					func_224(&uLocal_728);
					iLocal_627 = 1;
				}
			}
			else
			{
				bLocal_667 = true;
				switch (iLocal_619)
				{
					case 0:
						if (func_239())
						{
							func_224(&uLocal_728);
							iLocal_619++;
						}
						break;
					case 1:
						if (iLocal_487 == 3)
						{
							func_96();
							if ((!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479.f_1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(&(uLocal_598[1]), 1)) || fLocal_649 > 0.5f)
							{
								func_240(&(uLocal_598[0]), 0, 0);
								func_240(&(uLocal_598[1]), 0, 0);
								TASK::TASK_AIM_AT_ENTITY(&(uLocal_598[0]), Global_35, -1, 0, 0);
								TASK::TASK_AIM_AT_ENTITY(&(uLocal_598[1]), Global_35, -1, 0, 0);
								iLocal_619++;
							}
						}
						break;
					case 2:
						func_224(&uLocal_728);
						iLocal_627 = 1;
						break;
				}
			}
			break;
		case 1:
			if (bLocal_709)
			{
				if (iLocal_487 == 0 && !bLocal_711)
				{
					if (func_31(&(uLocal_598[0]), 0, 1))
					{
						func_226(&(uLocal_598[0]), Global_35, func_77(23), "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_226(&(uLocal_598[1]), Global_35, func_77(23), "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (iLocal_487 != 3)
				{
					if (func_31(&(uLocal_598[1]), 0, 1))
					{
						if (func_31(&(uLocal_598[1]), 0, 1))
						{
							func_226(&(uLocal_598[0]), Global_35, func_77(17), "", 100f, -1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							bLocal_717 = true;
						}
						else
						{
							func_226(&(uLocal_598[1]), Global_35, func_77(23), "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else
					{
						func_226(&(uLocal_598[0]), Global_35, func_77(23), "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (func_31(&(uLocal_598[0]), 0, 1))
				{
					func_226(&(uLocal_598[0]), Global_35, "RE_RC_SVG_V1_OPN_BREAKOUT", "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				func_224(&uLocal_728);
				iLocal_627++;
			}
			else
			{
				if (iLocal_487 != 3)
				{
					if (func_31(&(uLocal_598[0]), 0, 1))
					{
						func_226(&(uLocal_598[0]), Global_35, func_77(23), "", 100f, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_226(&(uLocal_598[1]), Global_35, func_77(23), "", 100f, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (func_31(&(uLocal_598[0]), 0, 1))
				{
					func_226(&(uLocal_598[0]), Global_35, func_77(23), "", 100f, 3, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_226(&(uLocal_598[1]), Global_35, "GENERIC_ANGRY_REACTION", "", 100f, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				func_224(&uLocal_728);
				iLocal_627++;
			}
			break;
		case 2:
			if (((!bLocal_717 && func_225(&uLocal_728) > 1f) || (bLocal_717 && !func_102(&(uLocal_598[0]), 0))) || bLocal_661)
			{
				func_96();
				func_241();
				func_242();
				func_243(uLocal_598[0], &iLocal_889, &Local_910, 1, 1);
				func_243(uLocal_598[1], &iLocal_945, &Local_966, 1, 1);
				if (bLocal_669 && bLocal_670)
				{
					func_224(&uLocal_728);
					iLocal_627++;
				}
			}
			break;
		case 3:
			if (func_225(&uLocal_728) > 1f)
			{
				if (iLocal_487 == 3)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_598[0]), 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_598[1]), 5, true);
				}
				if (!PED::IS_PED_IN_COMBAT(&(uLocal_598[0]), Global_35))
				{
					if (func_244(&(uLocal_598[0]), -1073489615) || func_244(&(uLocal_598[0]), -1207174364))
					{
						TASK::TASK_COMBAT_PED(&(uLocal_598[0]), Global_35, 100663296, 0);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS(&(uLocal_598[0]), -1f);
					}
				}
				if (!PED::IS_PED_IN_COMBAT(&(uLocal_598[1]), Global_35))
				{
					if (func_244(&(uLocal_598[1]), -1073489615) || func_244(&(uLocal_598[1]), -1207174364))
					{
						TASK::TASK_COMBAT_PED(&(uLocal_598[1]), Global_35, 100663296, 0);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS(&(uLocal_598[1]), -1f);
					}
				}
				if (!func_102(&(uLocal_598[0]), 0) && !func_102(&(uLocal_598[1]), 0))
				{
					if (iLocal_487 == 3)
					{
						func_226(&(uLocal_598[1]), Global_35, "FIGHT", "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_487 == 0)
					{
						if (func_31(&(uLocal_598[1]), 0, 1))
						{
							func_226(&(uLocal_598[0]), Global_35, func_77(21), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (iLocal_487 == 5)
					{
						func_226(&(uLocal_598[1]), Global_35, func_77(17), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					func_224(&uLocal_728);
					iLocal_627++;
				}
			}
			break;
		case 4:
			if (func_225(&uLocal_728) > 5f)
			{
				if (iLocal_487 == 0)
				{
					func_226(&(uLocal_598[1]), Global_35, func_77(21), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (iLocal_487 == 3)
				{
					if (func_31(&(uLocal_598[0]), 0, 1))
					{
						if (func_31(&(uLocal_598[1]), 0, 1))
						{
							func_226(&(uLocal_598[0]), Global_35, func_77(21), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_226(&(uLocal_598[0]), Global_35, func_77(18), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (func_31(&(uLocal_598[1]), 0, 1))
					{
						func_226(&(uLocal_598[1]), Global_35, "FIGHT", "", 100f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (iLocal_487 == 5)
				{
					func_226(&(uLocal_598[0]), Global_35, func_77(18), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_627++;
			}
			break;
		case 5:
			func_113();
			func_224(&uLocal_728);
			iLocal_627++;
			break;
		case 6:
			if (func_225(&uLocal_728) > 2f)
			{
				AUDIO::STOP_PED_SPEAKING(&(uLocal_598[0]), true);
				AUDIO::STOP_PED_SPEAKING(&(uLocal_598[1]), true);
				return 1;
			}
			break;
	}
	return 0;
}

void func_113()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_606))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479.f_1, 0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_1, "wagon", iLocal_606);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_606, false);
	}
}

int func_114()
{
	int iVar0;

	if (bLocal_678)
	{
		return 0;
	}
	if (iLocal_487 != 3)
	{
		if (iLocal_631 < 5)
		{
			PED::_0x2371C39D4F91C288(&(uLocal_598[2]));
		}
	}
	if (iLocal_631 < 6)
	{
		if (func_31(&(uLocal_598[2]), 0, 1))
		{
			TASK::TASK_LOOK_AT_ENTITY(&(uLocal_598[2]), Global_35, 0, 0, 51, 0);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(bLocal_774))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(bLocal_774);
	}
	if (bLocal_692)
	{
		if (iLocal_631 > 7 && iLocal_631 < 11)
		{
			if (func_244(&(uLocal_598[2]), 1868526510))
			{
				if (!PED::_IS_MOUNT_SEAT_FREE(&(uLocal_598[5]), -1))
				{
					bLocal_692 = false;
				}
			}
		}
	}
	if (!bLocal_695)
	{
		switch (iLocal_631)
		{
			case 0:
				PED::SET_PED_CONFIG_FLAG(&(uLocal_598[2]), 317, true);
				func_107(Local_854[1 /*17*/], 0, 0);
				func_107(Local_854[0 /*17*/], 1, 0);
				func_245(&(uLocal_598[2]));
				func_246(&(uLocal_598[2]), 4);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_598[2]), 336, true);
				func_224(&uLocal_737);
				iLocal_631++;
				break;
			case 1:
				if (func_225(&uLocal_737) > 1f)
				{
					if (iLocal_487 == 3)
					{
						if (!bLocal_704)
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_2, "fem_idle_bool", true, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_2, "ground_bool", true, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "ground_bool", true, false);
							if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_479.f_2, "VICTIM") || !ENTITY::_0x0B7CB1300CBFE19C(&(uLocal_598[2]), 1))
							{
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "VICTIM", &(uLocal_598[2]));
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_1, "VICTIM", &(uLocal_598[2]));
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "VICTIM", &(uLocal_598[2]));
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_3, "VICTIM", &(uLocal_598[2]));
								func_224(&uLocal_737);
								iLocal_631 = 3;
							}
						}
						else
						{
							PED::_0x16F798A05BB9E3B5(&(uLocal_598[2]));
							TASK::TASK_REACT(&(uLocal_598[2]), Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Shocked", 1f, 10f, 4);
							func_224(&uLocal_737);
							iLocal_631 = 5;
						}
					}
					else
					{
						TASK::TASK_PLAY_ANIM(&(uLocal_598[2]), &(Local_488[3 /*2*/]), (Local_488[3 /*2*/])->f_1, 1000f, -8f, -1, 2, 0f, false, 1, false, 0, false);
						func_224(&uLocal_737);
						iLocal_631++;
					}
				}
				break;
			case 2:
				if (ENTITY::_0x627520389E288A73(&(uLocal_598[2]), &(Local_488[3 /*2*/]), (Local_488[3 /*2*/])->f_1) >= 0.99f || !ENTITY::_0x0B7CB1300CBFE19C(&(uLocal_598[2]), 1))
				{
					bLocal_687 = true;
					func_224(&uLocal_737);
					iLocal_631++;
				}
				break;
			case 3:
				bLocal_687 = true;
				if (iLocal_487 == 3)
				{
					if (PED::IS_PED_IN_VEHICLE(&(uLocal_598[2]), iLocal_606, false))
					{
						if (!func_244(&(uLocal_598[2]), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
						{
							TASK::TASK_LEAVE_VEHICLE(&(uLocal_598[2]), iLocal_606, 196608, 0);
						}
					}
				}
				func_224(&uLocal_737);
				iLocal_631++;
				break;
			case 4:
				if (func_225(&uLocal_737) > 2f)
				{
					if (func_117(&(uLocal_598[2]), Global_35, 1, 1) < 25f)
					{
						if (func_117(&(uLocal_598[2]), Global_35, 1, 1) < 25f || func_225(&uLocal_737) > 15f)
						{
							func_224(&uLocal_737);
							if (iLocal_487 != 3)
							{
								PED::_0xEAA8242C8479C27D(&(uLocal_598[2]), "REAR");
							}
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_598[2]), Global_35, -1, -1082130432, -1082130432, -1082130432);
							iLocal_631++;
						}
					}
					else if (func_117(&(uLocal_598[2]), Global_35, 1, 1) < 50f)
					{
						if (iLocal_487 != 3)
						{
							PED::_0xEAA8242C8479C27D(&(uLocal_598[2]), "REAR");
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_598[2]), Global_35, -1, -1082130432, -1082130432, -1082130432);
						iLocal_631++;
					}
					else if (func_117(&(uLocal_598[2]), Global_35, 1, 1) > 50f)
					{
						iLocal_631 = 10;
					}
				}
				break;
			case 5:
				if (func_225(&uLocal_737) > 3f)
				{
					func_247(Local_798[0 /*17*/], 0);
					func_247(Local_798[1 /*17*/], 0);
					func_107(Local_798[0 /*17*/], 1, 0);
					func_107(Local_798[1 /*17*/], 1, 0);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(&(uLocal_598[2]), &(Local_488[0 /*2*/]), (Local_488[0 /*2*/])->f_1, Global_35, -1, 1000f, -1.5f, 67108880, 0f, false, false, -1f, "", 65536, -1f);
					bLocal_713 = true;
					func_248(&Local_854, 1, 0, 1, 0);
					func_224(&uLocal_737);
					iLocal_631++;
				}
				break;
			case 6:
				if (func_225(&uLocal_737) > 10f || !ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_598[2]), &(Local_488[0 /*2*/]), (Local_488[0 /*2*/])->f_1, 1))
				{
					func_224(&uLocal_737);
					iLocal_631++;
				}
				break;
			case 7:
				if (func_225(&uLocal_737) > 1f)
				{
					if (func_31(&(uLocal_598[5]), 0, 1))
					{
						PED::_0x2EB75FB86C41F026(&(uLocal_598[5]), 3, 0);
					}
					if ((func_31(&(uLocal_598[5]), 0, 1) && PED::_IS_MOUNT_SEAT_FREE(&(uLocal_598[5]), -1)) && func_117(&(uLocal_598[5]), &(uLocal_598[2]), 1, 1) < 50f)
					{
						TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[2]), &(uLocal_598[5]), 20000, -1, 1f, 1, 0, 0);
						bLocal_692 = true;
						iLocal_631++;
					}
					else if ((func_31(&(uLocal_598[5]), 0, 1) && PED::_IS_MOUNT_SEAT_FREE(&(uLocal_598[5]), -1)) && func_117(&(uLocal_598[6]), &(uLocal_598[2]), 1, 1) < 50f)
					{
						TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[2]), &(uLocal_598[6]), -1, -1, 1f, 1, 0, 0);
						bLocal_692 = true;
						iLocal_631++;
					}
					else
					{
						iLocal_631++;
					}
				}
				break;
			case 8:
				if (iLocal_487 != 3)
				{
					if (!func_102(Global_35, 0) && !func_102(&(uLocal_598[2]), 0))
					{
						if (iLocal_487 == 0)
						{
							if (bLocal_700)
							{
								func_226(&(uLocal_598[2]), Global_35, func_77(26), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_226(&(uLocal_598[2]), Global_35, func_77(31), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
						func_224(&uLocal_737);
						iLocal_631++;
					}
				}
				else
				{
					iLocal_631 = 10;
				}
				break;
			case 9:
				if ((func_225(&uLocal_737) > 5f || func_244(&(uLocal_598[2]), -875674219)) || iLocal_487 == 5)
				{
					if (!func_102(&(uLocal_598[2]), 0))
					{
						if (bLocal_700)
						{
							func_226(&(uLocal_598[2]), Global_35, func_77(30), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_226(&(uLocal_598[2]), Global_35, func_77(32), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						iLocal_631++;
					}
				}
				break;
			case 10:
				if (bLocal_692)
				{
					if (PED::IS_PED_ON_MOUNT(&(uLocal_598[2])))
					{
						PED::_0x606D529DADA3C940(&(uLocal_598[2]), 1);
						TASK::_TASK_MOVE_IN_TRAFFIC(&(uLocal_598[2]), 1.5f, 0, 0);
						iLocal_631++;
					}
				}
				else
				{
					PED::_0x606D529DADA3C940(&(uLocal_598[2]), 1);
					TASK::_TASK_MOVE_IN_TRAFFIC(&(uLocal_598[2]), 1.5f, 0, 0);
					PED::SET_PED_KEEP_TASK(&(uLocal_598[2]), true);
					iLocal_631++;
				}
				break;
			case 11:
				iLocal_631++;
				break;
			case 12:
				if (!func_102(&(uLocal_598[2]), 0))
				{
					if (!func_102(Global_35, 0))
					{
						if (iLocal_487 != 3 && !bLocal_712)
						{
							if (func_249())
							{
								func_226(Global_35, Global_35, func_77(40), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_226(Global_35, Global_35, func_77(41), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
					}
					iLocal_631++;
				}
				break;
			case 13:
				if ((func_117(Global_35, &(uLocal_598[2]), 1, 1) > 15f && !func_102(&(uLocal_598[2]), 0)) || !func_31(&(uLocal_598[2]), 0, 1))
				{
					return 1;
				}
				break;
		}
	}
	else
	{
		switch (iLocal_640)
		{
			case 0:
				func_245(&(uLocal_598[2]));
				func_246(&(uLocal_598[2]), 4);
				if ((!func_102(Global_35, 0) && !func_102(&(uLocal_598[2]), 0)) || !bLocal_696)
				{
					if (bLocal_696)
					{
						if (bLocal_700)
						{
							func_226(&(uLocal_598[2]), Global_35, func_77(26), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_226(&(uLocal_598[2]), Global_35, func_77(31), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						iLocal_640++;
					}
					else
					{
						switch (iLocal_645)
						{
							case 0:
								TASK::TASK_REACT(&(uLocal_598[2]), Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Shocked", 2f, 10f, 4);
								func_219(&(uLocal_598[2]), 0);
								func_224(&uLocal_758);
								iLocal_645++;
								break;
							case 1:
								if (func_225(&uLocal_758) > 1f && !func_102(Global_35, 0))
								{
									if (func_31(&(uLocal_598[5]), 0, 1))
									{
										PED::_0x2EB75FB86C41F026(&(uLocal_598[5]), 3, 0);
									}
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_598[5]), -1, -1, 1.5f, 1, 0, 0);
									TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.5f, 0, 0);
									func_250(&(uLocal_598[2]), &iVar0, 0, 0, 1, 1);
									func_224(&uLocal_758);
									iLocal_645++;
								}
								break;
							case 2:
								if (func_225(&uLocal_758) > 1f)
								{
									PED::_0xE737D5F14304A2EC(&(uLocal_598[2]), PLAYER::GET_PLAYER_INDEX(), 120000);
									func_226(&(uLocal_598[2]), Global_35, func_77(24), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									func_224(&uLocal_758);
									iLocal_645++;
								}
								break;
							case 3:
								iLocal_640 = 3;
								break;
						}
					}
				}
				break;
			case 1:
				iLocal_631 = 7;
				break;
			case 2:
				if (!func_102(Global_35, 0) && !func_102(&(uLocal_598[2]), 0))
				{
					if (bLocal_700)
					{
						func_226(&(uLocal_598[2]), Global_35, func_77(30), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_226(&(uLocal_598[2]), Global_35, func_77(32), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iLocal_640++;
				break;
			case 3:
				if (!func_102(&(uLocal_598[2]), 0))
				{
					if (!func_102(Global_35, 0) && !bLocal_712)
					{
						if (iLocal_487 != 3)
						{
							if (func_249())
							{
								func_226(Global_35, Global_35, func_77(40), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_226(Global_35, Global_35, func_77(41), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
					}
					iLocal_640++;
				}
				break;
			case 4:
				if ((func_117(Global_35, &(uLocal_598[2]), 1, 1) > 15f && !func_102(&(uLocal_598[2]), 0)) || !func_31(&(uLocal_598[2]), 0, 1))
				{
					return 1;
				}
				break;
		}
	}
	if (!bLocal_675)
	{
		switch (iLocal_639)
		{
			case 0:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_598[2]), &(Local_488[0 /*2*/]), (Local_488[0 /*2*/])->f_1, 1))
				{
					iLocal_639++;
				}
				break;
			case 1:
				if (iLocal_487 == 0 || iLocal_487 == 5)
				{
					if (ENTITY::_0x627520389E288A73(&(uLocal_598[2]), &(Local_488[0 /*2*/]), (Local_488[0 /*2*/])->f_1) >= 0.1f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_598[2])))
						{
							switch (iLocal_638)
							{
								case 0:
									if (ENTITY::_0x627520389E288A73(&(uLocal_598[2]), &(Local_488[0 /*2*/]), (Local_488[0 /*2*/])->f_1) >= 0.7f)
									{
										func_251(13, 0, 0, "Saved Victim", &(uLocal_598[2]), 0, 1065353216 /* Float: 1f */, 0);
										bLocal_689 = true;
										iLocal_638++;
									}
									break;
								case 1:
									iLocal_638++;
									break;
								case 2:
									bLocal_675 = true;
									break;
							}
						}
					}
				}
				else if (iLocal_487 == 3)
				{
					if (ENTITY::_0x627520389E288A73(&(uLocal_598[2]), &(Local_488[0 /*2*/]), (Local_488[0 /*2*/])->f_1) >= 0.22f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_598[2])))
						{
							switch (iLocal_638)
							{
								case 0:
									if (!func_102(Global_35, 0))
									{
										bLocal_689 = true;
										func_226(&(uLocal_598[2]), Global_35, func_77(25), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
										iLocal_638++;
									}
									break;
								case 1:
									if (ENTITY::_0x627520389E288A73(&(uLocal_598[2]), &(Local_488[0 /*2*/]), (Local_488[0 /*2*/])->f_1) >= 0.9f)
									{
										if (!func_102(Global_35, 0))
										{
											func_226(&(uLocal_598[2]), Global_35, func_77(26), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
											func_251(13, 0, 0, "Saved Victim", &(uLocal_598[2]), 0, 1065353216 /* Float: 1f */, 0);
											iLocal_638++;
										}
									}
									break;
								case 2:
									bLocal_675 = true;
									break;
							}
						}
					}
				}
				break;
		}
	}
	return 0;
}

int func_115()
{
	switch (iLocal_626)
	{
		case 0:
			if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[0])) && !PED::IS_PED_ON_MOUNT(&(uLocal_598[0])))
			{
				TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[0]), &(uLocal_598[5]), -1, -1, 1f, 1, 0, 0);
				TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[1]), &(uLocal_598[6]), -1, -1, 1f, 1, 0, 0);
				iLocal_626++;
			}
			else
			{
				iLocal_626++;
			}
			break;
		case 1:
			iLocal_775 = PED::CREATE_GROUP(0);
			PED::SET_PED_AS_GROUP_LEADER(&(uLocal_598[0]), iLocal_775, false);
			PED::SET_PED_AS_GROUP_MEMBER(&(uLocal_598[1]), iLocal_775);
			PED::_0xA8A95CECB1906EA2(iLocal_775, 0);
			PED::SET_GROUP_FORMATION(iLocal_775, 10);
			TASK::_TASK_MOVE_IN_TRAFFIC(&(uLocal_598[0]), 1.75f, 0, 0);
			PED::SET_PED_KEEP_TASK(&(uLocal_598[0]), true);
			func_224(&uLocal_722);
			iLocal_626++;
			break;
		case 2:
			if (func_225(&uLocal_722) > 1f)
			{
				PED::SET_PED_KEEP_TASK(&(uLocal_598[0]), true);
				iLocal_626++;
			}
			break;
		case 3:
			if (func_117(&(uLocal_598[0]), Global_35, 1, 1) > 100f || func_117(&(uLocal_598[1]), Global_35, 1, 1) > 100f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_116()
{
	int iVar0;
	int iVar1;

	switch (iLocal_636)
	{
		case 0:
			PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1002);
			func_218(0);
			LAW::_0x710448D44A64C213(1);
			LAW::_0xC805EB785824F712(1);
			PED::SET_PED_CONFIG_FLAG(&(uLocal_598[2]), 146, true);
			func_113();
			PED::_0x58F7DB5BD8FA2288(&(uLocal_598[2]));
			PED::_0x24C82EF607105FAA(&(uLocal_598[2]), joaat("AGGRESSIVE"));
			PED::_0xE737D5F14304A2EC(&(uLocal_598[2]), PLAYER::GET_PLAYER_INDEX(), 120000);
			func_243(uLocal_598[2], &iLocal_833, &Local_854, 1, 1);
			func_243(uLocal_598[2], &iLocal_777, &Local_798, 1, 1);
			if (!Local_59.f_46)
			{
				Local_59.f_46 = 1;
			}
			iLocal_636++;
			break;
		case 1:
			PED::_0x2371C39D4F91C288(&(uLocal_598[2]));
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_598[2]), Local_479.f_2) && iLocal_487 != 3)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM(0, "script_re@coach_robbery@odriscoll", "trans_to_knee_vic", 1000f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				PED::_0xEAA8242C8479C27D(&(uLocal_598[2]), "REAR");
				TASK::_TASK_FLEE_FROM_PED(0, Global_35, vLocal_18, 200f, -1, 0, 1077936128, 0);
				func_250(&(uLocal_598[2]), &iVar0, 0, 0, 1, 1);
				iLocal_636 = 3;
			}
			else
			{
				if (PED::_0xB086C8C0F5701D14(&(uLocal_598[2])))
				{
					PED::_0x16F798A05BB9E3B5(&(uLocal_598[2]));
				}
				iLocal_636++;
			}
			break;
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 1f, 0, 4);
			TASK::_TASK_FLEE_FROM_PED(0, Global_35, vLocal_18, 200f, -1, 0, 1077936128, 0);
			func_250(&(uLocal_598[2]), &iVar1, 0, 0, 1, 1);
			iLocal_636++;
			break;
		case 3:
			iLocal_636++;
			break;
		case 4:
			func_226(&(uLocal_598[2]), Global_35, func_77(19), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			iLocal_636++;
			break;
		case 5:
			if (!bLocal_719)
			{
				if (!bLocal_688)
				{
					func_251(3, 0, 0, 0, &(uLocal_598[2]), 0, 1065353216 /* Float: 1f */, 0);
					func_246(&(uLocal_598[2]), 9);
					bLocal_719 = true;
				}
				else
				{
					func_251(4, 0, 0, 0, &(uLocal_598[2]), 0, 1065353216 /* Float: 1f */, 0);
					func_246(&(uLocal_598[2]), 9);
					bLocal_719 = true;
				}
			}
			return 1;
	}
	return 0;
}

float func_117(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_118(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_119()
{
	if (!func_252(Global_1395482->f_1))
	{
		return 0;
	}
	return func_253(Global_1395482->f_1, 32);
}

bool func_120(int iParam0)
{
	if (func_72(iParam0, 1))
	{
		return false;
	}
	return (1 == func_254(iParam0) || 2 == func_254(iParam0));
}

float func_121(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_122(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_78(uParam0) };
	iVar3 = func_149(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_123(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_124(var uParam0)
{
	func_7(uParam0, 1);
	func_19(uParam0, 20);
}

bool func_125(int iParam0, int iParam1)
{
	if (!func_175(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_126(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_175(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_255())
	{
		func_256(1);
	}
	func_257(iParam2, uParam0->f_43);
	func_258(iParam2, 0, 0, 0, 0);
	if (func_259(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_140(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_260(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_127(var uParam0)
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

void func_128(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_233())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_125(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_126(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_127(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_261(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_232(uParam0, bVar0);
		func_234(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_235(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_126(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_127(&(uParam0->f_121));
		}
	}
}

int func_129(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_72(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_262())
			{
				fVar0 = 15f;
			}
		}
		if (func_263(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_264(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_263(uParam2, fVar1))
		{
			if (!func_265(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_266(uParam2->f_3, 2) && func_267(2))
		{
			return 0;
		}
		if (func_72(iParam0, 4194304) || func_72(iParam0, 33554432))
		{
			if (func_268(1))
			{
				return 0;
			}
		}
	}
	if (func_269(Global_35))
	{
		return 0;
	}
	if (func_270(0, 1, 1) && !func_271(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_72(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_272(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_264(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_273())
		{
			return 0;
		}
		iVar2 = func_275(func_274());
		if (func_276(iVar2))
		{
			if (func_277(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_278(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_279(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_130(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (func_280(uParam0->f_51))
	{
		func_281(uParam0->f_51, 0);
		fVar0 = func_282(uParam0->f_3);
		bVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_283());
		bVar1 = func_145(!func_72(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_285(bVar2, func_284(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

void func_131(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(iParam0->f_1), 128);
	}
	else
	{
		func_49(&(iParam0->f_1), 128);
	}
}

void func_132(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_49(iParam0, 268435456);
	}
	else
	{
		func_48(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_49(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_48(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_49(iParam0, 536870912);
	}
	else
	{
		func_48(iParam0, 536870912);
	}
}

var func_133(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_134(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_286(sParam1));
}

int func_135()
{
	if (func_189() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 1;
	}
	return 0;
}

bool func_136(int iParam0, bool bParam1)
{
	if (!func_46(iParam0, 0))
	{
		return false;
	}
	return ((Global_40.f_9571[iParam0 /*10*/])->f_1 == 3 || (bParam1 && (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4));
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

Vector3 func_138(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_139(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

char* func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_141(int iParam0, int iParam1)
{
	if (!func_175(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

void func_142(int iParam0, bool bParam1)
{
	if (func_31(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_287(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_143(var uParam0, var uParam1)
{
	if (func_72(uParam0->f_3, 16777216))
	{
		if (func_288(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return 1;
		}
	}
	return 0;
}

void func_144(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_145(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_146(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630->f_12 && (!bParam4 || func_31(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_145(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_289(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_147(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_290(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_291(uParam0);
	func_292(uParam0);
	func_293(uParam0);
	if (!func_294(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_281(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_295();
	}
	if (!func_296(uParam0->f_3) && !func_72(uParam0->f_3, 256))
	{
		func_297(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_298(uParam0->f_173);
	func_298(uParam0->f_172);
}

void func_148(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_149(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_150(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_189() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_151(int iParam0)
{
	if (((func_152(iParam0, 1) && func_152(iParam0, 2)) && func_152(iParam0, 8)) && func_152(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_152(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_153(int iParam0, bool bParam1)
{
	switch (func_299(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_155(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_300(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_301(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_301(), iVar3);
		if (func_302(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_156(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_303(iParam0);
	if ((func_2(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 5:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
					break;
				default:
					if (func_304())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_NOKOTA_WHITEROAN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET");
					break;
				default:
					if (func_304())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_OVERO");
					break;
				default:
					if (func_304())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
					break;
				default:
					if (func_304())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				default:
					if (func_304())
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_02");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_BLANKET");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
			}
			break;
		default:
			iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
			break;
	}
	return iVar2;
}

void func_157(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY((*uParam1)[iVar0 /*8*/]))
		{
			StringCopy((*uParam1)[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT((*uParam1)[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

void func_158(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_305(&(((*iParam0)[iVar0 /*32*/])->f_1));
		func_305(&(((*iParam0)[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

int func_159(var uParam0)
{
	if (!func_306(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_306(uParam0->f_12))
		{
			return 0;
		}
	}
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
			}
			return 0;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_160(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_175(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_307(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_308(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_161(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;

	if (func_72(iParam0, 32))
	{
		if (func_309(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_310(Global_35, &(uParam1->f_12)) };
				if (!func_165(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_311(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_282(iParam0);
		bVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_283());
		if (func_312(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_285(bVar0, func_284(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_285(bVar0, func_284(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_72(iParam0, 1))
		{
			func_313(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_314(iParam0);
}

int func_162(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/])->f_1 != -1)
		{
			func_315(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_125(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_316(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_316(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return 1;
}

void func_163(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_317(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_72(iParam0, 1))
			{
				if (func_125(iParam0, 2))
				{
				}
			}
			func_318(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_319(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_319(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_120(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_164(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_307(iParam1))
	{
		if (!func_320(iParam1, iVar0))
		{
			vVar4 = { func_160(iParam1, iVar0) };
			if (!func_165(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_170(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_321(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_165(vVar4))
	{
	}
	return vVar1;
}

int func_165(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_166(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_43("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_167(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_307(iParam0))
	{
		vVar1 = { func_160(iParam0, iVar0) };
		if (func_322(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_168(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return 0;
		}
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_169(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_323(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (func_324(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_165(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_325(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *(uParam0->f_12[iVar1 /*3*/]) };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_166(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_170(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_163(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_72(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_171(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return 1;
	}
	return 0;
}

int func_172(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_326(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_327(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_328(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_329(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_173(var uParam0)
{
	return uParam0->f_51.f_4;
}

int func_174(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return 1;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return 1;
			}
			break;
	}
	return 0;
}

bool func_175(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_176(int iParam0, int iParam1)
{
	if (func_330(iParam0))
	{
		return;
	}
	if (func_331(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36601 >= 10)
	{
		Global_36601 = 0;
	}
	(Global_36580[Global_36601 /*2*/])->f_1 = iParam1;
	Global_36580[Global_36601 /*2*/] = iParam0;
	Global_36601++;
}

void func_177(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(bParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(bParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_48(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, bParam0);
	}
}

int func_178(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

bool func_179(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_180(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_179(iParam0))
	{
		return;
	}
	iVar0 = func_332(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_181(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_179(iParam0))
	{
		return;
	}
	iVar0 = func_332(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_182(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_179(iParam0))
	{
		return;
	}
	iVar0 = func_332(iParam0);
	if (bParam1)
	{
		func_333(iParam0, 4);
		func_334(iVar0, 1);
		func_335(iVar0, 1);
	}
	else
	{
		func_336(iParam0, 4);
		func_335(iVar0, 0);
	}
}

void func_183(int* iParam0, char* sParam1)
{
	if (func_179(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_181(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_230(iParam0, 1);
}

int func_184()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_185(var uParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_337(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_338(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_339(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_340(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_89(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return 0;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_337(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_338(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (iParam6 || func_341(&(uParam0->f_22)));
					Var2 = { func_337(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_338(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_339(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_0x772A1969F649E902(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_342(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_343(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return 0;
		}
	}
	return 1;
}

void func_186(int iParam0)
{
	char* sVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		sVar0 = "wagon_block_honor";
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		}
	}
}

bool func_187(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_188(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_189()
{
	return Global_1572887->f_12;
}

int func_190(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_344(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_345((375 + iVar28), 1);
			if (func_346(iParam0, &Var0, iVar5, 0))
			{
				if (func_347(iParam0, &Var6, iVar5))
				{
					Var29 = { func_348(iParam0, Var0, iVar5, 0) };
					func_349(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_350(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_351(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_352(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_192(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_193(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

bool func_194(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"):
		case joaat("WEAPON_SHOTGUN_SAWEDOFF"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_196(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE"):
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return 512;
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return 1024;
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return 2048;
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return 4096;
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return 8192;
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return 16384;
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return 32768;
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return 65536;
		case joaat("HONOR_EVENT_THEFT"):
			return 131072;
		case joaat("HONOR_EVENT_INTERVENED"):
			return 262144;
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return 524288;
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return 1048576;
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return 2097152;
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_198(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_199(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_353(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_354(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_355(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_356(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_355(iParam0, iParam2, *iParam3);
					return 1;
				}
				else if (func_357(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_355(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_358(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_355(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_264(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_355(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_359(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_360(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_355(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_361(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_355(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_362(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_355(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			else if (func_362(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_355(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_363(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_355(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_364(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_355(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_365(iParam2, 4000))
				{
					if ((func_366(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_367(iParam2, iParam0)) && func_368(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_355(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_366(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_367(iParam2, iParam0)) && func_368(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_355(iParam0, iParam2, *iParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_369(iParam0, Global_1935630->f_41))
							{
								func_370();
								*iParam3 = 2;
								func_355(iParam0, iParam2, *iParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (func_369(iParam0, Global_1935630->f_41))
						{
							func_370();
							*iParam3 = 2;
							func_355(iParam0, iParam2, *iParam3);
							return 1;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_371(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_372() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_370();
						*iParam3 = 2;
						func_355(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_373())
					{
						if (func_369(iParam0, Global_1935630->f_42))
						{
							func_370();
							*iParam3 = 2;
							func_355(iParam0, iParam2, *iParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_374(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_355(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_375(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_355(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_376(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_355(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_377(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_355(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_378(iParam2, 4000))
				{
					if (func_379(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_355(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_380(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_355(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_381(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_355(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_200()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_606) };
	return func_382(vVar0, vVar3, Global_36);
}

void func_201(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 4);
	}
	else
	{
		func_48(iParam0, 4);
	}
}

int func_202(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		func_353(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_365(iParam1, 4000))
				{
					if ((func_366(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_367(iParam1, iParam0)) && func_368(iParam1, iParam0))
					{
						func_370();
						*iParam2 = 2;
						func_355(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_365(iParam1, 4000))
				{
					if ((func_366(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_367(iParam1, iParam0)) && func_368(iParam1, iParam0))
					{
						func_370();
						*iParam2 = 2;
						func_355(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_369(iParam0, Global_1935630->f_41))
							{
								func_370();
								*iParam2 = 2;
								func_355(iParam0, iParam1, *iParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (func_369(iParam0, Global_1935630->f_41))
						{
							func_370();
							*iParam2 = 2;
							func_355(iParam0, iParam1, *iParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_373())
					{
						if (func_369(iParam0, Global_1935630->f_42))
						{
							func_370();
							*iParam2 = 2;
							func_355(iParam0, iParam1, *iParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_359(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_360(Global_35, iParam0, iParam1))
					{
						func_370();
						*iParam2 = 4;
						func_355(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_361(Global_35, iParam0, iParam1))
					{
						func_370();
						*iParam2 = 256;
						func_355(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_100(iParam0, iParam1))
			{
				func_370();
				*iParam2 = 131072;
				func_355(iParam0, iParam1, *iParam2);
				return 1;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_383(iParam0, iParam1))
			{
				func_370();
				*iParam2 = 262144;
				func_355(iParam0, iParam1, *iParam2);
				return 1;
			}
		}
	}
	return 0;
}

float func_203(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_384(iParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_385(iParam0);
	}
	return func_384(iParam0);
}

float func_204(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_205()
{
	int iVar0;
	int iVar1;

	iVar0 = func_387(func_386());
	iVar1 = func_388(func_386());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

void func_206()
{
	if (iLocal_487 == 0 || (iLocal_487 == 5 && !bLocal_710))
	{
		if (func_31(&(uLocal_598[2]), 0, 1))
		{
			if ((Local_59.f_48 && !Local_59.f_46) && !bLocal_655)
			{
				if (fLocal_648 >= 0.709652f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_598[2])) && !bLocal_705)
					{
						func_389();
						func_251(3, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
						bLocal_705 = true;
					}
				}
			}
		}
	}
}

void func_207()
{
	iLocal_621 = func_390(uLocal_598[0], &iLocal_889, 30f, &Local_910, &(Local_59.f_192), 0f, 1, 0, 0, iLocal_1041, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iLocal_622 = func_390(uLocal_598[1], &iLocal_945, 30f, &Local_966, &(Local_59.f_192), 0f, 1, 0, 0, iLocal_1041, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iLocal_487 != 3)
	{
		func_391();
	}
	else
	{
		func_392();
	}
}

void func_208()
{
	if (func_31(&(uLocal_598[0]), 0, 1) || func_31(&(uLocal_598[1]), 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[0]), 236822383) || ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[1]), 236822383))
		{
			if (!bLocal_706)
			{
				bLocal_671 = true;
				bLocal_706 = true;
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[0]), 2113601320) || ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[1]), 2113601320))
		{
			if (!bLocal_707)
			{
				bLocal_672 = true;
				bLocal_707 = true;
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[0]), 1622787238))
		{
			if (!bLocal_708)
			{
				bLocal_673 = true;
				bLocal_708 = true;
			}
		}
		if (iLocal_487 == 0 || iLocal_487 == 5)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[0]), 696572081))
			{
				bLocal_674 = true;
			}
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[2]), 696572081))
		{
			bLocal_674 = true;
		}
	}
}

void func_209()
{
	if (!bLocal_686)
	{
		if (Local_59.f_46)
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_598[6]), Global_35, 3, 0, -1082130432, -1, 0);
			PED::_0x2EB75FB86C41F026(&(uLocal_598[5]), 3, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_598[6]), true);
			bLocal_686 = true;
		}
	}
	if (!bLocal_685)
	{
		if (!func_31(&(uLocal_598[0]), 0, 1))
		{
			if (func_31(&(uLocal_598[5]), 0, 1))
			{
				bLocal_685 = true;
			}
		}
	}
}

int func_210()
{
	if (func_199(&(uLocal_598[2]), 0, &(Local_59.f_5), &iLocal_765, 0, 0) || ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_598[5]), Global_35, 1, 1) && !func_31(&(uLocal_598[0]), 0, 1)) && !func_31(&(uLocal_598[1]), 0, 1)))
	{
		if ((!bLocal_678 && !func_31(&(uLocal_598[0]), 0, 1)) && !func_31(&(uLocal_598[1]), 0, 1))
		{
			if (bLocal_687 && iLocal_631 > 1)
			{
				func_20(&(Local_59.f_5), 2000);
				if (((iLocal_765 == 2 || iLocal_765 == 4) || iLocal_765 == 8) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_598[5]), Global_35, 1, 1))
				{
					if (iLocal_765 == 2)
					{
					}
					else if (iLocal_765 == 4)
					{
					}
					else if (iLocal_765 == 8)
					{
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_598[5]), Global_35, 1, 1))
					{
					}
					if (!bLocal_719)
					{
						if (!bLocal_688 && !bLocal_689)
						{
							func_251(3, 0, 0, 0, &(uLocal_598[2]), 0, 1065353216 /* Float: 1f */, 0);
							func_246(&(uLocal_598[2]), 9);
							bLocal_719 = true;
						}
						else
						{
							func_251(4, 0, 0, 0, &(uLocal_598[2]), 0, 1065353216 /* Float: 1f */, 0);
							func_246(&(uLocal_598[2]), 9);
							bLocal_719 = true;
						}
					}
					return 1;
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_598[2]), Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_598[5]), Global_35, 1, 1))
			{
				if (!bLocal_719)
				{
					if (!bLocal_688)
					{
						func_251(3, 0, 0, 0, &(uLocal_598[2]), 0, 1065353216 /* Float: 1f */, 0);
						func_246(&(uLocal_598[2]), 9);
						bLocal_719 = true;
					}
					else
					{
						func_251(4, 0, 0, 0, &(uLocal_598[2]), 0, 1065353216 /* Float: 1f */, 0);
						func_246(&(uLocal_598[2]), 9);
						bLocal_719 = true;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_211(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

void func_212()
{
	if (!bLocal_676)
	{
		if (fLocal_648 < 0.461892f)
		{
			iLocal_677 = 1;
		}
		if (fLocal_648 > 0.461892f && fLocal_648 < 0.745843f)
		{
			if (!bLocal_682)
			{
				bLocal_682 = true;
				bLocal_705 = true;
			}
		}
		if (fLocal_648 > 0.745843f)
		{
			iLocal_683 = 1;
		}
	}
}

int func_213()
{
	if (bLocal_676)
	{
		if (!bLocal_673 && !bLocal_682)
		{
			if (!bLocal_672)
			{
				switch (iLocal_632)
				{
					case 0:
						if (PED::IS_PED_IN_VEHICLE(&(uLocal_598[2]), iLocal_606, false))
						{
							if (!func_244(&(uLocal_598[2]), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
							{
								TASK::TASK_LEAVE_VEHICLE(&(uLocal_598[2]), iLocal_606, 196608, 0);
							}
						}
						else
						{
							PED::_0xAAB050DA48B57978(&(uLocal_598[2]), "TaskCower_Default", 0, -1, 4);
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "VICTIM", &(uLocal_598[2]));
							PED::SET_PED_TO_RAGDOLL(&(uLocal_598[2]), 2000, 2000, 0, false, false, false);
							func_224(&uLocal_752);
							iLocal_632++;
						}
						break;
					case 1:
						if (func_225(&uLocal_752) > 2f || !PED::IS_PED_RAGDOLL(&(uLocal_598[2])))
						{
							bLocal_704 = true;
							TASK::TASK_COWER(&(uLocal_598[2]), -1, Global_35, 0);
							iLocal_632++;
						}
						break;
					case 2:
						return 1;
				}
			}
			else
			{
				switch (iLocal_632)
				{
					case 0:
						func_224(&uLocal_743);
						iLocal_632++;
						break;
					case 1:
						if (!TASK::IS_PED_GETTING_UP(&(uLocal_598[2])))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_479.f_2);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_2, "fem_idle_bool", false, false);
							iLocal_632++;
						}
						break;
					case 2:
						if (!func_31(&(uLocal_598[0]), 0, 1) && !func_31(&(uLocal_598[1]), 0, 1))
						{
							iLocal_632++;
						}
						break;
					case 3:
						return 1;
				}
			}
		}
		else
		{
			switch (iLocal_632)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_598[2])))
					{
						func_389();
						bLocal_705 = true;
					}
					if (VOLUME::_DOES_VOLUME_EXIST(bLocal_774))
					{
						PATHFIND::_0x2C87C3E1C7B96EE2(bLocal_774);
					}
					func_393();
					if (func_31(&(uLocal_598[2]), 0, 1))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_479.f_3);
					}
					iLocal_632++;
					break;
				case 1:
					iLocal_632++;
					break;
				case 2:
					return 1;
			}
		}
	}
	return 0;
}

void func_214()
{
	if ((func_31(&(uLocal_598[2]), 0, 1) && func_31(&(uLocal_598[0]), 0, 1)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479.f_2, 0))
	{
		if (bLocal_690)
		{
			if (fLocal_648 > 0.074717f)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "vic", &(uLocal_598[2]));
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "vic", &(uLocal_598[2]));
				if (VOLUME::_DOES_VOLUME_EXIST(bLocal_774))
				{
					PATHFIND::_0x2C87C3E1C7B96EE2(bLocal_774);
				}
				AUDIO::_PLAY_SOUND_FROM_ENTITY("CarbineShotDistant", &(uLocal_598[0]), "REFC_Sounds", false, 0, 0);
				func_393();
				func_389();
				if (!bLocal_667)
				{
					func_251(3, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					func_251(2, 0, 0, "Ignored Victim", 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				func_183(Local_910[0 /*17*/], func_75(7));
				func_183(Local_966[0 /*17*/], func_75(7));
				func_183(Local_910[1 /*17*/], func_75(10));
				func_183(Local_966[1 /*17*/], func_75(10));
				func_394(&iLocal_889, 0);
				func_394(&iLocal_945, 0);
				bLocal_715 = true;
				bLocal_705 = true;
				func_395(uLocal_598[2], 0, 0, 1);
			}
		}
		if (!bLocal_703)
		{
			if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[18])))
			{
				if (fLocal_648 > 0.75f)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "vic", &(uLocal_598[2]));
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "vic", &(uLocal_598[2]));
					if (VOLUME::_DOES_VOLUME_EXIST(bLocal_774))
					{
						PATHFIND::_0x2C87C3E1C7B96EE2(bLocal_774);
					}
					func_393();
					func_389();
					func_251(3, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
					bLocal_705 = true;
					func_395(uLocal_598[2], 0, 0, 1);
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_598[2]), Global_35, 1, 1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "VICTIM", &(uLocal_598[2]));
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_598[2])))
				{
					func_389();
					if (!Local_59.f_46)
					{
						func_251(3, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
					}
					bLocal_705 = true;
				}
			}
		}
		else if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[18])))
		{
			if (fLocal_651 > 0.108318f)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "vic", &(uLocal_598[2]));
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "vic", &(uLocal_598[2]));
				if (VOLUME::_DOES_VOLUME_EXIST(bLocal_774))
				{
					PATHFIND::_0x2C87C3E1C7B96EE2(bLocal_774);
				}
				func_393();
				func_389();
				func_251(3, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
				bLocal_705 = true;
				func_395(uLocal_598[2], 0, 0, 1);
			}
		}
	}
}

int func_215()
{
	if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 1), Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 0), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 5), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 4), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 2), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 3), Global_35, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	switch (iLocal_616)
	{
		case 0:
			bLocal_718 = false;
			if (func_97())
			{
				if (iLocal_487 == 0 || iLocal_487 == 5)
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[18])))
					{
						if (fLocal_648 > 0.713533f)
						{
							iLocal_616 = 2;
						}
						else if (!func_38())
						{
							if (bLocal_667)
							{
								if (func_225(&uLocal_731) > 5f)
								{
									iLocal_628 = 0;
									bLocal_655 = true;
									iLocal_616 = 1;
								}
							}
							else
							{
								iLocal_628 = 0;
								bLocal_655 = true;
								iLocal_616 = 1;
							}
						}
					}
					else if (bLocal_690)
					{
						bLocal_655 = true;
						iLocal_616 = 2;
					}
					else
					{
						iLocal_616 = 3;
					}
				}
				if (iLocal_487 == 3)
				{
					if (!func_38())
					{
						if (bLocal_667)
						{
							if (func_225(&uLocal_731) > 5f)
							{
								iLocal_628 = 0;
								bLocal_655 = true;
								iLocal_616 = 1;
							}
						}
						else
						{
							iLocal_628 = 0;
							bLocal_655 = true;
							iLocal_616 = 3;
						}
					}
					else
					{
						iLocal_616 = 3;
					}
				}
			}
			break;
		case 1:
			if (func_239())
			{
				if (bLocal_667)
				{
					iLocal_616 = 0;
				}
				else
				{
					func_224(&uLocal_725);
					func_218(0);
					iLocal_616 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_487 == 0 || iLocal_487 == 5)
			{
				if (func_396())
				{
					iLocal_616 = 3;
				}
			}
			else if (iLocal_487 == 3)
			{
				if (func_397())
				{
					iLocal_616 = 3;
				}
			}
			break;
		case 3:
			if (iLocal_487 == 0 || iLocal_487 == 5)
			{
				if (!bLocal_660 || bLocal_699)
				{
					if (func_225(&uLocal_725) > 1f)
					{
						iLocal_616 = 4;
					}
				}
				else if (func_225(&uLocal_725) > 1f)
				{
					iLocal_616 = 4;
				}
			}
			else if (iLocal_487 == 3)
			{
				iLocal_616 = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

void func_217()
{
	ANIMSCENE::START_ANIM_SCENE(Local_479.f_2);
	bLocal_662 = true;
}

void func_218(int iParam0)
{
	func_398(&uLocal_0);
	func_399(1, iParam0, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	func_400();
}

void func_219(var uParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0, iParam1);
}

void func_220()
{
	if (bLocal_713)
	{
		func_248(&Local_854, 1, 0, 1, 0);
		iLocal_620 = func_390(uLocal_598[2], &iLocal_777, 30f, &Local_798, &(Local_59.f_192), 0f, 1, 0, 0, iLocal_1041, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (!bLocal_712)
		{
			if (func_102(&(uLocal_598[2]), 0))
			{
				func_107(Local_798[0 /*17*/], 0, 0);
				func_107(Local_798[1 /*17*/], 0, 0);
			}
			else
			{
				func_224(&uLocal_761);
				func_107(Local_798[0 /*17*/], 1, 0);
				func_107(Local_798[1 /*17*/], 1, 0);
			}
		}
		if (!bLocal_695)
		{
			if (iLocal_620 == 1)
			{
				bLocal_712 = true;
				TASK::TASK_REACT(&(uLocal_598[2]), Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Shocked", 2f, 10f, 4);
				func_224(&uLocal_737);
				func_224(&uLocal_740);
				bLocal_696 = false;
				bLocal_654 = true;
				bLocal_695 = true;
				func_107(Local_798[0 /*17*/], 0, 0);
				func_107(Local_798[1 /*17*/], 0, 0);
			}
			if (!bLocal_720)
			{
				if (iLocal_620 == 0)
				{
					func_107(Local_798[0 /*17*/], 0, 0);
					func_107(Local_798[1 /*17*/], 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, &(uLocal_598[2]), 2, 0, 51, 1);
					if (iLocal_487 == 3)
					{
						if (bLocal_692)
						{
							func_226(Global_35, &(uLocal_598[2]), func_77(31), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_226(Global_35, &(uLocal_598[2]), func_77(27), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (bLocal_692)
					{
						func_226(Global_35, &(uLocal_598[2]), func_77(27), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_226(Global_35, &(uLocal_598[2]), func_77(28), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					bLocal_720 = true;
					bLocal_712 = true;
				}
			}
			else
			{
				func_107(Local_798[0 /*17*/], 0, 0);
			}
		}
	}
	else
	{
		iLocal_641 = func_390(uLocal_598[2], &iLocal_833, 35f, &Local_854, &(Local_59.f_192), 0f, 1, 0, 0, iLocal_1041, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		func_107(Local_854[1 /*17*/], 0, 0);
		if (iLocal_487 != 3)
		{
			if (iLocal_641 == 0)
			{
				func_226(Global_35, &(uLocal_598[2]), func_77(39), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_107(Local_854[0 /*17*/], 0, 0);
				func_107(Local_854[1 /*17*/], 0, 0);
			}
		}
		else if (iLocal_641 == 0)
		{
			func_226(Global_35, &(uLocal_598[2]), func_77(39), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_107(Local_854[0 /*17*/], 0, 0);
			func_107(Local_854[1 /*17*/], 0, 0);
		}
	}
}

void func_221()
{
	iLocal_633 = 200;
}

bool func_222(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_401(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_402(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_223(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

void func_224(var uParam0)
{
	func_403(uParam0, 0f);
}

float func_225(var uParam0)
{
	if (!func_404(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_405(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_406() - uParam0->f_1);
}

bool func_226(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_407(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_227(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_408(iParam0, &Var0);
}

bool func_228(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_229(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_230(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_231(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_179(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_332(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_409(iVar0);
	*uParam0 = 0;
}

float func_232(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_72(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_72(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_72(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_72(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_72(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_72(uParam0->f_3, 1))
		{
		}
		else if (func_72(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_233()
{
	if (func_188(Global_1935630->f_44))
	{
		if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_410())
		{
			return 1;
		}
	}
	return 0;
}

int func_234(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_411(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_412(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_406() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_235(var uParam0, int iParam1, float fParam2)
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
	func_127(uParam0);
	return 1;
}

int func_236(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_413(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1 || &Global_17503.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17503.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_237()
{
	if (func_46(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			switch (iLocal_625)
			{
				case 0:
					if (iLocal_612 >= 1)
					{
						iLocal_625++;
					}
					break;
				case 1:
					if (Local_59.f_48 && iLocal_612 >= 2)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "BASE_BOOL", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "IDLE_BOOL", true, false);
						iLocal_625++;
					}
					break;
				case 2:
					func_414();
					if (fLocal_648 >= 0.787719f)
					{
						if (!bLocal_679)
						{
							if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[0])))
							{
								TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[0]), &(uLocal_598[5]), 20000, -1, 1f, 1, 0, 0);
								bLocal_679 = true;
							}
						}
					}
					if (fLocal_649 >= 0.85519f)
					{
						if (!bLocal_680)
						{
							if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
							{
								TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[1]), &(uLocal_598[6]), 20000, -1, 1f, 1, 0, 0);
								bLocal_680 = true;
							}
						}
					}
					if (PED::IS_PED_ON_MOUNT(&(uLocal_598[0])) && PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
					{
						iLocal_625++;
					}
					break;
				case 3:
					if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[0])))
					{
						PED::_SET_PED_ON_MOUNT(&(uLocal_598[0]), &(uLocal_598[5]), -1, true);
					}
					if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
					{
						PED::_SET_PED_ON_MOUNT(&(uLocal_598[1]), &(uLocal_598[6]), -1, true);
					}
					iLocal_625++;
					break;
				case 4:
					return 1;
			}
		}
		else if (iLocal_487 == 0)
		{
			switch (iLocal_625)
			{
				case 0:
					if (iLocal_612 >= 1)
					{
						iLocal_625++;
					}
					break;
				case 1:
					if (Local_59.f_48 && iLocal_612 >= 2)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "base_bool", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "base_bool", true, false);
						iLocal_625++;
					}
					break;
				case 2:
					if (!bLocal_703)
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[18])))
						{
							if (fLocal_648 >= 0.917974f)
							{
								if (!bLocal_679)
								{
									if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[0])))
									{
										TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[0]), &(uLocal_598[5]), 20000, -1, 1f, 1, 0, 0);
										bLocal_679 = true;
									}
								}
							}
							if (fLocal_649 >= 0.888096f)
							{
								if (!bLocal_680)
								{
									if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
									{
										TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[1]), &(uLocal_598[6]), 20000, -1, 1f, 1, 0, 0);
										bLocal_680 = true;
									}
								}
							}
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[22])))
					{
						if (fLocal_651 >= 0.664624f || (bLocal_690 && fLocal_651 >= 0.233699f))
						{
							if (!bLocal_679)
							{
								if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[0])))
								{
									TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[0]), &(uLocal_598[5]), 20000, -1, 1f, 1, 0, 0);
									bLocal_679 = true;
								}
							}
						}
						if (fLocal_652 >= 0.678759f)
						{
							if (!bLocal_680)
							{
								if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
								{
									TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[1]), &(uLocal_598[6]), 20000, -1, 1f, 1, 0, 0);
									bLocal_680 = true;
								}
							}
						}
					}
					if (PED::IS_PED_ON_MOUNT(&(uLocal_598[0])) && PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
					{
						iLocal_625++;
					}
					break;
				case 3:
					if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[0])))
					{
						PED::_SET_PED_ON_MOUNT(&(uLocal_598[0]), &(uLocal_598[5]), -1, true);
					}
					if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
					{
						PED::_SET_PED_ON_MOUNT(&(uLocal_598[1]), &(uLocal_598[6]), -1, true);
					}
					iLocal_625++;
					break;
				case 4:
					return 1;
			}
		}
		else if (iLocal_487 == 5)
		{
			switch (iLocal_625)
			{
				case 0:
					if (iLocal_612 >= 1)
					{
						iLocal_625++;
					}
					break;
				case 1:
					if (Local_59.f_48 && iLocal_612 >= 2)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "base_bool", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "base_bool", true, false);
						iLocal_625++;
					}
					break;
				case 2:
					if (!bLocal_703)
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[18])))
						{
							if (fLocal_648 >= 0.917974f)
							{
								if (!bLocal_679)
								{
									if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[0])))
									{
										TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[0]), &(uLocal_598[5]), 20000, -1, 1f, 1, 0, 0);
										bLocal_679 = true;
									}
								}
							}
							if (fLocal_649 >= 0.888096f)
							{
								if (!bLocal_680)
								{
									if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
									{
										TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[1]), &(uLocal_598[6]), 20000, -1, 1f, 1, 0, 0);
										bLocal_680 = true;
									}
								}
							}
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[22])))
					{
						if (fLocal_651 >= 0.664624f || (bLocal_690 && fLocal_651 >= 0.233699f))
						{
							if (!bLocal_679)
							{
								if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[0])))
								{
									TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[0]), &(uLocal_598[5]), 20000, -1, 1f, 1, 0, 0);
									bLocal_679 = true;
								}
							}
						}
						if (fLocal_652 >= 0.678759f)
						{
							if (!bLocal_680)
							{
								if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
								{
									TASK::TASK_MOUNT_ANIMAL(&(uLocal_598[1]), &(uLocal_598[6]), 20000, -1, 1f, 1, 0, 0);
									bLocal_680 = true;
								}
							}
						}
					}
					if (PED::IS_PED_ON_MOUNT(&(uLocal_598[0])) && PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
					{
						iLocal_625++;
					}
					break;
				case 3:
					if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[0])))
					{
						PED::_SET_PED_ON_MOUNT(&(uLocal_598[0]), &(uLocal_598[5]), -1, true);
					}
					if (!PED::IS_PED_ON_MOUNT(&(uLocal_598[1])))
					{
						PED::_SET_PED_ON_MOUNT(&(uLocal_598[1]), &(uLocal_598[6]), -1, true);
					}
					iLocal_625++;
					break;
				case 4:
					return 1;
			}
		}
	}
	return 0;
}

int func_238()
{
	if (!bLocal_663 && !bLocal_664)
	{
		if (fLocal_648 < 0.52002f)
		{
			bLocal_663 = true;
		}
		if (fLocal_648 > 0.52002f && fLocal_648 < 0.716116f)
		{
			if (fLocal_648 >= 0.636267f)
			{
				bLocal_664 = true;
			}
			else
			{
				bLocal_663 = true;
			}
		}
		if (fLocal_648 >= 0.716116f)
		{
			bLocal_664 = true;
		}
	}
	if (bLocal_663)
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[24])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[24])))
		{
			if (!bLocal_665)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[24]), true);
			}
			else
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "odriscoll", &(uLocal_598[0]));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[24]), true);
				TASK::TASK_REACT(&(uLocal_598[0]), Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Brave", 1f, 0, 4);
			}
			return 1;
		}
		else
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[24]));
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[24]));
		}
	}
	if (bLocal_664)
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[25])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[25])))
		{
			if (!bLocal_665)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[25]), true);
			}
			else
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "odriscoll", &(uLocal_598[0]));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[25]), true);
				TASK::TASK_REACT(&(uLocal_598[0]), Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Brave", 1f, 0, 4);
			}
			return 1;
		}
		else
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[25]));
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[25]));
		}
	}
	if (!func_31(&(uLocal_598[0]), 0, 1) && !func_31(&(uLocal_598[1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_239()
{
	func_415();
	if (iLocal_487 == 0 || iLocal_487 == 5)
	{
		if (func_416())
		{
			if (!bLocal_690)
			{
				return 1;
			}
			else if (func_225(&uLocal_731) > 4f)
			{
				return 1;
			}
		}
	}
	else if (iLocal_487 == 3)
	{
		if (func_417())
		{
			return 1;
		}
	}
	return 0;
}

void func_240(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_M1899"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_PISTOL_M1899");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_MAUSER"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_MAUSER");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_LEMAT"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_REVOLVER_LEMAT");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_DOUBLEACTION");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_SEMIAUTO"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_SEMIAUTO");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_SCHOFIELD"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_SCHOFIELD");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_VOLCANIC"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_VOLCANIC");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SHOTGUN_SAWEDOFF"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
	}
	else
	{
		iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		func_85(iParam0, iVar0, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (bParam1)
	{
		TASK::TASK_SWAP_WEAPON(iParam0, 1, 0, 0, 0);
	}
	else if (iParam0 == Global_35)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, true, 0, false, false);
}

void func_241()
{
	if ((func_31(&(uLocal_598[0]), 0, 1) && !bLocal_669) && !PED::IS_PED_IN_COMBAT(&(uLocal_598[0]), 0))
	{
		switch (iLocal_642)
		{
			case 0:
				if (((!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479, 0) || fLocal_648 > 0.5f) || !ENTITY::_0x0B7CB1300CBFE19C(&(uLocal_598[0]), 1)) || iLocal_487 == 0)
				{
					iLocal_642++;
				}
				break;
			case 1:
				if (!MAP::DOES_BLIP_EXIST(&(uLocal_766[0])))
				{
					func_418(&(uLocal_598[0]), uLocal_766[0], joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
				if (iLocal_487 == 3)
				{
					func_240(&(uLocal_598[0]), 0, 0);
				}
				iLocal_642++;
				break;
			case 2:
				TASK::TASK_COMBAT_HATED_TARGETS(&(uLocal_598[0]), -1f);
				if (iLocal_487 == 3)
				{
					PED::_0x1854217C640B39EC(&(uLocal_598[0]), Global_35, 0f, 0f, 0f, 2f, 0, 0);
				}
				iLocal_642++;
				break;
			case 3:
				if (PED::IS_PED_IN_COMBAT(&(uLocal_598[0]), Global_35))
				{
					iLocal_642++;
				}
				else
				{
					TASK::TASK_COMBAT_HATED_TARGETS(&(uLocal_598[0]), -1f);
				}
				break;
			case 4:
				bLocal_669 = true;
				break;
		}
	}
	else
	{
		bLocal_669 = true;
	}
}

void func_242()
{
	if (func_31(&(uLocal_598[1]), 0, 1) && !bLocal_670)
	{
		switch (iLocal_643)
		{
			case 0:
				if ((((!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_479.f_1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(&(uLocal_598[1]), 1)) || fLocal_649 > 0.5f) || iLocal_487 == 0) || iLocal_487 == 5)
				{
					iLocal_643++;
				}
				break;
			case 1:
				if (!MAP::DOES_BLIP_EXIST(&(uLocal_766[1])))
				{
					func_418(&(uLocal_598[1]), uLocal_766[1], joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
				if (iLocal_487 == 3)
				{
					func_240(&(uLocal_598[1]), 0, 0);
				}
				PED::SET_PED_USING_ACTION_MODE(&(uLocal_598[1]), true, -1, 0);
				iLocal_643++;
				break;
			case 2:
				TASK::TASK_COMBAT_HATED_TARGETS(&(uLocal_598[1]), -1f);
				iLocal_643++;
				break;
			case 3:
				if (PED::IS_PED_IN_COMBAT(&(uLocal_598[1]), Global_35))
				{
					iLocal_643++;
				}
				break;
			case 4:
				bLocal_670 = true;
				break;
		}
	}
	else
	{
		bLocal_670 = true;
	}
}

void func_243(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_419(uParam0);
		func_420(iParam1, uParam2);
	}
	func_421(*uParam0, 1, bParam4);
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_245(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "honor_block");
		}
	}
}

void func_246(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = func_422(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_override", MISC::ABSI(iVar0));
	}
}

void func_247(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_228(iParam0, 4))
		{
			func_231(&(iParam0->f_6), 1, 1);
			func_229(iParam0, 4);
		}
	}
	else if (func_228(iParam0, 4))
	{
		func_230(iParam0, 4);
		func_229(iParam0, 14);
	}
}

void func_248(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_179(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_231(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

bool func_249()
{
	return !func_423();
}

void func_250(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_251(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_189() != -1)
	{
		return;
	}
	if ((Global_36615 && func_197(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_422(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_424(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_425(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_424(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_252(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_253(int iParam0, int iParam1)
{
	if (!func_252(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_254(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

bool func_255()
{
	return &Global_1935436 == 2;
}

void func_256(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_257(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_72(iParam0, 2))
	{
		func_427(iParam0, func_426(iParam1));
	}
	else
	{
		func_428(iParam0, func_44());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT(((Global_17503.f_42[iParam0 /*8*/])->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_429(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_430(iParam0, 0);
	func_431(iParam0);
	func_432(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 4;
	Global_17503.f_6 = iParam0;
	Global_17503.f_10 = 1;
	Global_17503.f_7 = 0;
	Global_17503.f_8 = 0;
	if (!func_72(iParam0, 16))
	{
		func_258(iParam0, 0, 0, 0, 0);
	}
}

void func_258(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_433() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_175(iVar1) && !func_72(iVar1, iParam2)) && (!bParam3 || !func_271(iVar1))) && (!bParam4 || !func_434(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_435(iVar0);
			}
		}
		iVar0++;
	}
}

int func_259(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_260(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_312(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_72(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_436(2, -1, 0, 0, 0);
			}
			else
			{
				func_436(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_436(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_437(1, uParam0->f_177))
				{
					func_438(16, uParam0->f_177);
					func_439(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_440(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_436(8, -1, 0, 0, 0);
	}
}

bool func_261(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

bool func_262()
{
	return (Global_1894899 & 1 != 0 && func_274() != -1);
}

int func_263(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_264(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_441(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
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

int func_265(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_387(func_386());
	if (func_2(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_266(int iParam0, int iParam1)
{
	return (func_259(iParam0) && iParam1) != 0;
}

int func_267(int iParam0)
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 & -1 == -1)
	{
		return 1;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (iParam0 & 1 == 1 && func_442(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_443(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_444(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_445(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_446(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_447(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_448(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_268(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_449(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_269(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return 1;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_270(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_450())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_451(&(Global_1898164->f_1[0 /*5*/]));
		if (func_452(iVar0) && func_453(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_454(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_271(int iParam0)
{
	if (!func_175(iParam0))
	{
		return 0;
	}
	if (func_455(64) && func_456(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_272(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_457(iVar0) || func_458(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_273()
{
	return Global_1894899 & 4 != 0;
}

int func_274()
{
	return Global_1894899->f_2;
}

int func_275(int iParam0)
{
	if (!func_459(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_276(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_277(vector3 vParam0, int iParam3)
{
	if (!func_276(iParam3))
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::_0xF256A75210C5C0EB(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_278(vector3 vParam0)
{
	float fVar0;

	if (func_165(vParam0))
	{
		return false;
	}
	fVar0 = func_145(func_262(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_279(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_0x1A51BFE60708E482(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_224(uParam0);
						if (bParam3)
						{
							return 1;
						}
					}
					if (!bParam3)
					{
						return 1;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_224(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_404(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_460(uParam0, fParam2))
		{
			return 1;
		}
		if (func_404(uParam0))
		{
			func_398(uParam0);
		}
	}
	return 0;
}

bool func_280(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_281(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_165(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_322(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

float func_282(int iParam0)
{
	if (!func_175(iParam0))
	{
		return 0f;
	}
	if (!func_461(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_283()
{
	return "unnamed";
}

char* func_284(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_285(bool bParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_DOES_VOLUME_EXIST(bParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(bParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(bParam0) };
	uVar6 = func_313(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return uVar6;
}

char* func_286(char* sParam0)
{
	return sParam0;
}

int func_287(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
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

int func_288(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_289(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_290(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			(Global_36580[iVar0 /*2*/])->f_1 = 3;
		}
		iVar0++;
	}
}

void func_291(var uParam0)
{
	if (func_179(uParam0->f_162))
	{
		func_231(&(uParam0->f_162), 1, 1);
	}
	if (func_179(uParam0->f_163))
	{
		func_231(&(uParam0->f_163), 1, 1);
	}
	if (func_179(uParam0->f_164))
	{
		func_231(&(uParam0->f_164), 1, 1);
	}
	if (func_179(uParam0->f_165))
	{
		func_231(&(uParam0->f_165), 1, 1);
	}
}

void func_292(var uParam0)
{
	if (uParam0->f_170)
	{
		func_462();
	}
}

void func_293(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_463(32);
		func_297(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_294(var uParam0)
{
	if (func_464(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_465(uParam0->f_3);
		func_260(uParam0, 0, 1);
		func_466(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_467(0, 0);
		return 1;
	}
	return 0;
}

void func_295()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_296(int iParam0)
{
	if (!func_175(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

void func_297(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_254(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_189() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

void func_298(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_299(int iParam0)
{
	if (!func_454(iParam0))
	{
		return -1;
	}
	return func_468(iParam0);
}

int func_300(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_469(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_301()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_302(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_189() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 4;
		case 5:
			return 4;
		case 1:
			return 4;
		case 10:
			return 5;
		default:
			break;
	}
	return 1;
}

int func_304()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_305(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

int func_306(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

int func_309(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*((*uParam2)[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*((*uParam2)[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*((*uParam2)[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*((*uParam2)[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*((*uParam2)[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*((*uParam2)[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*((*uParam2)[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*((*uParam2)[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 4:
					*((*uParam2)[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*((*uParam2)[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 5:
					*((*uParam2)[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*((*uParam2)[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*((*uParam2)[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*((*uParam2)[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*((*uParam2)[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*((*uParam2)[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*((*uParam2)[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*((*uParam2)[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*((*uParam2)[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*((*uParam2)[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 11:
					*((*uParam2)[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*((*uParam2)[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*((*uParam2)[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*((*uParam2)[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*((*uParam2)[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*((*uParam2)[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*((*uParam2)[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*((*uParam2)[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*((*uParam2)[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*((*uParam2)[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*((*uParam2)[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*((*uParam2)[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*((*uParam2)[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*((*uParam2)[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*((*uParam2)[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*((*uParam2)[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*((*uParam2)[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*((*uParam2)[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*((*uParam2)[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 20:
					*((*uParam2)[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*((*uParam2)[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*((*uParam2)[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 21:
					*((*uParam2)[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*((*uParam2)[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*((*uParam2)[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 22:
					*((*uParam2)[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*((*uParam2)[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*((*uParam2)[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*((*uParam2)[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*((*uParam2)[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*((*uParam2)[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*((*uParam2)[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*((*uParam2)[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*((*uParam2)[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*((*uParam2)[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*((*uParam2)[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*((*uParam2)[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*((*uParam2)[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*((*uParam2)[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*((*uParam2)[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 26:
					*((*uParam2)[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*((*uParam2)[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 27:
					*((*uParam2)[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*((*uParam2)[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*((*uParam2)[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*((*uParam2)[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*((*uParam2)[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*((*uParam2)[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*((*uParam2)[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*((*uParam2)[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*((*uParam2)[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*((*uParam2)[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*((*uParam2)[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*((*uParam2)[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*((*uParam2)[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*((*uParam2)[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*((*uParam2)[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*((*uParam2)[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*((*uParam2)[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*((*uParam2)[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*((*uParam2)[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*((*uParam2)[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*((*uParam2)[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 24:
					*((*uParam2)[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*((*uParam2)[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 25:
					*((*uParam2)[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*((*uParam2)[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*((*uParam2)[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*((*uParam2)[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*((*uParam2)[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*((*uParam2)[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*((*uParam2)[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 31:
					*((*uParam2)[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*((*uParam2)[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 32:
					*((*uParam2)[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*((*uParam2)[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 33:
					*((*uParam2)[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*((*uParam2)[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_310(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_165(*((*uParam1)[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *((*uParam1)[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_311(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_BLIP_ADD_FOR_COORD(-1702907713, *uParam0);
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_43("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_312(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_313(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_165(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_280(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (bParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_470(iVar0, bParam8);
	return iVar0;
}

void func_314(int iParam0)
{
	if (!func_175(iParam0))
	{
		return;
	}
	func_471(iParam0);
}

void func_315(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_316(int iParam0)
{
	if (func_125(iParam0, 2))
	{
		return 200;
	}
	if (func_125(iParam0, 4))
	{
		return 70;
	}
	if (func_125(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_317(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_72(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_44() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_72(iParam0, 2);
		bVar1 = func_72(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_262())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_318(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_125(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_319(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_125(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (func_125(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_320(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_308(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17503.f_12[iVar1]), iVar2);
}

int func_321(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_165(vParam1))
	{
		return 0;
	}
	if (func_326(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return 0;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_120(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return 1;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

int func_322(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_323(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	float fVar0;

	fVar0 = func_145(bParam6, fParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_329(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_372();
			iParam4->f_2 = func_118(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_329(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_372();
		iParam4->f_2 = func_118(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

int func_324(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_372() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_325(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_165(*(uParam0->f_12[iVar0 /*3*/])))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar1 /*3*/])) < BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_326(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_72(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_472(vParam1, 0, 0, iVar0))
	{
		return 1;
	}
	if (func_72(iParam0, 33554432))
	{
		if (func_473(vParam1, 200f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_327(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_125(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return 0;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return 0;
			}
		}
	}
	if (func_72(iParam0, 1) && !func_72(iParam0, 2))
	{
		if (func_72(iParam0, 4096) || func_72(iParam0, 2048))
		{
			if (func_474(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_328(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_475())
	{
		return 0;
	}
	return 1;
}

bool func_329(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_476(vVar0, vParam0) > func_476(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_330(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_331(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return (Global_36580[Global_36601 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_332(int iParam0)
{
	return iParam0;
}

void func_333(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_334(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_477(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, bParam1);
		}
	}
}

void func_335(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, bParam1);
	}
}

void func_336(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

Vector3 func_337(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, bParam3, vParam4);
}

float func_338(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_478((fParam0 + fParam1));
}

int func_339(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_479(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_480(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, true, true, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_481(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_481(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_482(iVar0))
		{
			func_343(iVar0, &(uParam1->f_23), 0);
		}
		if (func_482(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_483(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_484(&(uParam1->f_22)));
			func_84(iVar0, func_485(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_486(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_487(&(uParam1->f_22)))
		{
			func_488(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_489(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_187(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_482(iVar0))
		{
			func_491(iVar0, !func_490(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_492(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_493(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_493(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

int func_340(int iParam0, int iParam1)
{
	if (func_494(iParam0) != -1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("G_M_M_UNISWAMP_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return 1;
		case joaat("G_M_M_UNICRIMINALS_02"):
		case joaat("G_M_M_UNICRIMINALS_01"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

bool func_341(var uParam0)
{
	return func_187(*uParam0, 32);
}

int func_342(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_343(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_31(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

struct<5> func_344(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_495(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_496(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_348(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_497(bParam1) };
			if (iParam2 && func_498(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_346(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_346(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_347(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { func_499(bParam1) };
			switch (func_500(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
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
			if (func_501(iParam0, -1823706425))
			{
				Var0 = { func_348(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_501(iParam0, -1483207246))
			{
				Var0 = { func_348(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
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
				Var27.f_9 = -1591664384;
				if (!func_502(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
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

int func_345(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return joaat("SLOTID_PROGRESSION");
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685 /* GXTEntry: "Right" */;
		case 376:
			return -649335959 /* GXTEntry: "Left" */;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
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

bool func_346(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_503(iParam0, *uParam1, iParam2, iParam3) > 0;
}

int func_347(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_504(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_348(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_505(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_506(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_349(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_507(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_502(*uParam1, &Var0, bParam6, 0))
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
	if (!func_350(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_506(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_350(bool bParam0)
{
	if (func_189() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_506(bParam0));
}

int func_351(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_508(iParam0))
	{
		return 0;
	}
	if (!func_350(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_352(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_198(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_353(int iParam0, bool bParam1, int iParam2)
{
	func_509(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_510(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_49(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_268(1))
						{
							func_49(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_268(1) || *iParam0 & 8192 != 0))
				{
					func_48(iParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_511(iParam0))
			{
				iParam0->f_15 = func_372();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_372() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_512(iParam0);
}

int func_354(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_513(iParam0, iParam1, iVar2))
			{
				return 0;
			}
			if (func_99(iParam0, iVar2) <= func_514(iParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_355(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_515(iParam2, 1, 1, 1, 0))
	{
		func_49(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_516(iParam1, 1);
	func_295();
}

int func_356(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_517(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_518(iParam1);
			if (func_519(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_520(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_516(iParam1, 1);
						return 1;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_516(iParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_357(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_521(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_518(iParam2);
		if (func_519(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_520(iParam2)
				{
					func_516(iParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_358(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_513(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_520(iParam1)
		{
			fVar3 = func_518(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_359(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_372();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_360(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_522(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_368(iParam2, iParam1))
			{
				func_516(iParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_361(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_523(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_368(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_516(iParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_362(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_524(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_516(iParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_516(iParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, 0, 0);
					if (func_525(iParam1, vVar0, vVar4))
					{
						func_516(iParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_516(iParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, 0, 0);
					if (func_525(iParam1, vVar0, vVar7))
					{
						func_516(iParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_363(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_513(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_526(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_527(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						iParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_528(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_529(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_530(iParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_364(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_365(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_372();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_366(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_531(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_532(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_367(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0, int iParam1)
{
	if (func_533(iParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_369(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_117(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_370()
{
}

int func_371(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_534(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_372();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_118(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_372();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_372()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_373()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_372() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_374(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_514(iParam0);
	if (iParam0->f_12 > func_384(iParam0) && iParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_535(iParam1);
	iVar1 = func_536(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_375(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_537(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

int func_376(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_538(iParam0, iParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_539(iParam1, iParam0))
					{
						if (func_118(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_377(int iParam0, int iParam1)
{
	if (!func_540(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_372();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_379(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_380(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_372();
	}
	else if (func_372() - iParam1->f_4) > func_541(iParam1)
	{
		return func_542(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_381(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_382(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_383(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_269(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_35) || PED::IS_PED_IN_COVER(Global_35, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_35) || ((PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *iParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

float func_384(int iParam0)
{
	return iParam0->f_24;
}

var func_385(int iParam0)
{
	return iParam0->f_25;
}

int func_386()
{
	return &Global_1899515;
}

int func_387(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_388(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

void func_389()
{
	if (iLocal_487 == 3)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "VICTIM", &(uLocal_598[2]));
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "VICTIM", &(uLocal_598[2]));
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_3, "VICTIM", &(uLocal_598[2]));
	}
	else
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "vic", &(uLocal_598[2]));
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "vic", &(uLocal_598[2]));
	}
	func_84(&(uLocal_598[2]), 0, 0);
	if (!Local_59.f_44 && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_606))
	{
		Local_59.f_44 = 1;
	}
}

int func_390(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_543(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_544(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, 134217728))
	{
		func_545(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_546(558))
				{
					func_547(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

void func_391()
{
	switch (iLocal_615)
	{
		case 0:
			if (bLocal_705 || !func_31(&(uLocal_598[2]), 0, 1))
			{
				if (!bLocal_714)
				{
					func_183(Local_910[1 /*17*/], func_75(10));
					func_183(Local_966[1 /*17*/], func_75(10));
					func_394(&iLocal_889, 0);
					func_394(&iLocal_945, 0);
					bLocal_714 = true;
				}
			}
			if (iLocal_621 == 0 || iLocal_622 == 0)
			{
				func_226(Global_35, &(uLocal_598[2]), func_77(36), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_548();
				func_224(&uLocal_749);
				if (!Local_59.f_44)
				{
					Local_59.f_44 = 1;
				}
				iLocal_615 = 1;
			}
			else if (iLocal_621 == 1 || iLocal_622 == 1)
			{
				if (!bLocal_714)
				{
					func_251(10, 0, 0, "RE_HONOR_INTERVENED", &(uLocal_598[0]), 0, 1065353216 /* Float: 1f */, 0);
					func_226(Global_35, &(uLocal_598[2]), func_77(34), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_226(Global_35, &(uLocal_598[2]), func_77(35), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_487 == 5)
				{
					bLocal_721 = true;
				}
				func_548();
				bLocal_699 = true;
				if (!Local_59.f_44)
				{
					Local_59.f_44 = 1;
				}
				func_224(&uLocal_749);
				iLocal_615 = 4;
			}
			if (bLocal_716)
			{
				func_548();
				func_224(&uLocal_749);
				iLocal_615 = 1;
			}
			break;
		case 1:
			if (func_225(&uLocal_749) > 2f && !func_102(Global_35, 0))
			{
				if (!bLocal_715)
				{
					bLocal_693 = true;
					if (!Local_59.f_44)
					{
						Local_59.f_44 = 1;
					}
					func_183(Local_910[0 /*17*/], func_75(8));
					func_183(Local_966[0 /*17*/], func_75(8));
					func_183(Local_910[1 /*17*/], func_75(10));
					func_183(Local_966[1 /*17*/], func_75(10));
					func_394(&iLocal_889, 0);
					func_394(&iLocal_945, 0);
					func_107(Local_910[1 /*17*/], 1, 0);
					func_107(Local_966[1 /*17*/], 1, 0);
					func_107(Local_910[0 /*17*/], 0, 0);
					func_107(Local_966[0 /*17*/], 0, 0);
					bLocal_715 = true;
				}
				if ((!func_102(&(uLocal_598[0]), 0) && !func_102(&(uLocal_598[1]), 0)) && !bLocal_705)
				{
					if (bLocal_716)
					{
						func_107(Local_910[0 /*17*/], 1, 0);
						func_107(Local_966[0 /*17*/], 1, 0);
					}
				}
				else
				{
					func_107(Local_910[0 /*17*/], 0, 0);
					func_107(Local_966[0 /*17*/], 0, 0);
				}
				if (iLocal_621 == 0 || iLocal_622 == 0)
				{
					func_226(Global_35, &(uLocal_598[2]), func_77(38), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_548();
					func_224(&uLocal_749);
					iLocal_615 = 2;
				}
				if (iLocal_621 == 1 || iLocal_622 == 1)
				{
					if (!bLocal_705)
					{
						if (bLocal_716)
						{
							func_226(Global_35, &(uLocal_598[2]), func_77(37), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_226(Global_35, &(uLocal_598[2]), func_77(37), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else
					{
						func_226(Global_35, &(uLocal_598[2]), func_77(35), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (iLocal_487 == 5)
					{
						bLocal_721 = true;
					}
					bLocal_699 = true;
					bLocal_697 = true;
					func_548();
					func_224(&uLocal_749);
					iLocal_615 = 2;
				}
			}
			break;
		case 2:
			if (func_225(&uLocal_749) > 2f)
			{
				if (bLocal_697)
				{
					func_224(&uLocal_749);
					iLocal_615 = 4;
				}
				else
				{
					func_183(Local_910[1 /*17*/], func_75(10));
					func_183(Local_966[1 /*17*/], func_75(10));
					func_394(&iLocal_889, 0);
					func_394(&iLocal_945, 0);
					func_107(Local_966[1 /*17*/], 1, 0);
					func_107(Local_966[0 /*17*/], 1, 0);
					iLocal_615 = 3;
				}
			}
			break;
		case 3:
			if (iLocal_621 == 1 || iLocal_622 == 1)
			{
				func_226(Global_35, &(uLocal_598[2]), func_77(37), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_548();
				if (iLocal_487 == 5)
				{
					bLocal_721 = true;
				}
				bLocal_699 = true;
				func_224(&uLocal_749);
				iLocal_615 = 4;
			}
			break;
		case 4:
			if (func_225(&uLocal_749) > 2f)
			{
				bLocal_694 = true;
				if (!bLocal_662)
				{
					func_217();
				}
				iLocal_616 = 2;
				iLocal_615 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_392()
{
	switch (iLocal_615)
	{
		case 0:
			if (bLocal_705 || !func_31(&(uLocal_598[2]), 0, 1))
			{
				if (!bLocal_714)
				{
					func_183(Local_910[1 /*17*/], func_75(10));
					func_183(Local_966[1 /*17*/], func_75(10));
					func_394(&iLocal_889, 0);
					func_394(&iLocal_945, 0);
					bLocal_714 = true;
				}
			}
			if (iLocal_621 == 1 || iLocal_622 == 1)
			{
				func_251(12, 0, 0, "RE_HONOR_INTERVENED", &(uLocal_598[0]), 0, 1065353216 /* Float: 1f */, 0);
				if (!bLocal_714)
				{
					func_251(10, 0, 0, "RE_HONOR_INTERVENED", &(uLocal_598[0]), 0, 1065353216 /* Float: 1f */, 0);
					func_226(Global_35, &(uLocal_598[2]), func_77(34), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_226(Global_35, &(uLocal_598[2]), func_77(35), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_548();
				func_224(&uLocal_749);
				iLocal_615 = 1;
			}
			else if (iLocal_621 == 0 || iLocal_622 == 0)
			{
				func_226(Global_35, &(uLocal_598[2]), func_77(36), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_548();
				func_224(&uLocal_749);
				iLocal_615 = 1;
			}
			break;
		case 1:
			if (func_225(&uLocal_749) > 2f)
			{
				func_218(1);
				bLocal_693 = true;
				iLocal_615 = 5;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

void func_393()
{
	func_549(Local_59.f_51, 20f, 5);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_623);
	if (VOLUME::_DOES_VOLUME_EXIST(bLocal_774))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(bLocal_774);
	}
	iLocal_624 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), func_78(&Local_59), 0f, 20f, -1f, -1082130432, -1082130432, -1, -1);
}

void func_394(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_398(&(iParam0->f_18));
}

void func_395(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

int func_396()
{
	int iVar0;
	int iVar1;

	if (!WEAPON::HAS_PED_GOT_WEAPON(&(uLocal_598[0]), func_86(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, false))
	{
		func_85(&(uLocal_598[0]), func_86(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(&(uLocal_598[0]), func_87(131072, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, false))
	{
		func_85(&(uLocal_598[1]), func_87(131072, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (!bLocal_660)
	{
		switch (iLocal_637)
		{
			case 0:
				bLocal_718 = true;
				PED::_0x58F7DB5BD8FA2288(&(uLocal_598[0]));
				PED::_0x58F7DB5BD8FA2288(&(uLocal_598[1]));
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Angry", 0.5f, 0, 4);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
				func_250(&(uLocal_598[0]), &iVar0, 0, 0, 1, 1);
				func_224(&uLocal_725);
				if (!bLocal_660 && iLocal_487 != 5)
				{
					func_226(&(uLocal_598[0]), Global_35, func_77(18), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					bLocal_711 = true;
				}
				iLocal_637++;
				break;
			case 1:
				if (func_225(&uLocal_725) > 1f)
				{
					PED::_0x58F7DB5BD8FA2288(&(uLocal_598[1]));
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Angry", 0.5f, 0, 4);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 4f, 4f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 1);
					func_250(&(uLocal_598[1]), &iVar1, 0, 0, 1, 1);
					func_224(&uLocal_725);
					bLocal_710 = false;
					iLocal_637++;
				}
				break;
			case 2:
				func_224(&uLocal_725);
				iLocal_637++;
				break;
			case 3:
				if (((func_225(&uLocal_725) > 1f || (bLocal_697 && bLocal_694)) || bLocal_699) || bLocal_721)
				{
					if (!func_102(Global_35, 0))
					{
						if (iLocal_487 == 5 && !bLocal_660)
						{
							if (bLocal_721)
							{
								func_226(&(uLocal_598[0]), Global_35, "RE_RC_BND_V1_CALLOUT_2", "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_226(&(uLocal_598[0]), Global_35, "GENERIC_SHOCKED_HIGH", "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
						}
						func_224(&uLocal_725);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		TASK::TASK_REACT(&(uLocal_598[0]), Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Angry", 0.5f, 0, 4);
		TASK::TASK_REACT(&(uLocal_598[1]), Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 0.8f, 0, 4);
		return 1;
	}
	return 0;
}

int func_397()
{
	int iVar0;
	int iVar1;

	switch (iLocal_637)
	{
		case 0:
			PED::_0x58F7DB5BD8FA2288(&(uLocal_598[0]));
			PED::_0x58F7DB5BD8FA2288(&(uLocal_598[1]));
			if (!bLocal_701)
			{
				if (fLocal_648 < 0.9f || bLocal_659)
				{
					if (!bLocal_659)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(&(uLocal_598[0]), Global_35, -1, false, 1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 0.5f, 0, 4);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
						func_250(&(uLocal_598[0]), &iVar0, 0, 0, 1, 1);
					}
					func_218(0);
					bLocal_701 = true;
				}
			}
			if (!bLocal_702)
			{
				if (fLocal_649 < 0.98f || bLocal_659)
				{
					if (!bLocal_659)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(&(uLocal_598[1]), Global_35, -1, false, 1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 0.5f, 0, 4);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
						func_250(&(uLocal_598[1]), &iVar1, 0, 0, 1, 1);
					}
					func_218(0);
					bLocal_702 = true;
				}
			}
			if (bLocal_702 && bLocal_701)
			{
				iLocal_637++;
			}
			break;
		case 1:
			func_224(&uLocal_725);
			return 1;
	}
	return 0;
}

void func_398(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_399(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_400()
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(4, 1, 0);
}

bool func_401(int iParam0, int iParam1, float fParam2)
{
	return func_550(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_402(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

void func_403(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_406() - fParam1);
	func_551(uParam0, 1);
	func_552(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_404(var uParam0)
{
	return func_553(*uParam0, 1);
}

bool func_405(var uParam0)
{
	return func_553(*uParam0, 2);
}

float func_406()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_407(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_262())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_554(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_117(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_224(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_555(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_556(func_227(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

var func_408(int iParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, uParam1);
}

void func_409(int iParam0)
{
	if (!func_557(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

bool func_410()
{
	return (Global_1935630->f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_411(var uParam0, float fParam1, float fParam2, int iParam3)
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

int func_412(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_411(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_406() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

int func_413(int iParam0, int iParam1)
{
	if (!func_175(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

void func_414()
{
	switch (iLocal_646)
	{
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[0]), 105945964))
			{
				func_226(&(uLocal_598[0]), Global_35, "RE_RC_SVG_V1_OPN_IDLE_A", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[0]), 411844579))
			{
				func_226(&(uLocal_598[0]), Global_35, "RE_RC_SVG_V1_OPN_IDLE_B", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[2]), 1191718119))
			{
				func_226(&(uLocal_598[2]), Global_35, "RE_RC_SVG_V1_OPN_IDLE_A", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_598[2]), -632269967))
			{
				func_226(&(uLocal_598[2]), Global_35, "RE_RC_SVG_V1_OPN_IDLE_B", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 4:
			break;
	}
}

void func_415()
{
	if (iLocal_487 == 3)
	{
		iLocal_617 = func_558(&(uLocal_598[0]), Global_35, 0.5f);
	}
	else
	{
		iLocal_617 = func_558(iLocal_606, Global_35, 1060437492 /* Float: 0.707f */);
		if (func_559())
		{
			iLocal_617 = 3;
		}
		else
		{
			iLocal_617 = 2;
		}
	}
}

int func_416()
{
	int iVar0;

	if (bLocal_660)
	{
		if (!bLocal_663 && !bLocal_664)
		{
			if (((ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[18])) || ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[17]))) || ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[19]))) || ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[20])))
			{
				bLocal_663 = true;
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[18])))
			{
				if (fLocal_648 >= 0.713533f)
				{
					bLocal_664 = true;
				}
				else
				{
					bLocal_663 = true;
				}
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[22])))
			{
				bLocal_664 = true;
			}
		}
		if (bLocal_663)
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[24])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[24])))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[24]), true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[24]), true);
				return 1;
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[24]));
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[24]));
			}
		}
		if (bLocal_664)
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[25])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[25])))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[25]), true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[25]), true);
				return 1;
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[25]));
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[25]));
			}
		}
	}
	else
	{
		if (!bLocal_665 && !bLocal_666)
		{
			if (ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[18])))
			{
				if (fLocal_648 >= 0.7f)
				{
					bLocal_666 = true;
				}
				else
				{
					bLocal_665 = true;
				}
			}
		}
		switch (iLocal_628)
		{
			case 0:
				if (iLocal_617 == 1 || iLocal_617 == 0)
				{
					if (bLocal_665)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[27])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[27])))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[27]), true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[27]));
						}
					}
					if (bLocal_666)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[30])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[25])))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[30]), true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[30]));
						}
					}
				}
				else if (iLocal_617 == 3)
				{
					if (bLocal_665)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[28])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[28])))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[28]), true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[28]));
						}
					}
					if (bLocal_666)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[29])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[29])))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[29]), true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[29]));
						}
					}
				}
				else if (iLocal_617 == 2)
				{
					if (bLocal_665)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[26])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[26])))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[26]), true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[26]));
						}
					}
					if (bLocal_666)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[31])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[31])))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[31]), true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[31]));
						}
					}
				}
				break;
			case 1:
				func_224(&uLocal_731);
				iLocal_628++;
				break;
			case 2:
				if (fLocal_648 >= 0.99f || func_560())
				{
					if (iLocal_487 != 3)
					{
						if ((func_117(&(uLocal_598[0]), Global_35, 1, 1) > 25f && func_117(&(uLocal_598[1]), Global_35, 1, 1) > 25f) || (func_561(&uLocal_1042, 5000) && func_117(&(uLocal_598[0]), Global_35, 1, 1) > 15f))
						{
							bLocal_710 = false;
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[22])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[22])))
							{
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "odriscoll", &(uLocal_598[0]));
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[22]), true);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[22]), true);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_AIM_AT_ENTITY(0, &(uLocal_598[2]), -1, 1, 0);
								TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(&(uLocal_598[2]), true, false), 1000, 0, 0);
								func_250(&(uLocal_598[0]), &iVar0, 0, 0, 1, 1);
								bLocal_690 = true;
								bLocal_655 = false;
								bLocal_667 = true;
								bLocal_693 = false;
								func_224(&uLocal_731);
								return 1;
							}
							else
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[22]));
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[22]));
							}
						}
						else
						{
							func_217();
							bLocal_676 = true;
							return 1;
						}
					}
					else
					{
						func_217();
						bLocal_676 = true;
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_417()
{
	int iVar0;

	if (!func_404(&uLocal_755))
	{
		func_224(&uLocal_755);
	}
	else
	{
		if (func_225(&uLocal_755) > 1f)
		{
		}
		if ((!bLocal_657 && !bLocal_658) && !bLocal_659)
		{
			if (fLocal_649 < 0.846916f)
			{
				if (PED::IS_PED_IN_VEHICLE(&(uLocal_598[2]), iLocal_606, false))
				{
					if (!func_244(&(uLocal_598[2]), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
					{
						if (fLocal_649 >= 0.72f)
						{
							if (func_31(&(uLocal_598[2]), 0, 1))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_606, 196608, 0);
								TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 2f, 2f, 4);
								func_250(&(uLocal_598[2]), &iVar0, 0, 0, 1, 1);
							}
						}
					}
				}
				else
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_479, "PBL_ACTION_01"))
					{
						if (bLocal_671)
						{
							func_224(&uLocal_746);
							func_224(&uLocal_737);
							bLocal_657 = true;
						}
					}
					if (bLocal_672)
					{
						bLocal_658 = true;
						func_224(&uLocal_746);
						func_224(&uLocal_737);
					}
					if (bLocal_673)
					{
						bLocal_659 = true;
						func_224(&uLocal_746);
						func_224(&uLocal_737);
					}
					if (bLocal_674)
					{
						bLocal_676 = true;
						func_224(&uLocal_746);
						func_224(&uLocal_737);
					}
				}
			}
		}
		if (func_562())
		{
			TASK::TASK_REACT(&(uLocal_598[0]), Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 0.5f, 0, 4);
			TASK::TASK_REACT(&(uLocal_598[1]), Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 0.8f, 0, 4);
			return 1;
		}
		bLocal_657 = bLocal_657;
		if (!bLocal_658 && !func_562())
		{
			if (iLocal_617 == 1 || iLocal_617 == 0)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[1])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[12])))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[1]), true);
					bLocal_676 = true;
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[12]), true);
					return 1;
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[1]));
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[12]));
				}
			}
			else if (iLocal_617 == 2)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[2])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[14])))
				{
					switch (iLocal_634)
					{
						case 0:
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[14]), true);
							func_224(&uLocal_746);
							iLocal_634++;
							break;
						case 1:
							if (func_225(&uLocal_746) > 0.5f)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[2]), true);
								bLocal_676 = true;
								return 1;
							}
							break;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[2]));
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[14]));
				}
			}
			else if (iLocal_617 == 3)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[3])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[15])))
				{
					switch (iLocal_634)
					{
						case 0:
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[3]), true);
							bLocal_676 = true;
							func_224(&uLocal_746);
							iLocal_634++;
							break;
						case 1:
							if (func_225(&uLocal_746) > 0.5f)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[15]), true);
								return 1;
							}
							break;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[3]));
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[15]));
				}
			}
		}
		if (bLocal_658 && !bLocal_659)
		{
			if (iLocal_617 == 1 || iLocal_617 == 0)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[4])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[12])))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[12]), true);
					if (func_225(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[4]), true);
						bLocal_676 = true;
						return 1;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[4]));
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[12]));
				}
			}
			else if (iLocal_617 == 2)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[5])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[14])))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[14]), true);
					if (func_225(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[5]), true);
						bLocal_676 = true;
						return 1;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[5]));
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[14]));
				}
			}
			else if (iLocal_617 == 3)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[6])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[15])))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[6]), true);
					bLocal_676 = true;
					if (func_225(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[15]), true);
						return 1;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[6]));
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[15]));
				}
			}
		}
		if (bLocal_659)
		{
			if (iLocal_617 == 1 || iLocal_617 == 0)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[7])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[12])))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[7]), true);
					bLocal_676 = true;
					if (func_225(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[12]), true);
						return 1;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[7]));
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[12]));
				}
			}
			else if (iLocal_617 == 2)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[9])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[14])))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[9]), true);
					bLocal_676 = true;
					if (func_225(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[14]), true);
						return 1;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[9]));
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[14]));
				}
			}
			else if (iLocal_617 == 3)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, &(sLocal_25[10])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, &(sLocal_25[15])))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, &(sLocal_25[10]), true);
					bLocal_676 = true;
					if (func_225(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, &(sLocal_25[15]), true);
						return 1;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, &(sLocal_25[10]));
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, &(sLocal_25[15]));
				}
			}
		}
	}
	return 0;
}

void func_418(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::_0x662D364ABF16DE2F(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

void func_419(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_420(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_563(iParam0, uParam1, 1);
	func_248(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_421(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

bool func_423()
{
	return func_564() > 0;
}

void func_424(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_565();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_566(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_567(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_135())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_568(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_565();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_569(iVar1);
		func_571(func_570(), 0, 4000);
		func_572(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_573(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_575(func_574(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_422(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_576(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_577(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_577(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_575(func_574(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_422(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_576(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_577(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_577(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_574(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_578(10, 1);
	}
}

void func_425(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_426(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		uVar0 = func_579(1);
	}
	else
	{
		uVar0 = func_580(iParam0);
	}
	return uVar0;
}

void func_427(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_581(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_582(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar2 /*2*/] = &Global_17503.f_2205[iVar2 /*2*/] + 1;
	}
}

void func_428(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_125(iParam0, 8192))
	{
		iVar0 = func_582(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar0 /*2*/] = &Global_17503.f_2205[iVar0 /*2*/] + 1;
	}
}

void func_429(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_297(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_430(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_72(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_583(262144, iVar0, 0, 1);
		}
	}
	if (func_72(iParam0, 128))
	{
		func_583(128, iVar0, 0, 1);
	}
	else if (func_72(iParam0, 524288))
	{
		func_583(524288, iVar0, 0, 1);
	}
	else if (func_72(iParam0, 536870912))
	{
		func_583(536870912, iVar0, 0, 1);
	}
	else if (func_72(iParam0, 4194304))
	{
		func_583(4194304, iVar0, 0, 1);
	}
	else if (func_72(iParam0, 8388608))
	{
		func_583(8388608, iVar0, 0, 1);
	}
}

void func_431(int iParam0)
{
	Global_1310750->f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750->f_16071 = iParam0;
}

int func_432(bool bParam0)
{
	if (!bParam0 && func_584(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_433()
{
	return Global_1310750->f_16037;
}

int func_434(int iParam0)
{
	if (!func_175(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_435(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_175(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_585(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_436(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_586(Global_1393447, 1);
	func_587();
	func_588();
	func_589((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_372() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_590();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_583(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_2(iParam0, 2))
			{
				func_583(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_2(iParam0, 4))
			{
				func_583(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_591(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_592(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_592((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_437(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_438(int iParam0, int iParam1)
{
	((*Global_1392050)[iParam1 /*14*/])->f_1 = (((*Global_1392050)[iParam1 /*14*/])->f_1 - (((*Global_1392050)[iParam1 /*14*/])->f_1 && iParam0));
}

void func_439(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("GANG_BANDITOS");
		case 2:
			return joaat("GANG_EXCONFED");
		case 1:
			return joaat("GANG_INBRED");
		case 0:
			return joaat("GANG_ODRISCOLL");
		case 4:
			return joaat("GANG_RANCHERS");
		case 3:
			return joaat("GANG_SAVAGES");
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_441(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("HIGHPRESSURE"):
		case joaat("OVERCASTDARK"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_444(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_447(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SANDSTORM"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_449(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_450()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_451(int iParam0)
{
	if (!func_454(iParam0))
	{
		return -1;
	}
	return func_594(func_593(iParam0));
}

bool func_452(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_453(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_454(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_455(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_456(int iParam0)
{
	return func_72(iParam0, Global_1310750->f_16072 | 64);
}

int func_457(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_458(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("Q0304_TUNNEL_ENT"):
			case joaat("J_10P_TUNNEL_1A_INT"):
			case joaat("BAC_TUNNELCURVE_INT"):
			case joaat("Q0304_TUNNEL_INT"):
			case joaat("L_08_TRAIN_TUNNEL2_INT"):
			case joaat("BAC_TUNNELEXIT_INT"):
			case joaat("BAC_TUNNELENT_INT"):
			case joaat("J_14_TUNNEL01_INT"):
			case 653987431:
			case joaat("BAC_TUNNEL_INT"):
			case joaat("HEA_TUNNEL_01"):
			case joaat("HEA_TUNNEL_02"):
			case joaat("Q0304_TUNNEL_EXIT"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

bool func_459(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_460(var uParam0, float fParam1)
{
	if (!func_404(uParam0))
	{
		return 0;
	}
	if (func_225(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_461(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1310750)[iParam0 /*111*/])->f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1310750)[iParam0 /*111*/])->f_40)) != 0);
}

void func_462()
{
	func_595(23);
}

void func_463(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_464(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_465(int iParam0)
{
	int iVar0;

	iVar0 = func_596(iParam0);
	if (iVar0 != 0)
	{
		func_597(-1, 24, 0, iVar0);
	}
}

void func_466(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17503.f_42[iParam0 /*8*/] == 0)
	{
		func_575(func_574(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17503.f_4++;
	Global_17503.f_42[iParam0 /*8*/] = &Global_17503.f_42[iParam0 /*8*/] + 1;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 8;
	if (func_72(iParam0, 2))
	{
		func_598(iParam0, func_426(iParam3));
	}
	if (func_72(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_44();
		}
		func_599(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_125(iParam0, 65536))
	{
		func_600(iParam0, iParam1);
		func_601(iParam0, func_160(iParam0, iParam1));
		func_463(128);
	}
	func_429(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_430(iParam0, 1);
	if (!bParam2)
	{
		func_463(16);
		Global_17503.f_5 = iParam0;
		Global_17503.f_9 = 1;
		Global_17503.f_7 = 0;
		Global_17503.f_8 = 0;
		func_602(524288);
	}
	if (func_603(iParam0) != 0)
	{
		if (&Global_17503.f_42[iParam0 /*8*/] >= func_603(iParam0))
		{
			(Global_17503.f_42[iParam0 /*8*/])->f_6 = 1;
		}
	}
}

void func_467(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_604(&Global_0, 8);
	}
	if (!func_605() || func_189() != -1)
	{
		return;
	}
	func_604(&Global_0, 1);
}

int func_468(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_606(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_469(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_470(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_471(int iParam0)
{
	Global_17503.f_2++;
	(Global_17503.f_42[iParam0 /*8*/])->f_3++;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 2;
}

int func_472(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_165(vParam0))
	{
		return 0;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_473(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_165(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

int func_474(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_165(*(Global_1310750->f_16043[iVar0 /*3*/])))
		{
			if (func_121(vParam0, *(Global_1310750->f_16043[iVar0 /*3*/])) < 2500f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_475()
{
	int iVar0;
	int iVar1;

	iVar0 = func_607(func_274());
	if (iVar0 == 8)
	{
		iVar1 = func_275(func_274());
		if (func_277(Global_36, iVar1))
		{
			return 0;
		}
	}
	if (func_608(func_579(0)))
	{
		return 0;
	}
	if (func_609())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_476(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_477(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

float func_478(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_479(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_610(&uParam1))
	{
		return 1;
	}
	if (!func_611(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_480(var uParam0)
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_481(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_612(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_482(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

bool func_483(var uParam0)
{
	return func_187(*uParam0, 4);
}

bool func_484(var uParam0)
{
	return func_187(*uParam0, 64);
}

bool func_485(var uParam0)
{
	return func_187(*uParam0, 8);
}

bool func_486(var uParam0)
{
	return func_187(*uParam0, 128);
}

bool func_487(var uParam0)
{
	return func_187(*uParam0, 2048);
}

void func_488(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_489(var uParam0)
{
	return func_187(*uParam0, 1024);
}

bool func_490(var uParam0)
{
	return func_187(*uParam0, 256);
}

void func_491(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_492(var uParam0)
{
	return func_187(*uParam0, 512);
}

bool func_493(var uParam0)
{
	return func_187(*uParam0, 4096);
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			return 0;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			return 2;
		case joaat("G_M_M_UNIINBRED_01"):
			return 1;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			return 3;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			return 4;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			return 5;
	}
	return -1;
}

struct<4> func_495(bool bParam0)
{
	return func_348(joaat("CHARACTER"), func_613(), -1591664384, bParam0);
}

int func_496(int iParam0)
{
	vector3 vVar0;

	if (!func_505(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_497(bool bParam0)
{
	int iVar0;

	iVar0 = func_506(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_348(923904168, func_495(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_348(923904168, func_495(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_348(923904168, func_495(bParam0), -740156546, 0);
}

int func_498(int iParam0, bool bParam1)
{
	if (func_500(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_614(joaat("UPGRADE_OFFHAND_HOLSTER"), 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_499(bool bParam0)
{
	int iVar0;

	iVar0 = func_506(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_348(271701509, func_495(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_348(271701509, func_495(bParam0), 12999093, 0);
}

int func_500(int iParam0)
{
	struct<2> Var0;

	if (!func_505(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_501(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_500(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_502(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_506(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_503(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_505(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_348(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_506(bParam6), &Var0, 0);
	return uVar4;
}

int func_504(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_506(0);
	*uParam1 = { func_348(iParam0, func_497(0), iParam3, 0) };
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

int func_505(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_506(bool bParam0)
{
	if (func_189() == -1)
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

int func_507(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_508(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

void func_509(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_615();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_616(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_510(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_511(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_189() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_617(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_617(iParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_536(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	iParam0->f_14 = iVar0;
	return 1;
}

void func_512(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_618(iParam0);
	}
}

int func_513(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_536(iParam2);
	}
	else
	{
		iVar1 = func_535(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_536(iParam0);
	}
	else
	{
		iVar0 = func_535(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_2(*iParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_514(int iParam0)
{
	return iParam0->f_26;
}

int func_515(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_516(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 134217728);
	}
	else
	{
		func_48(iParam0, 134217728);
	}
}

int func_517(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("WEAPON_LASSO") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_117(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_619(iVar0, 0)))
		{
			if (func_620(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_518(int iParam0)
{
	return iParam0->f_17;
}

int func_519(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_2(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_520(int iParam0)
{
	return iParam0->f_18;
}

int func_521(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_619(iVar0, 0)))
		{
			if (func_621(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_522(int iParam0)
{
	return iParam0->f_23;
}

int func_523(int iParam0)
{
	return iParam0->f_21;
}

int func_524(int iParam0)
{
	int iVar0;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_525(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_550(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_526(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_622(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_527(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_528(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_269(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_529(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_269(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_269(iParam1))
	{
		return 0;
	}
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_531(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_532(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_101(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_533(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

int func_534(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_118(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_535(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_536(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_537(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_531(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_117(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_117(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_538(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_449(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_539(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_539(iParam1, iVar1))
				{
					if (func_118(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_539(int iParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_540(int iParam0)
{
	if (func_135())
	{
		return 0;
	}
	return func_153(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_541(int iParam0)
{
	return iParam0->f_20;
}

int func_542(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

void func_543(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_544(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_543(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_145(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_224(&(iParam1->f_13));
		}
		if (func_623(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_624(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_544(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_419(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_625(*uParam0, 1, 1);
						}
					}
					else if (func_626(iParam1, 22))
					{
						func_625(*uParam0, 0, 1);
					}
				}
				if (func_627(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_628(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_629(iParam8);
					if (func_630(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_631(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_632(iParam1, uParam3, fVar8);
					if (func_633(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_248(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_634(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_627(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_635(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_630(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_628(uParam0, func_627(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_629(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_248(uParam3, 0, 0, 1, 1);
					}
					func_636(iParam1, 1);
				}
				func_632(iParam1, uParam3, fVar8);
				if (func_634(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_420(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_545(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_637(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		iVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_226(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_546(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_189() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_547(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_638(iParam0, &iVar0, &iVar1);
	if (!func_639(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_640(iVar0, iVar1);
}

void func_548()
{
	func_107(Local_910[1 /*17*/], 0, 0);
	func_107(Local_910[0 /*17*/], 0, 0);
	func_107(Local_966[1 /*17*/], 0, 0);
	func_107(Local_966[0 /*17*/], 0, 0);
}

void func_549(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_138(vVar0, vVar3, 0f) };
	vVar9 = { func_139(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

bool func_550(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_551(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_552(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_553(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_554(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_117(Global_35, iParam0, bParam1, bParam2);
}

int func_555(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_556(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_557(int iParam0)
{
	return func_477(iParam0, 2);
}

int func_558(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_641(iParam0, vVar0, fParam2);
}

bool func_559()
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) };
	return func_382(vVar0, vLocal_21, Global_36);
}

int func_560()
{
	if ((((((ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[27])) || ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[30]))) || ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[26]))) || ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[29]))) || ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[31]))) || ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[28]))) || ANIMSCENE::_0x1F0E401031E20146(Local_479, &(sLocal_25[29])))
	{
		switch (iLocal_629)
		{
			case 0:
				func_218(0);
				func_219(&(uLocal_598[1]), 0);
				bLocal_710 = true;
				iLocal_629++;
				break;
			case 1:
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_598[2]), Local_479))
				{
					func_226(&(uLocal_598[2]), Global_35, func_77(14), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_107(Local_910[0 /*17*/], 0, 0);
					func_107(Local_966[0 /*17*/], 0, 0);
					iLocal_629++;
				}
				break;
			case 2:
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_598[0]), Local_479))
				{
					if (fLocal_648 >= 0.25f)
					{
						func_226(&(uLocal_598[0]), Global_35, func_77(15), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_629++;
					}
				}
				break;
			case 3:
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_598[0]), Local_479))
				{
					if (fLocal_648 >= 0.45f)
					{
						func_107(Local_910[0 /*17*/], 1, 0);
						func_107(Local_966[0 /*17*/], 1, 0);
						func_226(&(uLocal_598[0]), Global_35, func_77(16), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						bLocal_716 = true;
						iLocal_629++;
					}
				}
				break;
			case 4:
				if (fLocal_648 >= 0.98f || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_598[0]), Local_479))
				{
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_561(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 0)
	{
		return (func_372() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_562()
{
	if (fLocal_649 >= 0.846916f)
	{
		bLocal_681 = true;
		return 1;
	}
	return 0;
}

void func_563(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_231(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_394(iParam0, 0);
		}
	}
}

int func_564()
{
	return Global_40.f_11095.f_35;
}

int func_565()
{
	int iVar0;

	iVar0 = func_564();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_566(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_189() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_145(MISC::ABSF(fVar1) < 1f, func_145(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_567(int iParam0)
{
	if (!func_642(iParam0))
	{
		return 0;
	}
	return func_643(iParam0);
}

int func_568(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_570()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_571(int iParam0, bool bParam1, int iParam2)
{
	func_644((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_645(iParam0);
}

void func_572(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_646(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_573(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_647(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_648(iVar5, &iVar2, &iVar0))
			{
				if (!func_505(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_649(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_496(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_565() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_565() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_650();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

struct<2> func_574(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_575(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

char* func_576(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_577(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_651(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_578(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_652(iParam0))
	{
		return 0;
	}
	if (!func_605())
	{
		return 0;
	}
	if (!func_653(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_579(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_654(1, 0, 0);
	}
	else
	{
		iVar0 = func_274();
	}
	return func_580(iVar0);
}

int func_580(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_581(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_582(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_583(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_312(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_296(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_655(iVar0) < func_656(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_429(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_584(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_657(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_585(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_586(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_587()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_658(iVar0, 128))
		{
			func_659(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_588()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_658(iVar0, 128) && func_658(iVar0, 1))
		{
			func_659(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_589(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_590()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_72(iVar0, 16777216))
		{
			if (!func_660(iVar0))
			{
				func_661(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_591(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_297(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_297(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_297(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_297(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_297(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_297(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_297(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_592(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_406();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_593(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_594(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_595(int iParam0)
{
	int iVar0;

	if (func_189() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_82(func_662(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_662(iVar0), func_301(), 1))
			{
				func_663(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_597(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = (Global_1415419->f_19[iParam0 /*12*/])->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if ((Global_1415419->f_19[iVar0 /*12*/])->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_664() > (Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5)
					{
						(Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5 = func_664();
					}
					func_665(&((Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_48(&((Global_1415419->f_19[iVar0 /*12*/])->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_598(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_581(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_582(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar2 /*2*/])->f_1++;
	}
}

void func_599(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_125(iParam0, 8192))
	{
		iVar0 = func_582(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar0 /*2*/])->f_1++;
	}
}

void func_600(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_308(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_17503.f_12[iVar1], iVar2);
}

void func_601(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_72(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_165(vParam1))
	{
		return;
	}
	if (!func_175(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17503.f_2084)
	{
		vVar2 = { *(Global_17503.f_2084[iVar0 /*5*/]) };
		if (func_165(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if ((Global_17503.f_2084[iVar0 /*5*/])->f_3 == iParam0)
		{
			if (func_322(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*(Global_17503.f_2084[iVar1 /*5*/]) = { vParam1 };
		(Global_17503.f_2084[iVar1 /*5*/])->f_3 = iParam0;
		(Global_17503.f_2084[iVar1 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17503.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { vParam1 };
				(Global_17503.f_2084[iVar0 /*5*/])->f_3 = iParam0;
				(Global_17503.f_2084[iVar0 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
			}
			else
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { *(Global_17503.f_2084[iVar0 + 1 /*5*/]) };
			}
			iVar0++;
		}
	}
}

void func_602(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_661(iVar0, iParam0);
		iVar0++;
	}
}

int func_603(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_604(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_605()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_606(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
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

int func_607(int iParam0)
{
	if (!func_459(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

bool func_608(var uParam0)
{
	return (Global_1310750->f_16074 && uParam0) != 0;
}

bool func_609()
{
	return Global_1894899 & 2 != 0;
}

bool func_610(var uParam0)
{
	return func_187(*uParam0, 1);
}

int func_611(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_666(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_612(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_667(iParam1))
		{
			func_668(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_669(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_670(iParam0, 0);
			bVar0 = true;
		}
		func_671(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, false, true, true, true, false);
	}
}

struct<4> func_613()
{
	struct<4> Var0;

	return Var0;
}

int func_614(int iParam0, bool bParam1)
{
	if (func_508(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_506(bParam1), iParam0, 0);
}

int func_615()
{
	if (func_672())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_616(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_617(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_618(int iParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_48(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_49(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_619(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_620(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_621(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_621(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_622(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_623(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_673(iParam0, iParam1))
		{
			if (!func_2(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_248(uParam2, 0, 0, 1, 0);
				func_49(&(iParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_2(iParam1->f_10, 1))
		{
			func_674(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_48(&(iParam1->f_10), 1);
		}
	}
	return 0;
}

int func_624(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_2(iParam4, 32);
		func_563(iParam1, uParam2, 0);
		iVar5 = func_675(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_248(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_2(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_2(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_2(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_2(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_2(iParam4, 8388608) || func_2(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_2(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_2(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_626(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_626(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_2(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_676(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_2(iParam4, 268435456))
			{
				iVar8 = func_677(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_678(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_626(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_2(iParam4, 2) || func_2(iParam4, 16))
			{
				func_625(*uParam0, 1, 1);
			}
			else
			{
				func_625(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_625(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_626(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_627(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_679(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_628(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_680(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_629(int iParam0)
{
	if (func_2(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_2(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_2(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_630(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_681(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_682(Global_35)) || func_683(Global_35)) || func_684(Global_35));
	fVar12 = -1f;
	if (func_404(&(iParam1->f_13)))
	{
		fVar12 = func_225(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_179(((*uParam4)[iVar0 /*17*/])->f_6);
		func_685(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_686(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_687(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_248(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_688(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_563(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_689(iParam1, fParam6, iParam1->f_9))
					{
						func_224(&(iParam1->f_18));
						if (bVar6)
						{
							func_688(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_690(iParam1, fParam2);
	}
	return bVar5;
}

void func_631(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_632(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_691((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_690(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_633(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_692(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_693(iParam1, 0);
				func_563(iParam1, uParam2, func_626(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_634(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_224(&(iParam1->f_18));
			return 0;
		}
		else if (func_404(&(iParam1->f_18)))
		{
			func_398(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_404(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_694(&(iParam1->f_18), fParam2);
	return 1;
}

void func_635(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_685(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_636(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_637(int* iParam0)
{
	if (func_626(iParam0, 0))
	{
		if (func_695(iParam0))
		{
			func_636(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_638(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_639(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_696(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_697(iParam0))
	{
		return 0;
	}
	if (func_698(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_699(iParam0, 1)) || func_700(32768))
	{
		if (!func_699(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_701())
	{
		return 0;
	}
	return 1;
}

void func_640(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_641(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_702(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_382(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_642(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_643(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_644(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_703(bParam1);
	}
}

void func_645(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_646(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_647(int iParam0)
{
	vector3 vVar0;

	if (!func_704(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_648(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_704(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_649(int iParam0)
{
	return iParam0;
}

int func_650()
{
	int iVar0;

	iVar0 = func_565();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_651(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_652(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_653(int iParam0, int iParam1, int iParam2)
{
	if (!func_652(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return 0;
	}
	return 1;
}

int func_654(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (((*Global_1888801)[iVar2 /*35*/])->f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_705(iVar2))
				{
					vVar3 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iVar2 /*35*/])->f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_655(int iParam0)
{
	if (func_175(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_656(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_657(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

bool func_658(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_659(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_660(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_661(int iParam0, int iParam1)
{
	if (!func_175(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

int func_662(int iParam0)
{
	if (!func_706(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_663(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_707(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_664()
{
	return &Global_1899515;
}

void func_665(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_708(*uParam0);
	iVar1 = func_709(*uParam0);
	iVar2 = func_710(*uParam0);
	iVar3 = func_387(*uParam0);
	iVar4 = func_388(*uParam0);
	iVar5 = func_711(*uParam0);
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
	iVar6 = func_712(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_712(iVar1, iVar0);
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
	func_713(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_666(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CS_SISTERCALDERON"):
		case joaat("CS_STRSHERIFF_01"):
		case joaat("CS_MUD2BIGGUY"):
		case joaat("CS_RAINSFALL"):
		case joaat("CS_PENELOPEBRAITHWAITE"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TIMOTHYDONAHUE"):
		case joaat("CS_PRINCESSISABEAU"):
		case joaat("CS_LEVITICUSCORNWALL"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FEATSOFSTRENGTH"):
		case joaat("CS_BANDPIANIST"):
		case joaat("CS_ESCAPEARTISTASSISTANT"):
		case joaat("CS_GARETHBRAITHWAITE"):
		case joaat("CS_CREOLEGUY"):
		case joaat("CS_LEIGHGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_02"):
		case joaat("CS_GLORIA"):
		case joaat("CS_WARVET"):
		case joaat("CS_JOCKGRAY"):
		case joaat("CS_DAVIDGEDDES"):
		case joaat("CS_GUIDOMARTELLI"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DUSTERINFORMANT_01"):
		case joaat("CS_PINKERTONGOON"):
		case joaat("CS_MICKEY"):
		case joaat("CS_TWINBROTHER_02"):
		case joaat("CS_HESTONJAMESON"):
		case joaat("CS_STRDEPUTY_01"):
		case joaat("CS_ABE"):
		case joaat("CS_ODDFELLOWSPINHEAD"):
		case joaat("CS_SWAMPFREAK"):
		case joaat("CS_MRADLER"):
		case joaat("CS_ABERDEENPIGFARMER"):
		case joaat("CS_HOBARTCRAWLEY"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NORRISFORSYTHE"):
		case joaat("CS_JULES"):
		case joaat("CS_TOMDICKENS"):
		case joaat("CS_GERALDBRAITHWAITE"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_CANCAN_03"):
		case joaat("CS_GRIZZLEDJON"):
		case joaat("CS_WROBEL"):
		case joaat("CS_MEREDITH"):
		case joaat("CS_CREEPYOLDLADY"):
		case joaat("CS_NBXRECEPTIONIST_01"):
		case joaat("CS_NBXPOLICECHIEFFORMAL"):
		case joaat("CS_CORNWALLTRAINCONDUCTOR"):
		case joaat("CS_RHODEPUTY_01"):
		case joaat("CS_DRMALCOLMMACINTOSH"):
		case joaat("CS_LEON"):
		case joaat("CS_SHERIFFOWENS"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_CANCAN_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BRONTESBUTLER"):
		case joaat("CS_JANSON"):
		case joaat("CS_FORGIVENWIFE_01"):
		case joaat("CS_TIGERHANDLER"):
		case joaat("CS_FRENCHARTIST"):
		case joaat("CS_GENSTORYMALE"):
		case joaat("CS_CLAY"):
		case joaat("CS_STRDEPUTY_02"):
		case joaat("CS_FAMOUSGUNSLINGER_03"):
		case joaat("CS_BIVCOACHDRIVER"):
		case joaat("CS_BRAITHWAITEBUTLER"):
		case joaat("CS_CLEET"):
		case joaat("CS_JOE"):
		case joaat("CS_SLAVECATCHER"):
		case joaat("CS_BRAITHWAITEMAID"):
		case joaat("CS_TWINGROUPIE_02"):
		case joaat("CS_MRSGEDDES"):
		case joaat("CS_SAMARITAN"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_BANDSINGER"):
		case joaat("CS_BAPTISTE"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MYSTERIOUSSTRANGER"):
		case joaat("CS_FAMOUSGUNSLINGER_01"):
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BEATENUPCAPTAIN"):
		case joaat("CS_EDGARROSS"):
		case joaat("CS_TWINGROUPIE_01"):
		case joaat("CS_MRSWEATHERS"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KARENSJOHN_01"):
		case joaat("CS_THOMASDOWN"):
		case joaat("CS_OBEDIAHHINTON"):
		case joaat("CS_AGNESDOWD"):
		case joaat("CS_CAVEHERMIT"):
		case joaat("CS_BRYNNTILDON"):
		case joaat("CS_GERMANSON"):
		case joaat("CS_BRENDACRAWLEY"):
		case joaat("CS_COLFAVOURS"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("CS_CANCAN_04"):
		case joaat("CS_TOWNCRIER"):
		case joaat("CS_FAMOUSGUNSLINGER_04"):
		case joaat("CS_DALEMARONEY"):
		case joaat("CS_ANGRYHUSBAND"):
		case joaat("CS_LILLIANPOWELL"):
		case joaat("CS_ANDERSHELGERSON"):
		case joaat("CS_POORJOE"):
		case joaat("CS_BRAITHWAITESERVANT"):
		case joaat("CS_BROTHERDORKINS"):
		case joaat("CS_ALBERTMASON"):
		case joaat("CS_FAMOUSGUNSLINGER_05"):
		case joaat("CS_BALLOONOPERATOR"):
		case joaat("CS_ALBERTCAKEESQUIRE"):
		case joaat("CS_MRSFELLOWS"):
		case joaat("CS_CANCANMAN_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_CANCAN_02"):
		case joaat("CS_MEREDITHSMOTHER"):
		case joaat("CS_ANGEL"):
		case joaat("CS_ARCHERFORDHAM"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("CS_CHELONIANMASTER"):
		case joaat("CS_TWINBROTHER_01"):
		case joaat("CS_GERMANDAUGHTER"):
		case joaat("CS_LEMIUXASSISTANT"):
		case joaat("CS_CREOLEDOCTOR"):
		case joaat("CS_CRACKPOTROBOT"):
		case joaat("CS_BANDBASSIST"):
		case joaat("CS_GENSTORYFEMALE"):
		case joaat("CS_MARYLINTON"):
		case joaat("CS_VALPRAYINGMAN"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_MRS_CALHOUN"):
		case joaat("CS_THEODORELEVIN"):
		case joaat("CS_NICHOLASTIMMINS"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("CS_DINOBONESLADY"):
		case joaat("CS_BEAUGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_01"):
		case joaat("CS_CRACKPOTINVENTOR"):
		case joaat("CS_HERCULE"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LEVISIMON"):
		case joaat("CS_LONDONDERRYSON"):
		case joaat("CS_CAPTAINMONROE"):
		case joaat("CS_FAMOUSGUNSLINGER_02"):
		case joaat("CS_MRSLONDONDERRY"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_TAVISHGRAY"):
		case joaat("CS_JOEBUTLER"):
		case joaat("CS_BANDDRUMMER"):
		case joaat("CS_LILLYMILLET"):
		case joaat("CS_ANSEL_ATHERTON"):
		case joaat("CS_RHODEPUTY_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DISGUISEDDUSTER_02"):
		case joaat("CS_MAGNIFICO"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_FORGIVENHUSBAND_01"):
		case joaat("CS_REVERENDFORTHERINGHAM"):
		case joaat("CS_DAVEYCALLENDER"):
		case joaat("CS_DESMOND"):
		case joaat("CS_ADAMGRAY"):
		case joaat("CS_JIMCALLOWAY"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NBXDRUNK"):
		case joaat("CS_GERMANMOTHER"):
		case joaat("CS_RINGMASTER"):
		case joaat("CS_LUCANAPOLI"):
		case joaat("CS_RHODESASSISTANT"):
		case joaat("CS_ABERDEENSISTER"):
		case joaat("CS_NBXEXECUTED"):
		case joaat("CS_FAMOUSGUNSLINGER_06"):
		case joaat("CS_JOHNWEATHERS"):
		case joaat("CS_PROFESSORBELL"):
		case joaat("CS_RHODESSALOONBOUNCER"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_668(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_714(iParam0, iParam1))
		{
			if (func_715(iParam0, iParam1))
			{
				if (func_716(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_717(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_669(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, false, true, true, true, false);
	}
}

void func_670(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, false, true, true, true, false);
	}
}

void func_671(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

int func_672()
{
	switch (Global_1935630->f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_673(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 1;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_718((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_674(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_691((*uParam0)[iVar0 /*17*/]))
		{
			func_229((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_675(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_719(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_179(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_229((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_676(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_288(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_677(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_678(int* iParam0, int* iParam1)
{
	if (!func_626(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_229(iParam1, 19);
			func_693(iParam0, 23);
			func_720(iParam1, 2);
		}
	}
}

int func_679(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_721(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_722(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_680(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_719(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_681(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_682(int iParam0)
{
	return (func_723(iParam0, 4) || func_723(iParam0, 5));
}

bool func_683(int iParam0)
{
	return func_723(iParam0, 7);
}

bool func_684(int iParam0)
{
	return func_723(iParam0, 6);
}

void func_685(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_691(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_719(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_686(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_724(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_725(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_182(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_182(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_726(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

int func_687(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_727(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_728(iParam1, 1))
	{
		func_729(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_688(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_107((*uParam0)[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_689(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_690(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_691(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_693(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_694(var uParam0, float fParam1)
{
	if (func_460(uParam0, fParam1))
	{
		func_398(uParam0);
		return 1;
	}
	return 0;
}

int func_695(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_696(int iParam0, int iParam1)
{
	if (func_189() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_697(int iParam0)
{
	if (func_189() != -1)
	{
		if (func_699(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_699(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_698(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_699(iParam0, 65536) && !func_699(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_699(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_699(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_699(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_700(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_701()
{
	return Global_1905944->f_5694;
}

float func_702(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

void func_703(bool bParam0)
{
	func_730(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

int func_704(int iParam0, var uParam1)
{
	if (!func_731(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_705(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

bool func_706(int iParam0)
{
	return iParam0 > -1;
}

int func_707(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

int func_708(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_556(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_709(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_710(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_711(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_712(int iParam0, int iParam1)
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

void func_713(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_732(uParam0, iParam6);
	func_733(uParam0, iParam5);
	func_734(uParam0, iParam4);
	func_735(uParam0, iParam3);
	func_736(uParam0, iParam2);
	func_737(uParam0, iParam1);
}

bool func_714(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_715(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_716(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_714(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_717(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_718(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_719(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_179(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_231(&(iParam1->f_6), 0, 1);
	}
	if (!func_179(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_691(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_738(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_179(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_726(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_739(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_740(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_180(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_739(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_182(iParam1->f_6, 0, 1);
				}
				else
				{
					func_182(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_720(int* iParam0, int iParam1)
{
	if (!func_228(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_229(iParam0, 14);
		}
	}
}

bool func_721(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_722(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_723(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_724(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_725(int iParam0, bool bParam1)
{
	if (bParam1 && !func_179(iParam0))
	{
		return false;
	}
	return !func_477(iParam0, 4);
}

void func_726(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_179(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_332(iParam0);
	func_739(iParam0, 18, 0, 1);
	func_739(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_727(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_179(iParam0))
	{
		return false;
	}
	iVar0 = func_332(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_728(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_179(iParam0))
	{
		return false;
	}
	iVar0 = func_332(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_729(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_179(iParam0))
	{
		return;
	}
	iVar0 = func_332(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_730(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_731(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_732(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_733(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_734(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_709(*uParam0);
	iVar1 = func_708(*uParam0);
	if (iParam1 < 1 || iParam1 > func_712(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_735(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_736(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_737(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_738(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_477(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_741(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_739(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_179(iParam0))
	{
		return;
	}
	iVar0 = func_332(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_740(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_179(iParam0))
	{
		return;
	}
	iVar0 = func_332(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_741(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
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
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, bParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, bParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_334(iParam0, 1);
	func_335(iParam0, 1);
	func_336(iParam0, 128);
}

