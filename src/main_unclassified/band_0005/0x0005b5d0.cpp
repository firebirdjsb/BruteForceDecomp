/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C580B74A0B1936EE0E94EF30FBA9C6D62E97ADF17F6C114B804B64C5D4B917E
 * Entry: 0x0005b5d0, Ghidra index: 921, label: FUN_0005b5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000e35e0(byte param_1);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

void FUN_0005b5d0(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x1c);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x20);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x1c));
  }
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  if (*(int *)(unaff_EDI + 0xc) != 0) {
    FUN_0008f6e0();
  }
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
