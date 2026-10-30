/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EA795173DCE706CAA9B6D8DDFCCC43D2B76600F5A9960FDDEB71FF9F197208A
 * Entry: 0x000b6cc0, Ghidra index: 2195, label: FUN_000b6cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original-address 0x000BA5B0 constructor draft accepts one 32-bit
 * word-pointer argument. Xbox guest object layout/ABI remain UNVERIFIED. */
extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039fd60;
void FUN_000b6cc0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_0039fd60;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x33] = 0;
  unaff_ESI[0x34] = 0;
  unaff_ESI[0x35] = 0;
  unaff_ESI[0x36] = 0;
  unaff_ESI[0x1b] = 0x43160000;
  unaff_ESI[0xc] = 0x43160000;
  unaff_ESI[0xd] = 0x43160000;
  unaff_ESI[0xe] = 0x43160000;
  *(undefined4 *)((int)unaff_ESI + 0x51) = 0xffffffff;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x27] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x13] = 0;
  *(undefined1 *)(unaff_ESI + 0x14) = 0;
  unaff_ESI[0x1a] = 0x3e800000;
  unaff_ESI[0x18] = 0x3f800000;
  unaff_ESI[0x28] = 0x40800000;
  unaff_ESI[0x1e] = 0x41500000;
  unaff_ESI[0x25] = 0x42800000;
  unaff_ESI[0x26] = 0x42800000;
  unaff_ESI[0x29] = 0x42000000;
  unaff_ESI[0x2a] = 0x41000000;
  unaff_ESI[0x22] = 0x41100000;
  unaff_ESI[0x23] = 0x42280000;
  unaff_ESI[0x24] = 0x41200000;
  unaff_ESI[0x20] = 0x43960000;
  unaff_ESI[0x21] = 0x43790000;
  unaff_ESI[0x30] = 0x424c0000;
  unaff_ESI[0x31] = 0x40000000;
  unaff_ESI[0x1c] = 0x41000000;
  unaff_ESI[0x1d] = 0x41400000;
  unaff_ESI[0x2b] = 0x3f800000;
  unaff_ESI[0x2c] = 0x3e99999a;
  unaff_ESI[0x2d] = 0x40a00000;
  unaff_ESI[0x2e] = 0x3f000000;
  unaff_ESI[0x2f] = 0x3f800000;
  unaff_ESI[0x11] = 0xbf800000;
  *(undefined4 *)((int)unaff_ESI + 0x55) = 0xff2f2b60;
  *(undefined4 *)((int)unaff_ESI + 0x59) = 0xff3caae6;
  return;
}
