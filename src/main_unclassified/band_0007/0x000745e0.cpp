/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D90EF0D1183613FFF111D2A06117DD94AC35D429999F50F1BC85EDFEB23E9B6B
 * Entry: 0x000745e0, Ghidra index: 1325, label: FUN_000745e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* 0x002EA018 free thunk: the initial imported target reads a guest
 * DWORD stack argument. Caller machine-code ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
extern void FUN_00074580(void);

undefined1 FUN_000745e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_00074580();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  return 0;
}
