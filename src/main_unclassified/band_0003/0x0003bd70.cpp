/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 943436BDB8C2EBD3A6534D68280E7F382E2DD030A820637924F905AB0B109E7B
 * Entry: 0x0003bd70, Ghidra index: 421, label: FUN_0003bd70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001bc90(int32_t unaff_EBX);
extern void FUN_0001bd30(uint32_t unaff_ESI);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

void FUN_0003bd70(void)

{
  int unaff_EDI;
  
  FUN_0001bc90();
  FUN_0001bd30();
  if (*(int *)(unaff_EDI + 0x2c4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x2c4));
  }
  *(undefined4 *)(unaff_EDI + 0x2c4) = 0;
  *(undefined4 *)(unaff_EDI + 0x2c8) = 0;
  *(undefined4 *)(unaff_EDI + 0x2cc) = 0;
  if (*(int *)(unaff_EDI + 0x22c) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(unaff_EDI + 0x1fc) != 0) {
    FUN_0008f6e0();
  }
  FUN_0001bc90();
  if (*(int *)(unaff_EDI + 0x70) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x70));
  }
  *(undefined4 *)(unaff_EDI + 0x70) = 0;
  *(undefined4 *)(unaff_EDI + 0x74) = 0;
  *(undefined4 *)(unaff_EDI + 0x78) = 0;
  FUN_0001bc90();
  return;
}
