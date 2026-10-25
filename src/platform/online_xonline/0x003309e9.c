/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6AF7F4311776AFACE1349EF773097952ACFFE7830481B4418FEF72608B6E51C6
 * Entry: 0x003309e9, Ghidra index: 12369, label: FUN_003309e9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_certificate_layout.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040dd4c;
undefined4 FUN_003309e9(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char *unaff_EDI;
  char local_454 [360];
  undefined1 local_2ec [360];
  char local_184 [336];
  undefined4 uStackY_34;
  undefined1 *puStackY_30;
  undefined4 uStackY_2c;
  undefined *puStackY_28;
  char *pcStackY_24;
  char *pcStackY_20;
  
  FUN_002ebea0();
  if (XBE_CERTIFICATE_HEADER_00010180.TitleID != 0xfffe0000) {
    pcStackY_20 = (undefined1 *)0x330a23;
    uVar2 = FUN_003306de();
    if (uVar2 == 0) {
      uVar2 = 0x168;
      FUN_003305cb();
      unaff_EDI = local_454;
    }
    pcVar3 = unaff_EDI;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar3 - (int)(unaff_EDI + 1);
    /* XBE 0x00330A57: load guest counted-name pointer from import
     * slot 0x00386450, then read its 16-bit byte length at +0. */
    uint32_t guest_xbe_name = *(const uint32_t *)(uintptr_t)
        UINT32_C(0x00386450);
    if (uVar4 < *(const uint16_t *)(uintptr_t)guest_xbe_name) {
      pcStackY_20 = (undefined1 *)0x330a71;
      uVar2 = uVar4;
      iVar5 = __strnicmp();
      if (iVar5 == 0) {
        iVar5 = uVar4 + 1;
        pcStackY_20 = (char *)0x330a9a;
        /* XBE 0x00330A7C: reload import slot, then read byte length
         * at +0 and 32-bit buffer address at +4. Preserve wrap width. */
        uint32_t guest_xbe_name_copy = *(const uint32_t *)(uintptr_t)
            UINT32_C(0x00386450);
        uint32_t guest_name_bytes = *(const uint16_t *)(uintptr_t)
            guest_xbe_name_copy;
        uint32_t guest_name_buffer = *(const uint32_t *)(uintptr_t)
            (guest_xbe_name_copy + UINT32_C(4));
        _strncpy(local_184,
                 (char *)(uintptr_t)(guest_name_buffer + (uint32_t)iVar5),
                 guest_name_bytes - (uint32_t)iVar5);
        /* XBE 0x00330A9A: the third import-slot read is distinct. */
        uint32_t guest_xbe_name_tail = *(const uint32_t *)(uintptr_t)
            UINT32_C(0x00386450);
        local_184[(uint32_t)*(const uint16_t *)(uintptr_t)
            guest_xbe_name_tail - (uint32_t)iVar5] = '\0';
        pcStackY_20 = local_184;
        pcStackY_24 = "t:\\$u\\";
        puStackY_28 = &DAT_0040dd4c;
        puStackY_30 = local_2ec;
        uStackY_2c = 0x168;
        uStackY_34 = 0x330aca;
        iVar5 = FUN_0033df31();
        if (iVar5 < 0) {
          return 0;
        }
        uVar2 = 0;
        uVar4 = 3;
        pcStackY_24 = local_184;
        pcStackY_20 = (char *)XBE_CERTIFICATE_HEADER_00010180.Version;
        puStackY_28 = (undefined *)0x330aef;
        iVar5 = FUN_0033030f();
        if (-1 < iVar5) {
          pcStackY_20 = local_2ec;
          pcStackY_24 = (char *)0x330b13;
          XONLINES__XoUpdateLaunchNewImageInternal();
          uVar2 = uVar4;
        }
      }
    }
    if (uVar2 != 0) {
      do {
        cVar1 = *unaff_EDI;
        unaff_EDI = unaff_EDI + 1;
      } while (cVar1 != '\0');
      IoDeleteSymbolicLink();
      pcStackY_20 = (char *)0x330b49;
      IoCreateSymbolicLink();
    }
  }
  return 0;
}
