/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57B9BA6ACD7ADB245CEC707451DF78A7701C810493019369FD28DF3D53B9EA63
 * Entry: 0x000fda50, Ghidra index: 3172, label: FUN_000fda50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D direct/indirect guest32 allocator boundary:
 * one source size DWORD and 32-bit EAX result. Guest-memory ABI unverified. */
#include "bf_002ea01d_allocator_guest32.h"
void FUN_000fda50(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *unaff_ESI;
    puVar1[1] = unaff_ESI[1];
    puVar1[2] = unaff_ESI[2];
    puVar1[3] = unaff_ESI[3];
    puVar1[4] = unaff_ESI[4];
    puVar1[5] = unaff_ESI[5];
    puVar1[6] = unaff_ESI[6];
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(unaff_ESI + 7);
    *(undefined1 *)((int)puVar1 + 0x1d) = *(undefined1 *)((int)unaff_ESI + 0x1d);
    puVar1[8] = unaff_ESI[8];
    *unaff_EDI = puVar1;
    return;
  }
  *unaff_EDI = 0;
  return;
}
