/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA468A9CB902528CE03B2B30A7E1B16C95B17B4633EF95DC2973BA3D1976AAC0
 * Entry: 0x000c2490, Ghidra index: 2371, label: FUN_000c2490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000bb8e0(void);

void FUN_000c2490(void)

{
  int in_EAX;
  int unaff_ESI;
  
  if (in_EAX == *(int *)(*(int *)(unaff_ESI + 0x70) + 0x4c)) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0x70) + 0x50) = 0x3f4ccccd;
    return;
  }
  *(int *)(*(int *)(unaff_ESI + 0x70) + 0x4c) = in_EAX;
  if (7 < *(uint *)(in_EAX + 0x54)) {
    FUN_000bb8e0();
    *(undefined4 *)(*(int *)(unaff_ESI + 0x70) + 0x50) = 0x3f4ccccd;
    return;
  }
  FUN_000bb8e0();
  *(undefined4 *)(*(int *)(unaff_ESI + 0x70) + 0x50) = 0x3f4ccccd;
  return;
}
