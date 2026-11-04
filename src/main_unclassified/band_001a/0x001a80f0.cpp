/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F031449D8D5E013B7D59AE00B4D5E12268F8AA9751B5CF3A7135D695412D16F7
 * Entry: 0x001a80f0, Ghidra index: 5429, label: FUN_001a80f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration: XBE 0x001a8104 PUSH ESI, 0x001a8105 E8 CALL;
 * callee 0x001ad080 exits with RET 4. Guest ABI_UNVERIFIED. */
extern void FUN_001ad080(int *param_1);
undefined4 FUN_001a80f0(void)

{
  int *unaff_ESI;
  
  FUN_001ad080(unaff_ESI);
  return *unaff_ESI;
}
