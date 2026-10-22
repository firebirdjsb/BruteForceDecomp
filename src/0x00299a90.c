/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F61CF334FF7F342923C7BB71B2AB7C4AE914DE04FA3698EB8EEAEBAF4BCE325
 * Entry: 0x00299a90, Ghidra index: 9387, label: FUN_00299a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_cannot_access_an_upvalue_in_curr_00404018[];
extern char s_cannot_access_upvalue_in_main_00404044[];
void FUN_00299a90(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int *piVar3;
  int unaff_ESI;
  
  if (*(int *)(*(int *)(in_EAX + 8) + 4) == 0) {
    FUN_002958c0(s_cannot_access_upvalue_in_main_00404044);
  }
  piVar3 = *(int **)(in_EAX + 8);
  iVar1 = piVar3[5] + -1;
  if (-1 < iVar1) {
    piVar3 = piVar3 + piVar3[5] + 0x48;
    do {
      if (unaff_ESI == *piVar3) {
        if (-1 < iVar1) {
          FUN_002958c0(s_cannot_access_an_upvalue_in_curr_00404018);
          piVar3 = extraout_ECX;
        }
        break;
      }
      iVar1 = iVar1 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar1);
  }
  uVar2 = FUN_00299a10(piVar3,1);
  FUN_00299580(0xc,uVar2);
  return;
}
