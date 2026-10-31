/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D57B02939AAC6847ED064D3264607EC3BDCD72099BCB9092D134CEBA9385EC2B
 * Entry: 0x00343726, Ghidra index: 12714, label: FUN_00343726
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: direct CALL 0x00343377 with two pushed guest DWORDs;
 * callee RET 8. Node layout and complete Xbox ABI remain ABI_UNVERIFIED. */
extern void FUN_00343377(int guest_node_va, undefined4 guest_status_word);
bool FUN_00343726(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = (uint)(*(int *)(param_1 + 0x14) << 3) <
          (uint)(*(int *)(param_1 + 0x20) +
                 (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x10)) * 8 + param_2);
  if (bVar1) {
    FUN_00343377(param_1,0xfffffc16);
  }
  return !bVar1;
}
