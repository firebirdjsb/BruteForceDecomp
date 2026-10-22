/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DC72ED192A94B18AB8C3D806A13F9C2E86C8AF7291595E1D777B0E3AEF5CD0C
 * Entry: 0x00183a00, Ghidra index: 5207, label: FUN_00183a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00183a00(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_ESI;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_8 = 0;
  local_18 = unaff_ESI * 0x4800 + *(int *)(in_EAX + 0x78);
  local_4 = 0;
  iVar1 = unaff_ESI * 3 + 0x21;
  local_14 = *(undefined4 *)(in_EAX + iVar1 * 4);
  iVar2 = in_EAX + unaff_ESI * 0xc;
  local_c = iVar2 + 0x7c;
  *(undefined4 *)(iVar2 + 0x80) = 1;
  iVar2 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x10))(*(int **)(in_EAX + 0x74),&local_18,0);
  *(undefined4 *)(in_EAX + iVar1 * 4) = 0x4800;
  if (unaff_ESI == *(int *)(in_EAX + 0xa0)) {
    *(undefined1 *)(in_EAX + 0xab) = 0;
    (**(code **)(**(int **)(in_EAX + 0x74) + 0x14))(*(int **)(in_EAX + 0x74));
  }
  return -1 < iVar2;
}
