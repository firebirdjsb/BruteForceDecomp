/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F1F9DF40A0EBA23304178F3D37802677A0B20EE7F9FBF852CC28763260E7346
 * Entry: 0x001301e0, Ghidra index: 3823, label: FUN_001301e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_001301ed_default[];
char FUN_001301e0(int param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 in_EDX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  switch(in_EDX) {
  case 0:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x2c8) < 1) {
      return '\0';
    }
    while (*piVar5 != 0x2f) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
      if (*(int *)(in_ECX + 0x2c8) <= iVar2) {
        return '\0';
      }
    }
    break;
  case 1:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x2c8) < 1) {
      return '\0';
    }
    while (*piVar5 != 10) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
      if (*(int *)(in_ECX + 0x2c8) <= iVar2) {
        return '\0';
      }
    }
    break;
  case 2:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x2c8) < 1) {
      return '\0';
    }
    while (*piVar5 != 0x23) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
      if (*(int *)(in_ECX + 0x2c8) <= iVar2) {
        return '\0';
      }
    }
    break;
  case 3:
    if (((*(int *)(param_1 + 0x1fc) == 0) || (*(int *)(*(int *)(param_1 + 0x1fc) + 0x504) == 0)) &&
       ((*(int *)(in_ECX + 0x2b8) == 0 || (*(int *)(*(int *)(in_ECX + 0x2b8) + 0x504) == 0)))) {
      return '\0';
    }
    break;
  case 4:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x2c8) < 1) {
      return '\0';
    }
    while (*piVar5 != 0x26) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
      if (*(int *)(in_ECX + 0x2c8) <= iVar2) {
        return '\0';
      }
    }
    break;
  case 5:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x2c8) < 1) {
      return '\0';
    }
    while (*piVar5 != 10) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
      if (*(int *)(in_ECX + 0x2c8) <= iVar2) {
        return '\0';
      }
    }
    break;
  case 6:
    break;
  case 7:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x2c8) < 1) {
      return '\0';
    }
    while (*piVar5 != 7) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
      if (*(int *)(in_ECX + 0x2c8) <= iVar2) {
        return '\0';
      }
    }
    break;
  case 8:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x2c8) < 1) {
      return '\0';
    }
    while (*piVar5 != 0x1c) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
      if (*(int *)(in_ECX + 0x2c8) <= iVar2) {
        return '\0';
      }
    }
    break;
  case 9:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = *(int *)(in_ECX + 0x2c8);
    cVar1 = '\0';
    iVar3 = 0;
    piVar4 = piVar5;
    if (0 < iVar2) {
      do {
        if (*piVar4 == 0x1c) {
          cVar1 = '\x01';
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar3 < iVar2);
    }
    if (cVar1 != '\0') {
      return cVar1;
    }
    iVar3 = 0;
    cVar1 = '\0';
    piVar4 = piVar5;
    if (0 < iVar2) {
      do {
        if (*piVar4 == 0x1d) {
          cVar1 = '\x01';
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar3 < iVar2);
    }
    if (cVar1 != '\0') {
      return cVar1;
    }
    iVar3 = 0;
    if (iVar2 < 1) {
      return '\0';
    }
    while (*piVar5 != 0x1e) {
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 0x13;
      if (iVar2 <= iVar3) {
        return '\0';
      }
    }
    break;
  case 10:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x2c8) < 1) {
      return '\0';
    }
    while (*piVar5 != 0x1c) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
      if (*(int *)(in_ECX + 0x2c8) <= iVar2) {
        return '\0';
      }
    }
    break;
  case 0xb:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x2c8) < 1) {
      return '\0';
    }
    while (*piVar5 != 0x1d) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
      if (*(int *)(in_ECX + 0x2c8) <= iVar2) {
        return '\0';
      }
    }
    break;
  case 0xc:
    piVar5 = *(int **)(in_ECX + 0x2cc);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x2c8) < 1) {
      return '\0';
    }
    while (*piVar5 != 0x1e) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
      if (*(int *)(in_ECX + 0x2c8) <= iVar2) {
        return '\0';
      }
    }
    break;
  default:
    goto switchD_001301ed_default;
  }
switchD_001301ed_default:
  return '\x01';
}
