/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 696D95653868268F0FBE0DB8D8FE7E4196C65AD0ED25E67051F92E7035AB097D
 * Entry: 0x00097950, Ghidra index: 1834, label: FUN_00097950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
extern void FUN_000979d0(void);

undefined4 FUN_00097950(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x6c);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_000979d0();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(undefined1 *)(iVar1 + 0x55) = 0;
  *(undefined1 *)(iVar1 + 0x54) = 0;
  *(undefined1 *)(iVar1 + 0x56) = 1;
  *param_3 = iVar1;
  return 0;
}
