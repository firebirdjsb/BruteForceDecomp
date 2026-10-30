/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52796BF6164541AAED71BC10D367E318C79882382FC0D5BE28C9EC3E20477CBB
 * Entry: 0x000b1050, Ghidra index: 2105, label: FUN_000b1050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox VA 0x003071a0; original label address; definition and semantics pending. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);

extern unsigned char LAB_003071a0;

void FUN_000b1050(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003071a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x34);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
