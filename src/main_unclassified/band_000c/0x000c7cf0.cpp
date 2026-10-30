/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5567DDB0B471A0A7F664327F71A5DBF1CE160A3C52B4A445520C825C1D286F70
 * Entry: 0x000c7cf0, Ghidra index: 2456, label: FUN_000c7cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t PTR_FUN_0039f264;
void FUN_000c7cf0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int *piVar3;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_0039f264;
  puVar1 = unaff_ESI + 0xd;
  iVar2 = 5;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  unaff_ESI[0x16] = 0;
  *(undefined1 *)(unaff_ESI + 0x17) = 0;
  unaff_ESI[0x1d] = 0;
  puVar1 = unaff_ESI + 0x18;
  piVar3 = unaff_ESI + 0xd;
  iVar2 = 5;
  do {
    if (*piVar3 != 0) {
      FUN_0008f6e0();
      *piVar3 = 0;
    }
    *puVar1 = 0;
    piVar3 = piVar3 + 2;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  unaff_ESI[0x1f] = 0x3e800000;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x20] = 0;
  *(undefined1 *)(unaff_ESI + 0x21) = 1;
  return;
}
