/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D57F187EFB51306B0CCADFB39118E03C640B1C6751289D810A1F19E179374530
 * Entry: 0x000ba4e0, Ghidra index: 2259, label: FUN_000ba4e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ba4e0(void)

{
  byte *in_ECX;
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = (uint)*in_ECX * unaff_EDI;
  iVar2 = (uint)in_ECX[1] * unaff_EDI;
  *in_ECX = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
            (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
  iVar1 = (uint)in_ECX[2] * unaff_EDI;
  in_ECX[1] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
              (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
  iVar2 = (uint)in_ECX[3] * unaff_EDI;
  in_ECX[2] = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
              (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
  in_ECX[3] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
              (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
  return;
}
