/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9BDFDCCC311456FF0C60BDACE896C0EB7BB8BC1667C4A01DDFDAC1EC23AF51FC
 * Entry: 0x000c7da0, Ghidra index: 2458, label: FUN_000c7da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_0039f264;
extern uint32_t PTR_FUN_0039f8bc;
void FUN_000c7da0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int iVar6;
  
  *in_ECX = PTR_FUN_0039f264;
  iVar6 = 5;
  piVar5 = in_ECX + 0x16;
  do {
    uVar1 = piVar5[-1];
    if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
      piVar5[-1] = 0;
      iVar2 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      piVar4 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      while (iVar2 != 0) {
        piVar3 = (int *)*piVar4;
        if (piVar3 == piVar5 + -2) {
          *piVar4 = *(int *)*piVar4;
          break;
        }
        piVar4 = piVar3;
        iVar2 = *piVar3;
      }
    }
    iVar6 = iVar6 + -1;
    piVar5 = piVar5 + -2;
    if (iVar6 == 0) {
      *in_ECX = &PTR_FUN_0039f8bc;
      piVar5 = (int *)in_ECX[8];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        in_ECX[8] = 0;
      }
      return;
    }
  } while( true );
}
