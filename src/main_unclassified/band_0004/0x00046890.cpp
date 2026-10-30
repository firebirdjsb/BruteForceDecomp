/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A96540B2FEDAAE37515D138B6188E87F4E5A338C2406494262B03D435974355
 * Entry: 0x00046890, Ghidra index: 550, label: FUN_00046890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004e8f0(void);

undefined4 FUN_00046890(void)

{
  int in_ECX;
  
  FUN_0004e8f0();
  *(undefined4 *)(in_ECX + 0x450) = 0;
  *(undefined4 *)(in_ECX + 0x44c) = 0;
  *(undefined4 *)(in_ECX + 0x448) = 0;
  *(undefined1 *)(in_ECX + 0x85d) = 0;
  *(undefined4 *)(in_ECX + 0x860) = 0x3f800000;
  return 1;
}
