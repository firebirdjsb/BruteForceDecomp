/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E47D4B359F51995512CE21EC98637D7564B58FF6D76EB2D643B2A1CF894FE235
 * Entry: 0x002b6490, Ghidra index: 9822, label: FUN_002b6490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002b6490(undefined4 param_1)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  
  auVar1 = rsqrtss(in_XMM0,param_1);
  return (float10)auVar1._0_4_;
}
