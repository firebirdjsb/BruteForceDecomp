/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C81A6698D627A1851C02C85EF92CB5662D16764134C6A4F25235B3E3DD413D38
 * Entry: 0x00342220, Ghidra index: 12687, label: FUN_00342220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040278c;
extern uint32_t DAT_004b10d0;
extern uint32_t DAT_004b10d4;
extern uint32_t PTR_LAB_000a091f_1_004b10f4;
extern uint32_t PTR_LAB_004b10d8;
int FUN_00342220(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  int local_74 [4];
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_18 [2];
  undefined2 local_16;
  int local_14;
  
  pcVar2 = param_1;
  if (0x2fff < *(int *)(param_1 + 0x8d8)) {
    return -0x7feae6e8;
  }
  (param_1 + 0x8dc)[*(int *)(param_1 + 0x8d8)] = '\0';
  iVar3 = FUN_002eb216(param_1 + 0x8dc,&PTR_LAB_000a091f_1_004b10f4);
  if (((iVar3 != 0) &&
      ((((iVar4 = __stricmp(iVar3,"HTTP/1.1"), iVar4 == 0 ||
         (iVar3 = __stricmp(iVar3,"HTTP/1.0"), iVar3 == 0)) &&
        (iVar3 = FUN_002eb216(0,&DAT_0040278c), iVar3 != 0)) &&
       ((iVar3 = __stricmp(iVar3,&PTR_LAB_004b10d8), iVar3 == 0 &&
        (pcVar5 = (char *)FUN_002eb216(0,&DAT_004b10d4), pcVar5 != (char *)0x0)))))) &&
     (iVar3 = __stricmp(pcVar5,&DAT_004b10d0), iVar3 == 0)) {
    piVar7 = local_74;
    for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    pcVar6 = pcVar5;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00341b75(pcVar5 + (int)(pcVar6 + (2 - (int)(pcVar5 + 1))),local_74);
    if ((((local_74[0] != 0) && (local_74[2] != 0)) &&
        ((local_74[3] != 0 && (((local_64 != 0 && (local_60 != 0)) && (local_5c != 0)))))) &&
       ((iVar3 = __stricmp(local_60,"urn:schemas-upnp-org:service:WANIPConnection:1"), iVar3 == 0 ||
        (iVar3 = __stricmp(local_60,"urn:schemas-upnp-org:service:WANPPPConnection:1"), iVar3 == 0))
       )) {
      iVar3 = FUN_0034204d(local_74[3],local_18,&param_1);
      if (iVar3 < 0) {
        return iVar3;
      }
      if (((local_14 == -1) || (local_14 == *(int *)(pcVar2 + 0x38))) && (local_16 != 0)) {
        pcVar5 = param_1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if ((uint)((int)pcVar5 - (int)(param_1 + 1)) < 0x80) {
          XAPILIB__lstrcpynA(pcVar2 + 0x1d4,param_1,0x80);
          *(ushort *)(pcVar2 + 0x40) = CONCAT11((undefined1)local_16,local_16._1_1_);
          return 0;
        }
      }
    }
  }
  return -0x7feae6e8;
}
