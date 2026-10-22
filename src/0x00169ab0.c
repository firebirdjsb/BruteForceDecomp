/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80A28F584B7F811DA32BCA6B0A889EA9E9BBC895BB971ACFE4EB97730A3425CB
 * Entry: 0x00169ab0, Ghidra index: 4759, label: FUN_00169ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_00169ae4_caseD_4[];
undefined4 FUN_00169ab0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *in_EAX;
  undefined4 uVar3;
  int *in_EDX;
  
  iVar2 = *in_EDX;
  cVar1 = *(char *)(iVar2 + 0x3c01e8 + *in_EAX * 0xc);
  uVar3 = 1;
  if (cVar1 == '\0') {
switchD_00169ae4_caseD_4:
    uVar3 = 0;
  }
  else {
    if (cVar1 == '\x01') {
      return 1;
    }
    switch(*in_EAX) {
    case 0:
      switch(iVar2) {
      case 0:
        uVar3 = FUN_00169210();
        return uVar3;
      case 1:
        uVar3 = FUN_001695b0();
        return uVar3;
      case 2:
        uVar3 = FUN_00169650();
        return uVar3;
      case 3:
        uVar3 = FUN_00169500();
        return uVar3;
      case 5:
        uVar3 = FUN_00169970();
        return uVar3;
      case 10:
        uVar3 = FUN_00169a30();
        return uVar3;
      case 0xb:
        uVar3 = FUN_001691e0();
        return uVar3;
      }
      break;
    case 1:
      switch(iVar2) {
      case 0:
        uVar3 = FUN_001695b0();
        return uVar3;
      case 1:
        uVar3 = FUN_001696d0(param_1,param_2);
        return uVar3;
      case 2:
        uVar3 = FUN_00169950();
        return uVar3;
      case 3:
        uVar3 = FUN_00169550();
        return uVar3;
      case 5:
        uVar3 = FUN_001699c0();
        return uVar3;
      case 10:
        uVar3 = FUN_00169a80();
        return uVar3;
      }
      break;
    case 2:
      if (iVar2 == 0) {
        uVar3 = FUN_00169650();
        return uVar3;
      }
      if (iVar2 == 1) {
        uVar3 = FUN_00169950();
        return uVar3;
      }
      break;
    case 3:
      if (iVar2 == 0) {
        uVar3 = FUN_00169500();
        return uVar3;
      }
      if (iVar2 == 1) {
        uVar3 = FUN_00169550();
        return uVar3;
      }
      break;
    default:
      goto switchD_00169ae4_caseD_4;
    case 5:
      if (iVar2 == 0) {
        uVar3 = FUN_00169970();
        return uVar3;
      }
      if (iVar2 == 1) {
        uVar3 = FUN_001699c0();
        return uVar3;
      }
      break;
    case 10:
      if (iVar2 == 0) {
        uVar3 = FUN_00169a30();
        return uVar3;
      }
      if (iVar2 == 1) {
        uVar3 = FUN_00169a80();
        return uVar3;
      }
      break;
    case 0xb:
      if (iVar2 == 0) {
        uVar3 = FUN_001691e0();
        return uVar3;
      }
    }
  }
  return uVar3;
}
