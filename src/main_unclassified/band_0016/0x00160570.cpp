/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54CBCBB5A3E7E16FD5D750F27A4029B5ECDA1223684554E3194307690B2875BC
 * Entry: 0x00160570, Ghidra index: 4591, label: FUN_00160570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400534;
/* WARNING: Removing unreachable block (ram,0x001605da) */

undefined1 FUN_00160570(char *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 local_244 [32];
  undefined1 local_224 [80];
  undefined1 local_1d4 [468];
  
  pcVar4 = param_1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  FUN_0001fed0(param_1,(int)pcVar4 - (int)(param_1 + 1));
  FUN_001e8830(&DAT_00400534);
  FUN_00160780();
  cVar3 = FUN_001618a0(local_244);
  if (cVar3 == '\x01') {
    FUN_00161970(local_244);
    FUN_001619f0();
    FUN_00161a90(local_224);
    FUN_00161b10();
    FUN_00161bb0();
    FUN_00161c50();
    FUN_00161a90(local_1d4);
    FUN_001621f0();
    FUN_00161cf0();
    FUN_00161d90();
    FUN_00161e30();
    FUN_00161ed0();
    FUN_00161f70();
    FUN_001621f0();
    FUN_001621f0();
    FUN_00162010();
    FUN_001620b0();
    FUN_00162150();
    FUN_001621f0();
    piVar1 = *(int **)(in_EAX + 0x10c);
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      if (piVar2[5] == 0) {
        uVar5 = FUN_0015fde0();
        piVar2[5] = uVar5;
      }
      piVar2[4] = 0;
      FUN_00076220();
      piVar1 = *(int **)(in_EAX + 0x10c);
    }
    uVar7 = 1;
    iVar6 = (in_EAX + 4) - (int)param_1;
    do {
      cVar3 = *param_1;
      param_1[iVar6] = cVar3;
      param_1 = param_1 + 1;
    } while (cVar3 != '\0');
  }
  else {
    uVar7 = 0;
  }
  FUN_001608b0();
  return uVar7;
}
