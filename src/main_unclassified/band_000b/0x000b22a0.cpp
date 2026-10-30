/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2BF9778D080CB34214DBCC5D62CB4DD0FF82E89E92DEEA45043CC2C4F65FCBB
 * Entry: 0x000b22a0, Ghidra index: 2142, label: FUN_000b22a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b22a0(void)

{
  int *in_ECX;
  
  if ((*(byte *)(in_ECX + 0x18) & 2) != 0) {
    (**(code **)(*in_ECX + 4))
              (in_ECX + 0x16,(float)(int)*(short *)((int)in_ECX + 0xe),(float)(int)(short)in_ECX[3],
               0,0,0x80,1,1,0,0,0,0,0,0x3f800000,0x3f800000,0,0,0);
  }
  FUN_000b2720();
  if ((*(byte *)(in_ECX + 0x18) & 4) != 0) {
    (**(code **)(*in_ECX + 4))
              (in_ECX + 0x17,(float)(int)*(short *)((int)in_ECX + 0xe),(float)(int)(short)in_ECX[3],
               0,0,0x80,0,1,0,0,0,0,0,0x3f800000,0x3f800000,0,0,0);
  }
  return;
}
