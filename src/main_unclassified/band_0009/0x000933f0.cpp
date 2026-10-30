/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84C3D5BF9D26AE33264A22B47E0E90C0698D5344F11D13C7A651E43B06CF0626
 * Entry: 0x000933f0, Ghidra index: 1807, label: FUN_000933f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
extern void FUN_00093480(void);

undefined4 FUN_000933f0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0xb0);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_00093480();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(undefined4 *)(iVar1 + 0x94) = 0x3a83126f;
  *(undefined4 *)(iVar1 + 0x14) = 1;
  *param_3 = iVar1;
  return 0;
}
