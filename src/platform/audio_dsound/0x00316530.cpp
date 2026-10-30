/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B8679937D2C83D86AD28DE0A291C328C47DFA31E96FF0739B5CFBDB7939CDAA
 * Entry: 0x00316530, Ghidra index: 12141, label: FUN_00316530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe801000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00316530(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint32_t saved_esi;
  uint32_t vector_level_word;
  uint32_t vector_word;
  uint32_t shutdown_word_address;
  undefined4 *puStack_1c;
  uint uStack_18;
  
  /* 0x00316534: MOV ESI,ECX retains the unresolved incoming guest
   * DWORD across calls; ESI is unchanged until its epilogue restore.
   * 0x00316530 PUSH ECX also supplies the scratch DWORD later addressed
   * by LEA EAX,[ESP+0x10] at 0x00316598. Do not initialize it to zero.
   * ABI_UNVERIFIED: entry ECX, import cleanup and guest-stack mapping. */
  saved_esi = (uint32_t)in_ECX;
  vector_level_word = saved_esi;
  uStack_18 = 0x316541;
  iVar3 = FUN_0031c00a();
  if (-1 < iVar3) {
    uStack_18 = 0x7ff;
    puStack_1c = (undefined4 *)0x31655b;
    iVar3 = FUN_0031aab0();
    if (-1 < iVar3) {
      /* 0x0031656b..0x00316578: PUSH ESI, PUSH 0x316344,
       * LEA/PUSH ESI+0x700, CALL EDI (loaded from [0x38637c]).
       * All three actual four-byte argument words reach the call. */
      KeInitializeDpc(saved_esi + UINT32_C(0x700),
                      UINT32_C(0x00316344),saved_esi);
      /* 0x0031657a..0x00316583: PUSH 0, PUSH ESI+0x720. */
      KeInitializeTimerEx(saved_esi + UINT32_C(0x720),UINT32_C(0));
      /* 0x00316589..0x00316596: PUSH ESI, PUSH 0x3161c4,
       * PUSH ESI+0x748; EDI still holds the same import target. */
      KeInitializeDpc(saved_esi + UINT32_C(0x748),
                      UINT32_C(0x003161c4),saved_esi);
      /* 0x00316598..0x0031659f: PUSH address of the scratch DWORD,
       * PUSH 5. Retain the EAX result separately from that DWORD. */
      vector_word = HalGetInterruptVector(UINT32_C(5),&vector_level_word);
      /* 0x003165a5..0x003165ba push 1,0,scratch,EAX,ESI,
       * 0x316524,0x32fe98. The final push is the first call word.
       * Raw guest constants are not native callback/global bindings. */
      KeInitializeInterrupt(UINT32_C(0x0032fe98),UINT32_C(0x00316524),
                            saved_esi,vector_word,vector_level_word,
                            UINT32_C(0),UINT32_C(1));
      /* 0x003165c0 pushes the same guest DWORD held in EDI. */
      cVar1 = KeConnectInterrupt(UINT32_C(0x0032fe98));
      if (cVar1 == '\0') {
        iVar3 = -0x7fffbffb;
      }
      if (-1 < iVar3) {
        uStack_18 = 1;
        _DAT_fe801000 = 0xffffffff;
        puStack_1c = (undefined4 *)0x3165e7;
        FUN_0031b8ca();
        /* 0x003165e7..0x003165f6: LEA EAX,[ESI+0x764], PUSH 1,
         * PUSH EAX, then MOV DWORD [EAX],0x3161d0 before the call.
         * Guest addition wraps at 32 bits; this cast does not map memory. */
        shutdown_word_address = saved_esi + UINT32_C(0x764);
        *(uint32_t *)(uintptr_t)shutdown_word_address = UINT32_C(0x003161d0);
        HalRegisterShutdownNotification(shutdown_word_address,UINT32_C(1));
        uStack_18 = 0;
        puStack_1c = (undefined4 *)0x316605;
        iVar3 = FUN_00316110();
      }
    }
  }
  uVar4 = 0;
  do {
    if (iVar3 < 0) {
      return iVar3;
    }
    puStack_1c = (undefined4 *)0x316615;
    uStack_18 = uVar4;
    iVar3 = DSOUND__CMcpxAPU_SetMixBinHeadroom();
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x20);
  if (-1 < iVar3) {
    uVar4 = *(uint *)(*(int *)(in_ECX + 0xc) + 8);
    if ((int)uVar4 < 0) {
      *(undefined1 *)(in_ECX + 0x68) = 0;
    }
    else {
      if (((uVar4 & 0xffff) == 2) || ((uVar4 & 0x10000) != 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)(in_ECX + 0x68) = uVar2;
    }
  }
  return iVar3;
}
