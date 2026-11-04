"""Separate, one-entry continuation admission for the canonical historical gate.

Contract: restore_to_historical before the unchanged historical
literal gate; reapply_to_diagnostic after that gate's original preimage checks.
Never merge this map into the five earlier heap-call/header-only overlays.
"""
import hashlib
import json

ENTRY = '0x002e9c30'
MANIFEST = 'metadata/cpp_20261104_002e9c30_continuation.json'
LEDGER = 'metadata/cpp_20261101_remaining_literal_repairs.json'
LEDGER_SHA = 'e8215f264ed96b97af09c41f1c9f2e8fc26e41437225efe6cfbcce53e0d54448'
MANIFEST_SHA = '347d483db4e571d6e45040c4aab25ade5ff13870408bebfc023fb9f79ebf6694'
OVERLAYS_SHA = 'd3d3639963529e95c5cdf944394753d5de56fd3c208ac8d69bae575a0faaa7d4'
CASE_SHA = 'b0015ad2dc5c5788b0bc0382cccb25d0f0bb615da7980e5d4df6acad76d3cdad'
NEGATIVE_SHA = '24a73f789e94484709b315d31c7d18342a5ac16678daf4981713bcff85284ba0'
COUNTS = {'total':209,'complete':0,'partial':209,'values':469}


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def serialized_sha(data):
    return sha(json.dumps(data,sort_keys=True,separators=(',',':')).encode())


def need(condition, message):
    if not condition: raise ValueError(message)


def validate(overlays):
    if not overlays: return
    need(set(overlays)=={ENTRY} and serialized_sha(overlays)==OVERLAYS_SHA,'continuation overlay identity changed')


def load(root):
    raw=(root/MANIFEST).read_bytes()
    need(sha(raw)==MANIFEST_SHA,'continuation manifest changed')
    overlays={ENTRY:json.loads(raw)}
    validate(overlays)
    ledger=(root/LEDGER).read_bytes()
    need(sha(ledger)==LEDGER_SHA,'historical ledger changed')
    case=json.loads(ledger)['cases'][188]
    need(serialized_sha(case)==CASE_SHA,'historical case changed')
    return overlays


def validate_batch(root, manifest, approved_counts, overlays, *other_channels):
    if not overlays: return
    validate(overlays)
    need(approved_counts==COUNTS,'wrong ledger counts')
    raw=(root/LEDGER).read_bytes()
    need(sha(raw)==LEDGER_SHA and json.loads(raw)==manifest,'historical ledger changed')
    need(all(not set(overlays).intersection(channel or {}) for channel in other_channels),'evidence classes overlap')


def validate_case(case, overlays):
    validate(overlays)
    need(case['entry']==ENTRY and serialized_sha(case)==CASE_SHA,'historical case identity changed')
    return overlays[ENTRY]


def git_blob(text):
    raw=text.encode()
    return hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest()


def restore_to_historical(case, text, overlays):
    validate(overlays)
    if case['entry'] not in overlays: return text
    d=validate_case(case,overlays)
    need(sha(text.encode())==d['source_after_sha256'],'continuation after hash changed')
    for edit in reversed(d['replacements']):
        need(edit['count']==text.count(edit['after'])==1,'continuation restore occurrence changed')
        text=text.replace(edit['after'],edit['before'],1)
    need(sha(text.encode())==d['source_before_sha256']==case['result_source_sha256'] and
         git_blob(text)==d['preimage_git_blob'],'historical result not restored exactly')
    return text


def reapply_to_diagnostic(case, text, overlays):
    validate(overlays)
    if case['entry'] not in overlays: return text
    d=validate_case(case,overlays)
    need(sha(text.encode())==case['source_sha256'] and git_blob(text)==case['source_git_blob'],
         'oldest historical preimage changed')
    for edit in d['replacements']:
        need(edit['count']==text.count(edit['before'])==1,'continuation diagnostic occurrence changed')
        text=text.replace(edit['before'],edit['after'],1)
    need(sha(text.encode())==NEGATIVE_SHA,'diagnostic composition changed')
    return text
