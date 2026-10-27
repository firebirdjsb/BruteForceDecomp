# `0x002ebea0` Stack-Probe Pilot and Caller Forms

## Audit and provenance

The current audit is `855dad58ba9532134b0b7afa6d1a4ca44760bc12` (13,526 pass / 168 fail). Canonical source hashes for both pilots match that artifact (`0x002c2530`: `37ee14b5ffde3c239de2f6c34e217e0dfbe67f9e0677c8434a8e0f87fd251ec9`; `0x0033fa74`: `349dbb235e30e6eb07b39f0f02715f7c2c447819058c4ce10912aa3d64f7023f`). The local inspector authenticates the original XBE as `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721` and verifies each complete body below.

| Entry | Ordered body ranges | Original body SHA-256 |
| --- | --- | --- |
| `0x002ebea0` | `0x002EBEA0-0x002EBEE0` (65 bytes) | `B77AD187F6F3DB2A5AE4F8E214B023D7C62CE25A38CE769A993D2A8C81643760` |
| `0x002c2530` | `0x002C2530-0x002C25B9` (138 bytes); `0x002C25C0-0x002C2616` (87 bytes) | `768031773DC47284A6EB2AFD03A23E9C6DD05455E305C06FB7D633D05F890A8C` |
| `0x0033fa74` | `0x0033FA74-0x0033FBED` (378 bytes) | `1887D95A6576F22A26249023BE961860E83B5CE9A7F63577488431D44A2CAAE2` |
| `0x002cd2b0` | `0x002CD2B0-0x002CD4B7` (520 bytes) | `C028D0C3EFA30CA8C2F104DDD2BCDF9A132C1E73BB429530EF96A4334198421F` |
| `0x0033fa33` | `0x0033FA33-0x0033FA73` (65 bytes) | `8B93EB1016A0F75C9584316977DF8A5594F70A23854B51278D4F941549B7F803` |
| `0x00344af4` | `0x00344AF4-0x00344C2D` (314 bytes) | `AAFE8CFACC22E9111794B1D365E0C821608666637B11745B8BD112184EDA0844` |
| `0x0033f31d` | `0x0033F31D-0x0033F341` (37 bytes) | `A2AC32D1C4DDC6433DEC56A64106D101DC9DDEDDF9073DB75F3AFCB26B9840F2` |

## Helper contract from original instructions

`0x002ebea0` consumes the requested byte count in EAX. It does not round the request. For zero, RET removes the helper's return DWORD and restores the pre-CALL ESP, with no allocation. For nonzero sizes, it probes pages and adjusts ESP by the exact unsigned input EAX count while relocating the return address so execution resumes at the caller. If `S` is ESP immediately before `CALL`, then after return `ESP = S - inputEAX`. The returned buffer base is that post-call ESP.

The helper clobbers EAX and condition flags. In the large-size path it saves/restores ECX while probing; the small-size path does not change ECX. It does not return a buffer pointer in EAX. Callers recover the address from ESP. The helper's page-probe order and stack faults are observable behavior; a `malloc` substitute is not equivalent.

Key instructions:

```text
002ebea0: 85c0                   test eax, eax
002ebea4: 3d00100000             cmp eax, 0x1000
002ebeab: f7d8                   neg eax
002ebeaf: 83c004                 add eax, 4
002ebeb2: 8500                   test dword ptr [eax], eax
002ebeb4: 94                     xchg esp, eax
002ebeb5: 8b00                   mov eax, dword ptr [eax]
002ebeb7: 50                     push eax
002ebeb8: c3                     ret
002ebec4: 2d00100000             sub eax, 0x1000
002ebec9: 8501                   test dword ptr [ecx], eax
002ebed2: 2bc8                   sub ecx, eax
002ebed8: 8be1                   mov esp, ecx
002ebedc: 8b4004                 mov eax, dword ptr [eax + 4]
002ebedf: 50                     push eax
002ebee0: c3                     ret
```

## Pilot `0x002c2530`: signed-length indexed byte map

The audit diagnostic is an undeclared `stack0xffffffdc`; the current source hash matches the audit. The function's EBP is established at entry. After `sub esp,0x14` and saving EBX, ESI and EDI, the pre-call ESP is `EBP-0x20`.

The original code starts with implicit EAX as the guest input pointer. It aligns EAX down to 16 bytes, reads the low 12 bits of the first DWORD, adds one, multiplies by 16, and subtracts that span to form the local record base. It sign-extends the word at `[base+0x0c]` into EDI. Allocation size is then `(EDI + 3) & ~3` in 32-bit arithmetic; this rounded size is passed in EAX to `0x002ebea0`. After return, `EBX=ESP` (`0x002c2569`) is the scratch-map base. Thus `EBX = EBP - 0x20 - ((EDI+3)&~3)` for the observed positive-size path.

