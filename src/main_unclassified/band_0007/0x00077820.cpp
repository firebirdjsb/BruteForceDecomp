/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB8DA2F637CC249EF39769D3DA3D3BCE483FB3F787B06326B11F08A2B9F56F00
 * Entry: 0x00077820, Ghidra index: 1403, label: FUN_00077820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000773c0(void);

void FUN_00077820(void)

{
  int iVar1;
  int in_EAX;
  int unaff_EBX;
  
  while( true ) {
    if (in_EAX == unaff_EBX) {
      return;
    }
    if ((*(int *)(in_EAX + 0xc) == 4) && (iVar1 = *(int *)(in_EAX + 4), iVar1 != 0)) break;
    in_EAX = in_EAX + 0x10;
  }
  FUN_000773c0();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
