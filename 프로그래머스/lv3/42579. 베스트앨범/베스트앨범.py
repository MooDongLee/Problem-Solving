def solution(genres, plays):
    answer = []
    best = {}
    for i, genre in enumerate(genres):
        if genre in best.keys():
            best[genre][0] += plays[i]
            best[genre][1].append((i, plays[i]))
        else:
            best[genre] = [plays[i], [(i, plays[i])]]
    
    best = sorted(best.values(), reverse = True)
    for song in best:
        answer.extend([i[0] for i in sorted(song[1], key=lambda x: (-x[1],x[0]))][:min(2, len(song))])
    return answer