The code zeroes EDI bytes with `REP STOSD` and a byte tail, then uses low-12-bit record indices to access bytes relative to EBX. It calls `0x002cd2b0` with an explicit stack argument while passing hidden register inputs: EAX is the current record pointer, EDX is the aligned record base, ESI points to the 16-byte local float results, and EBX retains the scratch-map base. The callee saves/restores EBX (`0x002cd2b3` push, `0x002cd46c` pop), so the base survives. The byte map does not escape; the return path restores ESP with `lea esp,[ebp-0x20]`, restores saved registers, and returns the selected record pointer.

The length's valid sign/range and its relation to the 12-bit index range are not established. Negative values flow through 32-bit rounding and unsigned REP counts; no clamp or fixed 4,096-byte extent is justified. This caller should remain tied to the native ESP model until those input contracts are proven. A plain C VLA would lose the observed probe/fault behavior and is not justified by this audit alone.

## Pilot `0x0033fa74`: capacity fallback with copy-out

The audit diagnostic is the same undeclared stack marker; the canonical source hash matches. The function frame establishes EBP, allocates `0x14` bytes and saves EBX, ESI and EDI; before the alloca call, intervening calls clean their own arguments (`0x0033fa33` ends `ret 0x0c`; `0x00344af4` ends `ret 0x18`). The pre-call ESP is therefore `EBP-0x20`.

The payload length is read from the returned record. Allocation is conditional on `capacity < length`; on that path EAX becomes `(length+3)&~3`, then `CALL 0x002ebea0` runs. Immediately afterward `EDX=ESP` (`0x0033fb55`), giving the exact scratch base `EBP-0x20-roundedLength`. The function copies exactly `length` bytes from the returned source into this scratch area with `REP MOVSD` plus `REP MOVSB`; it saves the scratch base and length in frame locals, calls `0x0033f31d`, then copies those bytes into the owner's buffer. The scratch address remains local and does not escape. The epilogue resets ESP from EBP, releasing the allocation.

This provides a bounded local scratch/copy lifetime. An ordinary VLA would not preserve the original stack-probe fault behavior or exact guest ESP. The explicit stack-state model can represent this call **when the real caller frame state is supplied**: its EBP-relative pre-call ESP and rounded size are directly derived from instructions. This relative formula is not an absolute guest EBP value and does not expose one through the current ordinary C entry.

Neither pilot source nor its signature is changed in this batch. The current project has no connected guest-frame/memory bridge for these entries; substituting a host frame address or an uninitialized new pseudo-register would manufacture that missing state. Portable tests exercise the observed allocation-call boundaries with explicit synthetic EBP and lengths, not the complete callers, opaque helper behavior, copy-out or exception delivery. The unsigned capacity branch itself is instruction evidence, not a runtime-tested caller branch.

## Other callers by allocation form

The current tree contains 29 caller functions (34 call sites); 21 caller functions fail syntax and 8 pass. The source contexts classify into these forms without implying shared prototypes or runtime parity:

| Form | Caller functions | Audit status |
| --- | --- | --- |
| Fixed 0x7d0 request / 500-DWORD scratch | `0x0034031b`, `0x00341a1c` | Both pass; existing source comments already record the 2,000-byte scratch, not an ESP alias. |
| Conditional capacity fallback / transient copy | `0x0033fa74`, `0x0034018d`, `0x0034055e`, `0x00340734`, `0x00341540`, `0x003416c2` | All fail; `0x00340734` and `0x003416c2` also have another allocation site. Only `0x0033fa74` is analyzed above. |
| Repeated or nested dynamic regions | `0x002ceb10` (3 sites), `0x00340734` (2), `0x0034107d` (2), `0x003416c2` (2) | All fail; multiple lengths/aliases prevent treating the function as one scratch allocation. |
| Other single-site calls, mixed local/probe uses | Failing: `0x000dd8e0`, `0x000dddd0`, `0x001f3aa0`, `0x00266bf0`, `0x00269600`, `0x00288d40`, `0x002bf610`, `0x002c2530`, `0x002c41e0`, `0x002ee515`, `0x00340983`, `0x00340cf7`, `0x0035b680`; passing: `0x00165c80`, `0x001eee10`, `0x00232b70`, `0x002e9a00`, `0x002f1aaf`, `0x003309e9` | No shared allocation form inferred. Keep as per-caller evidence work. |

This is allocation-form triage only. It does not certify the 29 callers' register contracts, exception behavior, or compatibility with a host runtime.
