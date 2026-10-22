/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23432D5994AA4F847A24A2397C3A50405A001020BC1C2650EA2297B6E09498E0
 * Entry: 0x00126df0, Ghidra index: 3728, label: FUN_00126df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00126df0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x5e4);
  *(int *)(in_ECX + 0x644) = in_EAX;
  if (iVar2 != 0) {
    if (in_EAX == 1) {
      *(undefined4 *)(iVar2 + 0xd8) = 1;
    }
    else {
      if (in_EAX != 2) {
        if (*(int *)(iVar2 + 0xd8) == 2) {
          iVar1 = FUN_0006ef00();
          if (iVar1 != 0) {
            FUN_000c6980(0x3f19999a,0xff0000ff,0x3f800000);
          }
        }
        FUN_002107d0(*(undefined4 *)(in_ECX + 0x54c),0);
        *(undefined4 *)(iVar2 + 0xd8) = 0;
        return;
      }
      *(undefined4 *)(iVar2 + 0xd8) = 2;
      FUN_002107d0(*(undefined4 *)(in_ECX + 0x54c),1);
      iVar2 = FUN_0006ef00();
      if (iVar2 != 0) {
        FUN_000c6980(0x3f19999a,0xff0000ff,0x3f800000);
        return;
      }
    }
  }
  return;
}
