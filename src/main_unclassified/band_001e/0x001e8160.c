/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B71EA8F4C939BBADDF8CF3AD2D6013D0543C7E41C9F77DBA0ABC559BD4FD5F2E
 * Entry: 0x001e8160, Ghidra index: 6836, label: FUN_001e8160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc93c;
extern uint32_t DAT_004068c8;
extern uint32_t DAT_004068e0;
extern uint32_t DAT_004072e4;
extern uint32_t DAT_004072f8;
extern uint32_t DAT_0040730c;
extern uint32_t DAT_0040731c;
extern uint32_t DAT_00407320;
extern uint32_t DAT_0040732c;
extern uint32_t DAT_0040733c;
extern uint32_t DAT_0040734c;
extern uint32_t DAT_00407358;
extern uint32_t DAT_00407360;
extern uint32_t DAT_00407368;
extern uint32_t DAT_00407370;
extern uint32_t DAT_0040737c;
extern uint32_t DAT_00407388;
extern uint32_t DAT_00407394;
extern uint32_t DAT_004073a0;
extern uint32_t DAT_004073b0;
extern uint32_t DAT_004073bc;
extern uint32_t DAT_004073c4;
extern uint32_t DAT_004073d0;
extern uint32_t DAT_004073d8;
extern uint32_t DAT_004073e4;
extern uint32_t DAT_004073ec;
extern uint32_t DAT_004073f4;
extern uint32_t DAT_004073fc;
extern uint32_t DAT_00407408;
extern uint32_t DAT_00407414;
extern uint32_t DAT_0040741c;
extern uint32_t DAT_00407428;
extern uint32_t DAT_00407434;
extern uint32_t DAT_00407440;
extern uint32_t DAT_00407444;
extern uint32_t DAT_00407450;
extern uint32_t DAT_00407458;
extern uint32_t DAT_00469960;
extern uint32_t DAT_00469974;
extern uint32_t DAT_004a5b2c;
undefined4 FUN_001e8160(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 local_38 [4];
  uint local_34;
  undefined4 local_24;
  uint local_20;
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  pcVar1 = &DAT_00407458;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407458,pcVar2 + -0x407458);
  pcVar1 = &DAT_00407458;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407458,pcVar2 + -0x407458);
  pcVar1 = &DAT_00407450;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407450,pcVar2 + -0x407450);
  pcVar1 = &DAT_00407450;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407450,pcVar2 + -0x407450);
  pcVar1 = &DAT_00407444;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407444,pcVar2 + -0x407444);
  pcVar1 = &DAT_004a5b2c;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004a5b2c,pcVar2 + -0x4a5b2c);
  pcVar1 = &DAT_004a5b2c;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004a5b2c,pcVar2 + -0x4a5b2c);
  pcVar1 = &DAT_00407440;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407440,pcVar2 + -0x407440);
  pcVar1 = &DAT_00407434;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407434,pcVar2 + -0x407434);
  pcVar1 = &DAT_00407428;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407428,pcVar2 + -0x407428);
  pcVar1 = &DAT_0040741c;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_0040741c,pcVar2 + -0x40741c);
  pcVar1 = &DAT_00407414;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407414,pcVar2 + -0x407414);
  pcVar1 = &DAT_00407408;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407408,pcVar2 + -0x407408);
  pcVar1 = &DAT_004073fc;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004073fc,pcVar2 + -0x4073fc);
  pcVar1 = &DAT_004073f4;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004073f4,pcVar2 + -0x4073f4);
  pcVar1 = &DAT_004073ec;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004073ec,pcVar2 + -0x4073ec);
  pcVar1 = &DAT_004073e4;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004073e4,pcVar2 + -0x4073e4);
  pcVar1 = &DAT_004073d8;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004073d8,pcVar2 + -0x4073d8);
  pcVar1 = &DAT_004073d0;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004073d0,pcVar2 + -0x4073d0);
  if ((DAT_003bc93c == 3) && (((byte)DAT_00469960 & 0x40) == 0)) {
    pcVar1 = &DAT_004073c4;
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    pcVar2 = pcVar2 + -0x4073c4;
    puVar3 = &DAT_004073c4;
  }
  else {
    pcVar1 = &DAT_004073bc;
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    pcVar2 = pcVar2 + -0x4073bc;
    puVar3 = &DAT_004073bc;
  }
  FUN_0001fed0(puVar3,pcVar2);
  pcVar1 = &DAT_004073b0;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004073b0,pcVar2 + -0x4073b0);
  pcVar1 = &DAT_004073a0;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004073a0,pcVar2 + -0x4073a0);
  pcVar1 = &DAT_00407394;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407394,pcVar2 + -0x407394);
  pcVar1 = &DAT_00407388;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407388,pcVar2 + -0x407388);
  pcVar1 = &DAT_0040737c;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_0040737c,pcVar2 + -0x40737c);
  pcVar1 = &DAT_00407370;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407370,pcVar2 + -0x407370);
  pcVar1 = &DAT_00407368;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407368,pcVar2 + -0x407368);
  pcVar1 = &DAT_00407360;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407360,pcVar2 + -0x407360);
  pcVar1 = &DAT_00407358;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407358,pcVar2 + -0x407358);
  pcVar1 = &DAT_0040734c;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_0040734c,pcVar2 + -0x40734c);
  pcVar1 = &DAT_0040733c;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_0040733c,pcVar2 + -0x40733c);
  pcVar1 = &DAT_0040732c;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_0040732c,pcVar2 + -0x40732c);
  pcVar1 = &DAT_00407320;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407320,pcVar2 + -0x407320);
  DAT_00469974 = 1;
  pcVar1 = &DAT_0040731c;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_0040731c,pcVar2 + -0x40731c);
  pcVar1 = &DAT_004068e0;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004068e0,pcVar2 + -0x4068e0);
  pcVar1 = &DAT_004068c8;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004068c8,pcVar2 + -0x4068c8);
  pcVar1 = &DAT_0040730c;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_0040730c,pcVar2 + -0x40730c);
  pcVar1 = &DAT_004072f8;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004072f8,pcVar2 + -0x4072f8);
  local_4 = 0xf;
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  pcVar1 = &DAT_004072e4;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004072e4,pcVar2 + -0x4072e4);
  FUN_001eb0e0(local_38,(uintptr_t)0x001eb090U);
  FUN_0001f4f0(local_38,0,0xffffffff);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_34);
  }
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_20 = 0xf;
  if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18);
  }
  return 1;
}
