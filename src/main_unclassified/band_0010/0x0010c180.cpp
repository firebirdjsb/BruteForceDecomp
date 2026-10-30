/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68794C832DDC1D524D278E4E51E23CC9978EAAF371AEB79E5A6EAB8121070D7E
 * Entry: 0x0010c180, Ghidra index: 3462, label: FUN_0010c180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x00308980; extern label; definition/role pending. */
extern unsigned char LAB_00308980;

int FUN_0010c180(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308980;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x28);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0010c280();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
